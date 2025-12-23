/*
 * static_model.h
 * Dispositivo: B1STG
 * Nós: LLN0, XSWI1, TTMP1, DBAT1
 * Status: 100% COMPLETO (Inclui TTMP1)
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_B1STG;

/* Logical Nodes */
extern LogicalNode iedModel_B1STG_LLN0;
extern LogicalNode iedModel_B1STG_XSWI1;
extern LogicalNode iedModel_B1STG_TTMP1; 
extern LogicalNode iedModel_B1STG_DBAT1;
extern LogicalNode iedModel_B1STG_ZBAT1;

/* ==================================================================
 * LLN0
 * ==================================================================
 */
extern DataObject iedModel_B1STG_LLN0_Beh;
extern DataAttribute iedModel_B1STG_LLN0_Beh_stVal;
extern DataAttribute iedModel_B1STG_LLN0_Beh_q;
extern DataAttribute iedModel_B1STG_LLN0_Beh_t;
extern DataObject iedModel_B1STG_LLN0_Health;
extern DataAttribute iedModel_B1STG_LLN0_Health_stVal;
extern DataAttribute iedModel_B1STG_LLN0_Health_q;
extern DataAttribute iedModel_B1STG_LLN0_Health_t;
extern DataObject iedModel_B1STG_LLN0_NamPlt;
extern DataAttribute iedModel_B1STG_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_B1STG_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_B1STG_LLN0_NamPlt_d;

/* ==================================================================
 * XSWI1
 * ==================================================================
 */
extern DataObject iedModel_B1STG_XSWI1_SwTyp;
extern DataAttribute iedModel_B1STG_XSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_SwTyp_q;
extern DataAttribute iedModel_B1STG_XSWI1_SwTyp_t;
extern DataObject iedModel_B1STG_XSWI1_Loc;
extern DataAttribute iedModel_B1STG_XSWI1_Loc_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_Loc_q;
extern DataAttribute iedModel_B1STG_XSWI1_Loc_t;
extern DataObject iedModel_B1STG_XSWI1_OpCnt;
extern DataAttribute iedModel_B1STG_XSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_OpCnt_q;
extern DataAttribute iedModel_B1STG_XSWI1_OpCnt_t;
extern DataObject iedModel_B1STG_XSWI1_Beh;
extern DataAttribute iedModel_B1STG_XSWI1_Beh_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_Beh_q;
extern DataAttribute iedModel_B1STG_XSWI1_Beh_t;
extern DataObject iedModel_B1STG_XSWI1_Health;
extern DataAttribute iedModel_B1STG_XSWI1_Health_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_Health_q;
extern DataAttribute iedModel_B1STG_XSWI1_Health_t;
extern DataObject iedModel_B1STG_XSWI1_Pos;
extern DataAttribute iedModel_B1STG_XSWI1_Pos_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_Pos_q;
extern DataAttribute iedModel_B1STG_XSWI1_Pos_t;
extern DataAttribute iedModel_B1STG_XSWI1_Pos_ctlModel;
extern DataObject iedModel_B1STG_XSWI1_BlkOpn;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orCat;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_origin_orIdent;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_T;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Test;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_Oper_Check;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1STG_XSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1STG_XSWI1_BlkCls;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orCat;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_origin_orIdent;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_T;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Test;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_Oper_Check;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_q;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_t;
extern DataAttribute iedModel_B1STG_XSWI1_BlkCls_ctlModel;

/* ==================================================================
 * TTMP1 (NOVO - Temperature)
 * ==================================================================
 */
