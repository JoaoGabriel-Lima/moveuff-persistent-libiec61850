#include "static_model.h"

static void initializeValues();

LogicalDevice iedModel_B1CTR = {
    LogicalDeviceModelType,
    "B1CTR",
    (ModelNode*) &iedModel, 
    NULL,
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    NULL,
};

LogicalNode iedModel_B1CTR_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_B1CTR,
    (ModelNode*) &iedModel_B1CTR_LLN0, 
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
};

DataObject iedModel_B1CTR_LPHD1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};


DataObject iedModel_B1CTR_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_PhyNam_model = {
    DataAttributeModelType, "model",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam,
    NULL, 
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1CTR_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LPHD1_OutOv = {
    DataObjectModelType,
    "OutOv",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_OutOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_OutOv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_OutOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LPHD1_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_OpTmh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_OpTmh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* --- Data Object: Sim (CDC: SPC - Simulation Mode) --- */
DataObject iedModel_B1CTR_LPHD1_Sim = {
    DataObjectModelType, "Sim",
    (ModelNode*) &iedModel_B1CTR_LPHD1, 
    NULL, 
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_stVal, 
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_q, 
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_t,  
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_ctlModel,  
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    NULL, 
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* ==================================================================
 * IMPLEMENTAÇÃO LLN0
 * ==================================================================
 */

LogicalNode iedModel_B1CTR_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1CTR,
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
};

DataObject iedModel_B1CTR_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0
};


DataObject iedModel_B1CTR_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Health,
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh,
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh,
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};


DataObject iedModel_B1CTR_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_Health,
    (ModelNode*) &iedModel_B1CTR_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LLN0_Health,
    (ModelNode*) &iedModel_B1CTR_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

/* --- Data Object: LEDRs (CDC: SPC - LED Reset) --- */
DataObject iedModel_B1CTR_LLN0_LEDRs = {
    DataObjectModelType, "LEDRs",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    NULL, 
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper, 
    0,
    -1
};

