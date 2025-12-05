/*
 * server_example_basic_io.c
 *
 * (Versão adaptada para o dispositivo STG)
 * LNs: LLN0, MMXU1, XSWI1, DBAT1
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h" /* Carrega o modelo STG */

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

/*
 * Handler para controlos booleanos (SPS) do STG
 * (BlkOpn e BlkCls do XSWI1)
 */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_BOOLEAN) {
         printf("Control: Recebido tipo inválido para SPS (esperava boolean)\n");
        return CONTROL_RESULT_FAILED;
    }

    DataAttribute* dataAttribute = (DataAttribute*) parameter;
    
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control (STG): Recebido comando para %s, valor: %s\n",
           attrRef,
           MmsValue_getBoolean(value) ? "on (true)" : "off (false)");

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza o valor no modelo */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    /* Atualiza os timestamps correspondentes no STG */
    if (parameter == IEDMODEL_STG_XSWI1_BlkOpn_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_STG_XSWI1_BlkOpn_t, timeStamp);
    }
    else if (parameter == IEDMODEL_STG_XSWI1_BlkCls_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_STG_XSWI1_BlkCls_t, timeStamp);
    }
    
    return CONTROL_RESULT_OK;
}

/*
 * Handler para controlos DPC (Posição Dupla) do STG
 * (Pos do XSWI1)
 */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_INTEGER) {
        printf("Control: Recebido tipo inválido para DPC (esperava integer)\n");
        return CONTROL_RESULT_FAILED;
    }

    int32_t controlValue = MmsValue_toInt32(value);
    DataAttribute* dataAttribute = (DataAttribute*) parameter;

    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control (STG): Recebido comando para %s, valor: %i\n", attrRef, controlValue);

    if (controlValue != 1 && controlValue != 2) {
        printf("Control: Valor inválido para DPC (apenas 1 ou 2 são permitidos)\n");
        return CONTROL_RESULT_FAILED;
    }

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualizar o timestamp e o valor no modelo STG */
    if (parameter == IEDMODEL_STG_XSWI1_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_STG_XSWI1_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_STG_XSWI1_Pos_stVal, value);
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
        char* dataSet = ReportControlBlock_getDataSet(rcb);
        printf("    datSet: %s\n", dataSet);
        free(rptId);
        free(dataSet);
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
    IedServerConfig_enableFileService(config, false);
    IedServerConfig_enableDynamicDataSetService(config, true);
    IedServerConfig_enableLogService(config, false);
    IedServerConfig_setMaxMmsConnections(config, 2);

    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);
    IedServerConfig_destroy(config);

    /* Identidade do Servidor STG */
    IedServer_setServerIdentity(iedServer, "MoveUFF", "STG Server", "1.0.0");

    /****************************************************************
     * ATIVAÇÃO DOS CONTROLOS (STG - XSWI1)
     ***************************************************************/

    /* Controles Booleanos */
    IedServer_setControlHandler(iedServer, IEDMODEL_STG_XSWI1_BlkOpn,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_STG_XSWI1_BlkOpn_stVal);

    IedServer_setControlHandler(iedServer, IEDMODEL_STG_XSWI1_BlkCls,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_STG_XSWI1_BlkCls_stVal);
    
    /* Controle de Posição (Dbpos) */
    IedServer_setControlHandler(iedServer, IEDMODEL_STG_XSWI1_Pos,
            (ControlHandler) controlHandlerForDbpos,
            IEDMODEL_STG_XSWI1_Pos_stVal);

    /****************************************************************
     * FIM DA ATIVAÇÃO DE CONTROLOS
     ***************************************************************/

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);

    /* Permissões de Escrita (Essenciais para Inicialização e Controle) */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CO, ACCESS_POLICY_ALLOW); 
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_SP, ACCESS_POLICY_ALLOW); /* Para Settings */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CF, ACCESS_POLICY_ALLOW); /* Para Config */
    
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer))
    {
        printf("Starting server failed (Exit.)\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    /****************************************************************
     * INICIALIZAÇÃO DE VALORES (STG)
     ***************************************************************/
    
    printf("Servidor STG arrancou na porta %i. A inicializar valores...\n", tcpPort);

    IedServer_lockDataModel(iedServer); 

    /* --- LLN0 --- */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_LLN0_Beh_stVal, 1); // On
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_LLN0_Health_stVal, 1); // Ok

    /* --- MMXU1 (Medição) --- */
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_MMXU1_TotW_mag_f, 4500.5); // Ex: 4.5kW
    
    /* --- XSWI1 (Switch) --- */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_XSWI1_SwTyp_stVal, 1); // Load Break
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_STG_XSWI1_Loc_stVal, false); // Remote
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_XSWI1_OpCnt_stVal, 15); // Já operou 15 vezes
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_XSWI1_Pos_stVal, 2); // ON (Fechado)
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_STG_XSWI1_BlkOpn_stVal, false);
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_STG_XSWI1_BlkCls_stVal, false);

    /* --- DBAT1 (Bateria) --- */
    /* Status */
    IedServer_updateVisibleStringAttributeValue(iedServer, IEDMODEL_STG_DBAT1_EEName_stVal, "BATERIA_STG_A");
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_STG_DBAT1_ChaSt_stVal, true); // A carregar
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_STG_DBAT1_DschSt_stVal, false);
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_DBAT1_EEHealth_stVal, 1); // Ok
    
    /* Medições */
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_Amp_mag_f, 12.5);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_Watt_mag_f, 600.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_AvlChaAhr_mag_f, 100.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_AvlDschAhr_mag_f, 50.0);

    /* Settings (Configurações) */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_STG_DBAT1_BatTyp_setVal, 1); // Ex: Li-Ion
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_ChaAmpMax_setMag_f, 20.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_AhrRtg_setMag_f, 200.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_STG_DBAT1_ChaVolMaxRtg_setMag_f, 48.0);

    IedServer_unlockDataModel(iedServer); 
    
    printf("Valores do STG inicializados!\n");
    /****************************************************************
     * FIM DA INICIALIZAÇÃO
     ***************************************************************/

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running)
    {
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
} /* main() */