#include "static_model.h"

static void initializeValues();

LogicalDevice iedModel_BIKE = {
    LogicalDeviceModelType,
    "BIKE",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_BIKE_LLN0,
    NULL,
};
/*================================= LLN0 ===========================================*/

LogicalNode iedModel_BIKE_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_LPHD1,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
};

DataObject iedModel_BIKE_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
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

DataObject iedModel_BIKE_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
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


DataObject iedModel_BIKE_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
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

DataObject iedModel_BIKE_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LLN0,
    NULL,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_ldNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
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

/* * ------------------------------------------------------------------
 * LPHD1 - PARTE 2: DEFINIÇÕES (Na ordem lógica solicitada)
 * ------------------------------------------------------------------
 */

LogicalNode iedModel_BIKE_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_DEEV1, /* Sibling (Próximo LN) */
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyNam /* Child (Primeiro DO é PhyNam) */
};

/* ------------------- Data Object: PhyNam (CDC: DPL) ------------------- */

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
    0,
    NULL,
    0
};

/* ------------------- Data Object: PhyHealth (CDC: ENS) ------------------- */

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_BIKE_LPHD1_PhyHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
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
    0,
    NULL,
    0
};

/* ------------------- Data Object: NamPlt (CDC: LPL) ------------------- */

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
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BIKE_LPHD1_NamPlt,
    (ModelNode*) &iedModel_BIKE_LPHD1_

};

/* * ------------------------------------------------------------------
 * DEEV1: DEFINIÇÕES (Na ordem lógica solicitada)
 * ------------------------------------------------------------------
 */

LogicalNode iedModel_BIKE_DEEV1 = {
    LogicalNodeModelType,
    "DEEV1",
    (ModelNode*) &iedModel_BIKE, /* Assumindo que o LD se chama iedModel_BIKE */
    NULL, /* Sibling (Próximo LN) - Mude se adicionar mais LNs */
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam /* Child (Primeiro DO é EVNam) */
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
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_EVNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
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
    0,
    NULL,
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
    0,
    NULL,
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
    0,
    NULL,
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
    0,
    NULL,
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0
};

/* (Aqui termina o iedModel_BIKE_DEEV1_Soc_t) ... */
};

/* --- Atributos para DEEV1_Soc (Continuação: Substituição, Bloqueio, db) --- */

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    NULL, /* Fim da cadeia de atributos do Soc */
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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

DataAttribute iedModel_BIKE_DEEV1_DptTm_setTm= {
    DataAttributeModelType,
    "setTm",
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_TIMESTAMP,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

/* ------------------- Data Object: VMax (CDC: ASG) ------------------- */

DataObject iedModel_BIKE_DEEV1_VMax = {
    DataObjectModelType,
    "VMax",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag,
    0,
    -1
};

DataAttribute iedModel_BIKE_DEEV1_VMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
    0
};

/* (O código do DataObject iedModel_BIKE_DEEV1_DptTm vem antes disto) */
/* ... */
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
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC, /* Irmão é sVC */
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_VMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    NULL, /* Fim da cadeia de atributos */
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMin_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMin_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0,
    NULL,
    0
};

/* ------------------- Data Object: EnAmnt (CDC: ASG) ------------------- */

DataObject iedModel_BIKE_DEEV1_EnAmnt = {
    DataObjectModelType,
    "EnAmnt",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    NULL, /* Fim da cadeia de DOs */
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0
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
    0,
    NULL,
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
    0,
    NULL,
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

/*=================================  STATIC VOID  ===========================================*/



static void
initializeValues()
{

}