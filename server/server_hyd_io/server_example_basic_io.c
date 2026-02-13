#include "iec61850_server.h"
#include "hal_thread.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "static_model.h" /* Carrega o modelo B1HYD (A "BRABA") */

static int running = 0;
static IedServer iedServer = NULL;

void
sigint_handler(int signalId)
{
    running = 0;
}

/*
 * Handler para controlos booleanos (SPS/SPC) do B1HYD
 * Usado para comandar a Válvula (KVLV1.Pos)
 */
static ControlHandlerResult
controlHandlerForBinaryOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_BOOLEAN) {
         printf("Control: Recebido tipo invalido (esperava boolean)\n");
        return CONTROL_RESULT_FAILED;
    }

    DataAttribute* dataAttribute = (DataAttribute*) parameter;
    
    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control (B1HYD): Recebido comando para %s, valor: %s\n",
           attrRef,
           MmsValue_getBoolean(value) ? "ABRIR (true)" : "FECHAR (false)");

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza o valor no modelo */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    /* Lógica Específica para a Válvula KVLV1 */
    if (parameter == IEDMODEL_B1HYD_KVLV1_Pos_stVal) {
        
        /* Atualiza timestamp */
        IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_Pos_t, timeStamp);
        
        /* Simula a resposta dos sensores de fim de curso (Feedback Loop) */
        bool cmdOpen = MmsValue_getBoolean(value);
        
        if (cmdOpen) {
            // Se mandou abrir: OpnPos=True, ClsPos=False
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_OpnPos_stVal, true);
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_ClsPos_stVal, false);
            // Incrementa contador de operações
            // (Na prática precisaria ler o valor atual e somar 1, aqui simplificado)
        } else {
            // Se mandou fechar: OpnPos=False, ClsPos=True
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_OpnPos_stVal, false);
            IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_ClsPos_stVal, true);
        }
    }
    
    return CONTROL_RESULT_OK;
}

/*
 * Handler para Setpoints Analógicos (APC) do B1HYD
 * Usado para definir o Setpoint de Abertura (KVLV1.PosSpt)
 */
static ControlHandlerResult
controlHandlerForAnalogueOutput(ControlAction action, void* parameter, MmsValue* value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    if (MmsValue_getType(value) != MMS_FLOAT) {
        printf("Control: Recebido tipo invalido (esperava float)\n");
        return CONTROL_RESULT_FAILED;
    }

    float setpointValue = MmsValue_toFloat(value);
    DataAttribute* dataAttribute = (DataAttribute*) parameter;

    char attrRef[130];
    ModelNode_getObjectReference((ModelNode*) dataAttribute, attrRef);

    printf("Control (B1HYD): Recebido Setpoint para %s, valor: %.2f\n", attrRef, setpointValue);

    uint64_t timeStamp = Hal_getTimeInMs();

    /* Atualiza o valor e timestamp */
    IedServer_updateAttributeValue(iedServer, dataAttribute, value);
    
    // Atualiza timestamp do PosSpt
    if (parameter == IEDMODEL_B1HYD_KVLV1_PosSpt_mxVal) { // Ou stVal dependendo do modelo exato
         IedServer_updateUTCTimeAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_PosSpt_t, timeStamp);
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

    /* Identidade do Servidor B1HYD */
    IedServer_setServerIdentity(iedServer, "MoveUFF", "B1HYD Server", "1.0.0");

    /****************************************************************
     * ATIVAÇÃO DOS CONTROLOS (B1HYD - KVLV1)
     ***************************************************************/

    /* Controle Booleano (Abrir/Fechar Válvula) */
    /* Nota: Usamos o objeto de controle 'Pos' */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_KVLV1_Pos,
            (ControlHandler) controlHandlerForBinaryOutput,
            IEDMODEL_B1HYD_KVLV1_Pos_stVal);

    /* Controle Analógico (Setpoint de Posição) */
    IedServer_setControlHandler(iedServer, IEDMODEL_B1HYD_KVLV1_PosSpt,
            (ControlHandler) controlHandlerForAnalogueOutput,
            IEDMODEL_B1HYD_KVLV1_PosSpt_mxVal);

    /****************************************************************
     * FIM DA ATIVAÇÃO DE CONTROLOS
     ***************************************************************/

    IedServer_setConnectionIndicationHandler(iedServer, (IedConnectionIndicationHandler) connectionHandler, NULL);
    IedServer_setRCBEventHandler(iedServer, rcbEventHandler, NULL);

    /* Permissões de Escrita */
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_DC, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CO, ACCESS_POLICY_ALLOW); 
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_SP, ACCESS_POLICY_ALLOW);
    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_CF, ACCESS_POLICY_ALLOW);
    
    IedServer_start(iedServer, tcpPort);

    if (!IedServer_isRunning(iedServer))
    {
        printf("Starting server failed (Exit.)\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    /****************************************************************
     * INICIALIZAÇÃO DE VALORES (B1HYD)
     ***************************************************************/
    
    printf("Servidor B1HYD arrancou na porta %i. A inicializar valores...\n", tcpPort);

    IedServer_lockDataModel(iedServer); 
    
    /* --- KTNK1 (Tanque de Hidrogênio) --- */
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_EEHealth_stVal, 1); // Ok
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Beh_stVal, 1); // On
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_OpTmh_stVal, 120); // 120 horas de operação
    
    // Medições (Nível e Volume)
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_LevPct_mag, 85.5f); // 85.5%
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_Vlm_mag, 150.0f);   // 150 Litros
    
    // Configurações (Capacidade e Tipo)
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_VlmCap_setMag, 200.0f); // Max 200L
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1HYD_KTNK1_TnkTyp_setVal, 1); // Tipo 1 (H2)

    /* --- STMP1 (Temperatura) --- */
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Trip_stVal, false); // Sem Trip
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_Tmp_mag, 24.5f); // 24.5 Graus
    
    // Settings de Trip
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_STMP1_TripSet_setMag, 60.0f); // Tripa em 60 graus

    /* --- KVLV1 (Válvula de Controle) --- */
    // Status Inicial: Fechada
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_ClsPos_stVal, true);
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_OpnPos_stVal, false);
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_Mvm_stVal, false); // Não está movendo
    IedServer_updateBooleanAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_Stuck_stVal, false); // Não está travada
    
    IedServer_updateInt32AttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_OpCnt_stVal, 10); // 10 Operações
    IedServer_updateFloatAttributeValue(iedServer, IEDMODEL_B1HYD_KVLV1_PosVlv_mag, 0.0f); // 0% de abertura
    
    IedServer_unlockDataModel(iedServer); 
    
    printf("Valores do B1HYD inicializados com sucesso!\n");
    /****************************************************************
     * FIM DA INICIALIZAÇÃO
     ***************************************************************/

    running = 1;
    signal(SIGINT, sigint_handler);

    while (running)
    {
        /* Aqui você pode adicionar lógica de simulação:
           Ex: Aumentar a temperatura aos poucos, 
               ou diminuir o nível do tanque se a válvula estiver aberta. */
        
        Thread_sleep(100);
    }

    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);

    return 0;
} /* main() */