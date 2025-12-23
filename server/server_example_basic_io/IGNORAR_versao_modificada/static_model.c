/*
 * static_model.c
 *
 * automatically generated from SEL_421.ICD
 */
#include "static_model.h"
#include <stdio.h>
#include <stdlib.h>

static void initializeValues();

LogicalDevice iedModel_BIKE = {
    LogicalDeviceModelType,
    "BIKE",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_BIKE_LLN0
};

LogicalNode iedModel_BIKE_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
};

DataObject iedModel_BIKE_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_BIKE_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    (ModelNode*) &iedModel_BIKE_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_BIKE_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    (ModelNode*) &iedModel_BIKE_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_LLN0,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    (ModelNode*) &iedModel_BIKE_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_BIKE_LLN0,
    NULL,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_BIKE_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_BIKE_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};





LogicalNode iedModel_BIKE_DEEV1 = {
    LogicalNodeModelType,
    "DEEV1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_XSWI1,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
};

DataObject iedModel_BIKE_DEEV1_EVNam = {
    DataObjectModelType,
    "EVNam",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam_vendor,
    0
};

DataAttribute iedModel_BIKE_DEEV1_EVNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam_latitude,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_DEEV1_EVNam_latitude = {
    DataAttributeModelType,
    "latitude",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam_longitude,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_EVNam_longitude = {
    DataAttributeModelType,
    "longitude",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam_altitude,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_EVNam_altitude = {
    DataAttributeModelType,
    "altitude",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_ConnTypSel = {
    DataObjectModelType,
    "ConnTypSel",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_stVal,
    0
};

DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_ConnTypSel,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_stVal,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_stVal,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    (ModelNode*) &iedModel_BIKE_DEEV1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_Soc = {
    DataObjectModelType,
    "Soc",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_instMag,
    0
};

DataAttribute iedModel_BIKE_DEEV1_Soc_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_mag,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Soc_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Soc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};
    
DataAttribute iedModel_BIKE_DEEV1_Soc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_DEEV1_Soc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_EVId = {
    DataObjectModelType,
    "EVId",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm,
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId_setVal,
    0
};

DataAttribute iedModel_BIKE_DEEV1_EVId_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_EVId,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_DptTm = {
    DataObjectModelType,
    "DptTm",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm_setTm,
    0
};

DataAttribute iedModel_BIKE_DEEV1_DptTm_setTm = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_BIKE_DEEV1_DptTm,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_TIMESTAMP,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_VMax = {
    DataObjectModelType,
    "VMax",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax,
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax_setMag,
    0
};

DataAttribute iedModel_BIKE_DEEV1_VMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_VMax,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};



DataObject iedModel_BIKE_DEEV1_AMax = {
    DataObjectModelType,
    "AMax",
    (ModelNode*) &iedModel_BIKE_DEEV1,
    NULL,
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax_setMag,
    0
};

DataAttribute iedModel_BIKE_DEEV1_AMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_BIKE_DEEV1_AMax,
    NULL,
    NULL,
    0,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};


LogicalNode iedModel_BIKE_XSWI1 = {
    LogicalNodeModelType,
    "XSWI1",
    (ModelNode*) &iedModel_BIKE,
    (ModelNode*) &iedModel_BIKE_GGIO1,
    (ModelNode*) &iedModel_BIKE_XSWI1_Loc,
};

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

/*

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
    
*/  

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
    (ModelNode*) &iedModel_BIKE_XSWI1_OpCnt,
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



// DataObject iedModel_BIKE_XSWI1_Pos = {
//     DataObjectModelType,
//     "Pos",
//     (ModelNode*) &iedModel_BIKE_XSWI1,
//     (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     0
// };

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper = {
//    DataAttributeModelType,
//    "ctlVal",
//    (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
//    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_stVal,
//    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_ctlVal,
//    0,
//    IEC61850_FC_CO,
//    IEC61850_CONSTRUCTED,
//    0,
//    NULL,
// 0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlVal = {
//    DataAttributeModelType,
//    "ctlVal",
//    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//    (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
//    NULL,
//    0,
//    IEC61850_FC_CO,
//    IEC61850_BOOLEAN,
//    0,
//    NULL,
// 0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin = {
//     DataAttributeModelType,
//     "origin",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_ctlNum,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_CONSTRUCTED,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat = {
//     DataAttributeModelType,
//     "orCat",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_ENUMERATED,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent = {
//     DataAttributeModelType,
//     "orIdent",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_origin,
//     NULL,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_OCTET_STRING_64,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlNum = {
//     DataAttributeModelType,
//     "ctlNum",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_T,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_INT8U,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_T = {
//     DataAttributeModelType,
//     "T",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_Test,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_TIMESTAMP,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Test = {
//     DataAttributeModelType,
//     "Test",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper_Check,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_BOOLEAN,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Check = {
//     DataAttributeModelType,
//     "Check",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_Oper,
//     NULL,
//     NULL,
//     0,
//     IEC61850_FC_CO,
//     IEC61850_CHECK,
//     0,
//     NULL,
//     0};

// DataAttribute iedModel_BIKE_XSWI1_Pos_stVal = {
//     DataAttributeModelType,
//     "stVal",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_q,
//     NULL,
//     0,
//     IEC61850_FC_ST,
//     IEC61850_BOOLEAN,
//     0 + TRG_OPT_DATA_CHANGED,
//     NULL,
//     0};
    
// DataAttribute iedModel_BIKE_XSWI1_Pos_q = {
//     DataAttributeModelType,
//     "q",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_t,
//     NULL,
//     0,
//     IEC61850_FC_ST,
//     IEC61850_QUALITY,
//     0 + TRG_OPT_QUALITY_CHANGED,
//     NULL,
//     0};
    
// DataAttribute iedModel_BIKE_XSWI1_Pos_t = {
//     DataAttributeModelType,
//     "t",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos_ctlModel,
//     NULL,
//     0,
//     IEC61850_FC_ST,
//     IEC61850_TIMESTAMP,
//     0,
//     NULL,
//     0};
    
// DataAttribute iedModel_BIKE_XSWI1_Pos_ctlModel = {
//     DataAttributeModelType,
//     "ctlModel",
//     (ModelNode*) &iedModel_BIKE_XSWI1_Pos,
//     NULL,
//     NULL,
//     0,
//     IEC61850_FC_CF,
//     IEC61850_ENUMERATED,
//     0 + TRG_OPT_DATA_CHANGED,
//     NULL,
//     0};



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
    IEC61850_FC_ST,
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

//AQUI VOLTAR
//DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlVal = {
//    DataAttributeModelType,
//    "ctlVal",
//    (ModelNode*) &iedModel_BIKE_XSWI1_BlkOpn,
//    NULL,
//    NULL,
//    0,
//    IEC61850_FC_ST,
//    IEC61850_TIMESTAMP,
//   0,
//    NULL,
//    0};
    
    

DataObject iedModel_BIKE_XSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_BIKE_XSWI1,
    NULL,
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



LogicalNode iedModel_BIKE_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_BIKE,
    NULL,
    (ModelNode*) &iedModel_BIKE_GGIO1_EEName,
};

