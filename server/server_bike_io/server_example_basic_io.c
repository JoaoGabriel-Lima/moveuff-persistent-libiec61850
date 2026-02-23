#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> // Para dup2
#include <fcntl.h>  // Para open

// --- ADICIONADO PARA OS RELÉS ---
#include <wiringPi.h>
#define RELAY_LANT_PIN 2  // wPi 7 = Pino Físico (Lanterna)
#define RELAY_MOT_PIN  3  // wPi 11 = Pino Físico (Motor)
#define RELAY_ALM_PIN  4 // wPi 13 = Pino Físico (Alarme)
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
    // Blink rápido (100ms) simultâneo para indicar que a conexão está fidelizada e o servidor está pronto
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_LANT_PIN, HIGH);
        digitalWrite(RELAY_MOT_PIN, HIGH);
        digitalWrite(RELAY_ALM_PIN, HIGH);
        Thread_sleep(100);          
        digitalWrite(RELAY_LANT_PIN, LOW);
        digitalWrite(RELAY_MOT_PIN, LOW);
        digitalWrite(RELAY_ALM_PIN, LOW);
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

/* Handler para o Select (SBO) - Validando LANT, MOT e ALM */
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{ 
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) 
        return CONTROL_ACCEPTED;
    return CONTROL_OBJECT_UNDEFINED;
} 

/* Handler para o Operate - Atuando em LANT, MOT e ALM */
static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) 
{
    uint64_t timestamp = Hal_getTimeInMs();
    
    int ctlNum = ControlAction_getCtlNum(action);
    ClientConnection clientCon = ControlAction_getClientConnection(action);
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";

    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
        
        bool state = MmsValue_getBoolean(value);
        
        // Usando LOG_PRINT (stderr) ao invés de printf
        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s\n", clientIP);
        
        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) {
            digitalWrite(RELAY_LANT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     LANTXSWI1 (Lanterna) %s (%d)\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO", state ? 1 : 0);
            LOG_PRINT("   >> Hardware: Pino %d %s\n", RELAY_LANT_PIN, state ? "HIGH" : "LOW");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);
        } 
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
            digitalWrite(RELAY_MOT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     MOTXSWI1 (Motor) %s (%d)\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO", state ? 1 : 0);
            LOG_PRINT("   >> Hardware: Pino %d %s\n", RELAY_MOT_PIN, state ? "HIGH" : "LOW");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
            digitalWrite(RELAY_ALM_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     ALMXSWI1 (Alarme) %s (%d)\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO", state ? 1 : 0);
            LOG_PRINT("   >> Hardware: Pino %d %s\n", RELAY_ALM_PIN, state ? "HIGH" : "LOW");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, value);
        }

        LOG_PRINT("   >> CtlNum:   %d\n", ctlNum);
        LOG_PRINT("--------------------------------------------------\n");
    }
    else {
        return CONTROL_RESULT_FAILED;
    }

    return CONTROL_RESULT_OK;
}

/* Handler de Escrita (para mudar o ctlModel se necessário) */
static MmsDataAccessError
writeAccessHandler (DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter)
{
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);

    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL))
    {
        if (dataAttribute == IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel) {
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, ctlModelVal);
        } 
        else if (dataAttribute == IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel) {
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, ctlModelVal);
        }
        else if (dataAttribute == IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel) {
            IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, ctlModelVal);
        }
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
    if (wiringPiSetup() == -1) { 
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, LOW); 
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, LOW); 
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, LOW); 

    // ---------------------------------------------------------
    // BLOQUEIO TOTAL DE STDOUT (Logs que poluem o terminal)
    // ---------------------------------------------------------
     int dev_null = open("/dev/null", O_WRONLY);
    // Redireciona stdout (printf comum) para o lixo
     if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 
    // NÃO restauramos o stdout. A biblioteca falará sozinha no vazio para sempre.
    // ---------------------------------------------------------

    sinalizar_partida();
    
    iedServer = IedServer_create(&iedModel);
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    // Configura os Handlers para LANTXSWI1
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, 
            checkHandler, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    // Configura os Handlers para MOTXSWI1
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, 
            checkHandler, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    // Configura os Handlers para ALMXSWI1
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, 
            checkHandler, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel, writeAccessHandler, NULL);


    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao iniciar servidor!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    // Logs de status usando stderr para aparecerem na tela
    LOG_PRINT("\n--- SERVIDOR IEC 61850 (BIKE - LANT/MOT/ALM) ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Lanterna: P%d | Motor: P%d | Alarme: P%d)\n", RELAY_LANT_PIN, RELAY_MOT_PIN, RELAY_ALM_PIN);
    LOG_PRINT("[STATUS] Rodando na porta %d.\n", tcpPort);
    LOG_PRINT("[STATUS] Aguardando conexao do Elipse...\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    LOG_PRINT("\n[SISTEMA] Encerrando servidor...\n");
    digitalWrite(RELAY_LANT_PIN, LOW);
    digitalWrite(RELAY_MOT_PIN, LOW);
    digitalWrite(RELAY_ALM_PIN, LOW);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    close(dev_null);
    return 0;
}