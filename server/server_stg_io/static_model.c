/*
 * static_model.c
 * Dispositivo: B1STG
 * Nós Ativos: LLN0, XSWI1, TTMP1, DBAT1
 * (ZBAT1 está comentado)
 */

#include "static_model.h"

static void initializeValues();

IedModel iedModel = {
    "MoveUFF_",                      /* name */
    (LogicalDevice*) &iedModel_B1STG, /* firstChild */
    NULL,                           /* dataSets */
    NULL,                           /* allDataSets */
    NULL,                           /* GCBs */
    NULL,                           /* SVCBs */
    NULL,                           /* GoCBs */
    NULL,                           /* pendingRequests */
    NULL,                           /* mmsServer */
    initializeValues                /* initialize callback */
};

LogicalDevice iedModel_B1STG = {
    LogicalDeviceModelType,
    "B1STG",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_B1STG_LLN0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO LLN0
 * ==================================================================
 */

LogicalNode iedModel_B1STG_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh
};

/* --- Data Object: Beh (CDC: ENS) --- */
DataObject iedModel_B1STG_LLN0_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_LLN0_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_LLN0_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS) --- */
DataObject iedModel_B1STG_LLN0_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_LLN0_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_LLN0_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: NamPlt (CDC: LPL) --- */
DataObject iedModel_B1STG_LLN0_NamPlt = {
    DataObjectModelType, "NamPlt",
    (ModelNode*) &iedModel_B1STG_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_NamPlt_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1STG_LLN0_NamPlt_swRev = {
    DataAttributeModelType, "swRev",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1STG_LLN0_NamPlt_d = {
    DataAttributeModelType, "d",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* ==================================================================
 * IMPLEMENTAÇÃO XSWI1
 * ==================================================================
 */

LogicalNode iedModel_B1STG_XSWI1 = {
    LogicalNodeModelType,
    "XSWI1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_TTMP1, 
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp
};

/* --- Data Object: SwTyp (CDC: ENS) --- */
DataObject iedModel_B1STG_XSWI1_SwTyp = {
    DataObjectModelType, "SwTyp",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Loc (CDC: SPS) --- */
DataObject iedModel_B1STG_XSWI1_Loc = {
    DataObjectModelType, "Loc",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Loc_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Loc_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Loc_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: OpCnt (CDC: INS) --- */
DataObject iedModel_B1STG_XSWI1_OpCnt = {
    DataObjectModelType, "OpCnt",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Beh (CDC: ENS) --- */
DataObject iedModel_B1STG_XSWI1_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS) --- */
DataObject iedModel_B1STG_XSWI1_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Pos (CDC: DPC - Status) --- */
DataObject iedModel_B1STG_XSWI1_Pos = {
    DataObjectModelType, "Pos",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Pos_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Pos_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_Pos_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_XSWI1_Pos_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* --- Data Object: BlkOpn (CDC: SPC - Status & Control) --- */
DataObject iedModel_B1STG_XSWI1_BlkOpn = {
    DataObjectModelType, "BlkOpn",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper, 
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper = {
    DataAttributeModelType, "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_stVal, 
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal, 
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType, "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType, "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlNum, 
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orCat, 
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType, "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orIdent, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8, /* Enum OrCat */
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType, "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType, "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_T, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType, "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_Test, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType, "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_Check, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType, "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* --- Data Object: BlkCls (CDC: SPC - Status & Control) --- */
DataObject iedModel_B1STG_XSWI1_BlkCls = {
    DataObjectModelType, "BlkCls",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    NULL, /* Fim da cadeia */
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper = {
    DataAttributeModelType, "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_stVal,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal, 
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType, "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType, "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_ctlNum, 
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orCat, 
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType, "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orIdent, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType, "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType, "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_T, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_T = {
    DataAttributeModelType, "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_Test, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType, "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_Check, 
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType, "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


/* ==================================================================
 * MODELAGEM NÓ LÓGICO TTMP1 (NOVO)
 * ==================================================================
 */

LogicalNode iedModel_B1STG_TTMP1 = {
    LogicalNodeModelType,
    "TTMP1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt 
};

/* --- Data Object: NamPlt (CDC: LPL) --- */
DataObject iedModel_B1STG_TTMP1_NamPlt = {
    DataObjectModelType, "NamPlt",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_swRev = {
    DataAttributeModelType, "swRev",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_d = {
    DataAttributeModelType, "d",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* --- Data Object: Beh (CDC: ENS) --- */
DataObject iedModel_B1STG_TTMP1_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS) --- */
DataObject iedModel_B1STG_TTMP1_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: TmpSv (CDC: SAV - Valor de Temperatura) --- */
DataObject iedModel_B1STG_TTMP1_TmpSv = {
    DataObjectModelType, "TmpSv",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag = {
    DataAttributeModelType, "instMag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_q,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: TmpTgt (CDC: ASG - Alvo de Temperatura) --- */
DataObject iedModel_B1STG_TTMP1_TmpTgt = {
    DataObjectModelType, "TmpTgt",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    NULL,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag = {
    DataAttributeModelType, "setMag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC = {
    DataAttributeModelType, "sVC",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    NULL,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_scaleFactor = {
    DataAttributeModelType, "scaleFactor",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_offset = {
    DataAttributeModelType, "offset",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO DBAT1
 * ==================================================================
 */

LogicalNode iedModel_B1STG_DBAT1 = {
    LogicalNodeModelType,
    "DBAT1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
};

/* --- Data Object: EEName (CDC: DPL) --- */
DataObject iedModel_B1STG_DBAT1_EEName = {
    DataObjectModelType, "EEName",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName_vendor, 
    0,
    -1
};

/* Atributo: vendor */
DataAttribute iedModel_B1STG_DBAT1_EEName_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1STG_DBAT1_EEName_model = {
    DataAttributeModelType, "model",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* --- Data Object: ChaSt (CDC: SPS) --- */
DataObject iedModel_B1STG_DBAT1_ChaSt = {
    DataObjectModelType, "ChaSt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: DschSt (CDC: SPS) --- */
DataObject iedModel_B1STG_DBAT1_DschSt = {
    DataObjectModelType, "DschSt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_DschSt_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_DschSt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_DschSt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: EEHealth (CDC: ENS) --- */
DataObject iedModel_B1STG_DBAT1_EEHealth = {
    DataObjectModelType, "EEHealth",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Amp (CDC: MV) --- */
DataObject iedModel_B1STG_DBAT1_Amp = {
    DataObjectModelType, "Amp",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_Amp_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_Amp_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_Amp_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_Amp_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_DBAT1_Amp_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0
};

/* --- Data Object: Watt (CDC: MV) --- */
DataObject iedModel_B1STG_DBAT1_Watt = {
    DataObjectModelType, "Watt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_Watt_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_Watt_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_Watt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_Watt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_DBAT1_Watt_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    TRG_OPT_DATA_CHANGED,
};

/* --- Data Object: AvlChaAhr (CDC: MV) --- */
DataObject iedModel_B1STG_DBAT1_AvlChaAhr = {
    DataObjectModelType, "AvlChaAhr",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0
};

/* --- Data Object: AvlDschAhr (CDC: MV) --- */
DataObject iedModel_B1STG_DBAT1_AvlDschAhr = {
    DataObjectModelType, "AvlDschAhr",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0
};

/* --- Data Object: BatTyp (CDC: ENG - Enum Setting) --- */
DataObject iedModel_B1STG_DBAT1_BatTyp = {
    DataObjectModelType, "BatTyp",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_setVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_setVal = {
    DataAttributeModelType, "setVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: ChaAmpMax (CDC: ASG - Analog Setting) --- */
DataObject iedModel_B1STG_DBAT1_ChaAmpMax = {
    DataObjectModelType, "ChaAmpMax",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag = {
    DataAttributeModelType, "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC = {
    DataAttributeModelType, "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_scaleFactor = {
    DataAttributeModelType, "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_offset = {
    DataAttributeModelType, "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* --- Data Object: AhrRtg (CDC: ASG - Analog Setting) --- */
DataObject iedModel_B1STG_DBAT1_AhrRtg = {
    DataObjectModelType, "AhrRtg",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag = {
    DataAttributeModelType, "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC = {
    DataAttributeModelType, "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_scaleFactor = {
    DataAttributeModelType, "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_offset = {
    DataAttributeModelType, "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* --- Data Object: ChaVolMaxRtg (CDC: ASG - Analog Setting) --- */
DataObject iedModel_B1STG_DBAT1_ChaVolMaxRtg = {
    DataObjectModelType, "ChaVolMaxRtg",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag = {
    DataAttributeModelType, "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC = {
    DataAttributeModelType, "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_scaleFactor = {
    DataAttributeModelType, "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_offset = {
    DataAttributeModelType, "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* --- Data Object: SocPro (CDC: SPS - Status) --- */
DataObject iedModel_B1STG_DBAT1_SocPro = {
    DataObjectModelType, "SocPro",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_SocPro_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_SocPro_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_DBAT1_SocPro_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO ZBAT1
 * ==================================================================
 */

LogicalNode iedModel_B1STG_ZBAT1 = {
    LogicalNodeModelType,
    "ZBAT1",
    (ModelNode*) &iedModel_B1STG,
    NULL,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi 
};

/* --- Data Object: BatHi (CDC: SPS - Status) --- */
DataObject iedModel_B1STG_ZBAT1_BatHi = {
    DataObjectModelType, "BatHi",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: BatLo (CDC: SPS - Status) --- */
DataObject iedModel_B1STG_ZBAT1_BatLo = {
    DataObjectModelType, "BatLo",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Beh (CDC: ENS - Status Enum) --- */
DataObject iedModel_B1STG_ZBAT1_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS - Status Enum) --- */
DataObject iedModel_B1STG_ZBAT1_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: VolChgRte (CDC: MV - Medição) --- */
DataObject iedModel_B1STG_ZBAT1_VolChgRte = {
    DataObjectModelType, "VolChgRte",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    NULL,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_q,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

static void
initializeValues()
{
}