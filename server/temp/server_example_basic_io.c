#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <wiringPi.h>

#include "static_model_unified.h"

#define RELAY_LANT_PIN 2
#define RELAY_MOT_PIN  5
#define RELAY_ALM_PIN  6

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId) { running = 0; }

// Macro simples para logar direto na tela
#define LOG_PRINT(...) do { fprintf(stderr, __VA_ARGS__); fflush(stderr); } while(0)

/* Handler que permite o comando passar */
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) {
    return CONTROL_ACCEPTED;
}

/* Handler principal: Executa a ação no pino e atualiza o IEC 61850 */
static ControlHandlerResult 
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) {
    uint64_t timestamp = Hal_getTimeInMs();
    bool state = MmsValue_getBoolean(value);

    // DBPOS exige BitString de tamanho 2 (1 = OFF, 2 = ON)
    MmsValue* dbposVal = MmsValue_newBitString(2);
    MmsValue_setBitStringFromInteger(dbposVal, state ? 2 : 1);

    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos) {
        digitalWrite(RELAY_LANT_PIN, state ? HIGH : LOW);
        LOG_PRINT("[COMANDO] Lanterna: %s\n", state ? "LIGADA" : "DESLIGADA");
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timestamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, dbposVal);
    } 
    else if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
        digitalWrite(RELAY_MOT_PIN, state ? HIGH : LOW);
        LOG_PRINT("[COMANDO] Motor: %s\n", state ? "LIGADO" : "DESLIGADO");
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, dbposVal);
    } 
    else if (parameter == IEDMODEL_B1EBK_ALMXSWI1_Pos) {
        digitalWrite(RELAY_ALM_PIN, state ? HIGH : LOW);
        LOG_PRINT("[COMANDO] Alarme: %s\n", state ? "LIGADO" : "DESLIGADO");
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_t, timestamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal, dbposVal);
    }

    MmsValue_delete(dbposVal);
    return CONTROL_RESULT_OK;
}

int main(int argc, char** argv) {
    // 1. Inicializa Pinos
    if (wiringPiSetup() == -1) {
        LOG_PRINT("ERRO: wiringPi falhou! Use sudo.\n");
        return 1;
    }
    pinMode(RELAY_LANT_PIN, OUTPUT); digitalWrite(RELAY_LANT_PIN, LOW);
    pinMode(RELAY_MOT_PIN, OUTPUT);  digitalWrite(RELAY_MOT_PIN, LOW);
    pinMode(RELAY_ALM_PIN, OUTPUT);  digitalWrite(RELAY_ALM_PIN, LOW);

    // 2. Esconde logs nativos da biblioteca
    int dev_null = open("/dev/null", O_WRONLY);
    if (dev_null != -1) dup2(dev_null, STDOUT_FILENO);

    // 3. Cria e configura o servidor
    iedServer = IedServer_create(&iedModel_MoveUFF_Geral);
    
    // Libera permissão de escrita para o Elipse conseguir comandar
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CO, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);

    // 4. Associa os nós lógicos aos Handlers
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_LANTXSWI1_Pos);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_MOTXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_MOTXSWI1_Pos);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI1_Pos);
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI1_Pos, checkHandler, IEDMODEL_B1EBK_ALMXSWI1_Pos);

    // 5. Inicia na porta padrão 102
    IedServer_start(iedServer, 102);
    if (!IedServer_isRunning(iedServer)) {
        LOG_PRINT("Falha ao abrir a porta 102!\n");
        return -1;
    }

    LOG_PRINT("=== SERVIDOR IEC 61850 ONLINE ===\n");
    LOG_PRINT("Aguardando comandos na porta 102...\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    // 6. Encerramento limpo
    LOG_PRINT("\nDesligando servidor e reles...\n");
    digitalWrite(RELAY_LANT_PIN, LOW);
    digitalWrite(RELAY_MOT_PIN, LOW);
    digitalWrite(RELAY_ALM_PIN, LOW);
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    if (dev_null != -1) close(dev_null);

    return 0;
}