#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> // Para dup2
#include <fcntl.h>  // Para open

// --- ADICIONADO PARA O RELÉ ---
#include <wiringPi.h>
#define RELAY_PIN 8  // wPi 8 na Orange Pi Zero 2W pin fisico 15
// ------------------------------

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

/* * MACRO PARA LOG PERSONALIZADO
 * Redireciona nossos prints para stderr para fugir do bloqueio do stdout 
 */
#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

/* --- FUNÇÃO DE PISCAR --- */
void sinalizar_partida() {
    // Blink rápido (100ms) para indicar que a conexão está fidelizada e o servidor está pronto
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_PIN, HIGH);
        Thread_sleep(100);          
        digitalWrite(RELAY_PIN, LOW);
        Thread_sleep(100);
    }
}

/* Handler de Conexão */
static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
    const char* clientIP = ClientConnection_getPeerAddress(connection);
    
    if (connected) {
        activeConnections++;
        if (activeConnections == 1) {
            LOG_PRINT("\n==================================================\n");
            LOG_PRINT("[SISTEMA] >>> ELIPSE/CLIENTE CONECTADO <<<\n");
            LOG_PRINT("   >> IP: %s\n", clientIP);
            LOG_PRINT("==================================================\n");
        }
    } else {
        if (activeConnections > 0) activeConnections--;
        if (activeConnections == 0) {
            LOG_PRINT("\n[SISTEMA] Cliente Desconectado (%s)\n\n", clientIP);
        }
    }
}

/* Handler para o Select (SBO) - Validando B1STG_XSWI1 */
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{
    if (parameter == IEDMODEL_B1STG_XSWI1_Pos || 
        parameter == IEDMODEL_B1STG_XSWI1_BlkOpn || 
        parameter == IEDMODEL_B1STG_XSWI1_BlkCls) 
        return CONTROL_ACCEPTED;
        
    return CONTROL_OBJECT_UNDEFINED;
} 

/* Handler principal: Executa o comando de hardware e atualiza o modelo IEC 61850 */
static ControlHandlerResult 
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) 
{
    uint64_t timestamp = Hal_getTimeInMs();
    int ctlNum = ControlAction_getCtlNum(action);
    ClientConnection clientCon = ControlAction_getClientConnection(action);
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";

    if (parameter == IEDMODEL_B1STG_XSWI1_Pos || 
        parameter == IEDMODEL_B1STG_XSWI1_BlkOpn || 
        parameter == IEDMODEL_B1STG_XSWI1_BlkCls) {
            
        bool state = MmsValue_getBoolean(value);
        digitalWrite(RELAY_PIN, state ? HIGH : LOW); 
        
        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s\n", clientIP);
        
        if (parameter == IEDMODEL_B1STG_XSWI1_Pos) {
            LOG_PRINT("   >> Acao:     XSWI1 Pos %s (%d)\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO", state ? 1 : 0);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_stVal, value);
        } 
        else if (parameter == IEDMODEL_B1STG_XSWI1_BlkOpn) {
            LOG_PRINT("   >> Acao:     XSWI1 BlkOpn %s (%d)\n", state ? "LIGADO/ATIVO" : "DESLIGADO/INATIVO", state ? 1 : 0);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn_stVal, value);
        }
        else if (parameter == IEDMODEL_B1STG_XSWI1_BlkCls) {
            LOG_PRINT("   >> Acao:     XSWI1 BlkCls %s (%d)\n", state ? "LIGADO/ATIVO" : "DESLIGADO/INATIVO", state ? 1 : 0);
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls_stVal, value);
        }

        LOG_PRINT("   >> CtlNum:   %d\n", ctlNum);
        LOG_PRINT("   >> Hardware: Pino %d %s\n", RELAY_PIN, state ? "HIGH" : "LOW");
        LOG_PRINT("--------------------------------------------------\n");
    }
    else {
        return CONTROL_RESULT_FAILED;
    }

    return CONTROL_RESULT_OK;
}

/* Permite que o cliente (Elipse) altere o modelo de controle via rede */
static MmsDataAccessError
writeAccessHandler (DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter)
{
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);

    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL))
    {
        if (dataAttribute == IEDMODEL_B1STG_XSWI1_Pos_ctlModel)
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1STG_XSWI1_BlkOpn_ctlModel)
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1STG_XSWI1_BlkCls_ctlModel)
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls, ctlModelVal);
            
        return DATA_ACCESS_ERROR_SUCCESS;
    }
    else {
        return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
    }
}

int
main(int argc, char** argv)
{
   // 1. SETUP HARDWARE (Usando a numeração Física da Placa)
    if (wiringPiSetupPhys() == -1) { 
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW); 

    /* Desvia STDOUT para /dev/null para silenciar logs internos da biblioteca */
    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 

    sinalizar_partida();

    iedServer = IedServer_create(&iedModel);
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    /* Vinculação dos Handlers aos nós do modelo estático (XSWI1) */
    
    // Handlers para Pos
    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, 
            checkHandler, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1STG_XSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    // Handlers para BlkOpn
    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_BlkOpn);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn, 
            checkHandler, IEDMODEL_B1STG_XSWI1_BlkOpn);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1STG_XSWI1_BlkOpn_ctlModel, writeAccessHandler, NULL);

    // Handlers para BlkCls
    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_BlkCls);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls, 
            checkHandler, IEDMODEL_B1STG_XSWI1_BlkCls);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1STG_XSWI1_BlkCls_ctlModel, writeAccessHandler, NULL);
    
    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao iniciar servidor!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_PRINT("\n--- SERVIDOR IEC 61850 (B1STG) ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Relé na Porta %d)\n", RELAY_PIN);
    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    /* Shutdown limpo do servidor e hardware */
    LOG_PRINT("\n[SISTEMA] Encerrando servidor...\n");
    digitalWrite(RELAY_PIN, LOW);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    close(dev_null);
    return 0;
}