extern DataObject iedModel_B1STG_TTMP1_NamPlt;
extern DataAttribute iedModel_B1STG_TTMP1_NamPlt_vendor;
extern DataAttribute iedModel_B1STG_TTMP1_NamPlt_swRev;
extern DataAttribute iedModel_B1STG_TTMP1_NamPlt_d;
extern DataObject iedModel_B1STG_TTMP1_Beh;
extern DataAttribute iedModel_B1STG_TTMP1_Beh_stVal;
extern DataAttribute iedModel_B1STG_TTMP1_Beh_q;
extern DataAttribute iedModel_B1STG_TTMP1_Beh_t;
extern DataObject iedModel_B1STG_TTMP1_Health;
extern DataAttribute iedModel_B1STG_TTMP1_Health_stVal;
extern DataAttribute iedModel_B1STG_TTMP1_Health_q;
extern DataAttribute iedModel_B1STG_TTMP1_Health_t;
extern DataObject iedModel_B1STG_TTMP1_TmpSv;
extern DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag;
extern DataAttribute iedModel_B1STG_TTMP1_TmpSv_instMag_f;
extern DataAttribute iedModel_B1STG_TTMP1_TmpSv_q;
extern DataAttribute iedModel_B1STG_TTMP1_TmpSv_t;
extern DataObject iedModel_B1STG_TTMP1_TmpTgt;
extern DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag;
extern DataAttribute iedModel_B1STG_TTMP1_TmpTgt_setMag_f;
extern DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC;
extern DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_scaleFactor;
extern DataAttribute iedModel_B1STG_TTMP1_TmpTgt_sVC_offset;


/* ==================================================================
 * DBAT1
 * ==================================================================
 */
extern DataObject iedModel_B1STG_DBAT1_EEName;
extern DataAttribute iedModel_B1STG_DBAT1_EEName_vendor; /* Novo */
extern DataAttribute iedModel_B1STG_DBAT1_EEName_model;  /* Novo */
extern DataObject iedModel_B1STG_DBAT1_ChaSt;
extern DataAttribute iedModel_B1STG_DBAT1_ChaSt_stVal;
extern DataAttribute iedModel_B1STG_DBAT1_ChaSt_q;
extern DataAttribute iedModel_B1STG_DBAT1_ChaSt_t;
extern DataObject iedModel_B1STG_DBAT1_DschSt;
extern DataAttribute iedModel_B1STG_DBAT1_DschSt_stVal;
extern DataAttribute iedModel_B1STG_DBAT1_DschSt_q;
extern DataAttribute iedModel_B1STG_DBAT1_DschSt_t;
extern DataObject iedModel_B1STG_DBAT1_EEHealth;
extern DataAttribute iedModel_B1STG_DBAT1_EEHealth_stVal;
extern DataAttribute iedModel_B1STG_DBAT1_EEHealth_q;
extern DataAttribute iedModel_B1STG_DBAT1_EEHealth_t;
extern DataObject iedModel_B1STG_DBAT1_Amp;
extern DataAttribute iedModel_B1STG_DBAT1_Amp_mag;
extern DataAttribute iedModel_B1STG_DBAT1_Amp_mag_f;
extern DataAttribute iedModel_B1STG_DBAT1_Amp_q;
extern DataAttribute iedModel_B1STG_DBAT1_Amp_t;
extern DataAttribute iedModel_B1STG_DBAT1_Amp_db;
extern DataObject iedModel_B1STG_DBAT1_Watt;
extern DataAttribute iedModel_B1STG_DBAT1_Watt_mag;
extern DataAttribute iedModel_B1STG_DBAT1_Watt_mag_f;
extern DataAttribute iedModel_B1STG_DBAT1_Watt_q;
extern DataAttribute iedModel_B1STG_DBAT1_Watt_t;
extern DataAttribute iedModel_B1STG_DBAT1_Watt_db;
extern DataObject iedModel_B1STG_DBAT1_AvlChaAhr;
extern DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag;
extern DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_mag_f;
extern DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_q;
extern DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_t;
extern DataAttribute iedModel_B1STG_DBAT1_AvlChaAhr_db;
extern DataObject iedModel_B1STG_DBAT1_AvlDschAhr;
extern DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag;
extern DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_mag_f;
extern DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_q;
extern DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_t;
extern DataAttribute iedModel_B1STG_DBAT1_AvlDschAhr_db;
extern DataObject iedModel_B1STG_DBAT1_BatTyp;
extern DataAttribute iedModel_B1STG_DBAT1_BatTyp_setVal;
extern DataAttribute iedModel_B1STG_DBAT1_BatTyp_q;
extern DataAttribute iedModel_B1STG_DBAT1_BatTyp_t;
extern DataObject iedModel_B1STG_DBAT1_ChaAmpMax;
extern DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag;
extern DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f;
extern DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC;
extern DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_scaleFactor;
extern DataAttribute iedModel_B1STG_DBAT1_ChaAmpMax_sVC_offset;
extern DataObject iedModel_B1STG_DBAT1_AhrRtg;
extern DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag;
extern DataAttribute iedModel_B1STG_DBAT1_AhrRtg_setMag_f;
extern DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC;
extern DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_scaleFactor;
extern DataAttribute iedModel_B1STG_DBAT1_AhrRtg_sVC_offset;
extern DataObject iedModel_B1STG_DBAT1_ChaVolMaxRtg;
extern DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag;
extern DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f;
extern DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC;
extern DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_scaleFactor;
extern DataAttribute iedModel_B1STG_DBAT1_ChaVolMaxRtg_sVC_offset;
extern DataObject iedModel_B1STG_DBAT1_SocPro;
extern DataAttribute iedModel_B1STG_DBAT1_SocPro_stVal;
extern DataAttribute iedModel_B1STG_DBAT1_SocPro_q;
extern DataAttribute iedModel_B1STG_DBAT1_SocPro_t;

