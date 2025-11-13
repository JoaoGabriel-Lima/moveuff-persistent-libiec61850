/*
 * static_model.c
 * * Versão "Do Zero" (LLN0 + LPHD1 + DEEV1)
 * * CORRIGIDO PARA A BIBLIOTECA DE 10 CAMPOS
 */

#include "static_model.h"

static void initializeValues();

LogicalDevice iedModel_BIKE = {
    LogicalDeviceModelType,
    "BIKE",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_BIKE_LLN0 
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO LLN0
 * ==================================================================
 */

LogicalNode iedModel_BIKE_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_LPHD1, /* 'sibling' (irmão) é LPHD1 */
    (ModelNode*) &iedModel_BIKE_LLN0_Beh, /* 'child' (filho) é Beh */
};

DataObject iedModel_BIKE_LLN0_Beh = {
    DataObjectModelType, "Beh",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* DO: Health */
DataObject iedModel_BIKE_LLN0_Health = {
    DataObjectModelType, "Health",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* DO: Mod */
DataObject iedModel_BIKE_LLN0_Mod = {
    DataObjectModelType, "Mod",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Diag,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Mod_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Mod_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Mod_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_LLN0_Mod_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* DO: Diag */
DataObject iedModel_BIKE_LLN0_Diag = {
    DataObjectModelType, "Diag",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs,
    (ModelNode*) &iedModel_BIKE_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Diag_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Diag,
    (ModelNode*) &iedModel_BIKE_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Diag_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Diag,
    (ModelNode*) &iedModel_BIKE_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_Diag_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* DO: LEDRs */
DataObject iedModel_BIKE_LLN0_LEDRs = {
    DataObjectModelType, "LEDRs",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_LEDRs_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs,
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_LEDRs_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs,
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LLN0_LEDRs_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* DO: NamPlt */
DataObject iedModel_BIKE_LLN0_NamPlt = {
    DataObjectModelType, "NamPlt",
    (ModelNode*) &iedModel_BIKE_LLN0,
    NULL, /* Fim da cadeia de DOs do LLN0 */
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_swRev = {
    DataAttributeModelType, "swRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_d = {
    DataAttributeModelType, "d",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC, /* CORRIGIDO: Era IEC6G5 */
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_configRev = {
    DataAttributeModelType, "configRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_ldNs = {
    DataAttributeModelType, "ldNs",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};


/* ==================================================================
 * MODELAGEM NÓ LÓGICO LPHD1
 * ==================================================================
 */

LogicalNode iedModel_BIKE_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_DEEV1, /* 'sibling' (irmão) é DEEV1 */
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyNam /* 'child' (filho) é PhyNam */
};

/* DO: PhyNam */
DataObject iedModel_BIKE_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_BIKE_LPHD1,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyNam_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* DO: PhyHealth */
DataObject iedModel_BIKE_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_BIKE_LPHD1,
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST, /* CORRIGIDO: Era IEC6NET */
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* DO: NamPlt */
DataObject iedModel_BIKE_LPHD1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LPHD1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_LPHD1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC, /* CORRIGIDO: Era IEC6ISO */
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_LPHD1_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX, /* CORRIGIDO: Era IEC6NOT_SUPPORTED */
    IEC61850_VISIBLE_STRING_255,
    0
};

/* * ------------------------------------------------------------------
 * DEEV1 - DEFINIÇÕES (Na ordem lógica solicitada)
 * ------------------------------------------------------------------
 */

LogicalNode iedModel_BIKE_DEEV1 = {
    LogicalNodeModelType,
    "DEEV1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_ISAF1, 
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam
};

/* ------------------- Data Object: EVNam (CDC: DPL) ------------------- */

DataObject iedModel_BIKE_DEEV1_EVNam = {
    DataObjectModelType,
    "EVNam",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_EVNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* ------------------- Data Object: NamPlt (CDC: LPL) ------------------- */
DataObject iedModel_BIKE_DEEV1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_DEEV1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_DEEV1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_DEEV1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_DEEV1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_BIKE_DEEV1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* ------------------- Data Object: ConnTypSel (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_DEEV1_ConnTypSel = {
    DataObjectModelType,
    "ConnTypSel",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ------------------- Data Object: Beh (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_DEEV1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ------------------- Data Object: Health (CDC: ENS) ------------------- */
DataObject iedModel_BIKE_DEEV1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ------------------- Data Object: Soc (CDC: MV) ------------------- */
DataObject iedModel_BIKE_DEEV1_Soc = {
    DataObjectModelType,
    "Soc",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_Soc_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_q,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subQ,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV, /* CORRIGIDO: Era IEC61850-Access-Point */
    IEC61850_VISIBLE_STRING_64,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_db,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_Soc_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0 + TRG_OPT_DATA_CHANGED
};

/* ------------------- Data Object: EVId (CDC: VSG) ------------------- */
DataObject iedModel_BIKE_DEEV1_EVId = {
    DataObjectModelType,
    "EVId",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId_setVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_EVId_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    0 + TRG_OPT_DATA_CHANGED
};

/* ------------------- Data Object: DptTm (CDC: TSG) ------------------- */
DataObject iedModel_BIKE_DEEV1_DptTm = {
    DataObjectModelType,
    "DptTm",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm_setTm,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_DptTm_setTm = {
    DataAttributeModelType,
    "setTm",
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_TIMESTAMP,
    0 + TRG_OPT_DATA_CHANGED
};

/* ------------------- Data Object: VMax (CDC: ASG) ------------------- */
DataObject iedModel_BIKE_DEEV1_VMax = {
    DataObjectModelType,
    "VMax",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_VMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_VMax_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_VMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* ------------------- Data Object: AMax (CDC: ASG) ------------------- */
DataObject iedModel_BIKE_DEEV1_AMax = {
    DataObjectModelType,
    "AMax",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_AMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_AMax_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF, /* CORRIGIDO: Era IEC6Address */
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* ------------------- Data Object: AMin (CDC: ASG) ------------------- */
DataObject iedModel_BIKE_DEEV1_AMin = {
    DataObjectModelType,
    "AMin",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_AMin_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_AMin_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP, /* CORRIGIDO: Era IEC6Opening-Time */
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMin_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

/* ------------------- Data Object: EnAmnt (CDC: ASG) ------------------- */
DataObject iedModel_BIKE_DEEV1_EnAmnt = {
    DataObjectModelType,
    "EnAmnt",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_BIKE_DEEV1_EnAmnt_sVC,
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

LogicalNode iedModel_BIKE_ISAF1 = {
    LogicalNodeModelType,
    "ISAF1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_XSWI1, 
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm
};

/* --- Data Object: Alm (CDC: SPS - Status Ponto Simples) --- */
DataObject iedModel_BIKE_ISAF1_Alm = {
    DataObjectModelType,
    "Alm",
    (ModelNode*) &iedModel_BIKE_ISAF1,
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh,
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ISAF1_Alm_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm,
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Alm_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm,
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Alm_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ISAF1_Alm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Beh (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_ISAF1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_ISAF1,
    (ModelNode*) &iedModel_BIKE_ISAF1_Health, /* 'sibling' (irmão) é Health */
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ISAF1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh,
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh,
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ISAF1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_ISAF1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_ISAF1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_BIKE_ISAF1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ISAF1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ISAF1_Health,
    (ModelNode*) &iedModel_BIKE_ISAF1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ISAF1_Health,
    (ModelNode*) &iedModel_BIKE_ISAF1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ISAF1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ISAF1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO XSWI1 (Novo)
 * ==================================================================
 */

LogicalNode iedModel_BIKE_XSWI1 = {
    LogicalNodeModelType,
    "XSWI1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_TMVM1, /* <-- LIGAÇÃO FEITA */
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp
};

/* --- Data Object: SwTyp (CDC: INS - Integer Status) --- */
DataObject iedModel_BIKE_XSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_SwTyp_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Loc (CDC: SPS - Simple Point Status) --- */
DataObject iedModel_BIKE_XSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_Loc_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Loc_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Loc_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: OpCnt (CDC: INS - Integer Status) --- */
DataObject iedModel_BIKE_XSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_OpCnt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Beh (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_XSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_XSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    (ModelNode*) &iedModel_BIKE_XSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Pos (CDC: DPC - modelado como Status) --- */
DataObject iedModel_BIKE_XSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_Pos_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Pos_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_Pos_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_ctlModel, /* Adicionando ctlModel */
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ctlModel para Pos (DPC) */
DataAttribute iedModel_BIKE_XSWI1_Pos_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};


/* --- Data Object: BlkOpn (CDC: SPC - modelado como Status) --- */
DataObject iedModel_BIKE_XSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls, /* sibling */
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_BlkOpn_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_BlkOpn_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_BlkOpn_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn_ctlModel, /* Adicionando ctlModel */
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ctlModel para BlkOpn (SPC) */
DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0
};

/* --- Data Object: BlkCls (CDC: SPC - modelado como Status) --- */
DataObject iedModel_BIKE_XSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_XSWI1_BlkCls_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_BlkCls_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_XSWI1_BlkCls_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls_ctlModel, /* Adicionando ctlModel */
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* ctlModel para BlkCls (SPC) */
DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlModel = {
    DataAttributeModelType, "ctlModel",
    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
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

LogicalNode iedModel_BIKE_TMVM1 = {
    LogicalNodeModelType,
    "TMVM1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_ZMOT1, 
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth
};

/* --- Data Object: EEHealth (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_TMVM1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_BIKE_TMVM1,
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh, 
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_TMVM1_EEHealth_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth,
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_EEHealth_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth,
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_EEHealth_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_TMVM1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Beh (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_TMVM1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_TMVM1,
    (ModelNode*) &iedModel_BIKE_TMVM1_Health, /* sibling */
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_TMVM1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh,
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh,
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_TMVM1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_TMVM1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_TMVM1,
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv, /* sibling */
    (ModelNode*) &iedModel_BIKE_TMVM1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_TMVM1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_TMVM1_Health,
    (ModelNode*) &iedModel_BIKE_TMVM1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_TMVM1_Health,
    (ModelNode*) &iedModel_BIKE_TMVM1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_TMVM1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: MvmRteSv (CDC: SAV - Settable Analogue Value) --- */
DataObject iedModel_BIKE_TMVM1_MvmRteSv = {
    DataObjectModelType,
    "MvmRteSv",
    (ModelNode*) &iedModel_BIKE_TMVM1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_sVC, /* sibling */
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_setMag_f, /* child */
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_setMag, /* parent é setMag */
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv, /* parent é o DO */
    NULL,
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_sVC_scaleFactor, /* child */
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_sVC, /* parent é sVC */
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_sVC_offset, /* sibling */
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_BIKE_TMVM1_MvmRteSv_sVC, /* parent é sVC */
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
    &iedModel_BIKE,
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

LogicalNode iedModel_BIKE_ZMOT1 = {
    LogicalNodeModelType,
    "ZMOT1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_MMXU1, 
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName
};

/* --- Data Object: EEName (CDC: DPL - modelado como status) --- */
DataObject iedModel_BIKE_ZMOT1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_BIKE_ZMOT1,
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ZMOT1_EEName_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_255,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_EEName_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_EEName_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: RotThmSt (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_ZMOT1_RotThmSt = {
    DataObjectModelType,
    "RotThmSt",
    (ModelNode*) &iedModel_BIKE_ZMOT1,
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ZMOT1_RotThmSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: PresAlm (CDC: SPS - Status Ponto Simples) --- */
DataObject iedModel_BIKE_ZMOT1_PresAlm = {
    DataObjectModelType,
    "PresAlm",
    (ModelNode*) &iedModel_BIKE_ZMOT1,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ZMOT1_PresAlm_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_PresAlm_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_PresAlm_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ZMOT1_PresAlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: EEHealth (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_ZMOT1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_BIKE_ZMOT1,
    NULL,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_ZMOT1_EEHealth_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_EEHealth_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth,
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_ZMOT1_EEHealth_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_ZMOT1_EEHealth,
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

LogicalNode iedModel_BIKE_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_DLOC1, 
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt
};

/* --- Data Object: NamPlt (CDC: LPL) --- */
DataObject iedModel_BIKE_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_MMXU1,
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh,
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_MMXU1_NamPlt_vendor = {
    DataAttributeModelType, "vendor",
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt,
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_MMXU1_NamPlt_swRev = {
    DataAttributeModelType, "swRev",
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt,
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0
};

DataAttribute iedModel_BIKE_MMXU1_NamPlt_lnNs = {
    DataAttributeModelType, "lnNs",
    (ModelNode*) &iedModel_BIKE_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0
};

/* --- Data Object: Beh (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_MMXU1,
    (ModelNode*) &iedModel_BIKE_MMXU1_Health,
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_MMXU1_Beh_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh,
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_Beh_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh,
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_Beh_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_MMXU1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: Health (CDC: ENS - Status Enumerado) --- */
DataObject iedModel_BIKE_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_MMXU1,
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW,
    (ModelNode*) &iedModel_BIKE_MMXU1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_MMXU1_Health_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_MMXU1_Health,
    (ModelNode*) &iedModel_BIKE_MMXU1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_Health_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_MMXU1_Health,
    (ModelNode*) &iedModel_BIKE_MMXU1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_Health_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_MMXU1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: TotW (CDC: MV - Measured Value) --- */
DataObject iedModel_BIKE_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_BIKE_MMXU1,
    NULL, /* Por enquanto, fim da cadeia (PPV e AWYE incompletos) */
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW,
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_q,
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW,
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW,
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_MMXU1_TotW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_BIKE_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0
};

/* ==================================================================
 * MODELAGEM NÓ LÓGICO DLOC1
 * ==================================================================
 */

/* ==================================================================
 * MODELAGEM NÓ LÓGICO DLOC1
 * ==================================================================
 */

LogicalNode iedModel_BIKE_DLOC1 = {
    LogicalNodeModelType,
    "DLOC1",
    (ModelNode*) &iedModel_BIKE,
    NULL, /* Sibling (Será o próximo LN) */
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot
};

/* --- Data Object: EVDistTot (CDC: MV - Measured Value) --- */
DataObject iedModel_BIKE_DLOC1_EVDistTot = {
    DataObjectModelType,
    "EVDistTot",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_EVDistTot_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_q,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_BIKE_DLOC1_EVDistTot_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DLOC1_EVDistTot_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX, /* <-- CORRIGIDO (Era ST) */
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_EVDistTot_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX, /* <-- CORRIGIDO (Era ST) */
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_DLOC1_EVDistTot_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistTot,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    TRG_OPT_DATA_CHANGED
};

/* --- Data Object: EVDistSess (CDC: MV - Measured Value) --- */
DataObject iedModel_BIKE_DLOC1_EVDistSess = {
    DataObjectModelType,
    "EVDistSess",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_EVDistSess_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_q,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_BIKE_DLOC1_EVDistSess_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DLOC1_EVDistSess_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX, /* <-- CORRIGIDO (Era ST) */
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_EVDistSess_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess,
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX, /* <-- CORRIGIDO (Era ST) */
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_DLOC1_EVDistSess_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_BIKE_DLOC1_EVDistSess,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    TRG_OPT_DATA_CHANGED
};

/* --- Data Object: VocOri (CDC: SPS - Simple Point Status) --- */
DataObject iedModel_BIKE_DLOC1_VocOri = {
    DataObjectModelType,
    "VocOri",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai,
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_VocOri_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri,
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_VocOri_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri,
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_VocOri_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_VocOri,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: NavFai (CDC: SPS - Simple Point Status) --- */
DataObject iedModel_BIKE_DLOC1_NavFai = {
    DataObjectModelType,
    "NavFai",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl,
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_NavFai_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai,
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_NavFai_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai,
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_NavFai_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_NavFai,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: SatAvl (CDC: SPS - Simple Point Status) --- */
DataObject iedModel_BIKE_DLOC1_SatAvl = {
    DataObjectModelType,
    "SatAvl",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec,
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_SatAvl_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl,
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    TRG_OPT_DATA_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_SatAvl_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl,
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_SatAvl_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_SatAvl,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: LocPrec (CDC: INS - Integer Status) --- */
DataObject iedModel_BIKE_DLOC1_LocPrec = {
    DataObjectModelType,
    "LocPrec",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_LocPrec_stVal = {
    DataAttributeModelType, "stVal",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_BIKE_DLOC1_LocPrec_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_LocPrec_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocPrec,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0
};

/* --- Data Object: LocDist (CDC: MV - Measured Value) --- */
DataObject iedModel_BIKE_DLOC1_LocDist = {
    DataObjectModelType,
    "LocDist",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_LocDist_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_q,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_BIKE_DLOC1_LocDist_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DLOC1_LocDist_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_LocDist_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_DLOC1_LocDist_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocDist,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    TRG_OPT_DATA_CHANGED
};

/* --- Data Object: LocTime (CDC: MV - Measured Value) --- */
DataObject iedModel_BIKE_DLOC1_LocTime = {
    DataObjectModelType,
    "LocTime",
    (ModelNode*) &iedModel_BIKE_DLOC1,
    NULL, /* Fim da cadeia de DOs */
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_mag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DLOC1_LocTime_mag = {
    DataAttributeModelType, "mag",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_q,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    TRG_OPT_DATA_CHANGED | TRG_OPT_DATA_UPDATE
};

DataAttribute iedModel_BIKE_DLOC1_LocTime_mag_f = {
    DataAttributeModelType, "f",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0
};

DataAttribute iedModel_BIKE_DLOC1_LocTime_q = {
    DataAttributeModelType, "q",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    TRG_OPT_QUALITY_CHANGED
};

DataAttribute iedModel_BIKE_DLOC1_LocTime_t = {
    DataAttributeModelType, "t",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime,
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime_db,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0
};

DataAttribute iedModel_BIKE_DLOC1_LocTime_db = {
    DataAttributeModelType, "db",
    (ModelNode*) &iedModel_BIKE_DLOC1_LocTime,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    TRG_OPT_DATA_CHANGED
};



static void
initializeValues()
{
}