/* Estrutura Oper (Comando) */
DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper = {
    DataAttributeModelType, "Oper",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_stVal, 
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_ctlVal = {
    DataAttributeModelType, "ctlVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_origin,  
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_origin = {
    DataAttributeModelType, "origin",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_ctlNum,  
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_origin_orCat,  
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_origin_orCat = {
    DataAttributeModelType, "orCat",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_origin,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_origin_orIdent,  
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_origin_orIdent = {
    DataAttributeModelType, "orIdent",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_ctlNum = {
    DataAttributeModelType, "ctlNum",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_T,  
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_T = {
    DataAttributeModelType, "T",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_Test,  
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_Test = {
    DataAttributeModelType, "Test",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper_Check,  
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_Oper_Check = {
    DataAttributeModelType, "Check",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_q,  
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_t,  
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_ctlModel,  
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/*
 * ==================================================================
 * IMPLEMENTAÇÃO LGOS1
 * ==================================================================
 */

LogicalNode iedModel_B1CTR_LGOS1 = {
    LogicalNodeModelType,
    "LGOS1",
    (ModelNode*) &iedModel_B1CTR,  
    (ModelNode*) &iedModel_B1CTR_LTIM1, 
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh 
};


DataObject iedModel_B1CTR_LGOS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health,
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_GoCBRef = {
    DataObjectModelType,
    "GoCBRef",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_GoCBRef_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef_q,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
     0 + TRG_OPT_DATA_CHANGED,
    0,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_GoCBRef_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_GoCBRef_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_St = {
    DataObjectModelType,
    "St",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_St_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_St_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_St_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_NdsCom = {
    DataObjectModelType,
    "NdsCom",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_NdsCom_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_NdsCom_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_NdsCom_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_SimSt = {
    DataObjectModelType,
    "SimSt",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_SimSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_SimSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_SimSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_ConfRevNum = {
    DataObjectModelType,
    "ConfRevNum",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_ConfRevNum,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_RxConfRevNum = {
    DataObjectModelType,
    "RxConfRevNum",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_RxConfRevNum,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LGOS1_LastStNum = {
    DataObjectModelType,
    "LastStNum",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    NULL, 
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_LastStNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_LastStNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum,
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LGOS1_LastStNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST, //CONFIRMAR
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/*
 * ==================================================================
 * IMPLEMENTAÇÃO LTIM1 (Time)
 * ==================================================================
 */

LogicalNode iedModel_B1CTR_LTIM1 = {
    LogicalNodeModelType,
    "LTIM1",
    (ModelNode*) &iedModel_B1CTR, 
    (ModelNode*) &iedModel_B1CTR_LTMS1,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh 
};

DataObject iedModel_B1CTR_LTIM1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1CTR_LTIM1,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTIM1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LTIM1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LTIM1,
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTIM1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health,
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTIM1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LTIM1_TmDT = {
    DataObjectModelType,
    "TmDT",
    (ModelNode*) &iedModel_B1CTR_LTIM1,
    NULL,  
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTIM1_TmDT_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN, 
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_TmDT_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTIM1_TmDT_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/*
 * ==================================================================
 * IMPLEMENTAÇÃO LTMS1 (Time Supervision)
 * ==================================================================
*/

LogicalNode iedModel_B1CTR_LTMS1 = {
    LogicalNodeModelType,
    "LTMS1",
    (ModelNode*) &iedModel_B1CTR, 
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc, 
};

DataObject iedModel_B1CTR_LTMS1_TmSrc = {
    DataObjectModelType,
    "TmSrc",
    (ModelNode*) &iedModel_B1CTR_LTMS1,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_255,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LTMS1_TmSrcTyp = {
    DataObjectModelType,
    "TmSrcTyp",
    (ModelNode*) &iedModel_B1CTR_LTMS1,
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTMS1_TmSrcTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataObject iedModel_B1CTR_LTMS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1CTR_LTMS1,
    NULL,  
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTMS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_B1CTR_LTMS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTMS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* ==================================================================
 * IMPLEMENTAÇÃO LTRK1 
 * ==================================================================
 */

LogicalNode iedModel_B1CTR_LTRK1 = {
    LogicalNodeModelType,
    "LTRK1",
    (ModelNode*) &iedModel_B1CTR,
    NULL,  : Ajuste se houver outro nó após este */
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt
};

DataObject iedModel_B1CTR_LTRK1_NamPlt = {
    DataObjectModelType, "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_NamPlt_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_NamPlt_swRev = {
    DataAttributeModelType, "swRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_NamPlt_d = {
    DataAttributeModelType, "d",
    (ModelNode*) &iedModel_B1CTR_LTRK1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1CTR_LTRK1_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1CTR_LTRK1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LTRK1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1CTR_LTRK1_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk, /* Aponta para GenTrk */
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1CTR_LTRK1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LTRK1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: GenTrk (CDC: CST - Common Service Tracking) --- */
DataObject iedModel_B1CTR_LTRK1_GenTrk = {
    DataObjectModelType, "GenTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_objRef = {
    DataAttributeModelType, "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_serviceType = {
    DataAttributeModelType, "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_errorCode = {
    DataAttributeModelType, "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: GocbTrk (CDC: GTS - GOOSE Tracking) --- */
DataObject iedModel_B1CTR_LTRK1_GocbTrk = {
    DataObjectModelType, "GocbTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    NULL, 
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_objRef = {
    DataAttributeModelType, "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_serviceType = {
    DataAttributeModelType, "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_errorCode = {
    DataAttributeModelType, "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goEna = {
    DataAttributeModelType, "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goID = {
    DataAttributeModelType, "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_datSet = {
    DataAttributeModelType, "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_confRev = {
    DataAttributeModelType, "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_ndsCom = {
    DataAttributeModelType, "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_dstAddress = {
    DataAttributeModelType, "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_6,
    0
};

IedModel iedModel = {
    "MoveUFF_",
    &iedModel_B1CTR,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

/*=================================  STATIC VOID  ===========================================*/

static void
initializeValues()
{

}