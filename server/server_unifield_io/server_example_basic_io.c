#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 

#include <wiringPi.h>
#define RELAY_LANT_PIN 2  // wPi 2 = Pino Físico (Lanterna)
#define RELAY_MOT_PIN  3  // wPi 3 = Pino Físico (Motor)
#define RELAY_ALM_PIN  4  // wPi 4 = Pino Físico (Alarme)
#define RELAY_CEL_PIN  5  // wPi 5 = Pino Físico (Célula Hidro)
#define RELAY_TNK_PIN  6  // wPi 6 = Pino Físico (Tanque)
#define RELAY_XSWI_PIN  7  // wPi 7 = Pino Físico (Trava da Bateria)

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;
static int activeConnections = 0;

void sigint_handler(int signalId) { running = 0; }

#define LOG_PRINT(...) fprintf(stderr, __VA_ARGS__)

void sinalizar_partida() {
    for(int i=0; i<2; i++) {
        digitalWrite(RELAY_LANT_PIN, HIGH);
        digitalWrite(RELAY_MOT_PIN, HIGH);
        digitalWrite(RELAY_ALM_PIN, HIGH);
        digitalWrite(RELAY_CEL_PIN, HIGH);
        digitalWrite(RELAY_TNK_PIN, HIGH);
        digitalWrite(RELAY_XSWI_PIN, HIGH);
        Thread_sleep(100);          
        digitalWrite(RELAY_LANT_PIN, LOW);
        digitalWrite(RELAY_MOT_PIN, LOW);
        digitalWrite(RELAY_ALM_PIN, LOW);
        digitalWrite(RELAY_CEL_PIN, LOW);
        digitalWrite(RELAY_TNK_PIN, LOW);
        digitalWrite(RELAY_XSWI_PIN, LOW);
        Thread_sleep(100);
    }
}

static void connectionHandler(IedServer self, ClientConnection connection, bool connected, void* parameter) {
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

/* Handler para o Select (SBO) - Validando NOS LOGICOS*/
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{ 
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
        return CONTROL_ACCEPTED;
    return CONTROL_OBJECT_UNDEFINED;
}

/* Handler para o Operate*/
static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) {
    uint64_t timestamp = Hal_getTimeInMs();
    int ctlNum = ControlAction_getCtlNum(action);
    ClientConnection clientCon = ControlAction_getClientConnection(action);
    const char* clientIP = (clientCon) ? ClientConnection_getPeerAddress(clientCon) : "Desconhecido";

    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos || 
        parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos || 
        parameter == IEDMODEL_B1HYD_CELXSWI1_Pos ||
        parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos ||
        parameter == IEDMODEL_B1STG_XSWI1_Pos)
         {
        
bool state = false;

        // =================================================================
        // Extrair o ctlVal de dentro da estrutura Oper
        // =================================================================
        MmsValue* ctlVal = value;
        if (MmsValue_getType(value) == MMS_STRUCTURE) {
            // O ctlVal é sempre o primeiro elemento (índice 0) da struct Oper
            ctlVal = MmsValue_getElement(value, 0); 
        }

       if (ctlVal != NULL) {
            if (MmsValue_getType(ctlVal) == MMS_BIT_STRING) {
                int val = MmsValue_getBitStringAsInteger(ctlVal);
                
                // --- LINHA PARA AJUDAR NO DEBUG ---
                LOG_PRINT("   >> [DEBUG] Elipse mandou o Dbpos: %d\n", val);
                
                state = (val == 2); // 2 = Fechado/ON, 1 = Aberto/OFF
            } else if (MmsValue_getType(ctlVal) == MMS_BOOLEAN) {
                state = MmsValue_getBoolean(ctlVal);
                LOG_PRINT("   >> [DEBUG] Elipse mandou um Boolean: %d\n", state);
            } else if (MmsValue_getType(ctlVal) == MMS_INTEGER) {
                state = (MmsValue_toInt32(ctlVal) > 0);
                LOG_PRINT("   >> [DEBUG] Elipse mandou um Inteiro: %d\n", state);
            }
        }
        // =================================================================

        LOG_PRINT("--------------------------------------------------\n");
        LOG_PRINT("[COMANDO] Recebido de: %s\n", clientIP);
        
        if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) {
            digitalWrite(RELAY_LANT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     LANTXSWI1 (Lanterna) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);
        } 
        else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
            digitalWrite(RELAY_MOT_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     MOTXSWI1 (Motor) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
            digitalWrite(RELAY_ALM_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     ALMXSWI1 (Alarme) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_CELXSWI1_Pos) {
            digitalWrite(RELAY_CEL_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     CELXSWI1 (Célebre) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1HYD_TNKXSWI1_Pos) {
            digitalWrite(RELAY_TNK_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     TNKXSWI1 (Tanque) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_stVal, value);
        }
        else if (parameter == IEDMODEL_B1STG_XSWI1_Pos) {
            digitalWrite(RELAY_XSWI_PIN, state ? HIGH : LOW); 
            LOG_PRINT("   >> Acao:     XSWI1 (Controle) %s\n", state ? "LIGADO/FECHADO" : "DESLIGADO/ABERTO");
            IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_t, timestamp);
            IedServer_updateAttributeValue(iedServer, IEDMODEL_B1STG_XSWI1_Pos_stVal, value);
        }

        LOG_PRINT("   >> CtlNum:   %d\n", ctlNum);
        LOG_PRINT("--------------------------------------------------\n");
    } else {
        return CONTROL_RESULT_FAILED;
    }
    return CONTROL_RESULT_OK;
}

