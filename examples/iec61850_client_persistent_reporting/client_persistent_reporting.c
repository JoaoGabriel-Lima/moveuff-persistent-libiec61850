/*
 *  client_persistent_reporting.c
 *
 *  Cliente IEC 61850 com reporting persistente e reconexão automática
 *  - Conecta ao servidor server_example_basic_io
 *  - Usa reporting (push) para receber dados automaticamente
 *  - Implementa reconexão automática em caso de falha
 *  - Salva dados recebidos em SQLite
 */

#include "iec61850_client.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "data_logger.h"

#define SERVER_ADDRESS "localhost"
#define SERVER_PORT 102

/* Estado da conexão */
static volatile bool running = true;
static volatile bool connected = false;
static IedConnection connection = NULL;
static ClientReportControlBlock activeRcb = NULL;

/* Configurações de reconexão */
#define MIN_RETRY_DELAY 5
#define MAX_RETRY_DELAY 30
static int retryDelay = MIN_RETRY_DELAY;
static int retryCount = 0;

/* Handler de sinal para encerramento gracioso */
void signalHandler(int signalId) {
    printf("\n\nSinal %d recebido. Encerrando cliente...\n", signalId);
    running = false;
}

/* Callback chamado quando um report é recebido */
void reportCallbackFunction(void* parameter, ClientReport report)
{
    printf("\n🔔 ==== REPORT RECEBIDO ==== 🔔\n");
    printf("RCB: %s\n", ClientReport_getRcbReference(report));
    printf("RptID: %s\n", ClientReport_getRptId(report));
    
    if (ClientReport_hasTimestamp(report)) {
        uint64_t timestamp = ClientReport_getTimestamp(report);
        time_t unixTime = timestamp / 1000;
        char timeBuf[30];
        ctime_r(&unixTime, timeBuf);
        printf("Timestamp: %s", timeBuf);
    }
    
    MmsValue* dataSetValues = ClientReport_getDataSetValues(report);
    
    /* Obter timestamp do report */
    uint64_t reportTimestamp = 0;
    if (ClientReport_hasTimestamp(report)) {
        reportTimestamp = ClientReport_getTimestamp(report);
    }
    
    if (dataSetValues) {
        int dataSetSize = MmsValue_getArraySize(dataSetValues);
        printf("Data set size: %d\n", dataSetSize);
        
        for (int i = 0; i < dataSetSize; i++) {
            ReasonForInclusion reason = ClientReport_getReasonForInclusion(report, i);
            
            if (reason != IEC61850_REASON_NOT_INCLUDED) {
                MmsValue* value = MmsValue_getElement(dataSetValues, i);
                
                if (value) {
                    char refBuf[130];
                    const char* dataRef = ClientReport_getDataReference(report, i);
                    
                    if (dataRef) {
                        strncpy(refBuf, dataRef, 129);
                        refBuf[129] = 0;
                    } else {
                        sprintf(refBuf, "Entry[%d]", i);
                    }
                    
                    char valBuf[500];
                    MmsValue_printToBuffer(value, valBuf, 500);
                    
                    printf("  [%d] %s = %s (reason: %d)\n", i, refBuf, valBuf, reason);
                    
                    /* Salvar no banco de dados - todos os valores float como analógicos */
                    if (MmsValue_getType(value) == MMS_FLOAT) {
                        float floatValue = MmsValue_toFloat(value);
                        DataLogger_logAnalogValue(refBuf, floatValue, reportTimestamp);
                    } else if (MmsValue_getType(value) == MMS_STRUCTURE) {
                        /* Pode ser um valor analógico com magnitude */
                        MmsValue* mag = MmsValue_getElement(value, 0);
                        if (mag && MmsValue_getType(mag) == MMS_FLOAT) {
                            float floatValue = MmsValue_toFloat(mag);
                            DataLogger_logAnalogValue(refBuf, floatValue, reportTimestamp);
                        } else if (mag && MmsValue_getType(mag) == MMS_BOOLEAN) {
                            /* Valor digital */
                            bool boolValue = MmsValue_getBoolean(mag);
                            DataLogger_logDigitalValue(refBuf, boolValue, reportTimestamp);
                        }
                    } else if (MmsValue_getType(value) == MMS_BOOLEAN) {
                        bool boolValue = MmsValue_getBoolean(value);
                        DataLogger_logDigitalValue(refBuf, boolValue, reportTimestamp);
                    }
                }
            }
        }
    }
    
    printf("=============================\n\n");
}

