/*
 * server_example_basic_io.c
 *
 * (Atualizado para B1EBK com LANTXSWI1 e ALMXSWI2)
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h" /* Carrega o modelo B1EBK */

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

/*
 * Handler para controlos booleanos (SPS - On/Off)
 * Agora atende: LANTXSWI1 (BlkOpn/BlkCls) e ALMXSWI2 (BlkOpn/BlkCls)
 */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_BOOLEAN) {
         printf("Control: Tipo invalido (esperava boolean)\n");
        return CONTROL_RESULT_FAILED;
    }

    DataAttribute* dataAttribute = (DataAttribute*) parameter;
    
    /* Pega o nome do objeto para debug */
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control: Comando recebido para %s, valor: %s\n",
           attrRef,
           MmsValue_getBoolean(value) ? "ON" : "OFF");

    uint64_t timeStamp = Hal_getTimeInMs();

    /* 1. Atualiza o valor principal (stVal) */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    /* 2. Atualiza o timestamp (t) correto dependendo de quem chamou */
    
    /* --- LANTXSWI1 --- */
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_t, timeStamp);
    }
    else if (parameter == IEDMODEL_B1EBK_LANTXSWI1_BlkCls_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_BlkCls_t, timeStamp);
    }
    /* --- ALMXSWI2 --- */
    else if (parameter == IEDMODEL_B1EBK_ALMXSWI2_BlkOpn_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn_t, timeStamp);
    }
    else if (parameter == IEDMODEL_B1EBK_ALMXSWI2_BlkCls_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkCls_t, timeStamp);
    }
    
    return CONTROL_RESULT_OK;
}

/*
 * Handler para controlos DPC (Posição Dupla)
 * Agora atende: LANTXSWI1 (Pos) e ALMXSWI2 (Pos)
 */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_INTEGER) {
        printf("Control: Tipo invalido para DPC (esperava integer)\n");
        return CONTROL_RESULT_FAILED;
    }

    int32_t controlValue = MmsValue_toInt32(value);
    DataAttribute* dataAttribute = (DataAttribute*) parameter;

    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control: Comando DPC para %s, valor: %i\n", attrRef, controlValue);

    /* Validação DBPOS (1 = OFF, 2 = ON) */
    if (controlValue != 1 && controlValue != 2) {
        printf("Control: Valor invalido (apenas 1=OFF ou 2=ON)\n");
        return CONTROL_RESULT_FAILED;
    }

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza Timestamp e Valor */
    
    /* --- LANTXSWI1 --- */
    if (parameter == IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, value);
    }
    /* --- ALMXSWI2 --- */
    else if (parameter == IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal, value);
    }

    return CONTROL_RESULT_OK;
}


static void
connectionHandler (IedServer self, ClientConnection connection, bool connected, void* parameter)
{
    if (connected)
        printf("Connection opened\n");
    else
        printf("Connection closed\n");
}

static void
rcbEventHandler(void* parameter, ReportControlBlock* rcb, ClientConnection connection, IedServer_RCBEventType event, const char* parameterName, MmsDataAccessError serviceError)
{
    printf("RCB: %s event: %i\n", ReportControlBlock_getName(rcb), event);
    if ((event == RCB_EVENT_SET_PARAMETER) || (event == RCB_EVENT_GET_PARAMETER)) {
        printf("  param:  %s\n", parameterName);
        printf("  result: %i\n", serviceError);
    }
    if (event == RCB_EVENT_ENABLE) {
        char* rptId = ReportControlBlock_getRptID(rcb);
        printf("    rptID:  %s\n", rptId);
        free(rptId);
    }
}

int
main(int argc, char** argv)
{
    int tcpPort = 102;

    if (argc > 1) {
        tcpPort = atoi(argv[1]);
    }

    printf("Using libIEC61850 version %s\n", LibIEC61850_getVersionString());

    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setReportBufferSize(config, 200000);
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableDynamicDataSetService(config, true);
    IedServerConfig_setMaxMmsConnections(config, 2);

    /* Cria a instância do servidor com o seu modelo B1EBK */
    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    IedServer_setServerIdentity(iedServer, "MoveUFF", "B1EBK Server", "2.0.0");

    /****************************************************************
     * ATIVAÇÃO DOS CONTROLOS (LANTXSWI1 e ALMXSWI2)
     ***************************************************************/

    /* --- LANTXSWI1 (Lanterna) --- */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_BlkOpn,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_stVal);
    
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_BlkCls,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_LANTXSWI1_BlkCls_stVal);
    
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos,
            (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal);

    /* --- ALMXSWI2 (Alarme) --- */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn_stVal);
    
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkCls,
            (ControlHandler) controlHandlerForBinaryOutput, IEDMODEL_B1EBK_ALMXSWI2_BlkCls_stVal);
    
    IedServer_setControlHandler(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos,
            (ControlHandler) controlHandlerForDbpos, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal);

    /****************************************************************/

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);

    /* Permissões de escrita */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CO, ACCESS_POLICY_ALLOW); 
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_SP, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CF, ACCESS_POLICY_ALLOW); 

    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer)) {
        printf("Falha ao iniciar servidor! Verifique permissoes sudo ou porta ocupada.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    /****************************************************************
     * INICIALIZAR VALORES (LANTXSWI1 e ALMXSWI2)
     ***************************************************************/
    
    printf("Servidor B1EBK rodando na porta %i. Inicializando...\n", tcpPort);
    IedServer_lockDataModel(iedServer); 
    
    /* Inicializar DEEV1 (Exemplo) */
    IedServer_updateVisibleStringAttributeValue(iedServer, IEDMODEL_B1EBK_DEEV1_EVId_setVal, "B1EBK-01");

    /* --- Inicializar LANTXSWI1 --- */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_SwTyp_stVal, 1);
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Loc_stVal, false);
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal, 1); // 1 = OFF
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_stVal, false);
    
    /* --- Inicializar ALMXSWI2 --- */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_SwTyp_stVal, 1);
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Loc_stVal, false);
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_Pos_stVal, 1); // 1 = OFF
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1EBK_ALMXSWI2_BlkOpn_stVal, false);

    IedServer_unlockDataModel(iedServer); 
    printf("Valores inicializados!\n");

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running) {
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
}