static MmsDataAccessError writeAccessHandler(DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter) {
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);
    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL)) {
        if (dataAttribute == IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, ctlModelVal);
        else if (dataAttribute == IEDMODEL_B1STG_XSWI1_Pos_ctlModel) IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, ctlModelVal);
        return DATA_ACCESS_ERROR_SUCCESS;
    }
    return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
}

int main(int argc, char** argv) {
    if (wiringPiSetup() == -1) { 
        fprintf(stderr, "ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, LOW); 
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, LOW); 
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, LOW); 
    pinMode(RELAY_CEL_PIN, OUTPUT);  digitalWrite(RELAY_CEL_PIN, LOW); 
    pinMode(RELAY_TNK_PIN, OUTPUT);  digitalWrite(RELAY_TNK_PIN, LOW);
    pinMode(RELAY_XSWI_PIN, OUTPUT);  digitalWrite(RELAY_XSWI_PIN, LOW); 

    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO); 

    sinalizar_partida();
    
    iedServer = IedServer_create(&iedModel);
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);
    /* // ==============================================================
    // Forçando o ctlModel nativamente pelo C
    // ============================================================== */
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL); 
    IedServer_updateCtlModel(iedServer, IEDMODEL_B1STG_XSWI1_Pos, CONTROL_MODEL_DIRECT_NORMAL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_CELXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos, checkHandler, IEDMODEL_B1HYD_CELXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1HYD_TNKXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos, checkHandler, IEDMODEL_B1HYD_TNKXSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1STG_XSWI1_Pos, checkHandler, IEDMODEL_B1STG_XSWI1_Pos);
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1STG_XSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao iniciar servidor!\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    LOG_PRINT("\n--- SERVIDOR IEC 61850 ---\n");
    LOG_PRINT("[STATUS] Hardware OK (Lanterna: P%d | Motor: P%d | Alarme: P%d | Tanque: P%d | Trava: P%d)\n", RELAY_LANT_PIN, RELAY_MOT_PIN, RELAY_ALM_PIN, RELAY_CEL_PIN, RELAY_TNK_PIN, RELAY_XSWI_PIN);
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
    digitalWrite(RELAY_CEL_PIN, LOW);
    digitalWrite(RELAY_TNK_PIN, LOW);
    digitalWrite(RELAY_XSWI_PIN, LOW);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    close(dev_null);
    return 0;
}