/* ==================================================================
 * ZBAT1
 * ==================================================================
 */
extern DataObject iedModel_B1STG_ZBAT1_BatHi;
extern DataAttribute iedModel_B1STG_ZBAT1_BatHi_stVal;
extern DataAttribute iedModel_B1STG_ZBAT1_BatHi_q;
extern DataAttribute iedModel_B1STG_ZBAT1_BatHi_t;
extern DataObject iedModel_B1STG_ZBAT1_BatLo;
extern DataAttribute iedModel_B1STG_ZBAT1_BatLo_stVal;
extern DataAttribute iedModel_B1STG_ZBAT1_BatLo_q;
extern DataAttribute iedModel_B1STG_ZBAT1_BatLo_t;
extern DataObject iedModel_B1STG_ZBAT1_Beh;
extern DataAttribute iedModel_B1STG_ZBAT1_Beh_stVal;
extern DataAttribute iedModel_B1STG_ZBAT1_Beh_q;
extern DataAttribute iedModel_B1STG_ZBAT1_Beh_t;
extern DataObject iedModel_B1STG_ZBAT1_Health;
extern DataAttribute iedModel_B1STG_ZBAT1_Health_stVal;
extern DataAttribute iedModel_B1STG_ZBAT1_Health_q;
extern DataAttribute iedModel_B1STG_ZBAT1_Health_t;
extern DataObject iedModel_B1STG_ZBAT1_VolChgRte;
extern DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag;
extern DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_mag_f;
extern DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_q;
extern DataAttribute iedModel_B1STG_ZBAT1_VolChgRte_t;


/* ==================================================================
 * DEFINES (#define)
 * ==================================================================
 */

#define IEDMODEL_B1STG (&iedModel_B1STG)

/* --- LLN0 --- */
#define IEDMODEL_B1STG_LLN0 (&iedModel_B1STG_LLN0)
#define IEDMODEL_B1STG_LLN0_Beh_stVal (&iedModel_B1STG_LLN0_Beh_stVal)
#define IEDMODEL_B1STG_LLN0_Health_stVal (&iedModel_B1STG_LLN0_Health_stVal)
#define IEDMODEL_B1STG_LLN0_NamPlt_vendor (&iedModel_B1STG_LLN0_NamPlt_vendor)

