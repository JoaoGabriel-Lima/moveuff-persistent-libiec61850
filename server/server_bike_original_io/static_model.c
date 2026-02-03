#include "static_model.h"
#include <stdio.h>              // Para o printf
#include "iec61850_server.h"    // Para funções MmsValue
 
static void initializeValues();

LogicalDevice iedModel_B1EBK = {
    LogicalDeviceModelType,
    "B1EBK",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LLN0 
};

/* =================================================================
 * MODELAGEM NÓ LÓGICO LLN0
 * =================================================================
 */

LogicalNode iedModel_B1EBK_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_DEEV1, 
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh, 
};

DataObject iedModel_B1EBK_LLN0_Beh = {
    DataObjectModelType, 
    "Beh",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_Health,
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh,
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh,
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LLN0_Health = {
    DataObjectModelType, 
    "Health",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
    (ModelNode*) &iedModel_B1EBK_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LLN0_Health,
    (ModelNode*) &iedModel_B1EBK_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LLN0_Health,
    (ModelNode*) &iedModel_B1EBK_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LLN0_Mod = {
    DataObjectModelType, 
    "Mod",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_Mod_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Mod_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Mod_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LLN0_Mod_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1EBK_LLN0_Diag = {
    DataObjectModelType, 
    "Diag",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_Diag_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Diag_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_Diag_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LLN0_LEDRs = {
    DataObjectModelType, 
    "LEDRs",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_LEDRs_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_LEDRs_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LLN0_LEDRs_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LLN0_NamPlt = {
    DataObjectModelType, 
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LLN0_NamPlt_vendor = {
    DataAttributeModelType, 
    "vendor",
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_LLN0_NamPlt_swRev = {
    DataAttributeModelType, 
    "swRev",
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_LLN0_NamPlt_d = {
    DataAttributeModelType, 
    "d",
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_LLN0_NamPlt_configRev = {
    DataAttributeModelType, 
    "configRev",
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_LLN0_NamPlt_lnNs = {
    DataAttributeModelType, 
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* ==================================================================
 * IMPLEMENTAÇÃO DEEV1
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_DEEV1 = {
    LogicalNodeModelType,
    "DEEV1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ISAF1, 
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam
};

DataObject iedModel_B1EBK_DEEV1_EVNam = {
    DataObjectModelType,
    "EVNam",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_EVNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_EVNam_model = {
    DataAttributeModelType, 
    "model",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    NULL,  
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1EBK_DEEV1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_DEEV1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1EBK_DEEV1_ConnTypSel = {
    DataObjectModelType,
    "ConnTypSel",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh,
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_ConnTypSel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_DEEV1_Beh = { 
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_DEEV1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_DEEV1_Soc = {
    DataObjectModelType,
    "Soc",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_mag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_q,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subQ,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV, 
    IEC61850_VISIBLE_STRING_64,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_db,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0 + TRG_OPT_DATA_CHANGED
};

DataObject iedModel_B1EBK_DEEV1_EVId = {
    DataObjectModelType,
    "EVId",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_setVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_EVId_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    0 + TRG_OPT_DATA_CHANGED
};

DataObject iedModel_B1EBK_DEEV1_DptTm = {
    DataObjectModelType,
    "DptTm",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm_setTm,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_DptTm_setTm = {
    DataAttributeModelType,
    "setTm",
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_TIMESTAMP,
    0 + TRG_OPT_DATA_CHANGED
};

DataObject iedModel_B1EBK_DEEV1_VMax = {
    DataObjectModelType,
    "VMax",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_setMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_VMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_VMax_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataObject iedModel_B1EBK_DEEV1_AMax = {
    DataObjectModelType,
    "AMax",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_setMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_AMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_AMax_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataObject iedModel_B1EBK_DEEV1_AMin = {
    DataObjectModelType,
    "AMin",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_setMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_AMin_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_AMin_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataObject iedModel_B1EBK_DEEV1_EnAmnt = {
    DataObjectModelType,
    "EnAmnt",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_setMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO ISAF1
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_ISAF1 = {
    LogicalNodeModelType,
    "ISAF1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1, 
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm
};

DataObject iedModel_B1EBK_ISAF1_Alm = {
    DataObjectModelType,
    "Alm",
    (ModelNode*) &iedModel_B1EBK_ISAF1,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ISAF1_Alm_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Alm_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Alm_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ISAF1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_ISAF1,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ISAF1_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ISAF1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_ISAF1,
    NULL,  
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ISAF1_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ISAF1_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO LANTXSWI1 (Novo)
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_LANTXSWI1 = {
    LogicalNodeModelType,
    "LANTXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp
};

DataObject iedModel_B1EBK_LANTXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LANTXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LANTXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LANTXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_LANTXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * LANTXSWI1 - IMPLEMENTAÇÃO COM OPER (Comando)
 * ==================================================================
 */

DataObject iedModel_B1EBK_LANTXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,  
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_stVal,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal,  
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


DataObject iedModel_B1EBK_LANTXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,  
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_stVal,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


DataObject iedModel_B1EBK_LANTXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    NULL,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,  
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_stVal,  
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO ALMXSWI1 (Novo)
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_ALMXSWI1 = {
    LogicalNodeModelType,
    "ALMXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_TMVM1,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp
};

DataObject iedModel_B1EBK_ALMXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ALMXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ALMXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ALMXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ALMXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * ALMXSWI1
 * ==================================================================
 */

DataObject iedModel_B1EBK_ALMXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper, 
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_stVal,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal,  
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


DataObject iedModel_B1EBK_ALMXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,  
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_stVal,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


DataObject iedModel_B1EBK_ALMXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    NULL,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,  
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper = {
    DataAttributeModelType, 
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_stVal,  
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType, 
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType, 
    "origin",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType, 
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType, 
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType, 
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType, 
    "T",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType, 
    "Test",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType, 
    "Check",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType, 
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO TMVM1
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_TMVM1 = {
    LogicalNodeModelType,
    "TMVM1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ZMOT1, 
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth
};

DataObject iedModel_B1EBK_TMVM1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1EBK_TMVM1,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh, 
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TMVM1_EEHealth_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_EEHealth_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_EEHealth_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TMVM1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_TMVM1,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health,  
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TMVM1_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TMVM1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_TMVM1,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,  
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TMVM1_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health,
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_TMVM1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TMVM1_MvmRteSv = {
    DataObjectModelType,
    "MvmRteSv",
    (ModelNode*) &iedModel_B1EBK_TMVM1,
    NULL,  
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_q,  
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_instMag_f,  
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_instMag,  
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,       
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_t,     
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED | TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,       
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_units,  
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,       
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC,   
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_units_SIUnit,  
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_units,  
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_units_multiplier,  
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_units,  
    NULL,                                               
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv, 
    NULL,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor,  
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC, 
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC_offset,  
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC,  
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};



IedModel iedModel = {
    "MoveUFF_",
    &iedModel_B1EBK,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO ZMOT1 
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_ZMOT1 = {
    LogicalNodeModelType,
    "ZMOT1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_MMXU1, 
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName,
};

DataObject iedModel_B1EBK_ZMOT1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName_vendor,
    0,
    -1
};

DataObject iedModel_B1EBK_ZMOT1_EENam = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_ZMOT1_EEName_model = {
    DataAttributeModelType, 
    "model",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    NULL,  
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1EBK_ZMOT1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_vendor = {
    DataAttributeModelType, 
    "vendor",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1EBK_ZMOT1_RotThmSt = {
    DataObjectModelType,
    "RotThmSt",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ZMOT1_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ZMOT1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_ZMOT1_MotSt = {
    DataObjectModelType,
    "MotSt",
    (ModelNode*) &iedModel_B1EBK_ZMOT1, 
    NULL, 
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt_stVal, 
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_MotSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt,      
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt_q,    
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED, 
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_MotSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt,     
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt_t,    
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_ZMOT1_MotSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_MotSt,      
    NULL,                                         
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO MMXU1
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_TLOC1, 
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt
};

DataObject iedModel_B1EBK_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_MMXU1,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_vendor = {
    DataAttributeModelType, 
    "vendor",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_swRev = {
    DataAttributeModelType, 
    "swRev",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_lnNs = {
    DataAttributeModelType, 
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1EBK_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_MMXU1,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MMXU1_Beh_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_Beh_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_Beh_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_MMXU1,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MMXU1_Health_stVal = {
    DataAttributeModelType, 
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_Health_q = {
    DataAttributeModelType, 
    "q",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health,
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_Health_t = {
    DataAttributeModelType, 
    "t",
    (ModelNode*) &iedModel_B1EBK_MMXU1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_B1EBK_MMXU1,
    NULL, 
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_q,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0
};

/* ==================================================================
 * IMPLEMENTAÇÃO TLOC1 
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_TLOC1 = {
    LogicalNodeModelType,
    "TLOC1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot
};

DataObject iedModel_B1EBK_TLOC1_DistTot = {
    DataObjectModelType,
    "DistTot",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_mag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_q,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_DistSess = {
    DataObjectModelType,
    "DistSess",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_mag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_q,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_NavFal = {
    DataObjectModelType,
    "NavFal",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_NavFal_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_NavFal_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_NavFal_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_SatAvl = {
    DataObjectModelType,
    "SatAvl",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_SatAvl_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_SatAvl_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_SatAvl_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_LocPrec = {
    DataObjectModelType,
    "LocPrec",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_LocPrec_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_B1EBK_TLOC1_LocPrec_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_LocPrec_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_LocDist = {
    DataObjectModelType,
    "LocDist",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,  
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_q,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_TLOC1_AutDis = {
    DataObjectModelType,
    "AutDis",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_AutDis_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_AutDis_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_TLOC1_AutDis_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO XSWI1
 * ==================================================================
 */

LogicalNode iedModel_B1EBK_MOTXSWI1 = {
    LogicalNodeModelType,
    "MOTXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp
};

DataObject iedModel_B1EBK_MOTXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_stVal,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_stVal,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM, 
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_stVal,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN, 
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1EBK_MOTXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};



static void
initializeValues()
{
    printf("Inicializando Modelos de Controle (ctlModel = 1)...\n");

    /* =================================================================
     * LLN0 (Genérico)
     * ================================================================= */

    if (iedModel_B1EBK_LLN0_Mod_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_LLN0_Mod_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    /* =================================================================
     * LANTXSWI1 (Lanterna)
     * ================================================================= */
   
    //Seta um valor no SCADA
    if (iedModel_B1EBK_LANTXSWI1_Pos_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_LANTXSWI1_Pos_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_LANTXSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    //Bloqueia a entrada de novos valores
    if (iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    //Bloqueia a saída dos valores
    if (iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    /* =================================================================
     * ALMXSWI1 (Alarme)
     * ================================================================= */
    
    if (iedModel_B1EBK_ALMXSWI1_Pos_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_ALMXSWI1_Pos_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_ALMXSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    if (iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    if (iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }

    /* =================================================================
     * MOTXSWI1 (Motor)
     * ================================================================= */

    if (iedModel_B1EBK_MOTXSWI1_Pos_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_MOTXSWI1_Pos_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_MOTXSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }
    
    if (iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }
    
    if (iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel.mmsValue != NULL) {
        MmsValue_setInt32(iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel.mmsValue, 1);
    } else {
        iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
    }
}