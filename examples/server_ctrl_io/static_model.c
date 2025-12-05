#include "static_model.h"

static void initializeValues();

LogicalDevice iedModel_CTRL = {
    LogicalDeviceModelType,
    "CTRL",
    (ModelNode*) &iedModel, /* O parent agora vai funcionar */
    NULL,
    (ModelNode*) &iedModel_CTRL_LPHD1,
    NULL,
};

LogicalNode iedModel_CTRL_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_LLN0, //(ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt,
};

DataObject iedModel_CTRL_LPHD1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam,
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt,
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt,
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LPHD1_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_CTRL_LPHD1_NamPlt,
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


DataObject iedModel_CTRL_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyNam,
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

DataObject iedModel_CTRL_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    (ModelNode*) &iedModel_CTRL_LPHD1_OutOv,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LPHD1_PhyHealth,
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

DataObject iedModel_CTRL_LPHD1_OutOv = {
    DataObjectModelType,
    "OutOv",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy,
    (ModelNode*) &iedModel_CTRL_LPHD1_OutOv_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_OutOv_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LPHD1_OutOv,
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

DataObject iedModel_CTRL_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    (ModelNode*) &iedModel_CTRL_LPHD1_OpTmh,
    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LPHD1_Proxy,
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

DataObject iedModel_CTRL_LPHD1_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_CTRL_LPHD1,
    NULL, //(ModelNode*) &iedModel_CTRL_LPHD1_Sim,
    (ModelNode*) &iedModel_CTRL_LPHD1_OpTmh_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LPHD1_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LPHD1_OpTmh,
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

/*================================= LLN0 ===========================================*/

LogicalNode iedModel_CTRL_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
};

DataObject iedModel_CTRL_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
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


DataObject iedModel_CTRL_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
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


DataObject iedModel_CTRL_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
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

DataObject iedModel_CTRL_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_LLN0,
    NULL,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
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

/*
 * ==================================================================
 * MODELAGEM NÓ LÓGICO LGOS1 (Goose Supervision)
 * ==================================================================
 */

LogicalNode iedModel_CTRL_LGOS1 = {
    LogicalNodeModelType,
    "LGOS1",
    (ModelNode*) &iedModel_CTRL, /* Parent */
    (ModelNode*) &iedModel_CTRL_LTIM1, /* Sibling (Será o LTIM1 quando você o adicionar) */
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod /* Child (Primeiro DO) */
};

DataObject iedModel_CTRL_LGOS1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh,
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod,
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod,
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod,
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_LGOS1_Mod,
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

DataObject iedModel_CTRL_LGOS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_Health,
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh,
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh,
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_Beh,
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

DataObject iedModel_CTRL_LGOS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_NamPlt,
    (ModelNode*) &iedModel_CTRL_LGOS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_Health,
    (ModelNode*) &iedModel_CTRL_LGOS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_Health,
    (ModelNode*) &iedModel_CTRL_LGOS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_Health,
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

DataObject iedModel_CTRL_LGOS1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_GoCBRef,
    (ModelNode*) &iedModel_CTRL_LGOS1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_LGOS1_NamPlt,
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

DataObject iedModel_CTRL_LGOS1_GoCBRef = {
    DataObjectModelType,
    "GoCBRef",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_St,
    (ModelNode*) &iedModel_CTRL_LGOS1_GoCBRef_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_GoCBRef_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_GoCBRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
     0 + TRG_OPT_DATA_CHANGED,
    0,
    NULL,
    0
};