/* Configurar reporting */
static bool setupReporting(void)
{
    IedClientError error;
    
    printf("\n=== Configurando Reporting ===\n");
    
    /* Obter RCB */
    activeRcb = IedConnection_getRCBValues(
        connection, &error, 
        "simpleIOGenericIO/LLN0.RP.EventsRCB01", 
        NULL
    );
    
    if (activeRcb == NULL) {
        printf("✗ Erro ao obter RCB: %s\n", IedClientError_toString(error));
        return false;
    }
    
    printf("✓ RCB obtido com sucesso\n");
    
    /* Configurar parâmetros do report para monitorar o dataset Measurements */
    ClientReportControlBlock_setResv(activeRcb, true);
    ClientReportControlBlock_setTrgOps(activeRcb, TRG_OPT_DATA_CHANGED | TRG_OPT_QUALITY_CHANGED | TRG_OPT_GI);
    ClientReportControlBlock_setDataSetReference(activeRcb, "simpleIOGenericIO/LLN0$Measurements"); // Dataset com medições analógicas
    ClientReportControlBlock_setRptEna(activeRcb, true);
    ClientReportControlBlock_setGI(activeRcb, true);
    ClientReportControlBlock_setIntgPd(activeRcb, 5000); // 5 segundos
    
    /* Instalar callback para reports */
    IedConnection_installReportHandler(connection, "simpleIOGenericIO/LLN0.RP.EventsRCB01", 
        ClientReportControlBlock_getRptId(activeRcb), reportCallbackFunction, NULL);
    
    /* Aplicar configurações */
    IedConnection_setRCBValues(connection, &error, activeRcb, 
        RCB_ELEMENT_RESV | RCB_ELEMENT_DATSET | RCB_ELEMENT_TRG_OPS | 
        RCB_ELEMENT_INTG_PD | RCB_ELEMENT_RPT_ENA | RCB_ELEMENT_GI, true);
    
    if (error != IED_ERROR_OK) {
        printf("✗ Erro ao configurar RCB: %s\n", IedClientError_toString(error));
        ClientReportControlBlock_destroy(activeRcb);
        activeRcb = NULL;
        return false;
    }
    
    printf("✓ Reporting configurado e habilitado\n");
    printf("  - Dataset: Measurements (valores analógicos)\n");
    printf("  - Trigger: DATA_CHANGED, QUALITY_CHANGED, GI\n");
    printf("  - Integrity period: 5s\n");
    printf("  - RCB permanecerá ativo durante a conexão\n");
    printf("==============================\n\n");
    
    /* NÃO destruir o RCB aqui - ele precisa permanecer ativo! */
    
    return true;
}

/* Desabilitar reporting antes de desconectar */
static void disableReporting(void)
{
    if (!connected || connection == NULL || activeRcb == NULL) return;
    
    printf("\nDesabilitando reporting...\n");
    
    IedClientError error;
    ClientReportControlBlock_setRptEna(activeRcb, false);
    IedConnection_setRCBValues(connection, &error, activeRcb, RCB_ELEMENT_RPT_ENA, true);
    
    if (error != IED_ERROR_OK) {
        printf("✗ Erro ao desabilitar reporting: %s\n", IedClientError_toString(error));
    } else {
        printf("✓ Reporting desabilitado\n");
    }
    
    /* Agora sim podemos destruir o RCB */
    ClientReportControlBlock_destroy(activeRcb);
    activeRcb = NULL;
}

