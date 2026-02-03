/*
 * server_example_basic_io.c
 * CORRIGIDO
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

// --- ADICIONADO PARA O RELÉ ---
#include <wiringPi.h>
#define RELAY_PIN 2  // wPi 2 = Pino Físico 7 na Zero 2W
// ------------------------------

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId) { running = 0; }

/* --- FUNÇÃO DE PISCAR (Sinal de Inicialização) --- */
void sinalizar_partida() {
    printf("[HW] Sinalizando partida (Blink)...\n");
    for(int i=0; i<2; i++) {
        // Liga
        digitalWrite(RELAY_PIN, HIGH);
        Thread_sleep(200);           
        // Desliga
        digitalWrite(RELAY_PIN, LOW); 
        Thread_sleep(200);
    }
    printf("[HW] Rele em espera (OFF).\n");
}

/* Handler para o Select (SBO) */
static CheckHandlerResult 
checkHandler(ControlAction action, void* parameter, MmsValue* ctlVal, bool test, bool interlockCheck) 
{
    printf("[IEC-LOG] SELECT recebido para o motor. Autorizando...\n");

    ClientConnection clientCon = ControlAction_getClientConnection(action);
    
    if (clientCon) {
        printf("Control from client %s\n", ClientConnection_getPeerAddress(clientCon)); 
    }
    else {
        printf("clientCon == NULL\n");
    }

    if (ControlAction_isSelect(action))
        printf("check handler called by select command!\n");
    else
        printf("check handler called by operate command!\n");

    if (interlockCheck)
        printf("with interlock check bit set!\n");

    printf(" ctlNum: %i\n", ControlAction_getCtlNum(action));

    if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) 
        return CONTROL_ACCEPTED;

    return CONTROL_OBJECT_UNDEFINED;
} // <--- A chave de fechamento deve ficar AQUI

/* Handler para o Operate */
static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test) 
{
    // Adicionada a declaração do timestamp que faltava
    uint64_t timestamp = Hal_getTimeInMs();

    printf("control handler called\n");
    printf("  ctlNum: %i\n", ControlAction_getCtlNum(action));

    ClientConnection clientCon = ControlAction_getClientConnection(action);

    if (clientCon) {
        printf("Control from client %s\n", ClientConnection_getPeerAddress(clientCon));
    }
    else {
        printf("clientCon == NULL!\n");
    }

    if (parameter == IEDMODEL_B1EBK_MOTXSWI1_Pos) {
        
        // Lógica do Relé
        bool state = MmsValue_getBoolean(value);
        
        // 1 = HIGH, 0 = LOW
        digitalWrite(RELAY_PIN, state ? HIGH : LOW); // digitalWrite(RELAY_PIN, state ? LOW : HIGH);
        
        printf(">>> COMANDO FÍSICO: Motor %s (Pino %d)\n", state ? "LIGADO" : "DESLIGADO", RELAY_PIN);

        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_t, timestamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal, value);
    }
    else
        return CONTROL_RESULT_FAILED;

    return CONTROL_RESULT_OK;
}

static MmsDataAccessError
writeAccessHandler (DataAttribute* dataAttribute, MmsValue* value, ClientConnection connection, void* parameter)
{
    ControlModel ctlModelVal = (ControlModel) MmsValue_toInt32(value);

    /* we only allow status-only and direct-operate */
    if ((ctlModelVal == CONTROL_MODEL_STATUS_ONLY) || (ctlModelVal == CONTROL_MODEL_DIRECT_NORMAL))
    {
        IedServer_updateCtlModel(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, ctlModelVal);

        printf("IEDMODEL_B1EBK_MOTXSWI1_Pos to %i\n", ctlModelVal);

        return DATA_ACCESS_ERROR_SUCCESS;
    }
    else {
        return DATA_ACCESS_ERROR_OBJECT_VALUE_INVALID;
    }
}

int
main(int argc, char** argv)
{
    // --- SETUP DO RELÉ ---
    if (wiringPiSetup() == -1) {
        printf("ERRO: Falha ao inicializar o wiringPi! Tente executar como root\n");
        exit(1);
    }
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW); //digitalWrite(RELAY_PIN, HIGH); Inicia DESLIGADO
    
    // Pisca 3x para teste de conexão
    sinalizar_partida();

    iedServer = IedServer_create(&iedModel);
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    // Configura o Handler de Operação
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_B1EBK_MOTXSWI1_Pos);

    // Configura o Handler de Check (Select) - OPCIONAL MAS RECOMENDADO
    IedServer_setPerformCheckHandler(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos, 
            checkHandler, 
            IEDMODEL_B1EBK_MOTXSWI1_Pos);

    // Configura permissão de escrita no Control Model
    IedServer_handleWriteAccess(iedServer, IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel, writeAccessHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Starting server failed! Exit.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    running = 1;

    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(1);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}