/* --- Defines XSWI1 --- */
#define IEDMODEL_B1STG_XSWI1 (&iedModel_B1STG_XSWI1)
#define IEDMODEL_B1STG_XSWI1_SwTyp (&iedModel_B1STG_XSWI1_SwTyp)
#define IEDMODEL_B1STG_XSWI1_SwTyp_stVal (&iedModel_B1STG_XSWI1_SwTyp_stVal)
#define IEDMODEL_B1STG_XSWI1_SwTyp_q (&iedModel_B1STG_XSWI1_SwTyp_q)
#define IEDMODEL_B1STG_XSWI1_SwTyp_t (&iedModel_B1STG_XSWI1_SwTyp_t)
#define IEDMODEL_B1STG_XSWI1_Loc (&iedModel_B1STG_XSWI1_Loc)
#define IEDMODEL_B1STG_XSWI1_Loc_stVal (&iedModel_B1STG_XSWI1_Loc_stVal)
#define IEDMODEL_B1STG_XSWI1_Loc_q (&iedModel_B1STG_XSWI1_Loc_q)
#define IEDMODEL_B1STG_XSWI1_Loc_t (&iedModel_B1STG_XSWI1_Loc_t)
#define IEDMODEL_B1STG_XSWI1_OpCnt (&iedModel_B1STG_XSWI1_OpCnt)
#define IEDMODEL_B1STG_XSWI1_OpCnt_stVal (&iedModel_B1STG_XSWI1_OpCnt_stVal)
#define IEDMODEL_B1STG_XSWI1_OpCnt_q (&iedModel_B1STG_XSWI1_OpCnt_q)
#define IEDMODEL_B1STG_XSWI1_OpCnt_t (&iedModel_B1STG_XSWI1_OpCnt_t)
#define IEDMODEL_B1STG_XSWI1_Beh (&iedModel_B1STG_XSWI1_Beh)
#define IEDMODEL_B1STG_XSWI1_Beh_stVal (&iedModel_B1STG_XSWI1_Beh_stVal)
#define IEDMODEL_B1STG_XSWI1_Beh_q (&iedModel_B1STG_XSWI1_Beh_q)
#define IEDMODEL_B1STG_XSWI1_Beh_t (&iedModel_B1STG_XSWI1_Beh_t)
#define IEDMODEL_B1STG_XSWI1_Health (&iedModel_B1STG_XSWI1_Health)
#define IEDMODEL_B1STG_XSWI1_Health_stVal (&iedModel_B1STG_XSWI1_Health_stVal)
#define IEDMODEL_B1STG_XSWI1_Health_q (&iedModel_B1STG_XSWI1_Health_q)
#define IEDMODEL_B1STG_XSWI1_Health_t (&iedModel_B1STG_XSWI1_Health_t)
#define IEDMODEL_B1STG_XSWI1_Pos (&iedModel_B1STG_XSWI1_Pos)
#define IEDMODEL_B1STG_XSWI1_Pos_stVal (&iedModel_B1STG_XSWI1_Pos_stVal)
#define IEDMODEL_B1STG_XSWI1_Pos_q (&iedModel_B1STG_XSWI1_Pos_q)
#define IEDMODEL_B1STG_XSWI1_Pos_t (&iedModel_B1STG_XSWI1_Pos_t)
#define IEDMODEL_B1STG_XSWI1_Pos_ctlModel (&iedModel_B1STG_XSWI1_Pos_ctlModel)
#define IEDMODEL_B1STG_XSWI1_BlkOpn (&iedModel_B1STG_XSWI1_BlkOpn)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_Oper (&iedModel_B1STG_XSWI1_BlkOpn_Oper)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_Oper_ctlVal (&iedModel_B1STG_XSWI1_BlkOpn_Oper_ctlVal)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_stVal (&iedModel_B1STG_XSWI1_BlkOpn_stVal)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_q (&iedModel_B1STG_XSWI1_BlkOpn_q)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_t (&iedModel_B1STG_XSWI1_BlkOpn_t)
#define IEDMODEL_B1STG_XSWI1_BlkOpn_ctlModel (&iedModel_B1STG_XSWI1_BlkOpn_ctlModel)
#define IEDMODEL_B1STG_XSWI1_BlkCls (&iedModel_B1STG_XSWI1_BlkCls)
#define IEDMODEL_B1STG_XSWI1_BlkCls_Oper (&iedModel_B1STG_XSWI1_BlkCls_Oper)
#define IEDMODEL_B1STG_XSWI1_BlkCls_Oper_ctlVal (&iedModel_B1STG_XSWI1_BlkCls_Oper_ctlVal)
#define IEDMODEL_B1STG_XSWI1_BlkCls_stVal (&iedModel_B1STG_XSWI1_BlkCls_stVal)
#define IEDMODEL_B1STG_XSWI1_BlkCls_q (&iedModel_B1STG_XSWI1_BlkCls_q)
#define IEDMODEL_B1STG_XSWI1_BlkCls_t (&iedModel_B1STG_XSWI1_BlkCls_t)
#define IEDMODEL_B1STG_XSWI1_BlkCls_ctlModel (&iedModel_B1STG_XSWI1_BlkCls_ctlModel)

