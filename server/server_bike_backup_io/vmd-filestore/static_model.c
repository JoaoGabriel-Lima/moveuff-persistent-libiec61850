/*
 * static_model.c
 *
 * Corrigido com base na análise dos erros.
 * 1. Removidos caracteres inválidos (non-breaking spaces).
 * 2. Corrigidos erros de digitação (IEC61850, etc.).
 * 3. Removidas redefinições duplicadas do LTMS1.
 * 4. Corrigido o encadeamento do LogicalDevice 'BIKE'.
 * 5. Removida chave '}' extra no final.
 * 6. Removido 't' solto na definição de LTIM1_Health_stVal.
 * 7. Comentadas linhas em initializeValues para variáveis não definidas.
 * 8. Corrigidos todos os erros de digitação 'IEC6IA50_' para 'IEC61850_'.
 */

/*
 * static_model.c
 * ...
 */

#include "static_model.h"

static void initializeValues();

IedModel iedModel = {
    "MoveUFF", /* model name (mude se quiser) */
    (ModelNode*) &iedModel_BIKE, /* first logical device */
    NULL /* vendor */
};

LogicalDevice iedModel_BIKE = {
    LogicalDeviceModelType,
    "BIKE",
    (ModelNode*) &iedModel, /* O parent agora vai funcionar */
    NULL,
    (ModelNode*) &iedModel_BIKE_XSWI1 
};

/* ----------------- COMEÇO DO XSWI1 ------------------- */

LogicalNode iedModel_BIKE_XSWI1 = {
    LogicalNodeModelType,
    "XSWI1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
};


/* ------------------- Data Object: Loc (CDC: SPS) ------------------- */

DataObject iedModel_BIKE_XSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    NULL,
    //(ModelNode*) &iedModel_BIKE_XSWI1_Loc_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_Loc_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};
    
/* ------------------- Data Object: OpCnt (CDC: INS) ------------------- */ 

DataObject iedModel_BIKE_XSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

/* ------------------- Data Object: SwTyp (CDC: ENS) ------------------- */

DataObject iedModel_BIKE_XSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

