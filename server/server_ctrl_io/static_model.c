#include "static_model.h"
#include <stdio.h>
#include "iec61850_server.h" 

static void initializeValues();

LogicalDevice iedModel_B1CTR = {
    LogicalDeviceModelType,
    "B1CTR",
    (ModelNode*) &iedModel, 
    NULL,
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    NULL,
};

/* ================================================================
 * IMPLEMENTAÇÃO LPHD1 (Informações Físicas)
 * ================================================================
 */

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
};

DataAttribute iedModel_B1CTR_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1CTR_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataObject iedModel_B1CTR_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
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
    TRG_OPT_DATA_UPDATE,
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
    TRG_OPT_QUALITY_CHANGED,
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
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    (ModelNode*) &iedModel_B1CTR_LPHD1_OpTmh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE,
    NULL,
    0,
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
    TRG_OPT_QUALITY_CHANGED
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
};

DataObject iedModel_B1CTR_LPHD1_Sim = {
    DataObjectModelType,
    "Sim",
    (ModelNode*) &iedModel_B1CTR_LPHD1,
    NULL,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_stVal = {
    DataAttributeModelType,
    "stVal",
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
    DataAttributeModelType,
    "q",
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
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1CTR_LPHD1_Sim_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Sim,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
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
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
};

DataObject iedModel_B1CTR_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Beh,
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
};

DataAttribute iedModel_B1CTR_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
};

DataObject iedModel_B1CTR_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Mod,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
};

DataObject iedModel_B1CTR_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
};

DataObject iedModel_B1CTR_LLN0_Diag = {
    DataObjectModelType,
    "Diag",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_Diag_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1CTR_LLN0_Diag_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1CTR_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
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
    DataAttributeModelType,
    "q",
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
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1CTR_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
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
    (ModelNode*) &iedModel_B1CTR_LGOS1_Beh,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
};

DataObject iedModel_B1CTR_LGOS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
};

DataObject iedModel_B1CTR_LGOS1_GoCBRef = {
    DataObjectModelType,
    "GoCBRef",
    (ModelNode*) &iedModel_B1CTR_LGOS1,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LGOS1_GoCBRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1CTR_LGOS1_GoCBRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1CTR_LGOS1_LastStNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_LastStNum,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
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
    (ModelNode*) &iedModel_B1CTR_LTIM1_Beh,
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
    TRG_OPT_DATA_CHANGED
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
    TRG_OPT_QUALITY_CHANGED
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
};

/* ==================================================================
 * IMPLEMENTAÇÃO LTRK1
 * ==================================================================
 */

LogicalNode iedModel_B1CTR_LTRK1 = {
    LogicalNodeModelType,
    "LTRK1",
    (ModelNode*) &iedModel_B1CTR,
    NULL,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
};

DataObject iedModel_B1CTR_LTRK1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
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
    DataAttributeModelType,
    "q",
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
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1CTR_LTRK1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
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
    DataAttributeModelType,
    "q",
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
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1CTR_LTRK1_GenTrk = {
    DataObjectModelType,
    "GenTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_objRef = {
    DataAttributeModelType,
    "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1CTR_LTRK1_UrcbTrk = {
    DataObjectModelType,
    "UrcbTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_objRef = {
    DataAttributeModelType,
    "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_129,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_resv,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_resv = {
    DataAttributeModelType,
    "resv",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT8U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataObject iedModel_B1CTR_LTRK1_BrcbTrk = {
    DataObjectModelType,
    "BrcbTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_objRef = {
    DataAttributeModelType,
    "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_129,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT16U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_purgeBuf,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_purgeBuf = {
    DataAttributeModelType,
    "purgeBuf",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataObject iedModel_B1CTR_LTRK1_GocbTrk = {
    DataObjectModelType,
    "GocbTrk",
    (ModelNode*) &iedModel_B1CTR_LTRK1,
    NULL,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_objRef,
    0,
    -1
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_objRef = {
    DataAttributeModelType,
    "objRef",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_serviceType,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_129,
    TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_ENUMERATED,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goEna = {
    DataAttributeModelType,
    "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goID = {
    DataAttributeModelType,
    "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_129,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_INT32U,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_ndsCom = {
    DataAttributeModelType,
    "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_dstAddress = {
    DataAttributeModelType,
    "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SR,
    IEC61850_OCTET_STRING_8,
    0,
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