/* Tentar conectar ao servidor */
static bool tryConnect(void)
{
    IedClientError error;
    
    printf("Tentando conectar em %s:%d...\n", SERVER_ADDRESS, SERVER_PORT);
    
    /* Desconectar se já estiver conectado */
    if (connected && connection) {
        disableReporting();
        IedConnection_close(connection);
        connected = false;
    }
    
    /* Criar nova conexão se necessário */
    if (connection == NULL) {
        connection = IedConnection_create();
    }
    
    /* Tentar conectar */
    IedConnection_connect(connection, &error, SERVER_ADDRESS, SERVER_PORT);
    
    if (error != IED_ERROR_OK) {
        printf("✗ Falha na conexão: %s\n", IedClientError_toString(error));
        return false;
    }
    
    printf("✓ Conectado com sucesso!\n");
    connected = true;
    
    /* Configurar reporting */
    if (!setupReporting()) {
        printf("✗ Falha ao configurar reporting\n");
        IedConnection_close(connection);
        connected = false;
        return false;
    }
    
    /* Resetar contador de tentativas em caso de sucesso */
    retryCount = 0;
    retryDelay = MIN_RETRY_DELAY;
    
    return true;
}

/* Thread de monitoramento da conexão */
static void* connectionMonitor(void* parameter)
{
    while (running) {
        if (!connected) {
            /* Tentar reconectar */
            if (!tryConnect()) {
                retryCount++;
                
                /* Backoff exponencial, mas com limite */
                if (retryCount > 1) {
                    retryDelay = retryDelay * 2;
                    if (retryDelay > MAX_RETRY_DELAY) {
                        retryDelay = MAX_RETRY_DELAY;
                    }
                }
                
                printf("\nTentativa de reconexão em %d segundos... (tentativa #%d)\n", 
                       retryDelay, retryCount);
                
                Thread_sleep(retryDelay * 1000);
                continue;
            }
        } else {
            /* Verificar se a conexão ainda está ativa */
            IedConnectionState state = IedConnection_getState(connection);
            
            if (state != IED_STATE_CONNECTED) {
                printf("\n✗ Conexão perdida (estado: %d)\n", state);
                connected = false;
                disableReporting();
                
                printf("Tentando reconectar...\n");
            }
        }
        
        Thread_sleep(1000); /* Verificar a cada segundo */
    }
    
    return NULL;
}

int main(int argc, char** argv)
{
    printf("=== Cliente IEC 61850 com Reporting Persistente ===\n");
    printf("Servidor: %s:%d\n", SERVER_ADDRESS, SERVER_PORT);
    printf("==================================================\n\n");
    
    /* Instalar handler de sinais */
    signal(SIGINT, signalHandler);
    signal(SIGTERM, signalHandler);
    
    /* Inicializar data logger */
    if (DataLogger_init("./client_data.db") != 0) {
        printf("✗ Erro ao inicializar data logger\n");
        return 1;
    }
    printf("✓ Data logger inicializado\n\n");
    
    /* Criar conexão */
    connection = IedConnection_create();
    
    /* Tentar conexão inicial */
    if (!tryConnect()) {
        printf("Falha na conexão inicial. Iniciando modo de reconexão...\n");
    }
    
    printf("\nCliente rodando. Pressione Ctrl+C para sair.\n");
    printf("Reports serão recebidos automaticamente e salvos no banco.\n\n");
    
    /* Iniciar thread de monitoramento */
    Thread monitorThread = Thread_create((ThreadExecutionFunction)connectionMonitor, NULL, true);
    Thread_start(monitorThread);
    
    /* Loop principal - apenas aguardar */
    while (running) {
        Thread_sleep(100);
    }
    
    /* Cleanup */
    printf("\nEncerrando cliente...\n");
    
    if (connected) {
        disableReporting();
        IedConnection_close(connection);
    }
    
    if (connection) {
        IedConnection_destroy(connection);
    }
    
    DataLogger_cleanup();
    
    printf("✓ Cliente encerrado\n");
    
    return 0;
}