/* ------------------- Data Object: Pos (CDC: DCP) ------------------- */

 DataObject iedModel_BIKE_XSWI1_Pos = {
     DataObjectModelType,
     "Pos",
     (ModelNode*) &iedModel_BIKE_XSWI1,
     (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     0
 };

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_stVal,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin = {
     DataAttributeModelType,
     "origin",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_ctlNum,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat,
     0,
     IEC61850_FC_CO,
     IEC61850_CONSTRUCTED,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat = {
     DataAttributeModelType,
     "orCat",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_ENUMERATED,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent = {
     DataAttributeModelType,
     "orIdent",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
     NULL,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_OCTET_STRING_64,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlNum = {
     DataAttributeModelType,
     "ctlNum",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_T,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_INT8U,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_T = {
     DataAttributeModelType,
     "T",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_Test,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_TIMESTAMP,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Test = {
     DataAttributeModelType,
     "Test",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_Check,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_BOOLEAN,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Check = {
     DataAttributeModelType,
     "Check",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
     NULL,
     NULL,
     0,
     IEC61850_FC_CO,
     IEC61850_CHECK,
     0,
     NULL,
     0};

 DataAttribute iedModel_BIKE_XSWI1_Pos_stVal = {
     DataAttributeModelType,
     "stVal",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_q,
     NULL,
     0,
     IEC61850_FC_ST,
     IEC61850_BOOLEAN,
     0 + TRG_OPT_DATA_CHANGED,
     NULL,
     0};
    
 DataAttribute iedModel_BIKE_XSWI1_Pos_q = {
     DataAttributeModelType,
     "q",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_t,
     NULL,
     0,
     IEC61850_FC_ST,
     IEC61850_QUALITY,
     0 + TRG_OPT_QUALITY_CHANGED,
     NULL,
     0};
    
 DataAttribute iedModel_BIKE_XSWI1_Pos_t = {
     DataAttributeModelType,
     "t",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_ctlModel,
     NULL,
     0,
     IEC61850_FC_ST,
     IEC61850_TIMESTAMP,
     0,
     NULL,
     0};
    
 DataAttribute iedModel_BIKE_XSWI1_Pos_ctlModel = {
     DataAttributeModelType,
     "ctlModel",
     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
     NULL,
     NULL,
     0,
     IEC61850_FC_CF,
     IEC61850_ENUMERATED,
     0 + TRG_OPT_DATA_CHANGED,
     NULL,
     0};


/* ------------------- Data Object: BlkOpn (CDC: DPC) ------------------- */

DataObject iedModel_BIKE_XSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};
    
/* ------------------- Data Object: BlkCls (CDC: DPC) ------------------- */    

DataObject iedModel_BIKE_XSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};


/* ------------------- Data Object: Beh (CDC: ENS) ------------------- */ 

DataObject iedModel_BIKE_XSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED, //A versão da biblioteca usa o tipo genérico ENUMERATED para o Beh.stVal
    0 + TRG_OPT_DATA_CHANGED, 
    NULL, 
    0};

DataAttribute iedModel_BIKE_XSWI1_Beh_q = {
    DataAttributeModelType,
    "q", /*Qualidade do dado*/
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST, /*FC = ST*/
    IEC61850_QUALITY, /*Tipo de dado = Qualidade*/
    0 + TRG_OPT_QUALITY_CHANGED, /*Gatilho para enviar uma mensagem quando a qualidade mudar*/
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_Beh_t = {
    DataAttributeModelType,
    "t", /*Timestamp do dado*/
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST, /*FC = ST*/
    IEC61850_TIMESTAMP, /*Tipo de dado = Timestamp*/
    0, /*Sem gatilho*/
    NULL,
    0};


/* ------------------- Data Object: Health (CDC: ENS) ------------------- */ 

DataObject iedModel_BIKE_XSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    NULL,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_XSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_Health_q = {
    DataAttributeModelType,
    "q", /*Qualidade do dado*/
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST, /*FC = ST*/
    IEC61850_QUALITY, /*Tipo de dado = Qualidade*/
    0 + TRG_OPT_QUALITY_CHANGED, /*Gatilho para enviar uma mensagem quando a qualidade mudar*/
    NULL,
    0};

DataAttribute iedModel_BIKE_XSWI1_Health_t = {
    DataAttributeModelType,
    "t", /*Timestamp do dado*/
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST, /*FC = ST*/
    IEC61850_TIMESTAMP, /*Tipo de dado = Timestamp*/
    0, /*Sem gatilho*/
    NULL,
    0};

/* ----------------- COMEÇO DO DBAT1 ------------------- */

LogicalNode iedModel_BIKE_DBAT1 = {
    LogicalNodeModelType,
    "DBAT1",
    (ModelNode*) &iedModel_BIKE, 
    (ModelNode*) &iedModel_BIKE_LGOS1, /* Corrigido: Apontava para LGOS11 que não existe */
    (ModelNode*) &iedModel_BIKE_DBAT1_EEName 
};


/* ------------------- Data Object: EEName (CDC: DLP) ------------------- */


DataObject iedModel_BIKE_DBAT1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaSt,
    (ModelNode*) &iedModel_BIKE_DBAT1_EEName_vendor,
    0
};

DataAttribute iedModel_BIKE_DBAT1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_DBAT1_EEName,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

/* ------------------- Data Object: ChaSt (CDC: SPS) ------------------- */

DataObject iedModel_BIKE_DBAT1_ChaSt = {
    DataObjectModelType,
    "ChaSt",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_DschSt,
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaSt_stVal,
    0
};

DataAttribute iedModel_BIKE_DBAT1_ChaSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaSt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0};

/* ------------------- Data Object: DschSt (CDC: SPS) ------------------- */

DataObject iedModel_BIKE_DBAT1_DschSt = {
    DataObjectModelType,
    "DschSt",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_DBAT1_DschSt_stVal,
    0
};

DataAttribute iedModel_BIKE_DBAT1_DschSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DBAT1_DschSt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0};

/* ------------------- Data Object: EEHealth (CDC: ENS) ------------------- */

DataObject iedModel_BIKE_DBAT1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_Amp,
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth_stVal,
    0
};

DataAttribute iedModel_BIKE_DBAT1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_BIKE_DBAT1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_DBAT1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DBAT1_EEHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};
/* ------------------- Data Object: Amp (CDC: MV) ------------------- */

DataObject iedModel_BIKE_DBAT1_Amp = {
    DataObjectModelType,
    "Amp",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_Watt,
    (ModelNode*) &iedModel_BIKE_DBAT1_Amp_mag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_Amp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DBAT1_Amp,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32, //O tipo ANALOG_VALUE é basicamente um FLOAT32 em versões mais antigas da biblioteca
    TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};


