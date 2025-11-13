/*
 * server_example_basic_io.c
 *
 * (Corrigido para o modelo BIKE, com inicialização e controlos)
 * (Versão 2 - Corrigidos erros de compilação)
 */

#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h" /* Carrega o nosso modelo BIKE (DEEV1, ISAF1, XSWI1) */

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

/*
 * Handler (Manipulador) para controlos booleanos (SPS - On/Off)
 * Usado para BlkOpn (Bloquear Abertura) e BlkCls (Bloquear Fecho)
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
    
    /* CORREÇÃO 1: ModelNode_getObjectReference precisa de um buffer */
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);


    printf("Control: Recebido comando para %s, valor: %s\n",
           attrRef,
           MmsValue_getBoolean(value) ? "on (true)" : "off (false)");

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza o valor no modelo */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    /* Atualiza os timestamps correspondentes */
    if (parameter == IEDMODEL_BIKE_XSWI1_BlkOpn_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkOpn_t, timeStamp);
    }
    else if (parameter == IEDMODEL_BIKE_XSWI1_BlkCls_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkCls_t, timeStamp);
    }
    
    return CONTROL_RESULT_OK;
}

/*
 * Handler (Manipulador) para controlos DPC (Posição Dupla)
 * Usado para XSWI1_Pos (Posição do Interruptor)
 */
static ControlHandlerResult
controlHandlerForDbpos(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    /* O tipo Dbpos (ENUMERATED) é enviado como um Inteiro (MMS_INTEGER) */
    if (MmsValue_getType(value) != MMS_INTEGER) {
        printf("Control: Recebido tipo inválido para DPC (esperava integer)\n");
        return CONTROL_RESULT_FAILED;
    }

    int32_t controlValue = MmsValue_toInt32(value);
    DataAttribute* dataAttribute = (DataAttribute*) parameter;

    /* CORREÇÃO 2: ModelNode_getObjectReference precisa de um buffer */
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);


    printf("Control: Recebido comando para %s, valor: %i\n", attrRef, controlValue);

    /* Validação simples para DBPOS (1 = OFF, 2 = ON) */
    if (controlValue != 1 && controlValue != 2) {
        printf("Control: Valor inválido para DPC (apenas 1 ou 2 são permitidos)\n");
        return CONTROL_RESULT_FAILED;
    }

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualizar o timestamp e o valor no modelo */
    if (parameter == IEDMODEL_BIKE_XSWI1_Pos_stVal) {
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_Pos_t, timeStamp);
        IedServer_updateAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_Pos_stVal, value);
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
    /* (O seu código original rcbEventHandler... sem alterações) */
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

    /* Create new server configuration object */
    IedServerConfig config = IedServerConfig_create();
    IedServerConfig_setReportBufferSize(config, 200000);
    IedServerConfig_setEdition(config, IEC_61850_EDITION_2);
    IedServerConfig_setFileServiceBasePath(config, "./vmd-filestore/");
    IedServerConfig_enableFileService(config, false);
    IedServerConfig_enableDynamicDataSetService(config, true);
    IedServerConfig_enableLogService(config, false);
    IedServerConfig_setMaxMmsConnections(config, 2);

    /* Create a new IEC 61850 server instance */
    iedServer = IedServer_createWithConfig(&iedModel, NULL, config);

    /* configuration object is no longer required */
    IedServerConfig_destroy(config);

    /* set the identity values for MMS identify service */
    IedServer_setServerIdentity(iedServer, "MoveUFF", "BIKE Server", "1.0.0");

    /****************************************************************
     * ATIVAÇÃO DOS CONTROLOS (Para XSWI1)
     ***************************************************************/

    /* 1. Controlos Booleanos (SPS) - BlkOpn e BlkCls */
    IedServer_setControlHandler(iedServer, IEDMODEL_BIKE_XSWI1_BlkOpn,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_BIKE_XSWI1_BlkOpn_stVal);

    IedServer_setControlHandler(iedServer, IEDMODEL_BIKE_XSWI1_BlkCls,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_BIKE_XSWI1_BlkCls_stVal);
    
    /* 2. Controlos Dbpos (DPC) - A posição do interruptor */
    IedServer_setControlHandler(iedServer, IEDMODEL_BIKE_XSWI1_Pos,
            (ControlHandler) controlHandlerForDbpos, /* O nosso novo handler */
            IEDMODEL_BIKE_XSWI1_Pos_stVal);

    /****************************************************************
     * FIM DA ATIVAÇÃO DE CONTROLOS
     ***************************************************************/

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);

    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);

    /* Permitir escrita (necessário para o NamPlt, mas também para controlos) */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);
    
    /* CORREÇÃO 3: Corrigido erro de digitação IEC6B50 -> IEC61850 */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CO, ACCESS_POLICY_ALLOW); /* Permite controles */

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_SP, ACCESS_POLICY_ALLOW);

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_SP, ACCESS_POLICY_ALLOW); 
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CF, ACCESS_POLICY_ALLOW); 
    
    /* MMS server will be instructed to start listening for client connections. */
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer))
    {
        printf("Starting server failed (maybe need root permissions or another server is already using the port)! Exit.\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    /****************************************************************
     * NOVO BLOCO - INICIALIZAR OS VALORES (CORREÇÃO DOS NULLS)
     ***************************************************************/
    
    printf("Servidor BIKE arrancou na porta %i. A inicializar valores...\n", tcpPort);

    IedServer_lockDataModel(iedServer); 
    
    /* Inicializar DEEV1 */
    IedServer_updateVisibleStringAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_EVId_setVal, "BIKE-01");
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_VMax_setMag_f, 120.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_AMax_setMag_f, 50.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_AMin_setMag_f, 10.0);
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_BIKE_DEEV1_EnAmnt_setMag_f, 1500.0);
    
    /* Inicializar ISAF1 */
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_BIKE_ISAF1_Alm_stVal, false); // Sem alarme

    /* Inicializar XSWI1 */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_SwTyp_stVal, 1); // Ex: tipo "Load Break"
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_Loc_stVal, false); // false = "Remoto"
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_OpCnt_stVal, 0); // Contador em 0
    
    /* CORREÇÃO 4: IedServer_updateDbposAttributeValue -> IedServer_updateInt32AttributeValue */
    /* E DBPOS_OFF -> 1 (porque o tipo é ENUMERATED) */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_Pos_stVal, 1); // Posição "OFF" (desligado)
    
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkOpn_stVal, false); // Não bloqueado
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_BIKE_XSWI1_BlkCls_stVal, false); // Não bloqueado

    IedServer_unlockDataModel(iedServer); 
    
    printf("Valores do BIKE inicializados!\n");
    /****************************************************************
     * FIM DO NOVO BLOCO
     ***************************************************************/


    running = 1;

    signal(SIGINT, sigint_handler);

    while (running)
    {
        /* O loop principal agora só precisa de dormir */
        Thread_sleep(100);
    }

    /* stop MMS server - close TCP server socket and all client sockets */
    IedServer_stop(iedServer);

    /* Cleanup - free all resources */
    IedServer_destroy(iedServer);

    return 0;
} /* main() */