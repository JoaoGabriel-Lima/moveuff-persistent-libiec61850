#include "static_model.h"
static void initializeValues();

LogicalDevice iedModel_B1BYD = {
    LogicalDeviceModelType,
    "B1BYD",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_B1BYD_LLN0
};

LogicalNode iedModel_B1BYD_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1BYD,
    NULL, //(ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod,
};

DataObject iedModel_B1BYD_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    (ModelNode*) &iedModel_B1BYD_LLN0_Health,
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1BYD_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_Health,
    (ModelNode*) &iedModel_B1BYD_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_LLN0_Health,
    (ModelNode*) &iedModel_B1BYD_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1BYD_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1BYD_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1BYD_LLN0_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1BYD_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataObject iedModel_B1BYD_LLN0_Diag = {
    DataObjectModelType,
    "Diag",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_Diag_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Diag_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_B1BYD_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_LEDRs_q = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};


/* ==================================================================
 * KTNK1
 * ==================================================================

LogicalNode iedModel_B1BYD_KTNK1 = {
    LogicalNodeModelType,
    "KTNK1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt,
};


DataObject iedModel_B1BYD_KTNK1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};
    

DataAttribute iedModel_B1BYD_KTNK1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt_InNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_B1BYD_KTNK1_NamPlt_InNs = {
    DataAttributeModelType,
    "InNs",
    (ModelNode*) &iedModel_B1BYD_KTNK1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};


 DataObject iedModel_B1BYD_KTNK1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_KTNK1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KTNK1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};
    
DataAttribute iedModel_B1BYD_KTNK1_OpTmh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_OpTmh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};
    
DataAttribute iedModel_B1BYD_KTNK1_OpTmh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};
    
DataAttribute iedModel_B1BYD_KTNK1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};
    
DataAttribute iedModel_B1BYD_KTNK1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};
    
DataAttribute iedModel_B1BYD_KTNK1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};
    
DataAttribute iedModel_B1BYD_KTNK1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_LevPct = {
    DataObjectModelType,
    "LevPct",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_LevPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct_q,
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
}; 

DataAttribute iedModel_B1BYD_KTNK1_LevPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KTNK1_LevPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KTNK1_LevPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_LevPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_Vlm = {
    DataObjectModelType,
    "Vlm",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_Vlm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm_q,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_KTNK1_Vlm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KTNK1_Vlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KTNK1_Vlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KTNK1_Vlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KTNK1_VlmCap = {  
    DataObjectModelType,
    "VlmCap", 
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    (ModelNode*) &iedModel_B1BYD_KTNK1_TnkTyp,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_VlmCap_setMag = { 
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_sVC,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED 
};

DataAttribute iedModel_B1BYD_KTNK1_VlmCap_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KTNK1_VlmCap_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap,
    NULL,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KTNK1_VlmCap_sVC_scaleFactor = { 
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_sVC,
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KTNK1_VlmCap_sVC_offset = { 
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_KTNK1_VlmCap_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataObject iedModel_B1BYD_KTNK1_TnkTyp = {
    DataObjectModelType,
    "TnkTyp",
    (ModelNode*) &iedModel_B1BYD_KTNK1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_KTNK1_TnkTyp_setVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KTNK1_TnkTyp_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_B1BYD_KTNK1_TnkTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

/* ==================================================================
 * STMP1 - Temporizador de superaquecimento 
 * ==================================================================

LogicalNode iedModel_B1BYD_STMP1 = {
    LogicalNodeModelType,
    "STMP1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip,
};

DataObject iedModel_B1BYD_STMP1_Trip = {
    DataObjectModelType,
    "Trip",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_Trip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip,
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};


DataAttribute iedModel_B1BYD_STMP1_Trip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip,
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};
    
DataAttribute iedModel_B1BYD_STMP1_Trip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_STMP1_Trip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_STMP1_RteTrip = {
    DataObjectModelType,
    "RteTrip",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_RteTrip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_RteTrip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_RteTrip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTrip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_STMP1_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp_q,
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_STMP1_Tmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_STMP1_TmpRte = {
    DataObjectModelType,
    "TmpRte",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_TmpRte_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte_q,
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_TmpRte_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_TmpRte_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_TmpRte_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_STMP1_TmpRte,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_STMP1_TripSet = {
    DataObjectModelType,
    "TripSet",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_TripSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_sVC,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_TripSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_TripSet_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_TripSet_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_sVC,
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_TripSet_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_STMP1_TripSet_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataObject iedModel_B1BYD_STMP1_RteTripSet = {
    DataObjectModelType,
    "RteTripSet",
    (ModelNode*) &iedModel_B1BYD_STMP1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_STMP1_RteTripSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_sVC,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_RteTripSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_RteTripSet_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_STMP1_RteTripSet_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_sVC,
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_STMP1_RteTripSet_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_STMP1_RteTripSet_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO KVLV1 (Válvula)
 * ================================================================== 

LogicalNode iedModel_B1BYD_KVLV1 = {
    LogicalNodeModelType,
    "KVLV1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt,
};

DataObject iedModel_B1BYD_KVLV1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_KVLV1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_ClsPos = {
    DataObjectModelType,
    "ClsPos",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_ClsPos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsPos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsPos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsPos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_OpnPos = {
    DataObjectModelType,
    "OpnPos",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_OpnPos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnPos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnPos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnPos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_Mvm = {
    DataObjectModelType,
    "Mvm",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_Mvm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Mvm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Mvm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Mvm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_Stuck = {
    DataObjectModelType,
    "Stuck",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_Stuck_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Stuck_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Stuck_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Stuck,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_PosVlv = {
    DataObjectModelType,
    "PosVlv",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_PosVlv_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv_q,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_KVLV1_PosVlv_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosVlv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_PosVlv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosVlv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_KVLV1_PosSpt = {
    DataObjectModelType,
    "PosSpt",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_mxVal, 
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_origin,
    NULL, 
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED, 
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_mxVal = {
    DataAttributeModelType,
    "mxVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_q,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_mxVal_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_mxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_mxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_PosSpt_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_KVLV1_PosSpt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_KVLV1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_stVal,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED, 
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_KVLV1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_KVLV1_OpnLim = {
    DataObjectModelType,
    "OpnLim",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_OpnLim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_sVC,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnLim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnLim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnLim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_sVC,
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_OpnLim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_KVLV1_OpnLim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataObject iedModel_B1BYD_KVLV1_ClsLim = {
    DataObjectModelType,
    "ClsLim",
    (ModelNode*) &iedModel_B1BYD_KVLV1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_KVLV1_ClsLim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_sVC,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsLim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsLim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsLim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_sVC,
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_KVLV1_ClsLim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_KVLV1_ClsLim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

/* ==================================================================
 * DFCL1
 * ==================================================================


LogicalNode iedModel_B1BYD_DFCL1 = {
    LogicalNodeModelType,
    "DFCL1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct,
};

DataObject iedModel_B1BYD_DFCL1_LifeEfcPct = {
    DataObjectModelType,
    "LifeEfcPct",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_LifeEfcPct_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct,
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DFCL1_LifeEfcPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct,
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_LifeEfcPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFCL1_LifeEfcPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFCL1_MaintTms = {
    DataObjectModelType,
    "MaintTms",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_MaintTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DFCL1_MaintTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_MaintTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFCL1_MaintTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFCL1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DFCL1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFCL1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFCL1_WtrLev = {
    DataObjectModelType,
    "WtrLev",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_WtrLev_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev_q,
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_WtrLev_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_WtrLev_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_WtrLev_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFCL1_WtrLev,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFCL1_OutH2Lev = {
    DataObjectModelType,
    "OutH2Lev",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev_mag,
    0,
    -1
};
    
DataAttribute iedModel_B1BYD_DFCL1_OutH2Lev_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev_q,
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_OutH2Lev_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_OutH2Lev_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_OutH2Lev_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFCL1_OutH2Lev,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFCL1_Alim = {
    DataObjectModelType,
    "Alim",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_Alim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_sVC,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_Alim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_Alim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_Alim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_sVC,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_Alim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Alim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataObject iedModel_B1BYD_DFCL1_Vlim = {
    DataObjectModelType,
    "Vlim",
    (ModelNode*) &iedModel_B1BYD_DFCL1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFCL1_Vlim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_sVC,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_Vlim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_Vlim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_sVC_scaleFactor,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFCL1_Vlim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_sVC,
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFCL1_Vlim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1BYD_DFCL1_Vlim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};


/* ==================================================================
 * DSTK1
 * ==================================================================
 

LogicalNode iedModel_B1BYD_DSTK1 = {
    LogicalNodeModelType,
    "DSTK1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt,
};

DataObject iedModel_B1BYD_DSTK1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_NamPlt_swRev = {
    DataAttributeModelType,
    "SwRev",
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt_InNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_NamPlt_InNs = {
    DataAttributeModelType,
    "InNs",
    (ModelNode*) &iedModel_B1BYD_DSTK1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataObject iedModel_B1BYD_DSTK1_StcSt = {
    DataObjectModelType,
    "StcSt",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_StcSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_CelVTrCnt = {
    DataObjectModelType,
    "CelVTrCnt",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_CelVTrCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DSTK1_CelVTrCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_CelVTrCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_CelVTrCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_StcLodTms = {
    DataObjectModelType,
    "StcLodTms",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_StcLodTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DSTK1_StcLodTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcLodTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcLodTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_MaintTms = {
    DataObjectModelType,
    "MaintTms",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_MaintTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DSTK1_MaintTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_MaintTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_MaintTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DSTK1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DSTK1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DSTK1_StcEfcPct = {
    DataObjectModelType,
    "StcEfcPct",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_StcEfcPct_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_StcEfcPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DSTK1_OutDCV = {
    DataObjectModelType,
    "OutDCV",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCV_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCV,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DSTK1_OutDCA = {
    DataObjectModelType,
    "OutDCA",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutDCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutDCA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DSTK1_InClTmp = {
    DataObjectModelType,
    "InClTmp",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InClTmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InClTmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DSTK1_OutClTmp = {
    DataObjectModelType,
    "OutClTmp",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_OutClTmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_OutClTmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DSTK1_InH2Pres = {
    DataObjectModelType,
    "InH2Pres",
    (ModelNode*) &iedModel_B1BYD_DSTK1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_mag,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_q,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DSTK1_InH2Pres_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DSTK1_InH2Pres,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

/* ==================================================================
 * SPRS1
 * ==================================================================
 

LogicalNode iedModel_B1BYD_SPRS1 = {
    LogicalNodeModelType,
    "SPRS1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm,
};

DataObject iedModel_B1BYD_SPRS1_Alm = {
    DataObjectModelType,
    "Alm",
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_SPRS1_Alm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Alm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Alm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Alm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_SPRS1_Trip = {
    DataObjectModelType,
    "Trip",
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_SPRS1_Trip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Trip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Trip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Trip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_SPRS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_SPRS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_SPRS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_SPRS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_SPRS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_SPRS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_SPRS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_SPRS1_AlmSet = {
    DataObjectModelType,
    "AlmSet",
    (ModelNode*) &iedModel_B1BYD_SPRS1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_minVal,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_maxVal,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_maxVal_f,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_SPRS1_AlmSet_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_SPRS1_AlmSet_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
}; 

/* ==================================================================
 * TPRS1
 * ==================================================================
 

LogicalNode iedModel_B1BYD_TPRS1 = {
    LogicalNodeModelType,
    "TPRS1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_DFPM1,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEName,
};

DataObject iedModel_B1BYD_TPRS1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TPRS1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEName,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataAttribute iedModel_B1BYD_TPRS1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
};

DataObject iedModel_B1BYD_TPRS1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TPRS1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_TPRS1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TPRS1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TPRS1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_TPRS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TPRS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_TPRS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TPRS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_TPRS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TPRS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_TPRS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TPRS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TPRS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_TPRS1_PresSv = {
    DataObjectModelType,
    "PresSv",
    (ModelNode*) &iedModel_B1BYD_TPRS1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TPRS1_PresSv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv_q,
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};  

DataAttribute iedModel_B1BYD_TPRS1_PresSv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_TPRS1_PresSv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TPRS1_PresSv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TPRS1_PresSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

/* ==================================================================
 * ALMXSWI1
 * ==================================================================
 

LogicalNode iedModel_B1BYD_DFPM1 = {
    LogicalNodeModelType,
    "DFPM1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_TTMP1,
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt,
};

DataObject iedModel_B1BYD_DFPM1_FPMSt = {
    DataObjectModelType,
    "FPMSt",
    (ModelNode*) &iedModel_B1BYD_DFPM1,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFPM1_FPMSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt,
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_DFPM1_FPMSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt,
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFPM1_FPMSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFPM1_FPMSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_DFPM1_CnvEfc = {
    DataObjectModelType,
    "CnvEfc",
    (ModelNode*) &iedModel_B1BYD_DFPM1,
    (ModelNode*) &iedModel_B1BYD_DFPM1_ProcTyp,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_mag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFPM1_CnvEfc_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_q,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_DFPM1_CnvEfc_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_DFPM1_CnvEfc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_DFPM1_CnvEfc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_DFPM1_CnvEfc_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_DFPM1_CnvEfc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataObject iedModel_B1BYD_DFPM1_ProcTyp = {
    DataObjectModelType,
    "ProcTyp",
    (ModelNode*) &iedModel_B1BYD_DFPM1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_DFPM1_ProcTyp_setVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_DFPM1_ProcTyp_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_B1BYD_DFPM1_ProcTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
};

/* ==================================================================
 * TTMP1
 * ==================================================================


LogicalNode iedModel_B1BYD_TTMP1 = {
    LogicalNodeModelType,
        "TTMP1",
        (ModelNode*) &iedModel_B1BYD,
        (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
        (ModelNode*) &iedModel_B1BYD_TTMP1_Beh,
};

DataObject iedModel_B1BYD_TTMP1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_TTMP1,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TTMP1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_TTMP1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TTMP1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_TTMP1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_TTMP1,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TTMP1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_UPDATE,
};

DataAttribute iedModel_B1BYD_TTMP1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health,
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TTMP1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TTMP1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataObject iedModel_B1BYD_TTMP1_TmpSv = {
    DataObjectModelType,
    "TmpSv",
    (ModelNode*) &iedModel_B1BYD_TTMP1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TTMP1_TmpSv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_q,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

DataAttribute iedModel_B1BYD_TTMP1_TmpSv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
};

DataAttribute iedModel_B1BYD_TTMP1_TmpSv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
};

DataAttribute iedModel_B1BYD_TTMP1_TmpSv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv_units,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_TTMP1_TmpSv_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1BYD_TTMP1_TmpSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
};

/* ==================================================================
 * TNKXSWI1
 * ==================================================================

LogicalNode iedModel_B1BYD_TNKXSWI1 = {
    LogicalNodeModelType,
    "TNKXSWI1",
    (ModelNode*) &iedModel_B1BYD,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp,
};

DataObject iedModel_B1BYD_TNKXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_stVal,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_TNKXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_stVal,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1BYD_TNKXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_stVal,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_TNKXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_TNKXSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


/* ==================================================================
 * CELXSWI1
 * ==================================================================


LogicalNode iedModel_B1BYD_CELXSWI1 = {
    LogicalNodeModelType,
    "CELXSWI1",
    (ModelNode*) &iedModel_B1BYD,
    NULL,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp,
};

DataObject iedModel_B1BYD_CELXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_stVal,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_CELXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_stVal,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

DataObject iedModel_B1BYD_CELXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1,
    NULL,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    0,
    -1
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_stVal,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
};

DataAttribute iedModel_B1BYD_CELXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1BYD_CELXSWI1_BlkCls,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

*/

IedModel iedModel = {
    "MoveUFF_",
    &iedModel_B1BYD,
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