/* ------------------- Data Object: Watt (CDC: MV) ------------------- */

DataObject iedModel_BIKE_DBAT1_Watt = {
    DataObjectModelType,
    "Watt",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_BIKE_DBAT1_Watt_mag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_Watt_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DBAT1_Watt,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

/* ------------------- Data Object: AvlChaAhr (CDC: MV) ------------------- */

DataObject iedModel_BIKE_DBAT1_AvlChaAhr = {
    DataObjectModelType,
    "AvlChaAhr",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlChaAhr_mag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_AvlChaAhr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlChaAhr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

/* ------------------- Data Object: AvlDschAhr (CDC: MV) ------------------- */

DataObject iedModel_BIKE_DBAT1_AvlDschAhr = {
    DataObjectModelType,
    "AvlDschAhr",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_BatTyp,
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlDschAhr_mag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_AvlDschAhr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DBAT1_AvlDschAhr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

/* ------------------- Data Object: BatTyp (CDC: ENG) ------------------- */

DataObject iedModel_BIKE_DBAT1_BatTyp = {
    DataObjectModelType,
    "BatTyp",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_BIKE_DBAT1_BatTyp_stVal,
    0
};

DataAttribute iedModel_BIKE_DBAT1_BatTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DBAT1_BatTyp,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0};



/* ------------------- Data Object: ChaAmpMax (CDC: ASG) ------------------- */

DataObject iedModel_BIKE_DBAT1_ChaAmpMax = {
    DataObjectModelType,
    "ChaAmpMax",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    (ModelNode*) &iedModel_BIKE_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaAmpMax_setMag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_ChaAmpMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DBAT1_ChaAmpMax,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0};

/* ------------------- Data Object: AhrRtg (CDC: ASG) ------------------- */

DataObject iedModel_BIKE_DBAT1_AhrRtg = {
    DataObjectModelType,
    "AhrRtg",
    (ModelNode*) &iedModel_BIKE_DBAT1,
    NULL,
    (ModelNode*) &iedModel_BIKE_DBAT1_AhrRtg_setMag,
    0
};

DataAttribute iedModel_BIKE_DBAT1_AhrRtg_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DBAT1_AhrRtg,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0};


/* ------------------- COMEÇO DO LGOS1 ------------------- */

 LogicalNode iedModel_BIKE_LGOS1 = {
    LogicalNodeModelType,
    "LGOS1",
    (ModelNode*) &iedModel_BIKE, /* Parent */
    (ModelNode*) &iedModel_BIKE_LTIM1, /* Sibling */
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod /* Child */
};

/* ------------------- Data Object: Mod (CDC: ENC) ------------------- */
DataObject iedModel_BIKE_LGOS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh,
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod,
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod,
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod,
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_LGOS1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Beh (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LGOS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_Health,
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh,
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh,
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Health (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LGOS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LGOS1_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_Health,
    (ModelNode*) &iedModel_BIKE_LGOS1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_Health,
    (ModelNode*) &iedModel_BIKE_LGOS1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6I850_ (com 'I') */
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: NamPlt (CDC: LPL) ------------------- */
DataObject iedModel_BIKE_LGOS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_GoCBRef,
    (ModelNode*) &iedModel_BIKE_LGOS1_NamPlt_vendor,
    0
};

DataAttribute iedModel_BIKE_LGOS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LGOS1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

/* ------------------- Data Object: GoCBRef (CDC: ORG) ------------------- */
DataObject iedModel_BIKE_LGOS1_GoCBRef = {
    DataObjectModelType,
    "GoCBRef",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_St,
    (ModelNode*) &iedModel_BIKE_LGOS1_GoCBRef_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_GoCBRef_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_GoCBRef,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    0,//IEC61850_OBJ_REF,
    0,
    NULL,
    0
};

/* ------------------- Data Object: St (CDC: INS) ------------------- */
DataObject iedModel_BIKE_LGOS1_St = {
    DataObjectModelType,
    "St",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom,
    (ModelNode*) &iedModel_BIKE_LGOS1_St_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_St_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_St,
    (ModelNode*) &iedModel_BIKE_LGOS1_St_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_St_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_St,
    (ModelNode*) &iedModel_BIKE_LGOS1_St_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_St_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_St,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: NdsCom (CDC: SPS) ------------------- */
DataObject iedModel_BIKE_LGOS1_NdsCom = {
    DataObjectModelType,
    "NdsCom",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt,
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_NdsCom_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom,
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_NdsCom_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom,
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_NdsCom_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_NdsCom,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: SimSt (CDC: INS) ------------------- */
DataObject iedModel_BIKE_LGOS1_SimSt = {
    DataObjectModelType,
    "SimSt",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_SimSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt,
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_SimSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt,
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_SimSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_SimSt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: ConfRevNum (CDC: INS) ------------------- */
DataObject iedModel_BIKE_LGOS1_ConfRevNum = {
    DataObjectModelType,
    "ConfRevNum",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_ConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_ConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_ConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_ConfRevNum,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: RxConfRevNum (CDC: INS) ------------------- */
DataObject iedModel_BIKE_LGOS1_RxConfRevNum = {
    DataObjectModelType,
    "RxConfRevNum",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_RxConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_RxConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_RxConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_RxConfRevNum,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: LastStNum (CDC: INS) ------------------- */
DataObject iedModel_BIKE_LGOS1_LastStNum = {
    DataObjectModelType,
    "LastStNum",
    (ModelNode*) &iedModel_BIKE_LGOS1,
    NULL,
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum_stVal,
    0
};

DataAttribute iedModel_BIKE_LGOS1_LastStNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_LastStNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum,
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LGOS1_LastStNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LGOS1_LastStNum,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------------------------------------------------------
 * MODELAGEM NÓ LÓGICO LTIM1 (Time)
 * ------------------------------------------------------------------ */

LogicalNode iedModel_BIKE_LTIM1 = {
    LogicalNodeModelType,
    "LTIM1",
    (ModelNode*) &iedModel_BIKE, /* Parent */
    (ModelNode*) &iedModel_BIKE_LTMS1, /* Sibling */
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod /* Child */
};

/* ------------------- Data Object: Mod (CDC: ENC) ------------------- */
DataObject iedModel_BIKE_LTIM1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BIKE_LTIM1,
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh,
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod_stVal,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod,
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod,
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod,
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_LTIM1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Beh (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LTIM1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_LTIM1,
    (ModelNode*) &iedModel_BIKE_LTIM1_Health,
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh,
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh,
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTIM1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Health (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LTIM1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_LTIM1,
    (ModelNode*) &iedModel_BIKE_LTIM1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LTIM1_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    /* Corrigido: 't' solto removido daqui */
    (ModelNode*) &iedModel_BIKE_LTIM1_Health,
    (ModelNode*) &iedModel_BIKE_LTIM1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTIM1_Health,
    (ModelNode*) &iedModel_BIKE_LTIM1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTIM1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: NamPlt (CDC: LPL) ------------------- */
DataObject iedModel_BIKE_LTIM1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LTIM1,
    (ModelNode*) &iedModel_BIKE_LTIM1_Tm,
    (ModelNode*) &iedModel_BIKE_LTIM1_NamPlt_vendor,
    0
};

DataAttribute iedModel_BIKE_LTIM1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LTIM1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC, /* Corrigido: Era IEC6IA50_ */
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Tm (CDC: TS) ------------------- */
/* Nota: Interpretado de 'LTIM1TmDT'. O DO padrão para tempo é 'Tm'. */
DataObject iedModel_BIKE_LTIM1_Tm = {
    DataObjectModelType,
    "Tm",
    (ModelNode*) &iedModel_BIKE_LTIM1,
    NULL,
    (ModelNode*) &iedModel_BIKE_LTIM1_Tm_val,
    0
};

DataAttribute iedModel_BIKE_LTIM1_Tm_val = {
    DataAttributeModelType,
    "val",
    (ModelNode*) &iedModel_BIKE_LTIM1_Tm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST, //: O FC de TS (Timestamp) não existe nessa versão. Substitui pelo ST (status)
    IEC61850_TIMESTAMP,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};


/* ------------------------------------------------------------------
 * MODELAGEM NÓ LÓGico LTMS1 (Time Supervision)
 * ------------------------------------------------------------------ */

LogicalNode iedModel_BIKE_LTMS1 = {
    LogicalNodeModelType,
    "LTMS1",
    (ModelNode*) &iedModel_BIKE, /* Parent */
    NULL, /* Sibling (úLTIM1o nó da cadeia, por enquanto) */
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod /* Child */
};

/* ------------------- Data Object: Mod (CDC: ENC) ------------------- */
DataObject iedModel_BIKE_LTMS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh,
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod_stVal,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod,
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod,
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6Stopwatch_ */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod,
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_LTMS1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Beh (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LTMS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    (ModelNode*) &iedModel_BIKE_LTMS1_Health,
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh,
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh,
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTMS1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: Health (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_LTMS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    (ModelNode*) &iedModel_BIKE_LTMS1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LTMS1_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTMS1_Health,
    (ModelNode*) &iedModel_BIKE_LTMS1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTMS1_Health,
    (ModelNode*) &iedModel_BIKE_LTMS1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTMS1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6l850_ (com 'l' minúsculo) */
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: NamPlt (CDC: LPL) ------------------- */
DataObject iedModel_BIKE_LTMS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc,
    (ModelNode*) &iedModel_BIKE_LTMS1_NamPlt_vendor,
    0
};

DataAttribute iedModel_BIKE_LTMS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LTMS1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

/* ------------------- Data Object: TmSrc (CDC: VSS) ------------------- */
DataObject iedModel_BIKE_LTMS1_TmSrc = {
    DataObjectModelType,
    "TmSrc",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc_stVal,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_255,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ------------------- Data Object: TmSrcTyp (CDC: INS) ------------------- */

DataObject iedModel_BIKE_LTMS1_TmSrcTyp = {
    DataObjectModelType,
    "TmSrcTyp",
    (ModelNode*) &iedModel_BIKE_LTMS1,
    NULL, /* Fim da cadeia de DOs deste LN */
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp_stVal,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrcTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrcTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp_t,
    NULL,
    0,
    IEC61850_FC_ST, /* Corrigido: Era IEC6IA50_ */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LTMS1_TmSrcTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LTMS1_TmSrcTyp,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* * Blocos duplicados de LTMS1 foram removidos daqui.
 */


static void
initializeValues()
{
/* Linhas comentadas abaixo referenciam LNs (LLN0, DEEV1, GGIO1) 
 * que não estão definidos neste arquivo. Elas causarão erros de compilação 
 * se não forem comentadas ou se os LNs ausentes não forem adicionados.
 */

/*
iedModel_BIKE_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);
iedModel_BIKE_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);
iedModel_BIKE_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);
iedModel_BIKE_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);
iedModel_BIKE_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("FRIENDS Lab");
iedModel_BIKE_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("1.0");
iedModel_BIKE_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2020");
iedModel_BIKE_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("MMS MOVE UFF");
*/


/*
iedModel_BIKE_DEEV1_EVNam_vendor.mmsValue = MmsValue_newVisibleString("FRIENDS Lab");
iedModel_BIKE_DEEV1_ConnTypSel_stVal.mmsValue = MmsValue_newInteger(1);
iedModel_BIKE_DEEV1_Beh_stVal.mmsValue = MmsValue_newInteger(1);
iedModel_BIKE_DEEV1_Health_stVal.mmsValue = MmsValue_newInteger(1);
iedModel_BIKE_DEEV1_EVId_stVal.mmsValue = MmsValue_newVisibleString("1");
iedModel_BIKE_DEEV1_VMax_setMag.mmsValue = MmsValue_newFloat(24);
iedModel_BIKE_DEEV1_AMax_setMag.mmsValue = MmsValue_newFloat(5);
*/


/* O LN XSWI1 está definido, então estas linhas podem funcionar */
iedModel_BIKE_XSWI1_SwTyp_stVal.mmsValue = MmsValue_newInteger(1);
iedModel_BIKE_XSWI1_Loc_stVal.mmsValue = MmsValue_newBoolean(true);
iedModel_BIKE_XSWI1_BlkOpn_ctlModel.mmsValue = MmsValue_newVisibleString("1");
iedModel_BIKE_XSWI1_BlkCls_ctlModel.mmsValue = MmsValue_newVisibleString("1");
//iedModel_BIKE_XSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);


/*
iedModel_BIKE_GGIO1_EEName_vendor.mmsValue = MmsValue_newVisibleString("KYA Engenharia");
iedModel_BIKE_GGIO1_EEName_name.mmsValue = MmsValue_newVisibleString("Matheus Ayello");
iedModel_BIKE_GGIO1_Intln_stVal.mmsValue = MmsValue_newInteger(1);
*/

}