/* --- TTMP1 --- */
#define IEDMODEL_B1STG_TTMP1 (&iedModel_B1STG_TTMP1)
#define IEDMODEL_B1STG_TTMP1_NamPlt_vendor (&iedModel_B1STG_TTMP1_NamPlt_vendor)
#define IEDMODEL_B1STG_TTMP1_Beh_stVal (&iedModel_B1STG_TTMP1_Beh_stVal)
#define IEDMODEL_B1STG_TTMP1_Health_stVal (&iedModel_B1STG_TTMP1_Health_stVal)
#define IEDMODEL_B1STG_TTMP1_TmpSv_instMag_f (&iedModel_B1STG_TTMP1_TmpSv_instMag_f)
#define IEDMODEL_B1STG_TTMP1_TmpTgt_setMag_f (&iedModel_B1STG_TTMP1_TmpTgt_setMag_f)


/* --- DBAT1 --- */
#define IEDMODEL_B1STG_DBAT1 (&iedModel_B1STG_DBAT1)
#define IEDMODEL_B1STG_DBAT1_EEName (&iedModel_B1STG_DBAT1_EEName)
#define IEDMODEL_B1STG_DBAT1_EEName_vendor (&iedModel_B1STG_DBAT1_EEName_vendor)
#define IEDMODEL_B1STG_DBAT1_EEName_model (&iedModel_B1STG_DBAT1_EEName_model)
#define IEDMODEL_B1STG_DBAT1_ChaSt_stVal (&iedModel_B1STG_DBAT1_ChaSt_stVal)
#define IEDMODEL_B1STG_DBAT1_DschSt_stVal (&iedModel_B1STG_DBAT1_DschSt_stVal)
#define IEDMODEL_B1STG_DBAT1_EEHealth_stVal (&iedModel_B1STG_DBAT1_EEHealth_stVal)
#define IEDMODEL_B1STG_DBAT1_Amp_mag_f (&iedModel_B1STG_DBAT1_Amp_mag_f)
#define IEDMODEL_B1STG_DBAT1_Watt_mag_f (&iedModel_B1STG_DBAT1_Watt_mag_f)
#define IEDMODEL_B1STG_DBAT1_AvlChaAhr_mag_f (&iedModel_B1STG_DBAT1_AvlChaAhr_mag_f)
#define IEDMODEL_B1STG_DBAT1_AvlDschAhr_mag_f (&iedModel_B1STG_DBAT1_AvlDschAhr_mag_f)
#define IEDMODEL_B1STG_DBAT1_BatTyp_setVal (&iedModel_B1STG_DBAT1_BatTyp_setVal)
#define IEDMODEL_B1STG_DBAT1_ChaAmpMax_setMag_f (&iedModel_B1STG_DBAT1_ChaAmpMax_setMag_f)
#define IEDMODEL_B1STG_DBAT1_AhrRtg_setMag_f (&iedModel_B1STG_DBAT1_AhrRtg_setMag_f)
#define IEDMODEL_B1STG_DBAT1_ChaVolMaxRtg_setMag_f (&iedModel_B1STG_DBAT1_ChaVolMaxRtg_setMag_f)
#define IEDMODEL_B1STG_DBAT1_SocPro (&iedModel_B1STG_DBAT1_SocPro)
#define IEDMODEL_B1STG_DBAT1_SocPro_stVal (&iedModel_B1STG_DBAT1_SocPro_stVal)
#define IEDMODEL_B1STG_DBAT1_SocPro_q (&iedModel_B1STG_DBAT1_SocPro_q)
#define IEDMODEL_B1STG_DBAT1_SocPro_t (&iedModel_B1STG_DBAT1_SocPro_t)

