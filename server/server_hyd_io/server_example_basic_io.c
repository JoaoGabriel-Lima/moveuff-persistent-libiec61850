/*
 * server_example_basic_io.c
 * Servidor para o modelo B1BYD (Orange Pi Zero 2W)
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h"

static int running = 0;
static IedServer iedServer = NULL;

void sigint_handler(int signalId) {
    running = 0;
}

/* Handler para controles Booleanos (SPS - On/Off) */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test) return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_BOOLEAN) {
         printf("Control: Tipo invalido (esperava boolean)\n");
        return CONTROL_RESULT_FAILED;
    }

    DataAttribute* dataAttribute = (DataAttribute*) parameter;
    
    /* Debug: imprime quem recebeu o comando */
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);
    printf("Comando recebido em %s: %s\n", attrRef, MmsValue_getBoolean(value) ? "ON" : "OFF");

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza o valor (stVal) */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    /* Atualiza o timestamp (t) associado */
    /* TNKXSWI1 */
    if (parameter == IEDMODEL_B1BYD_TNKXSWI1_BlkOpn_stVal)
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_TNKXSWI1_BlkOpn_t, timeStamp);
    else if (parameter == IEDMODEL_B1BYD_TNKXSWI1_BlkCls_stVal)
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_TNKXSWI1_BlkCls_t, timeStamp);
    /* CELXSWI1 */
    else if (parameter == IEDMODEL_B1BYD_CELXSWI1_BlkOpn_stVal)
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_CELXSWI1_BlkOpn_t, timeStamp);
    else if (parameter == IEDMODEL_B1BYD_CELXSWI1_BlkCls_stVal)
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_CELXSWI1_BlkCls_t, timeStamp);
    
    return CONTROL_RESULT_OK;
}

/* Handler para controles DPC (Double Point Control - Pos) */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test) return CONTROL_RESULT_FAILED;

    /* DPC geralmente chega como Integer ou BitString */
    int32_t controlValue = 0;
    if (MmsValue_getType(value) == MMS_INTEGER) {
        controlValue = MmsValue_toInt32(value);
    } else {
        printf("Control: Tipo nao suportado para DPC\n");
        return CONTROL_RESULT_FAILED;
    }

    DataAttribute* dataAttribute = (DataAttribute*) parameter;
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);
    printf("Comando DPC em %s: %i\n", attrRef, controlValue);

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza Timestamp e Valor */
    if (parameter == IEDMODEL_B1BYD_TNKXSWI1_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_TNKXSWI1_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1BYD_TNKXSWI1_Pos_stVal, value);
    }
    else if (parameter == IEDMODEL_B1BYD_CELXSWI1_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1BYD_CELXSWI1_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1BYD_CELXSWI1_Pos_stVal, value);
    }

    return CONTROL_RESULT_OK;
}

static void connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter) {
    if (connected) printf("Cliente conectado\n");
    else printf("Cliente desconectado\n");
}

int main(int argc, char** argv) {
    int tcpPort = 102;
    if (argc > 1) tcpPort = atoi(argv[1]);

    printf("Iniciando libIEC61850 versao %s\n", LibIEC61850_getVersionString());

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    IedServer_setServerIdentity(iedServer, "MoveUFF", "B1BYD", "1.0");

    /* Registra Handlers de Controle */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_TNKXSWI1_BlkOpn, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1BYD_TNKXSWI1_BlkOpn_stVal);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_TNKXSWI1_BlkCls, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1BYD_TNKXSWI1_BlkCls_stVal);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_TNKXSWI1_Pos, (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1BYD_TNKXSWI1_Pos_stVal);

    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_CELXSWI1_BlkOpn, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1BYD_CELXSWI1_BlkOpn_stVal);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_CELXSWI1_BlkCls, (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1BYD_CELXSWI1_BlkCls_stVal);
    IedServer_setControlHandler(iedServer, IEDMODEL_B1BYD_CELXSWI1_Pos, (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1BYD_CELXSWI1_Pos_stVal);

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Erro ao iniciar servidor (use sudo?)\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    printf("Servidor B1BYD rodando na porta %i...\n", tcpPort);

    /* Loop principal */
    running = 1;
    signal(SIGINT, sigint_handler);
    while (running) {
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
    return 0;
}