DataObject iedModel_BIKE_GGIO1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_BIKE_GGIO1,
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln,
    (ModelNode*) &iedModel_BIKE_GGIO1_EEName_vendor,
    0
};

DataAttribute iedModel_BIKE_GGIO1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_GGIO1_EEName,
    (ModelNode*) &iedModel_BIKE_GGIO1_EEName_name,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_GGIO1_EEName_name = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_BIKE_GGIO1_EEName,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataObject iedModel_BIKE_GGIO1_Intln = {
    DataObjectModelType,
    "Intln",
    (ModelNode*) &iedModel_BIKE_GGIO1,
    NULL,
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln_stVal,
    0
};

DataAttribute iedModel_BIKE_GGIO1_Intln_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln,
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_GGIO1_Intln_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln,
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_BIKE_GGIO1_Intln_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_BIKE_GGIO1_Intln,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

//AQUI VOLTAR
//DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlVal = {
//    DataAttributeModelType,
//    "ctlVal",
//    (ModelNode*) &iedModel_BIKE_XSWI1_BlkCls,
//    NULL,
//    NULL,
//    0,
//    IEC61850_FC_ST,
//    IEC61850_TIMESTAMP,
//    0,
//    NULL,
//    0};

//extern SettingGroupControlBlock iedModel_BIKE_LLN0_sgcb;

//SettingGroupControlBlock iedModel_BIKE_LLN0_sgcb = {&iedModel_BIKE_LLN0, 1, 6, 0, false, 0, 0, NULL};

IedModel iedModel = {
    "MOVEUFF",
    &iedModel_BIKE,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,//&iedModel_BIKE_LLN0_sgcb,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_BIKE_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_BIKE_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_BIKE_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_BIKE_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_BIKE_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("FRIENDS Lab");

iedModel_BIKE_LLN0_NamPlt_swRev.mmsValue = MmsValue_newVisibleString("1.0");

iedModel_BIKE_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2020");

iedModel_BIKE_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("MMS MOVE UFF");




iedModel_BIKE_DEEV1_EVNam_vendor.mmsValue = MmsValue_newVisibleString("FRIENDS Lab");

iedModel_BIKE_DEEV1_ConnTypSel_stVal.mmsValue = MmsValue_newInteger(1);

iedModel_BIKE_DEEV1_Beh_stVal.mmsValue = MmsValue_newInteger(1);

iedModel_BIKE_DEEV1_Health_stVal.mmsValue = MmsValue_newInteger(1);

iedModel_BIKE_DEEV1_EVId_setVal.mmsValue = MmsValue_newVisibleString("1");

iedModel_BIKE_DEEV1_VMax_setMag.mmsValue = MmsValue_newFloat(24);

iedModel_BIKE_DEEV1_AMax_setMag.mmsValue = MmsValue_newFloat(5);




iedModel_BIKE_XSWI1_SwTyp_stVal.mmsValue = MmsValue_newInteger(1);

iedModel_BIKE_XSWI1_Loc_stVal.mmsValue = MmsValue_newBoolean(true);

iedModel_BIKE_XSWI1_BlkOpn_ctlModel.mmsValue = MmsValue_newVisibleString("1");

iedModel_BIKE_XSWI1_BlkCls_ctlModel.mmsValue = MmsValue_newVisibleString("1");

//iedModel_BIKE_XSWI1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);




iedModel_BIKE_GGIO1_EEName_vendor.mmsValue = MmsValue_newVisibleString("KYA Engenharia");

iedModel_BIKE_GGIO1_EEName_name.mmsValue = MmsValue_newVisibleString("Matheus Ayello");

iedModel_BIKE_GGIO1_Intln_stVal.mmsValue = MmsValue_newInteger(1);


}