DataObject iedModel_CTRL_LGOS1_St = {
    DataObjectModelType,
    "St",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom,
    (ModelNode*) &iedModel_CTRL_LGOS1_St_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_St_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_St,
    (ModelNode*) &iedModel_CTRL_LGOS1_St_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_St_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_St,
    (ModelNode*) &iedModel_CTRL_LGOS1_St_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_St_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_St,
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

DataObject iedModel_CTRL_LGOS1_NdsCom = {
    DataObjectModelType,
    "NdsCom",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt,
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_NdsCom_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom,
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_NdsCom_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom,
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_NdsCom_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_NdsCom,
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

DataObject iedModel_CTRL_LGOS1_SimSt = {
    DataObjectModelType,
    "SimSt",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_SimSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt,
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_SimSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt,
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_SimSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_SimSt,
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

DataObject iedModel_CTRL_LGOS1_ConfRevNum = {
    DataObjectModelType,
    "ConfRevNum",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_ConfRevNum,
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

DataObject iedModel_CTRL_LGOS1_RxConfRevNum = {
    DataObjectModelType,
    "RxConfRevNum",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_RxConfRevNum,
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

DataObject iedModel_CTRL_LGOS1_LastStNum = {
    DataObjectModelType,
    "LastStNum",
    (ModelNode*) &iedModel_CTRL_LGOS1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LGOS1_LastStNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_LastStNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum,
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LGOS1_LastStNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LGOS1_LastStNum,
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
 * MODELAGEM NÓ LÓGICO LTIM1 (Time)
 * ==================================================================
 */

LogicalNode iedModel_CTRL_LTIM1 = {
    LogicalNodeModelType,
    "LTIM1",
    (ModelNode*) &iedModel_CTRL, /* Assumindo que o LD se chama iedModel_CTRL */
    (ModelNode*) &iedModel_CTRL_LTMS1, /* Sibling (Próximo LN) - Mude se adicionar mais LNs */
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh /* Child (Primeiro DO é Beh) */
};

DataObject iedModel_CTRL_LTIM1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LTIM1,
    (ModelNode*) &iedModel_CTRL_LTIM1_Health,
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTIM1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh,
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh,
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTIM1_Beh,
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

DataObject iedModel_CTRL_LTIM1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CTRL_LTIM1,
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm,
    (ModelNode*) &iedModel_CTRL_LTIM1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTIM1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTIM1_Health,
    (ModelNode*) &iedModel_CTRL_LTIM1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTIM1_Health,
    (ModelNode*) &iedModel_CTRL_LTIM1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTIM1_Health,
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
 * ------------------------------------------------------------------
 * LTIM1 - Data Object: Tm (CDC: SPS)
 * (Adicionado conforme solicitado)
 * ------------------------------------------------------------------
 */

DataObject iedModel_CTRL_LTIM1_Tm = {
    DataObjectModelType,
    "Tm",
    (ModelNode*) &iedModel_CTRL_LTIM1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTIM1_Tm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm,
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN, /* Tipo de SPS (conforme seu pedido) */
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Tm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm,
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTIM1_Tm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTIM1_Tm,
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
 * MODELAGEM NÓ LÓGICO LTMS1 (Time Supervision)
 * ==================================================================
*/

LogicalNode iedModel_CTRL_LTMS1 = {
    LogicalNodeModelType,
    "LTMS1",
    (ModelNode*) &iedModel_CTRL, 
    NULL,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc 
};

DataObject iedModel_CTRL_LTMS1_TmSrc = {
    DataObjectModelType,
    "TmSrc",
    (ModelNode*) &iedModel_CTRL_LTMS1,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTMS1_TmSrc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_255, /* Tipo VSS (Visible String Status) */
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_TmSrc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_TmSrc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrc,
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

DataObject iedModel_CTRL_LTMS1_TmSrcTyp = {
    DataObjectModelType,
    "TmSrcTyp",
    (ModelNode*) &iedModel_CTRL_LTMS1,
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32, /* Tipo INS (Integer Status) */
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp,
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTMS1_TmSrcTyp,
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

DataObject iedModel_CTRL_LTMS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LTMS1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_CTRL_LTMS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh,
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED, /* Tipo ENS (Enumerated Status) */
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh,
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST, //CONFIRMAR
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_CTRL_LTMS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LTMS1_Beh,
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

IedModel iedModel = {
    "MoveUFF_",
    &iedModel_CTRL,
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