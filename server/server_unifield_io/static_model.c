/*
 * static_model.c
 *
 * automatically generated from moveuff_v2.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_B1EBK_LLN0_BikeTelemetry;


extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda0;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda1;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda2;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda3;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda4;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda5;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda6;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda7;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda8;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda9;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda10;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda11;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda12;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda13;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda14;
extern DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda15;

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda0 = {
  "B1STG",
  false,
  "ZBAT1$MX$Vol$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda1
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda1 = {
  "B1STG",
  false,
  "ZBAT1$MX$Amp$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda2
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda2 = {
  "B1STG",
  false,
  "DBAT1$MX$SocPro$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda3
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda3 = {
  "B1HYD",
  false,
  "DSTK1$MX$InH2Pres$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda4
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda4 = {
  "B1HYD",
  false,
  "DSTK1$MX$OutDCA$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda5
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda5 = {
  "B1HYD",
  false,
  "DSTK1$MX$OutDCV$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda6
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda6 = {
  "B1EBK",
  false,
  "TLOC1$ST$GeoLoc$latitude", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda7
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda7 = {
  "B1EBK",
  false,
  "TLOC1$ST$GeoLoc$longitude", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda8
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda8 = {
  "B1EBK",
  false,
  "TLOC1$ST$NavFai$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda9
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda9 = {
  "B1EBK",
  false,
  "TLOC1$ST$SatAvl$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda10
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda10 = {
  "B1EBK",
  false,
  "LANTXSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda11
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda11 = {
  "B1EBK",
  false,
  "MOTXSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda12
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda12 = {
  "B1EBK",
  false,
  "ALMXSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda13
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda13 = {
  "B1HYD",
  false,
  "CELXSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda14
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda14 = {
  "B1HYD",
  false,
  "TNKXSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda15
};

DataSetEntry iedModelds_B1EBK_LLN0_BikeTelemetry_fcda15 = {
  "B1STG",
  false,
  "XSWI1$ST$Pos$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_B1EBK_LLN0_BikeTelemetry = {
  "B1EBK",
  "LLN0$BikeTelemetry",
  16,
  &iedModelds_B1EBK_LLN0_BikeTelemetry_fcda0,
  NULL
};

LogicalDevice iedModel_B1EBK = {
    LogicalDeviceModelType,
    "B1EBK",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_B1CTR,
    (ModelNode*) &iedModel_B1EBK_LLN0,
    NULL
};

LogicalNode iedModel_B1EBK_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_LLN0_Mod,
};

DataObject iedModel_B1EBK_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_Beh,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_NamPlt,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LLN0_Diag_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_B1EBK_LLN0,
    NULL,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_DEEV1 = {
    LogicalNodeModelType,
    "DEEV1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ISAF1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam,
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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVNam,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_DEEV1_Soc = {
    DataObjectModelType,
    "Soc",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_Soc_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_mag,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_units,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_db,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_sVC,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_Soc_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_DEEV1_Soc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

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
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_latitude,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVId_latitude = {
    DataAttributeModelType,
    "latitude",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_longitude,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVId_longitude = {
    DataAttributeModelType,
    "longitude",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_general,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVId_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVId_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EVId_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EVId,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_DEEV1_DptTm = {
    DataObjectModelType,
    "DptTm",
    (ModelNode*) &iedModel_B1EBK_DEEV1,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_DEEV1_DptTm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_DptTm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_DptTm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_DptTm_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_DEEV1_DptTm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_minVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_VMax_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_maxVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_VMax_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_VMax_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_VMax_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_VMax_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_minVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMax_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_maxVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMax_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMax_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMax_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMax_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_minVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMin_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_maxVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMin_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMin_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_AMin_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_AMin_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_minVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_maxVal,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt,
    NULL,
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_DEEV1_EnAmnt_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_ISAF1 = {
    LogicalNodeModelType,
    "ISAF1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ISAF1_Alm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ISAF1_Alm_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ISAF1_Alm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_LANTXSWI1 = {
    LogicalNodeModelType,
    "LANTXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEName,
};

DataObject iedModel_B1EBK_LANTXSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEName,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_stVal,
    0,
    -1
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
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkRef,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_LANTXSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1EBK_LANTXSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1_SwTyp,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_LANTXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_LANTXSWI1,
    NULL,
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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_ALMXSWI1 = {
    LogicalNodeModelType,
    "ALMXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEName,
};

DataObject iedModel_B1EBK_ALMXSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEName,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_stVal,
    0,
    -1
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
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkRef,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ALMXSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ALMXSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1_SwTyp,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ALMXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_ALMXSWI1,
    NULL,
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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_MOTXSWI1 = {
    LogicalNodeModelType,
    "MOTXSWI1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_TMVM1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEName,
};

DataObject iedModel_B1EBK_MOTXSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEName,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap,
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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Beh,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_stVal,
    0,
    -1
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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_stVal,
    0,
    -1
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkRef,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MOTXSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MOTXSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1_SwTyp,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MOTXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1EBK_MOTXSWI1,
    NULL,
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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_TMVM1 = {
    LogicalNodeModelType,
    "TMVM1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_TMVM1_EEHealth,
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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_mag,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_q,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_db,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subQ,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_TMVM1_MvmRteSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_RotThmSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_PresAlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ZMOT1_MotSt = {
    DataObjectModelType,
    "MotSt",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_ZMOT1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1EBK_ZMOT1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1EBK_ZMOT1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_B1EBK,
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt,
    (ModelNode*) &iedModel_B1EBK_MMXU1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_B1EBK_MMXU1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_MMXU1_TotW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_mag,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_sVC,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_units,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_db,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_sVC,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subQ,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_MMXU1_TotW_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_MMXU1_TotW,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

LogicalNode iedModel_B1EBK_TLOC1 = {
    LogicalNodeModelType,
    "TLOC1",
    (ModelNode*) &iedModel_B1EBK,
    NULL,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
};

DataObject iedModel_B1EBK_TLOC1_DistTot = {
    DataObjectModelType,
    "DistTot",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_mag,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_units,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_db,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subQ,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistTot_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistTot,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_TLOC1_DistSess = {
    DataObjectModelType,
    "DistSess",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_instMag,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_mag,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_units,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_db,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subQ,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_DistSess_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_DistSess,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_TLOC1_NavFai = {
    DataObjectModelType,
    "NavFai",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai_stVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_NavFai_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_NavFai_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_NavFai_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai,
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_NavFai_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_TLOC1_NavFai,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_SatAvl_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_SatAvl_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_TLOC1_SatAvl,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocPrec_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocPrec_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocPrec,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_mag,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

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
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_q,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_units,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_db,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_sVC,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subQ,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_LocDist_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1EBK_TLOC1_LocDist,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_TLOC1_AutDis = {
    DataObjectModelType,
    "AutDis",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_AutDis_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_AutDis_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1EBK_TLOC1_AutDis,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1EBK_TLOC1_GeoLoc = {
    DataObjectModelType,
    "GeoLoc",
    (ModelNode*) &iedModel_B1EBK_TLOC1,
    NULL,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_setVal,
    0,
    -1
};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_setVal = {
    DataAttributeModelType,
    "setVal",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_latitude,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_latitude = {
    DataAttributeModelType,
    "latitude",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_longitude,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_longitude = {
    DataAttributeModelType,
    "longitude",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_general,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1EBK_TLOC1_GeoLoc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};


LogicalDevice iedModel_B1CTR = {
    LogicalDeviceModelType,
    "B1CTR",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1CTR_LLN0,
    NULL
};

LogicalNode iedModel_B1CTR_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1CTR,
    (ModelNode*) &iedModel_B1CTR_LPHD1,
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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

DataObject iedModel_B1CTR_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1CTR_LLN0,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LLN0_Diag_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    NULL,
    0};

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
    NULL,
    0};

LogicalNode iedModel_B1CTR_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_B1CTR,
    (ModelNode*) &iedModel_B1CTR_LGOS1,
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
    0};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LPHD1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt,
    (ModelNode*) &iedModel_B1CTR_LPHD1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    0};

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
    0};

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
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

DataAttribute iedModel_B1CTR_LPHD1_OutOv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LPHD1_OutOv_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LPHD1_OutOv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

DataAttribute iedModel_B1CTR_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LPHD1_Proxy_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    NULL,
    0};

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
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_St_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    (ModelNode*) &iedModel_B1CTR_LGOS1_St_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_St_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LGOS1_St,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_NdsCom_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_NdsCom_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LGOS1_NdsCom,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_SimSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LGOS1_SimSt_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LGOS1_SimSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

DataAttribute iedModel_B1CTR_LTIM1_TmDT_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTIM1_TmDT_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1CTR_LTIM1_TmDT,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    NULL,
    0};

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
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

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
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

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
    NULL,
    0};

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
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_resv,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_resv = {
    DataAttributeModelType,
    "resv",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_optFlds,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_optFlds = {
    DataAttributeModelType,
    "optFlds",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OPTFLDS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_trgOps,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_trgOps = {
    DataAttributeModelType,
    "trgOps",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TRGOPS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_purgeBuf,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_purgeBuf = {
    DataAttributeModelType,
    "purgeBuf",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_entryID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_entryID = {
    DataAttributeModelType,
    "entryID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_timeOfEntry,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_timeOfEntry = {
    DataAttributeModelType,
    "timeOfEntry",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_goEna = {
    DataAttributeModelType,
    "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_goID = {
    DataAttributeModelType,
    "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_ndsCom = {
    DataAttributeModelType,
    "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GenTrk_dstAddress = {
    DataAttributeModelType,
    "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GenTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

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
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_resv,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_resv = {
    DataAttributeModelType,
    "resv",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_optFlds,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_optFlds = {
    DataAttributeModelType,
    "optFlds",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OPTFLDS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_trgOps,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_trgOps = {
    DataAttributeModelType,
    "trgOps",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TRGOPS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_purgeBuf,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_purgeBuf = {
    DataAttributeModelType,
    "purgeBuf",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_entryID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_entryID = {
    DataAttributeModelType,
    "entryID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_timeOfEntry,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_timeOfEntry = {
    DataAttributeModelType,
    "timeOfEntry",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_goEna = {
    DataAttributeModelType,
    "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_goID = {
    DataAttributeModelType,
    "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_ndsCom = {
    DataAttributeModelType,
    "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_UrcbTrk_dstAddress = {
    DataAttributeModelType,
    "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_UrcbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

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
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_resv,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_resv = {
    DataAttributeModelType,
    "resv",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_optFlds,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_optFlds = {
    DataAttributeModelType,
    "optFlds",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OPTFLDS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_trgOps,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_trgOps = {
    DataAttributeModelType,
    "trgOps",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TRGOPS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_purgeBuf,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_purgeBuf = {
    DataAttributeModelType,
    "purgeBuf",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_entryID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_entryID = {
    DataAttributeModelType,
    "entryID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_timeOfEntry,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_timeOfEntry = {
    DataAttributeModelType,
    "timeOfEntry",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_goEna = {
    DataAttributeModelType,
    "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_goID = {
    DataAttributeModelType,
    "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_ndsCom = {
    DataAttributeModelType,
    "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_BrcbTrk_dstAddress = {
    DataAttributeModelType,
    "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_BrcbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

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
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_serviceType = {
    DataAttributeModelType,
    "serviceType",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_errorCode,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_errorCode = {
    DataAttributeModelType,
    "errorCode",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_rptID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_rptID = {
    DataAttributeModelType,
    "rptID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_rptEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_rptEna = {
    DataAttributeModelType,
    "rptEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_resv,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_resv = {
    DataAttributeModelType,
    "resv",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_datSet,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_datSet = {
    DataAttributeModelType,
    "datSet",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_confRev,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_confRev = {
    DataAttributeModelType,
    "confRev",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_optFlds,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_optFlds = {
    DataAttributeModelType,
    "optFlds",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_bufTm,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OPTFLDS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_bufTm = {
    DataAttributeModelType,
    "bufTm",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_sqNum,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_sqNum = {
    DataAttributeModelType,
    "sqNum",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_trgOps,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_trgOps = {
    DataAttributeModelType,
    "trgOps",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_intgPd,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TRGOPS,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_intgPd = {
    DataAttributeModelType,
    "intgPd",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_gi,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_gi = {
    DataAttributeModelType,
    "gi",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_purgeBuf,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_purgeBuf = {
    DataAttributeModelType,
    "purgeBuf",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_entryID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_entryID = {
    DataAttributeModelType,
    "entryID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_timeOfEntry,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_timeOfEntry = {
    DataAttributeModelType,
    "timeOfEntry",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goEna,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goEna = {
    DataAttributeModelType,
    "goEna",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_goID,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goID = {
    DataAttributeModelType,
    "goID",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_ndsCom,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_ndsCom = {
    DataAttributeModelType,
    "ndsCom",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk_dstAddress,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_dstAddress = {
    DataAttributeModelType,
    "dstAddress",
    (ModelNode*) &iedModel_B1CTR_LTRK1_GocbTrk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};


LogicalDevice iedModel_B1HYD = {
    LogicalDeviceModelType,
    "B1HYD",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1HYD_LLN0,
    NULL
};

LogicalNode iedModel_B1HYD_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod,
};

DataObject iedModel_B1HYD_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod,
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    (ModelNode*) &iedModel_B1HYD_LLN0_Health,
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh,
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1HYD_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_LLN0_Health,
    (ModelNode*) &iedModel_B1HYD_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_LLN0_Health,
    (ModelNode*) &iedModel_B1HYD_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1HYD_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_LLN0_Diag = {
    DataObjectModelType,
    "Diag",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_Diag_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Diag_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag,
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_Diag_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_B1HYD_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_LEDRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_KTNK1 = {
    LogicalNodeModelType,
    "KTNK1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
};

DataObject iedModel_B1HYD_KTNK1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1HYD_KTNK1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_OpTmh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_OpTmh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_OpTmh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_LevPct = {
    DataObjectModelType,
    "LevPct",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_mag,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_q,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_units,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_db,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subQ,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_LevPct_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_KTNK1_LevPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_Vlm = {
    DataObjectModelType,
    "Vlm",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_mag,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_q,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_units,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_db,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subQ,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_Vlm_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_KTNK1_Vlm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_VlmCap = {
    DataObjectModelType,
    "VlmCap",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_minVal,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_sVC,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_maxVal,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_VlmCap_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KTNK1_VlmCap_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KTNK1_TnkTyp = {
    DataObjectModelType,
    "TnkTyp",
    (ModelNode*) &iedModel_B1HYD_KTNK1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KTNK1_TnkTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp,
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_TnkTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp,
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KTNK1_TnkTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KTNK1_TnkTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_STMP1 = {
    LogicalNodeModelType,
    "STMP1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip,
};

DataObject iedModel_B1HYD_STMP1_Trip = {
    DataObjectModelType,
    "Trip",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_Trip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip,
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Trip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip,
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Trip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip,
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Trip_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_STMP1_Trip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_STMP1_RteTrip = {
    DataObjectModelType,
    "RteTrip",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_RteTrip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTrip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTrip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTrip_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTrip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_STMP1_Tmp = {
    DataObjectModelType,
    "Tmp",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_Tmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_mag,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_q,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_units,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_db,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subQ,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_Tmp_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_STMP1_Tmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_STMP1_TmpRte = {
    DataObjectModelType,
    "TmpRte",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_mag,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_q,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_units,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_db,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subQ,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TmpRte_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_STMP1_TmpRte,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_STMP1_TripSet = {
    DataObjectModelType,
    "TripSet",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_TripSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_minVal,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_maxVal,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet,
    NULL,
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_TripSet_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_TripSet_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_STMP1_RteTripSet = {
    DataObjectModelType,
    "RteTripSet",
    (ModelNode*) &iedModel_B1HYD_STMP1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_minVal,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_sVC,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_maxVal,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet,
    NULL,
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_STMP1_RteTripSet_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_STMP1_RteTripSet_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_KVLV1 = {
    LogicalNodeModelType,
    "KVLV1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt,
};

DataObject iedModel_B1HYD_KVLV1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_ClsPos = {
    DataObjectModelType,
    "ClsPos",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_ClsPos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsPos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsPos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsPos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsPos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_OpnPos = {
    DataObjectModelType,
    "OpnPos",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_OpnPos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnPos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnPos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnPos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnPos,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_Mvm = {
    DataObjectModelType,
    "Mvm",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_Mvm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Mvm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Mvm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Mvm_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Mvm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_Stuck = {
    DataObjectModelType,
    "Stuck",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_Stuck_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Stuck_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Stuck_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Stuck_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Stuck,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_PosVlv = {
    DataObjectModelType,
    "PosVlv",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_mag,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_q,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_units,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_db,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subQ,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosVlv_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosVlv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_PosSpt = {
    DataObjectModelType,
    "PosSpt",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_KVLV1_PosSpt_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_KVLV1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_OpnLim = {
    DataObjectModelType,
    "OpnLim",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_minVal,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_maxVal,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_OpnLim_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_OpnLim_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_KVLV1_ClsLim = {
    DataObjectModelType,
    "ClsLim",
    (ModelNode*) &iedModel_B1HYD_KVLV1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_minVal,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_sVC,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_maxVal,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim,
    NULL,
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_KVLV1_ClsLim_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_KVLV1_ClsLim_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_DFCL1 = {
    LogicalNodeModelType,
    "DFCL1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct,
};

DataObject iedModel_B1HYD_DFCL1_LifeEfcPct = {
    DataObjectModelType,
    "LifeEfcPct",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct,
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct,
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct,
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_DFCL1_LifeEfcPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_MaintTms = {
    DataObjectModelType,
    "MaintTms",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_MaintTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_MaintTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_MaintTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFCL1_MaintTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFCL1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_WtrLev = {
    DataObjectModelType,
    "WtrLev",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_mag,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_q,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_units,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_db,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subQ,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_WtrLev_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DFCL1_WtrLev,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_OutH2Lev = {
    DataObjectModelType,
    "OutH2Lev",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_mag,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_q,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_units,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_db,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subQ,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DFCL1_OutH2Lev,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_Alim = {
    DataObjectModelType,
    "Alim",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_Alim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_minVal,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_maxVal,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim,
    NULL,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Alim_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Alim_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFCL1_Vlim = {
    DataObjectModelType,
    "Vlim",
    (ModelNode*) &iedModel_B1HYD_DFCL1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_minVal,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_sVC,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_maxVal,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim,
    NULL,
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFCL1_Vlim_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFCL1_Vlim_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_DSTK1 = {
    LogicalNodeModelType,
    "DSTK1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
};

DataObject iedModel_B1HYD_DSTK1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1HYD_DSTK1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_StcSt = {
    DataObjectModelType,
    "StcSt",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_StcSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_CelVTrCnt = {
    DataObjectModelType,
    "CelVTrCnt",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt,
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_CelVTrCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_StcLodTms = {
    DataObjectModelType,
    "StcLodTms",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcLodTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_MaintTms = {
    DataObjectModelType,
    "MaintTms",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_MaintTms_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_MaintTms_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms,
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_MaintTms_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_MaintTms,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health,
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_StcEfcPct = {
    DataObjectModelType,
    "StcEfcPct",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_StcEfcPct,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_OutDCV = {
    DataObjectModelType,
    "OutDCV",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCV_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCV,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_OutDCA = {
    DataObjectModelType,
    "OutDCA",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutDCA_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutDCA,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_InClTmp = {
    DataObjectModelType,
    "InClTmp",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InClTmp_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InClTmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_OutClTmp = {
    DataObjectModelType,
    "OutClTmp",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_OutClTmp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DSTK1_InH2Pres = {
    DataObjectModelType,
    "InH2Pres",
    (ModelNode*) &iedModel_B1HYD_DSTK1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_mag,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_q,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_units,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_db,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_sVC,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subQ,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DSTK1_InH2Pres,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_SPRS1 = {
    LogicalNodeModelType,
    "SPRS1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm,
};

DataObject iedModel_B1HYD_SPRS1_Alm = {
    DataObjectModelType,
    "Alm",
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_SPRS1_Alm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Alm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Alm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Alm_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Alm,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_SPRS1_Trip = {
    DataObjectModelType,
    "Trip",
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_SPRS1_Trip_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Trip_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Trip_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Trip_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Trip,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_SPRS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_SPRS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_SPRS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_SPRS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_SPRS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_SPRS1_AlmSet = {
    DataObjectModelType,
    "AlmSet",
    (ModelNode*) &iedModel_B1HYD_SPRS1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_setMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_sVC,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_minVal,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_sVC,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_maxVal,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet,
    NULL,
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_SPRS1_AlmSet_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_SPRS1_AlmSet_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_TPRS1 = {
    LogicalNodeModelType,
    "TPRS1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_DFPM1,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEName,
};

DataObject iedModel_B1HYD_TPRS1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TPRS1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEName,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TPRS1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TPRS1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TPRS1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TPRS1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TPRS1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TPRS1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TPRS1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health,
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TPRS1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TPRS1_PresSv = {
    DataObjectModelType,
    "PresSv",
    (ModelNode*) &iedModel_B1HYD_TPRS1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_mag,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_q,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_sVC,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_units,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_db,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_sVC,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subQ,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TPRS1_PresSv_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_TPRS1_PresSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_DFPM1 = {
    LogicalNodeModelType,
    "DFPM1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt,
};

DataObject iedModel_B1HYD_DFPM1_FPMSt = {
    DataObjectModelType,
    "FPMSt",
    (ModelNode*) &iedModel_B1HYD_DFPM1,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFPM1_FPMSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt,
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_FPMSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt,
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_FPMSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFPM1_FPMSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFPM1_CnvEfc = {
    DataObjectModelType,
    "CnvEfc",
    (ModelNode*) &iedModel_B1HYD_DFPM1,
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_instMag,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_mag,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_q,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_sVC,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_units,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_db,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_sVC,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subQ,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1HYD_DFPM1_CnvEfc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_DFPM1_ProcTyp = {
    DataObjectModelType,
    "ProcTyp",
    (ModelNode*) &iedModel_B1HYD_DFPM1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_DFPM1_ProcTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp,
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_ProcTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp,
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_DFPM1_ProcTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_DFPM1_ProcTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_TNKXSWI1 = {
    LogicalNodeModelType,
    "TNKXSWI1",
    (ModelNode*) &iedModel_B1HYD,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEName,
};

DataObject iedModel_B1HYD_TNKXSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEName,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkRef,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_TNKXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_TNKXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_B1HYD_CELXSWI1 = {
    LogicalNodeModelType,
    "CELXSWI1",
    (ModelNode*) &iedModel_B1HYD,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEName,
};

DataObject iedModel_B1HYD_CELXSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEName,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkRef,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1HYD_CELXSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1,
    NULL,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp,
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1HYD_CELXSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};


LogicalDevice iedModel_B1STG = {
    LogicalDeviceModelType,
    "B1STG",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_B1STG_LLN0,
    NULL
};

LogicalNode iedModel_B1STG_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_LLN0_Mod,
};

DataObject iedModel_B1STG_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    (ModelNode*) &iedModel_B1STG_LLN0_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Mod,
    (ModelNode*) &iedModel_B1STG_LLN0_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Mod,
    (ModelNode*) &iedModel_B1STG_LLN0_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Mod,
    (ModelNode*) &iedModel_B1STG_LLN0_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_LLN0_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    (ModelNode*) &iedModel_B1STG_LLN0_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    (ModelNode*) &iedModel_B1STG_LLN0_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_Diag,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1STG_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_LLN0_Diag = {
    DataObjectModelType,
    "Diag",
    (ModelNode*) &iedModel_B1STG_LLN0,
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1STG_LLN0_Diag_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_Diag_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_Diag,
    (ModelNode*) &iedModel_B1STG_LLN0_Diag_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Diag_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_LLN0_Diag,
    (ModelNode*) &iedModel_B1STG_LLN0_Diag_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Diag_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_LLN0_Diag,
    (ModelNode*) &iedModel_B1STG_LLN0_Diag_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_Diag_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_LLN0_Diag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_B1STG_LLN0,
    NULL,
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_LEDRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs,
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_B1STG_XSWI1 = {
    LogicalNodeModelType,
    "XSWI1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEName,
};

DataObject iedModel_B1STG_XSWI1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1STG_XSWI1_EEName,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1STG_XSWI1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1STG_XSWI1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_SwOpCap = {
    DataObjectModelType,
    "SwOpCap",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_SwOpCap_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_SwOpCap_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_SwOpCap_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwOpCap,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Loc_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_Loc,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_LocKey = {
    DataObjectModelType,
    "LocKey",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_LocKey_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocKey_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocKey_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocKey_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocKey,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth,
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Blk = {
    DataObjectModelType,
    "Blk",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Blk_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk,
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Blk_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk,
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Blk_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk,
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Blk_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_Blk,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    (ModelNode*) &iedModel_B1STG_XSWI1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_LocSta = {
    DataObjectModelType,
    "LocSta",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_LocSta_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta,
    NULL,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_ctlNum,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_LocSta_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_LocSta_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos,
    NULL,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_Pos_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn,
    NULL,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlNum,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkOpn_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls,
    NULL,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_ctlNum,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orCat,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orIdent,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_origin,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_T,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_Test,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper_Check,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkCls_Oper,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkRef,
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod,
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod,
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod,
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_XSWI1_Mod,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_BlkRef = {
    DataObjectModelType,
    "BlkRef",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkRef_setSrcRef,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_BlkRef_setSrcRef = {
    DataAttributeModelType,
    "setSrcRef",
    (ModelNode*) &iedModel_B1STG_XSWI1_BlkRef,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_VISIBLE_STRING_129,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_OpCnt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_XSWI1_SwTyp = {
    DataObjectModelType,
    "SwTyp",
    (ModelNode*) &iedModel_B1STG_XSWI1,
    NULL,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_XSWI1_SwTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_XSWI1_SwTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_B1STG_TTMP1 = {
    LogicalNodeModelType,
    "TTMP1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
};

DataObject iedModel_B1STG_TTMP1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_swRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_d,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_configRev,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt_lnNs,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_NamPlt_lnNs = {
    DataAttributeModelType,
    "lnNs",
    (ModelNode*) &iedModel_B1STG_TTMP1_NamPlt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_TTMP1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_TTMP1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    (ModelNode*) &iedModel_B1STG_TTMP1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_TTMP1_TmpSv = {
    DataObjectModelType,
    "TmpSv",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_mag,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_q,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_units,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_db,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subQ,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpSv_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpSv,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_TTMP1_TmpTgt = {
    DataObjectModelType,
    "TmpTgt",
    (ModelNode*) &iedModel_B1STG_TTMP1,
    NULL,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_minVal,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_maxVal,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt,
    NULL,
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_TTMP1_TmpTgt_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_TTMP1_TmpTgt_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

LogicalNode iedModel_B1STG_DBAT1 = {
    LogicalNodeModelType,
    "DBAT1",
    (ModelNode*) &iedModel_B1STG,
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
};

DataObject iedModel_B1STG_DBAT1_EEName = {
    DataObjectModelType,
    "EEName",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName_vendor,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_EEName_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName_model,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_EEName_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEName,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_ChaSt = {
    DataObjectModelType,
    "ChaSt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_DschSt = {
    DataObjectModelType,
    "DschSt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_DschSt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_DschSt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_DschSt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_DschSt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_EEHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_EEHealth,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_Amp = {
    DataObjectModelType,
    "Amp",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_Amp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_units,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_db,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subQ,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Amp_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_Amp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_Watt = {
    DataObjectModelType,
    "Watt",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_Watt_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_units,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_db,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subQ,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_Watt_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_Watt,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_AvlChaAhr = {
    DataObjectModelType,
    "AvlChaAhr",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_units,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_db,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subQ,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlChaAhr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_AvlDschAhr = {
    DataObjectModelType,
    "AvlDschAhr",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_units,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_db,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subQ,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_AvlDschAhr,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_BatTyp = {
    DataObjectModelType,
    "BatTyp",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_BatTyp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_BatTyp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_ChaAmpMax = {
    DataObjectModelType,
    "ChaAmpMax",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_minVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_maxVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaAmpMax_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_AhrRtg = {
    DataObjectModelType,
    "AhrRtg",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_minVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_maxVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_AhrRtg_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_AhrRtg_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_ChaVolMaxRtg = {
    DataObjectModelType,
    "ChaVolMaxRtg",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag = {
    DataAttributeModelType,
    "setMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SP,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_minVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_minVal = {
    DataAttributeModelType,
    "minVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_maxVal,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_minVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_minVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_minVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_maxVal = {
    DataAttributeModelType,
    "maxVal",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_maxVal_f,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_maxVal_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_ChaVolMaxRtg_maxVal,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_DBAT1_SocPro = {
    DataObjectModelType,
    "SocPro",
    (ModelNode*) &iedModel_B1STG_DBAT1,
    NULL,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_DBAT1_SocPro_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_mag,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_q,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_units,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_db,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_sVC,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subQ,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_DBAT1_SocPro_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_DBAT1_SocPro,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

LogicalNode iedModel_B1STG_ZBAT1 = {
    LogicalNodeModelType,
    "ZBAT1",
    (ModelNode*) &iedModel_B1STG,
    NULL,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
};

DataObject iedModel_B1STG_ZBAT1_BatHi = {
    DataObjectModelType,
    "BatHi",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatHi_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatHi,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_BatLo = {
    DataObjectModelType,
    "BatLo",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo_ctlModel,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_BatLo_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_B1STG_ZBAT1_BatLo,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Beh,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_stVal,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_q,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health_t,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Health,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_Vol = {
    DataObjectModelType,
    "Vol",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Vol_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_mag,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_q,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_units,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_db,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subQ,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Vol_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Vol,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_Amp = {
    DataObjectModelType,
    "Amp",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_Amp_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_mag,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_q,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_units,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_db,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subQ,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_Amp_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_Amp,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_B1STG_ZBAT1_VolChgRte = {
    DataObjectModelType,
    "VolChgRte",
    (ModelNode*) &iedModel_B1STG_ZBAT1,
    NULL,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_instMag,
    0,
    -1
};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_instMag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_instMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_q,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag_f,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_mag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_t,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_units,
    NULL,
    0,
    -1,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_units_SIUnit,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_units,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_units_multiplier,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_units,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_sVC = {
    DataAttributeModelType,
    "sVC",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_db,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_sVC_scaleFactor,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_sVC_scaleFactor = {
    DataAttributeModelType,
    "scaleFactor",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_sVC,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_sVC_offset,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_sVC_offset = {
    DataAttributeModelType,
    "offset",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_sVC,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subEna,
    NULL,
    0,
    -1,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_subEna = {
    DataAttributeModelType,
    "subEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subMag,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_subMag = {
    DataAttributeModelType,
    "subMag",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subQ,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subMag_f,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_subMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subMag,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_subQ = {
    DataAttributeModelType,
    "subQ",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_subID,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_subID = {
    DataAttributeModelType,
    "subID",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte_blkEna,
    NULL,
    0,
    -1,
    IEC61850_FC_SV,
    IEC61850_VISIBLE_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_blkEna = {
    DataAttributeModelType,
    "blkEna",
    (ModelNode*) &iedModel_B1STG_ZBAT1_VolChgRte,
    NULL,
    NULL,
    0,
    -1,
    IEC61850_FC_BL,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_B1EBK_LLN0_report0;

ReportControlBlock iedModel_B1EBK_LLN0_report0 = {&iedModel_B1EBK_LLN0, "BikeTelemetryRCB01", "BikeTelemetry", false, "BikeTelemetry", 1, 27, 175, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "MoveUFF_Geral",
    &iedModel_B1EBK,
    &iedModelds_B1EBK_LLN0_BikeTelemetry,
    &iedModel_B1EBK_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{
}