/* --- Defines ZBAT1 --- */
#define IEDMODEL_B1STG_ZBAT1 (&iedModel_B1STG_ZBAT1)
#define IEDMODEL_B1STG_ZBAT1_BatHi (&iedModel_B1STG_ZBAT1_BatHi)
#define IEDMODEL_B1STG_ZBAT1_BatHi_stVal (&iedModel_B1STG_ZBAT1_BatHi_stVal)
#define IEDMODEL_B1STG_ZBAT1_BatHi_q (&iedModel_B1STG_ZBAT1_BatHi_q)
#define IEDMODEL_B1STG_ZBAT1_BatHi_t (&iedModel_B1STG_ZBAT1_BatHi_t)
#define IEDMODEL_B1STG_ZBAT1_BatLo (&iedModel_B1STG_ZBAT1_BatLo)
#define IEDMODEL_B1STG_ZBAT1_BatLo_stVal (&iedModel_B1STG_ZBAT1_BatLo_stVal)
#define IEDMODEL_B1STG_ZBAT1_BatLo_q (&iedModel_B1STG_ZBAT1_BatLo_q)
#define IEDMODEL_B1STG_ZBAT1_BatLo_t (&iedModel_B1STG_ZBAT1_BatLo_t)
#define IEDMODEL_B1STG_ZBAT1_Beh (&iedModel_B1STG_ZBAT1_Beh)
#define IEDMODEL_B1STG_ZBAT1_Beh_stVal (&iedModel_B1STG_ZBAT1_Beh_stVal)
#define IEDMODEL_B1STG_ZBAT1_Beh_q (&iedModel_B1STG_ZBAT1_Beh_q)
#define IEDMODEL_B1STG_ZBAT1_Beh_t (&iedModel_B1STG_ZBAT1_Beh_t)
#define IEDMODEL_B1STG_ZBAT1_Health (&iedModel_B1STG_ZBAT1_Health)
#define IEDMODEL_B1STG_ZBAT1_Health_stVal (&iedModel_B1STG_ZBAT1_Health_stVal)
#define IEDMODEL_B1STG_ZBAT1_Health_q (&iedModel_B1STG_ZBAT1_Health_q)
#define IEDMODEL_B1STG_ZBAT1_Health_t (&iedModel_B1STG_ZBAT1_Health_t)
#define IEDMODEL_B1STG_ZBAT1_VolChgRte (&iedModel_B1STG_ZBAT1_VolChgRte)
#define IEDMODEL_B1STG_ZBAT1_VolChgRte_mag (&iedModel_B1STG_ZBAT1_VolChgRte_mag)
#define IEDMODEL_B1STG_ZBAT1_VolChgRte_mag_f (&iedModel_B1STG_ZBAT1_VolChgRte_mag_f)
#define IEDMODEL_B1STG_ZBAT1_VolChgRte_q (&iedModel_B1STG_ZBAT1_VolChgRte_q)
#define IEDMODEL_B1STG_ZBAT1_VolChgRte_t (&iedModel_B1STG_ZBAT1_VolChgRte_t)

#endif /* STATIC_MODEL_H_ */