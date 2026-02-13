#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_B1HYD;

/* LNs */
extern LogicalNode iedModel_B1HYD_KTNK1;
extern LogicalNode iedModel_B1HYD_STMP1;
extern LogicalNode iedModel_B1HYD_KVLV1;
extern LogicalNode iedModel_B1HYD_DFCL1;
extern LogicalNode iedModel_B1HYD_DSTK1;
extern LogicalNode iedModel_B1HYD_SPRS1;
extern LogicalNode iedModel_B1HYD_TPRS1;
extern LogicalNode iedModel_B1HYD_DFPM1;
extern LogicalNode iedModel_B1HYD_TNKXSWI1;
extern LogicalNode iedModel_B1HYD_CELXSWI1;

/* ==================================================================
 * KTNK1
 * ==================================================================
 */

extern DataObject iedModel_B1HYD_KTNK1_NamPlt;
extern DataAttribute iedModel_B1HYD_KTNK1_NamPlt_vendor;
extern DataAttribute iedModel_B1HYD_KTNK1_NamPlt_swRev;
extern DataAttribute iedModel_B1HYD_KTNK1_NamPlt_lnNs;
extern DataObject iedModel_B1HYD_KTNK1_EEHealth;
extern DataAttribute iedModel_B1HYD_KTNK1_EEHealth_stVal;
extern DataAttribute iedModel_B1HYD_KTNK1_EEHealth_q;
extern DataAttribute iedModel_B1HYD_KTNK1_EEHealth_t;
extern DataObject iedModel_B1HYD_KTNK1_OpTmh;
extern DataAttribute iedModel_B1HYD_KTNK1_OpTmh_stVal;
extern DataAttribute iedModel_B1HYD_KTNK1_OpTmh_q;
extern DataAttribute iedModel_B1HYD_KTNK1_OpTmh_t;
extern DataObject iedModel_B1HYD_KTNK1_Beh;
extern DataAttribute iedModel_B1HYD_KTNK1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_KTNK1_Beh_q;
extern DataAttribute iedModel_B1HYD_KTNK1_Beh_t;
extern DataObject iedModel_B1HYD_KTNK1_Health;
extern DataAttribute iedModel_B1HYD_KTNK1_Health_stVal;
extern DataAttribute iedModel_B1HYD_KTNK1_Health_q;
extern DataAttribute iedModel_B1HYD_KTNK1_Health_t;
extern DataObject iedModel_B1HYD_KTNK1_LevPct;
extern DataAttribute iedModel_B1HYD_KTNK1_LevPct_mag;
extern DataAttribute iedModel_B1HYD_KTNK1_LevPct_mag_f;
extern DataAttribute iedModel_B1HYD_KTNK1_LevPct_q;
extern DataAttribute iedModel_B1HYD_KTNK1_LevPct_t;
extern DataObject iedModel_B1HYD_KTNK1_Vlm;
extern DataAttribute iedModel_B1HYD_KTNK1_Vlm_mag;
extern DataAttribute iedModel_B1HYD_KTNK1_Vlm_mag_f;
extern DataAttribute iedModel_B1HYD_KTNK1_Vlm_q;
extern DataAttribute iedModel_B1HYD_KTNK1_Vlm_t;
extern DataObject iedModel_B1HYD_KTNK1_VlmCap;
extern DataAttribute iedModel_B1HYD_KTNK1_VlmCap_setMag;
extern DataAttribute iedModel_B1HYD_KTNK1_VlmCap_setMag_f;
extern DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC;
extern DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC_scaleFactor;
extern DataAttribute iedModel_B1HYD_KTNK1_VlmCap_sVC_offset;
extern DataObject iedModel_B1HYD_KTNK1_TnkTyp;
extern DataAttribute iedModel_B1HYD_KTNK1_TnkTyp_setVal; 

/* ==================================================================
 * STMP1
 * ==================================================================*/

extern DataObject iedModel_B1HYD_STMP1_Trip;
extern DataAttribute iedModel_B1HYD_STMP1_Trip_stVal;
extern DataAttribute iedModel_B1HYD_STMP1_Trip_q;
extern DataAttribute iedModel_B1HYD_STMP1_Trip_t;
extern DataObject iedModel_B1HYD_STMP1_RteTrip;
extern DataAttribute iedModel_B1HYD_STMP1_RteTrip_stVal;
extern DataAttribute iedModel_B1HYD_STMP1_RteTrip_q;
extern DataAttribute iedModel_B1HYD_STMP1_RteTrip_t;
extern DataObject iedModel_B1HYD_STMP1_Tmp;
extern DataAttribute iedModel_B1HYD_STMP1_Tmp_mag;
extern DataAttribute iedModel_B1HYD_STMP1_Tmp_mag_f;
extern DataAttribute iedModel_B1HYD_STMP1_Tmp_q;
extern DataAttribute iedModel_B1HYD_STMP1_Tmp_t;
extern DataObject iedModel_B1HYD_STMP1_TmpRte;
extern DataAttribute iedModel_B1HYD_STMP1_TmpRte_mag;
extern DataAttribute iedModel_B1HYD_STMP1_TmpRte_mag_f;
extern DataAttribute iedModel_B1HYD_STMP1_TmpRte_q;
extern DataAttribute iedModel_B1HYD_STMP1_TmpRte_t;
extern DataObject iedModel_B1HYD_STMP1_TripSet;
extern DataAttribute iedModel_B1HYD_STMP1_TripSet_setMag;
extern DataAttribute iedModel_B1HYD_STMP1_TripSet_sVC;
extern DataAttribute iedModel_B1HYD_STMP1_RteTripSet_setMag;
extern DataAttribute iedModel_B1HYD_STMP1_RteTripSet_sVC;
extern DataObject iedModel_B1HYD_STMP1_RteTripSet;
extern DataAttribute iedModel_B1HYD_STMP1_RteTripSet_setMag;
extern DataAttribute iedModel_B1HYD_STMP1_RteTripSet_setMag_f;


/* ==================================================================
 * KVLV1
 * ==================================================================
 */

extern DataObject iedModel_B1HYD_KVLV1_OpCnt;
extern DataAttribute iedModel_B1HYD_KVLV1_OpCnt_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_OpCnt_q;
extern DataAttribute iedModel_B1HYD_KVLV1_OpCnt_t;
extern DataObject iedModel_B1HYD_KVLV1_ClsPos;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsPos_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsPos_q;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsPos_t;
extern DataObject iedModel_B1HYD_KVLV1_OpnPos;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnPos_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnPos_q;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnPos_t;
extern DataObject iedModel_B1HYD_KVLV1_Mvm;
extern DataAttribute iedModel_B1HYD_KVLV1_Mvm_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_Mvm_q;
extern DataAttribute iedModel_B1HYD_KVLV1_Mvm_t;
extern DataObject iedModel_B1HYD_KVLV1_Stuck;
extern DataAttribute iedModel_B1HYD_KVLV1_Stuck_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_Stuck_q;
extern DataAttribute iedModel_B1HYD_KVLV1_Stuck_t;
extern DataObject iedModel_B1HYD_KVLV1_PosVlv;
extern DataAttribute iedModel_B1HYD_KVLV1_PosVlv_mag;
extern DataAttribute iedModel_B1HYD_KVLV1_PosVlv_mag_f;
extern DataAttribute iedModel_B1HYD_KVLV1_PosVlv_q;
extern DataAttribute iedModel_B1HYD_KVLV1_PosVlv_t;
extern DataObject iedModel_B1HYD_KVLV1_PosSpt;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_mxVal;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_mxVal_f;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_q;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_t;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_ctlModel;
extern DataObject iedModel_B1HYD_KVLV1_PosSpt_Oper;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orCat;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orIdent;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_T;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_Test;
extern DataAttribute iedModel_B1HYD_KVLV1_PosSpt_Oper_Check; 
extern DataObject iedModel_B1HYD_KVLV1_Pos;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_stVal;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_q;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_t;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_ctlModel;
extern DataObject iedModel_B1HYD_KVLV1_Pos_Oper;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin_orCat;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_origin_orIdent;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_T;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_Test;
extern DataAttribute iedModel_B1HYD_KVLV1_Pos_Oper_Check;
extern DataObject iedModel_B1HYD_KVLV1_OpnLim;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnLim_setMag;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnLim_setMag_f;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC_scaleFactor;
extern DataAttribute iedModel_B1HYD_KVLV1_OpnLim_sVC_offset;
extern DataObject iedModel_B1HYD_KVLV1_ClsLim;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsLim_setMag;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsLim_setMag_f;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC_scaleFactor;
extern DataAttribute iedModel_B1HYD_KVLV1_ClsLim_sVC_offset; 

/* ==================================================================
 * DFCL1
 * ==================================================================
*/

extern DataObject iedModel_B1HYD_DFCL1_LifeEfcPct;
extern DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_stVal;
extern DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_q;
extern DataAttribute iedModel_B1HYD_DFCL1_LifeEfcPct_t;
extern DataObject iedModel_B1HYD_DFCL1_MaintTms;
extern DataAttribute iedModel_B1HYD_DFCL1_MaintTms_stVal;
extern DataAttribute iedModel_B1HYD_DFCL1_MaintTms_q;
extern DataAttribute iedModel_B1HYD_DFCL1_MaintTms_t;
extern DataObject iedModel_B1HYD_DFCL1_EEHealth;
extern DataAttribute iedModel_B1HYD_DFCL1_EEHealth_stVal;
extern DataAttribute iedModel_B1HYD_DFCL1_EEHealth_q;
extern DataAttribute iedModel_B1HYD_DFCL1_EEHealth_t;
extern DataObject iedModel_B1HYD_DFCL1_WtrLev;
extern DataAttribute iedModel_B1HYD_DFCL1_WtrLev_mag;
extern DataAttribute iedModel_B1HYD_DFCL1_WtrLev_mag_f;
extern DataAttribute iedModel_B1HYD_DFCL1_WtrLev_q;
extern DataAttribute iedModel_B1HYD_DFCL1_WtrLev_t;
extern DataObject iedModel_B1HYD_DFCL1_OutH2Lev;
extern DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_mag;
extern DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_mag_f;
extern DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_q;
extern DataAttribute iedModel_B1HYD_DFCL1_OutH2Lev_t;
extern DataObject iedModel_B1HYD_DFCL1_Alim;
extern DataAttribute iedModel_B1HYD_DFCL1_Alim_setMag;
extern DataAttribute iedModel_B1HYD_DFCL1_Alim_setMag_f;
extern DataAttribute iedModel_B1HYD_DFCL1_Alim_sVC;
extern DataObject iedModel_B1HYD_DFCL1_Vlim;
extern DataAttribute iedModel_B1HYD_DFCL1_Vlim_setMag;
extern DataAttribute iedModel_B1HYD_DFCL1_Vlim_setMag_f;
extern DataAttribute iedModel_B1HYD_DFCL1_Vlim_sVC;

/* ==================================================================
* DSTK1
* ==================================================================
*/

extern DataObject iedModel_B1HYD_DSTK1_NamPlt;
extern DataAttribute iedModel_B1HYD_DSTK1_NamPlt_vendor;
extern DataAttribute iedModel_B1HYD_DSTK1_NamPlt_swRev;
extern DataAttribute iedModel_B1HYD_DSTK1_NamPlt_lnNs;
extern DataObject iedModel_B1HYD_DSTK1_StcSt;
extern DataAttribute iedModel_B1HYD_DSTK1_StcSt_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_StcSt_q;
extern DataAttribute iedModel_B1HYD_DSTK1_StcSt_t;
extern DataObject iedModel_B1HYD_DSTK1_CelVTrCnt;
extern DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_q;
extern DataAttribute iedModel_B1HYD_DSTK1_CelVTrCnt_t;
extern DataObject iedModel_B1HYD_DSTK1_StcLodTms;
extern DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_q;
extern DataAttribute iedModel_B1HYD_DSTK1_StcLodTms_t;
extern DataObject iedModel_B1HYD_DSTK1_MaintTms;
extern DataAttribute iedModel_B1HYD_DSTK1_MaintTms_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_MaintTms_q;
extern DataAttribute iedModel_B1HYD_DSTK1_MaintTms_t;
extern DataObject iedModel_B1HYD_DSTK1_Beh;
extern DataAttribute iedModel_B1HYD_DSTK1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_Beh_q;
extern DataAttribute iedModel_B1HYD_DSTK1_Beh_t;
extern DataObject iedModel_B1HYD_DSTK1_Health;
extern DataAttribute iedModel_B1HYD_DSTK1_Health_stVal;
extern DataAttribute iedModel_B1HYD_DSTK1_Health_q;
extern DataAttribute iedModel_B1HYD_DSTK1_Health_t;
extern DataObject iedModel_B1HYD_DSTK1_StcEfcPct;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_q;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_t;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_units;
extern DataAttribute iedModel_B1HYD_DSTK1_StcEfcPct_units_SIUnit;
extern DataObject iedModel_B1HYD_DSTK1_OutDCV;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_q;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_t;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_units;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCV_units_SIUnit;
extern DataObject iedModel_B1HYD_DSTK1_OutDCA;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_q;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_t;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_units;
extern DataAttribute iedModel_B1HYD_DSTK1_OutDCA_units_SIUnit;
extern DataObject iedModel_B1HYD_DSTK1_InClTmp;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_q;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_t;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_units;
extern DataAttribute iedModel_B1HYD_DSTK1_InClTmp_units_SIUnit;
extern DataObject iedModel_B1HYD_DSTK1_OutClTmp;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_q;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_t;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_units;
extern DataAttribute iedModel_B1HYD_DSTK1_OutClTmp_units_SIUnit;
extern DataObject iedModel_B1HYD_DSTK1_InH2Pres;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_instMag;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_instMag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_mag;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_mag_f;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_q;
extern DataAttribute iedModel_B1HYD_DSTK1_InH2Pres_t;

/* ==================================================================
 * SPRS1
 * ================================================================== 
 */

extern DataObject iedModel_B1HYD_SPRS1_Alm;
extern DataAttribute iedModel_B1HYD_SPRS1_Alm_stVal;
extern DataAttribute iedModel_B1HYD_SPRS1_Alm_q;
extern DataAttribute iedModel_B1HYD_SPRS1_Alm_t;
extern DataObject iedModel_B1HYD_SPRS1_Trip;
extern DataAttribute iedModel_B1HYD_SPRS1_Trip_stVal;
extern DataAttribute iedModel_B1HYD_SPRS1_Trip_q;
extern DataAttribute iedModel_B1HYD_SPRS1_Trip_t;
extern DataObject iedModel_B1HYD_SPRS1_Beh;
extern DataAttribute iedModel_B1HYD_SPRS1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_SPRS1_Beh_q;
extern DataAttribute iedModel_B1HYD_SPRS1_Beh_t;
extern DataObject iedModel_B1HYD_SPRS1_Health;
extern DataAttribute iedModel_B1HYD_SPRS1_Health_stVal;
extern DataAttribute iedModel_B1HYD_SPRS1_Health_q;
extern DataAttribute iedModel_B1HYD_SPRS1_Health_t;
extern DataObject iedModel_B1HYD_SPRS1_AlmSet;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_setMag;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_setMag_f;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_minVal;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_minVal_f;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_maxVal;
extern DataAttribute iedModel_B1HYD_SPRS1_AlmSet_maxVal_f;

/* =================================================================
* TPRS1 (Sensor de Pressão) - Externs
* =================================================================
*/

extern DataObject iedModel_B1HYD_TPRS1_EEName;
extern DataAttribute iedModel_B1HYD_TPRS1_EEName_vendor;
extern DataAttribute iedModel_B1HYD_TPRS1_EEName_model;
extern DataObject iedModel_B1HYD_TPRS1_EEHealth;
extern DataAttribute iedModel_B1HYD_TPRS1_EEHealth_stVal;
extern DataAttribute iedModel_B1HYD_TPRS1_EEHealth_q;
extern DataAttribute iedModel_B1HYD_TPRS1_EEHealth_t;
extern DataObject iedModel_B1HYD_TPRS1_Beh;
extern DataAttribute iedModel_B1HYD_TPRS1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_TPRS1_Beh_q;
extern DataAttribute iedModel_B1HYD_TPRS1_Beh_t;
extern DataObject iedModel_B1HYD_TPRS1_Health;
extern DataAttribute iedModel_B1HYD_TPRS1_Health_stVal;
extern DataAttribute iedModel_B1HYD_TPRS1_Health_q;
extern DataAttribute iedModel_B1HYD_TPRS1_Health_t;
extern DataObject iedModel_B1HYD_TPRS1_PresSv;
extern DataAttribute iedModel_B1HYD_TPRS1_PresSv_instMag;
extern DataAttribute iedModel_B1HYD_TPRS1_PresSv_instMag_f;
extern DataAttribute iedModel_B1HYD_TPRS1_PresSv_q;
extern DataAttribute iedModel_B1HYD_TPRS1_PresSv_t;

/* ==================================================================
 * DFPM1
 * ==================================================================
 */
 

extern DataObject iedModel_B1HYD_DFPM1_FPMSt;
extern DataAttribute iedModel_B1HYD_DFPM1_FPMSt_stVal;
extern DataAttribute iedModel_B1HYD_DFPM1_FPMSt_q;
extern DataAttribute iedModel_B1HYD_DFPM1_FPMSt_t;
extern DataObject iedModel_B1HYD_DFPM1_CnvEfc;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_mag;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_mag_f;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_q;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_t;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_units;
extern DataAttribute iedModel_B1HYD_DFPM1_CnvEfc_units_SIUnit;
extern DataObject iedModel_B1HYD_DFPM1_ProcTyp;
extern DataAttribute iedModel_B1HYD_DFPM1_ProcTyp_setVal;

/* =================================================================
 * TNKXSWI1 (Chave do Tanque - Refeito) - Externs
 * =================================================================
 */

extern LogicalNode iedModel_B1HYD_TNKXSWI1;
extern DataObject iedModel_B1HYD_TNKXSWI1_SwTyp;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_SwTyp_t;
extern DataObject iedModel_B1HYD_TNKXSWI1_Loc;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Loc_t;
extern DataObject iedModel_B1HYD_TNKXSWI1_OpCnt;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_OpCnt_t;
extern DataObject iedModel_B1HYD_TNKXSWI1_Beh;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Beh_t;
extern DataObject iedModel_B1HYD_TNKXSWI1_Health;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Health_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Health_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Health_t;
extern DataObject iedModel_B1HYD_TNKXSWI1_Pos;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_t;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_ctlModel;
extern DataObject iedModel_B1HYD_TNKXSWI1_Pos_Oper;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_Pos_Oper_T;
extern DataObject iedModel_B1HYD_TNKXSWI1_BlkOpn;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_T;
extern DataObject iedModel_B1HYD_TNKXSWI1_BlkCls;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_q;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_t;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_ctlModel;
extern DataObject iedModel_B1HYD_TNKXSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_T;

/* =================================================================
 * CELXSWI1 (Chave da Célula - Refeito) - Externs
 * =================================================================
 */

extern LogicalNode iedModel_B1HYD_CELXSWI1;
extern DataObject iedModel_B1HYD_CELXSWI1_SwTyp;
extern DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_SwTyp_t;
extern DataObject iedModel_B1HYD_CELXSWI1_Loc;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Loc_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Loc_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Loc_t;
extern DataObject iedModel_B1HYD_CELXSWI1_OpCnt;
extern DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_OpCnt_t;
extern DataObject iedModel_B1HYD_CELXSWI1_Beh;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Beh_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Beh_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Beh_t;
extern DataObject iedModel_B1HYD_CELXSWI1_Health;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Health_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Health_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Health_t;
extern DataObject iedModel_B1HYD_CELXSWI1_Pos;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_t;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_ctlModel;
extern DataObject iedModel_B1HYD_CELXSWI1_Pos_Oper;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_CELXSWI1_Pos_Oper_T;
extern DataObject iedModel_B1HYD_CELXSWI1_BlkOpn;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1HYD_CELXSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_T;
extern DataObject iedModel_B1HYD_CELXSWI1_BlkCls;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_q;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_t;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_ctlModel;
extern DataObject iedModel_B1HYD_CELXSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1HYD_CELXSWI1_BlkCls_Oper_T;

#define IEDMODEL_B1HYD (&iedModel_B1HYD)

/* --- Defines KTNK1 --- */
#define IEDMODEL_B1HYD_KTNK1 (&iedModel_B1HYD_KTNK1)
#define IEDMODEL_B1HYD_KTNK1_NamPlt (&iedModel_B1HYD_KTNK1_NamPlt)
#define IEDMODEL_B1HYD_KTNK1_NamPlt_vendor (&iedModel_B1HYD_KTNK1_NamPlt_vendor)
#define IEDMODEL_B1HYD_KTNK1_NamPlt_swRev (&iedModel_B1HYD_KTNK1_NamPlt_swRev)
#define IEDMODEL_B1HYD_KTNK1_NamPlt_lnNs (&iedModel_B1HYD_KTNK1_NamPlt_lnNs)
#define IEDMODEL_B1HYD_KTNK1_EEHealth (&iedModel_B1HYD_KTNK1_EEHealth)
#define IEDMODEL_B1HYD_KTNK1_EEHealth_stVal (&iedModel_B1HYD_KTNK1_EEHealth_stVal)
#define IEDMODEL_B1HYD_KTNK1_EEHealth_q (&iedModel_B1HYD_KTNK1_EEHealth_q)
#define IEDMODEL_B1HYD_KTNK1_EEHealth_t (&iedModel_B1HYD_KTNK1_EEHealth_t)
#define IEDMODEL_B1HYD_KTNK1_OpTmh (&iedModel_B1HYD_KTNK1_OpTmh)
#define IEDMODEL_B1HYD_KTNK1_OpTmh_stVal (&iedModel_B1HYD_KTNK1_OpTmh_stVal)
#define IEDMODEL_B1HYD_KTNK1_OpTmh_q (&iedModel_B1HYD_KTNK1_OpTmh_q)
#define IEDMODEL_B1HYD_KTNK1_OpTmh_t (&iedModel_B1HYD_KTNK1_OpTmh_t)
#define IEDMODEL_B1HYD_KTNK1_Beh (&iedModel_B1HYD_KTNK1_Beh)
#define IEDMODEL_B1HYD_KTNK1_Beh_stVal (&iedModel_B1HYD_KTNK1_Beh_stVal)
#define IEDMODEL_B1HYD_KTNK1_Beh_q (&iedModel_B1HYD_KTNK1_Beh_q)
#define IEDMODEL_B1HYD_KTNK1_Beh_t (&iedModel_B1HYD_KTNK1_Beh_t)
#define IEDMODEL_B1HYD_KTNK1_Health (&iedModel_B1HYD_KTNK1_Health)
#define IEDMODEL_B1HYD_KTNK1_Health_stVal (&iedModel_B1HYD_KTNK1_Health_stVal)
#define IEDMODEL_B1HYD_KTNK1_Health_q (&iedModel_B1HYD_KTNK1_Health_q)
#define IEDMODEL_B1HYD_KTNK1_Health_t (&iedModel_B1HYD_KTNK1_Health_t)
#define IEDMODEL_B1HYD_KTNK1_LevPct (&iedModel_B1HYD_KTNK1_LevPct)
#define IEDMODEL_B1HYD_KTNK1_LevPct_mag (&iedModel_B1HYD_KTNK1_LevPct_mag)
#define IEDMODEL_B1HYD_KTNK1_LevPct_mag_f (&iedModel_B1HYD_KTNK1_LevPct_mag_f)
#define IEDMODEL_B1HYD_KTNK1_LevPct_q (&iedModel_B1HYD_KTNK1_LevPct_q)
#define IEDMODEL_B1HYD_KTNK1_LevPct_t (&iedModel_B1HYD_KTNK1_LevPct_t)
#define IEDMODEL_B1HYD_KTNK1_Vlm (&iedModel_B1HYD_KTNK1_Vlm)
#define IEDMODEL_B1HYD_KTNK1_Vlm_mag (&iedModel_B1HYD_KTNK1_Vlm_mag)
#define IEDMODEL_B1HYD_KTNK1_Vlm_mag_f (&iedModel_B1HYD_KTNK1_Vlm_mag_f)
#define IEDMODEL_B1HYD_KTNK1_Vlm_q (&iedModel_B1HYD_KTNK1_Vlm_q)
#define IEDMODEL_B1HYD_KTNK1_Vlm_t (&iedModel_B1HYD_KTNK1_Vlm_t)
#define IEDMODEL_B1HYD_KTNK1_VlmCap (&iedModel_B1HYD_KTNK1_VlmCap)
#define IEDMODEL_B1HYD_KTNK1_VlmCap_setMag (&iedModel_B1HYD_KTNK1_VlmCap_setMag)
#define IEDMODEL_B1HYD_KTNK1_VlmCap_setMag_f (&iedModel_B1HYD_KTNK1_VlmCap_setMag_f)
#define IEDMODEL_B1HYD_KTNK1_VlmCap_sVC (&iedModel_B1HYD_KTNK1_VlmCap_sVC)
#define IEDMODEL_B1HYD_KTNK1_VlmCap_sVC_scaleFactor (&iedModel_B1HYD_KTNK1_VlmCap_sVC_scaleFactor)
#define IEDMODEL_B1HYD_KTNK1_VlmCap_sVC_offset (&iedModel_B1HYD_KTNK1_VlmCap_sVC_offset)
#define IEDMODEL_B1HYD_KTNK1_TnkTyp (&iedModel_B1HYD_KTNK1_TnkTyp)
#define IEDMODEL_B1HYD_KTNK1_TnkTyp_setVal (&iedModel_B1HYD_KTNK1_TnkTyp_setVal)

/* --- Defines STMP1 --- */
#define IEDMODEL_B1HYD_STMP1 (&iedModel_B1HYD_STMP1)
#define IEDMODEL_B1HYD_STMP1_Trip (&iedModel_B1HYD_STMP1_Trip)
#define IEDMODEL_B1HYD_STMP1_Trip_stVal (&iedModel_B1HYD_STMP1_Trip_stVal)
#define IEDMODEL_B1HYD_STMP1_Trip_q (&iedModel_B1HYD_STMP1_Trip_q)
#define IEDMODEL_B1HYD_STMP1_Trip_t (&iedModel_B1HYD_STMP1_Trip_t)
#define IEDMODEL_B1HYD_STMP1_RteTrip (&iedModel_B1HYD_STMP1_RteTrip)
#define IEDMODEL_B1HYD_STMP1_RteTrip_stVal (&iedModel_B1HYD_STMP1_RteTrip_stVal)
#define IEDMODEL_B1HYD_STMP1_RteTrip_q (&iedModel_B1HYD_STMP1_RteTrip_q)
#define IEDMODEL_B1HYD_STMP1_RteTrip_t (&iedModel_B1HYD_STMP1_RteTrip_t)
#define IEDMODEL_B1HYD_STMP1_Tmp (&iedModel_B1HYD_STMP1_Tmp)
#define IEDMODEL_B1HYD_STMP1_Tmp_mag (&iedModel_B1HYD_STMP1_Tmp_mag)
#define IEDMODEL_B1HYD_STMP1_Tmp_q (&iedModel_B1HYD_STMP1_Tmp_q)
#define IEDMODEL_B1HYD_STMP1_Tmp_t (&iedModel_B1HYD_STMP1_Tmp_t)
#define IEDMODEL_B1HYD_STMP1_TmpRte (&iedModel_B1HYD_STMP1_TmpRte)
#define IEDMODEL_B1HYD_STMP1_TmpRte_mag (&iedModel_B1HYD_STMP1_TmpRte_mag)
#define IEDMODEL_B1HYD_STMP1_TmpRte_q (&iedModel_B1HYD_STMP1_TmpRte_q)
#define IEDMODEL_B1HYD_STMP1_TmpRte_t (&iedModel_B1HYD_STMP1_TmpRte_t)
#define IEDMODEL_B1HYD_STMP1_TripSet (&iedModel_B1HYD_STMP1_TripSet)
#define IEDMODEL_B1HYD_STMP1_TripSet_setMag (&iedModel_B1HYD_STMP1_TripSet_setMag)
#define IEDMODEL_B1HYD_STMP1_TripSet_sVC (&iedModel_B1HYD_STMP1_TripSet_sVC)
#define IEDMODEL_B1HYD_STMP1_RteTripSet (&iedModel_B1HYD_STMP1_RteTripSet)
#define IEDMODEL_B1HYD_STMP1_RteTripSet_setMag (&iedModel_B1HYD_STMP1_RteTripSet_setMag)
#define IEDMODEL_B1HYD_STMP1_RteTripSet_sVC (&iedModel_B1HYD_STMP1_RteTripSet_sVC)

/* --- Defines KVLV1 --- */
#define IEDMODEL_B1HYD_KVLV1 (&iedModel_B1HYD_KVLV1)
#define IEDMODEL_B1HYD_KVLV1_OpCnt (&iedModel_B1HYD_KVLV1_OpCnt)
#define IEDMODEL_B1HYD_KVLV1_OpCnt_stVal (&iedModel_B1HYD_KVLV1_OpCnt_stVal)
#define IEDMODEL_B1HYD_KVLV1_OpCnt_q (&iedModel_B1HYD_KVLV1_OpCnt_q)
#define IEDMODEL_B1HYD_KVLV1_OpCnt_t (&iedModel_B1HYD_KVLV1_OpCnt_t)
#define IEDMODEL_B1HYD_KVLV1_ClsPos (&iedModel_B1HYD_KVLV1_ClsPos)
#define IEDMODEL_B1HYD_KVLV1_ClsPos_stVal (&iedModel_B1HYD_KVLV1_ClsPos_stVal)
#define IEDMODEL_B1HYD_KVLV1_ClsPos_q (&iedModel_B1HYD_KVLV1_ClsPos_q)
#define IEDMODEL_B1HYD_KVLV1_ClsPos_t (&iedModel_B1HYD_KVLV1_ClsPos_t)
#define IEDMODEL_B1HYD_KVLV1_OpnPos (&iedModel_B1HYD_KVLV1_OpnPos)
#define IEDMODEL_B1HYD_KVLV1_OpnPos_stVal (&iedModel_B1HYD_KVLV1_OpnPos_stVal)
#define IEDMODEL_B1HYD_KVLV1_OpnPos_q (&iedModel_B1HYD_KVLV1_OpnPos_q)
#define IEDMODEL_B1HYD_KVLV1_OpnPos_t (&iedModel_B1HYD_KVLV1_OpnPos_t)
#define IEDMODEL_B1HYD_KVLV1_Mvm (&iedModel_B1HYD_KVLV1_Mvm)
#define IEDMODEL_B1HYD_KVLV1_Mvm_stVal (&iedModel_B1HYD_KVLV1_Mvm_stVal)
#define IEDMODEL_B1HYD_KVLV1_Mvm_q (&iedModel_B1HYD_KVLV1_Mvm_q)
#define IEDMODEL_B1HYD_KVLV1_Mvm_t (&iedModel_B1HYD_KVLV1_Mvm_t)
#define IEDMODEL_B1HYD_KVLV1_Stuck (&iedModel_B1HYD_KVLV1_Stuck)
#define IEDMODEL_B1HYD_KVLV1_Stuck_stVal (&iedModel_B1HYD_KVLV1_Stuck_stVal)
#define IEDMODEL_B1HYD_KVLV1_Stuck_q (&iedModel_B1HYD_KVLV1_Stuck_q)
#define IEDMODEL_B1HYD_KVLV1_Stuck_t (&iedModel_B1HYD_KVLV1_Stuck_t)
#define IEDMODEL_B1HYD_KVLV1_PosVlv (&iedModel_B1HYD_KVLV1_PosVlv)
#define IEDMODEL_B1HYD_KVLV1_PosVlv_mag (&iedModel_B1HYD_KVLV1_PosVlv_mag)
#define IEDMODEL_B1HYD_KVLV1_PosVlv_mag_f (&iedModel_B1HYD_KVLV1_PosVlv_mag_f)
#define IEDMODEL_B1HYD_KVLV1_PosVlv_q (&iedModel_B1HYD_KVLV1_PosVlv_q)
#define IEDMODEL_B1HYD_KVLV1_PosVlv_t (&iedModel_B1HYD_KVLV1_PosVlv_t)
#define IEDMODEL_B1HYD_KVLV1_PosSpt (&iedModel_B1HYD_KVLV1_PosSpt)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_mxVal (&iedModel_B1HYD_KVLV1_PosSpt_mxVal)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_mxVal_f (&iedModel_B1HYD_KVLV1_PosSpt_mxVal_f)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_q (&iedModel_B1HYD_KVLV1_PosSpt_q)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_t (&iedModel_B1HYD_KVLV1_PosSpt_t)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_ctlModel (&iedModel_B1HYD_KVLV1_PosSpt_ctlModel)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper (&iedModel_B1HYD_KVLV1_PosSpt_Oper)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_ctlVal (&iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlVal)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_origin (&iedModel_B1HYD_KVLV1_PosSpt_Oper_origin)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_origin_orCat (&iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orCat)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_origin_orIdent (&iedModel_B1HYD_KVLV1_PosSpt_Oper_origin_orIdent)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_ctlNum (&iedModel_B1HYD_KVLV1_PosSpt_Oper_ctlNum)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_T (&iedModel_B1HYD_KVLV1_PosSpt_Oper_T)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_Test (&iedModel_B1HYD_KVLV1_PosSpt_Oper_Test)
#define IEDMODEL_B1HYD_KVLV1_PosSpt_Oper_Check (&iedModel_B1HYD_KVLV1_PosSpt_Oper_Check)
#define IEDMODEL_B1HYD_KVLV1_Pos (&iedModel_B1HYD_KVLV1_Pos)
#define IEDMODEL_B1HYD_KVLV1_Pos_stVal (&iedModel_B1HYD_KVLV1_Pos_stVal)
#define IEDMODEL_B1HYD_KVLV1_Pos_q (&iedModel_B1HYD_KVLV1_Pos_q)
#define IEDMODEL_B1HYD_KVLV1_Pos_t (&iedModel_B1HYD_KVLV1_Pos_t)
#define IEDMODEL_B1HYD_KVLV1_Pos_ctlModel (&iedModel_B1HYD_KVLV1_Pos_ctlModel)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper (&iedModel_B1HYD_KVLV1_Pos_Oper)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_ctlVal (&iedModel_B1HYD_KVLV1_Pos_Oper_ctlVal)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_origin (&iedModel_B1HYD_KVLV1_Pos_Oper_origin)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_origin_orCat (&iedModel_B1HYD_KVLV1_Pos_Oper_origin_orCat)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_origin_orIdent (&iedModel_B1HYD_KVLV1_Pos_Oper_origin_orIdent)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_ctlNum (&iedModel_B1HYD_KVLV1_Pos_Oper_ctlNum)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_T (&iedModel_B1HYD_KVLV1_Pos_Oper_T)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_Test (&iedModel_B1HYD_KVLV1_Pos_Oper_Test)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_Check (&iedModel_B1HYD_KVLV1_Pos_Oper_Check)
#define IEDMODEL_B1HYD_KVLV1_Pos_Oper_ctlVal (&iedModel_B1HYD_KVLV1_Pos_Oper_ctlVal)
#define IEDMODEL_B1HYD_KVLV1_OpnLim (&iedModel_B1HYD_KVLV1_OpnLim)
#define IEDMODEL_B1HYD_KVLV1_OpnLim_setMag (&iedModel_B1HYD_KVLV1_OpnLim_setMag)
#define IEDMODEL_B1HYD_KVLV1_OpnLim_setMag_f (&iedModel_B1HYD_KVLV1_OpnLim_setMag_f)
#define IEDMODEL_B1HYD_KVLV1_OpnLim_sVC (&iedModel_B1HYD_KVLV1_OpnLim_sVC)
#define IEDMODEL_B1HYD_KVLV1_OpnLim_sVC_scaleFactor (&iedModel_B1HYD_KVLV1_OpnLim_sVC_scaleFactor)
#define IEDMODEL_B1HYD_KVLV1_OpnLim_sVC_offset (&iedModel_B1HYD_KVLV1_OpnLim_sVC_offset)
#define IEDMODEL_B1HYD_KVLV1_ClsLim (&iedModel_B1HYD_KVLV1_ClsLim)
#define IEDMODEL_B1HYD_KVLV1_ClsLim_setMag (&iedModel_B1HYD_KVLV1_ClsLim_setMag)
#define IEDMODEL_B1HYD_KVLV1_ClsLim_setMag_f (&iedModel_B1HYD_KVLV1_ClsLim_setMag_f)
#define IEDMODEL_B1HYD_KVLV1_ClsLim_sVC (&iedModel_B1HYD_KVLV1_ClsLim_sVC)
#define IEDMODEL_B1HYD_KVLV1_ClsLim_sVC_scaleFactor (&iedModel_B1HYD_KVLV1_ClsLim_sVC_scaleFactor)
#define IEDMODEL_B1HYD_KVLV1_ClsLim_sVC_offset (&iedModel_B1HYD_KVLV1_ClsLim_sVC_offset) */

/* --- Defines DFCL1 --- */
#define IEDMODEL_B1HYD_DFCL1 (&iedModel_B1HYD_DFCL1)
#define IEDMODEL_B1HYD_DFCL1_LifeEfcPct (&iedModel_B1HYD_DFCL1_LifeEfcPct)
#define IEDMODEL_B1HYD_DFCL1_LifeEfcPct_stVal (&iedModel_B1HYD_DFCL1_LifeEfcPct_stVal)
#define IEDMODEL_B1HYD_DFCL1_LifeEfcPct_q (&iedModel_B1HYD_DFCL1_LifeEfcPct_q)
#define IEDMODEL_B1HYD_DFCL1_LifeEfcPct_t (&iedModel_B1HYD_DFCL1_LifeEfcPct_t)
#define IEDMODEL_B1HYD_DFCL1_MaintTms (&iedModel_B1HYD_DFCL1_MaintTms)
#define IEDMODEL_B1HYD_DFCL1_MaintTms_stVal (&iedModel_B1HYD_DFCL1_MaintTms_stVal)
#define IEDMODEL_B1HYD_DFCL1_MaintTms_q (&iedModel_B1HYD_DFCL1_MaintTms_q)
#define IEDMODEL_B1HYD_DFCL1_MaintTms_t (&iedModel_B1HYD_DFCL1_MaintTms_t)
#define IEDMODEL_B1HYD_DFCL1_EEHealth (&iedModel_B1HYD_DFCL1_EEHealth)
#define IEDMODEL_B1HYD_DFCL1_EEHealth_stVal (&iedModel_B1HYD_DFCL1_EEHealth_stVal)
#define IEDMODEL_B1HYD_DFCL1_EEHealth_q (&iedModel_B1HYD_DFCL1_EEHealth_q)
#define IEDMODEL_B1HYD_DFCL1_EEHealth_t (&iedModel_B1HYD_DFCL1_EEHealth_t)
#define IEDMODEL_B1HYD_DFCL1_WtrLev (&iedModel_B1HYD_DFCL1_WtrLev)
#define IEDMODEL_B1HYD_DFCL1_WtrLev_mag (&iedModel_B1HYD_DFCL1_WtrLev_mag)
#define IEDMODEL_B1HYD_DFCL1_WtrLev_mag_f (&iedModel_B1HYD_DFCL1_WtrLev_mag_f)
#define IEDMODEL_B1HYD_DFCL1_WtrLev_q (&iedModel_B1HYD_DFCL1_WtrLev_q)
#define IEDMODEL_B1HYD_DFCL1_WtrLev_t (&iedModel_B1HYD_DFCL1_WtrLev_t)
#define IEDMODEL_B1HYD_DFCL1_OutH2Lev (&iedModel_B1HYD_DFCL1_OutH2Lev)
#define IEDMODEL_B1HYD_DFCL1_OutH2Lev_mag (&iedModel_B1HYD_DFCL1_OutH2Lev_mag)
#define IEDMODEL_B1HYD_DFCL1_OutH2Lev_mag_f (&iedModel_B1HYD_DFCL1_OutH2Lev_mag_f)
#define IEDMODEL_B1HYD_DFCL1_OutH2Lev_q (&iedModel_B1HYD_DFCL1_OutH2Lev_q)
#define IEDMODEL_B1HYD_DFCL1_OutH2Lev_t (&iedModel_B1HYD_DFCL1_OutH2Lev_t)
#define IEDMODEL_B1HYD_DFCL1_Alim (&iedModel_B1HYD_DFCL1_Alim)
#define IEDMODEL_B1HYD_DFCL1_Alim_setMag (&iedModel_B1HYD_DFCL1_Alim_setMag)
#define IEDMODEL_B1HYD_DFCL1_Alim_setMag_f (&iedModel_B1HYD_DFCL1_Alim_setMag_f)
#define IEDMODEL_B1HYD_DFCL1_Alim_sVC (&iedModel_B1HYD_DFCL1_Alim_sVC)
#define IEDMODEL_B1HYD_DFCL1_Vlim (&iedModel_B1HYD_DFCL1_Vlim)
#define IEDMODEL_B1HYD_DFCL1_Vlim_setMag (&iedModel_B1HYD_DFCL1_Vlim_setMag)
#define IEDMODEL_B1HYD_DFCL1_Vlim_setMag_f (&iedModel_B1HYD_DFCL1_Vlim_setMag_f)
#define IEDMODEL_B1HYD_DFCL1_Vlim_sVC (&iedModel_B1HYD_DFCL1_Vlim_sVC)

/* --- Defines DSTK1 --- */
#define IEDMODEL_B1HYD_DSTK1 (&iedModel_B1HYD_DSTK1)
#define IEDMODEL_B1HYD_DSTK1_NamPlt (&iedModel_B1HYD_DSTK1_NamPlt)
#define IEDMODEL_B1HYD_DSTK1_NamPlt_vendor (&iedModel_B1HYD_DSTK1_NamPlt_vendor)
#define IEDMODEL_B1HYD_DSTK1_NamPlt_swRev (&iedModel_B1HYD_DSTK1_NamPlt_swRev)
#define IEDMODEL_B1HYD_DSTK1_NamPlt_lnNs (&iedModel_B1HYD_DSTK1_NamPlt_lnNs)
#define IEDMODEL_B1HYD_DSTK1_StcSt (&iedModel_B1HYD_DSTK1_StcSt)
#define IEDMODEL_B1HYD_DSTK1_StcSt_stVal (&iedModel_B1HYD_DSTK1_StcSt_stVal)
#define IEDMODEL_B1HYD_DSTK1_StcSt_q (&iedModel_B1HYD_DSTK1_StcSt_q)
#define IEDMODEL_B1HYD_DSTK1_StcSt_t (&iedModel_B1HYD_DSTK1_StcSt_t)
#define IEDMODEL_B1HYD_DSTK1_CelVTrCnt (&iedModel_B1HYD_DSTK1_CelVTrCnt)
#define IEDMODEL_B1HYD_DSTK1_CelVTrCnt_stVal (&iedModel_B1HYD_DSTK1_CelVTrCnt_stVal)
#define IEDMODEL_B1HYD_DSTK1_CelVTrCnt_q (&iedModel_B1HYD_DSTK1_CelVTrCnt_q)
#define IEDMODEL_B1HYD_DSTK1_CelVTrCnt_t (&iedModel_B1HYD_DSTK1_CelVTrCnt_t)
#define IEDMODEL_B1HYD_DSTK1_StcLodTms (&iedModel_B1HYD_DSTK1_StcLodTms)
#define IEDMODEL_B1HYD_DSTK1_StcLodTms_stVal (&iedModel_B1HYD_DSTK1_StcLodTms_stVal)
#define IEDMODEL_B1HYD_DSTK1_StcLodTms_q (&iedModel_B1HYD_DSTK1_StcLodTms_q)
#define IEDMODEL_B1HYD_DSTK1_StcLodTms_t (&iedModel_B1HYD_DSTK1_StcLodTms_t)
#define IEDMODEL_B1HYD_DSTK1_MaintTms (&iedModel_B1HYD_DSTK1_MaintTms)
#define IEDMODEL_B1HYD_DSTK1_MaintTms_stVal (&iedModel_B1HYD_DSTK1_MaintTms_stVal)
#define IEDMODEL_B1HYD_DSTK1_MaintTms_q (&iedModel_B1HYD_DSTK1_MaintTms_q)
#define IEDMODEL_B1HYD_DSTK1_MaintTms_t (&iedModel_B1HYD_DSTK1_MaintTms_t)
#define IEDMODEL_B1HYD_DSTK1_Beh (&iedModel_B1HYD_DSTK1_Beh)
#define IEDMODEL_B1HYD_DSTK1_Beh_stVal (&iedModel_B1HYD_DSTK1_Beh_stVal)
#define IEDMODEL_B1HYD_DSTK1_Beh_q (&iedModel_B1HYD_DSTK1_Beh_q)
#define IEDMODEL_B1HYD_DSTK1_Beh_t (&iedModel_B1HYD_DSTK1_Beh_t)
#define IEDMODEL_B1HYD_DSTK1_Health (&iedModel_B1HYD_DSTK1_Health)
#define IEDMODEL_B1HYD_DSTK1_Health_stVal (&iedModel_B1HYD_DSTK1_Health_stVal)
#define IEDMODEL_B1HYD_DSTK1_Health_q (&iedModel_B1HYD_DSTK1_Health_q)
#define IEDMODEL_B1HYD_DSTK1_Health_t (&iedModel_B1HYD_DSTK1_Health_t)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct (&iedModel_B1HYD_DSTK1_StcEfcPct)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_instMag (&iedModel_B1HYD_DSTK1_StcEfcPct_instMag)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_instMag_f (&iedModel_B1HYD_DSTK1_StcEfcPct_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_mag (&iedModel_B1HYD_DSTK1_StcEfcPct_mag)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_mag_f (&iedModel_B1HYD_DSTK1_StcEfcPct_mag_f)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_q (&iedModel_B1HYD_DSTK1_StcEfcPct_q)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_t (&iedModel_B1HYD_DSTK1_StcEfcPct_t)
#define IEDMODEL_B1HYD_DSTK1_StcEfcPct_units (&iedModel_B1HYD_DSTK1_StcEfcPct_units)
#define IEDMODEL_B1HYD_DSTK1_OutDCV (&iedModel_B1HYD_DSTK1_OutDCV)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_instMag (&iedModel_B1HYD_DSTK1_OutDCV_instMag)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_instMag_f (&iedModel_B1HYD_DSTK1_OutDCV_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_mag (&iedModel_B1HYD_DSTK1_OutDCV_mag)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_mag_f (&iedModel_B1HYD_DSTK1_OutDCV_mag_f)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_q (&iedModel_B1HYD_DSTK1_OutDCV_q)
#define IEDMODEL_B1HYD_DSTK1_OutDCV_t (&iedModel_B1HYD_DSTK1_OutDCV_t)
#define IEDMODEL_B1HYD_DSTK1_OutDCA (&iedModel_B1HYD_DSTK1_OutDCA)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_instMag (&iedModel_B1HYD_DSTK1_OutDCA_instMag)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_instMag_f (&iedModel_B1HYD_DSTK1_OutDCA_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_mag (&iedModel_B1HYD_DSTK1_OutDCA_mag)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_mag_f (&iedModel_B1HYD_DSTK1_OutDCA_mag_f)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_q (&iedModel_B1HYD_DSTK1_OutDCA_q)
#define IEDMODEL_B1HYD_DSTK1_OutDCA_t (&iedModel_B1HYD_DSTK1_OutDCA_t)
#define IEDMODEL_B1HYD_DSTK1_InClTmp (&iedModel_B1HYD_DSTK1_InClTmp)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_instMag (&iedModel_B1HYD_DSTK1_InClTmp_instMag)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_instMag_f (&iedModel_B1HYD_DSTK1_InClTmp_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_mag (&iedModel_B1HYD_DSTK1_InClTmp_mag)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_mag_f (&iedModel_B1HYD_DSTK1_InClTmp_mag_f)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_q (&iedModel_B1HYD_DSTK1_InClTmp_q)
#define IEDMODEL_B1HYD_DSTK1_InClTmp_t (&iedModel_B1HYD_DSTK1_InClTmp_t)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp (&iedModel_B1HYD_DSTK1_OutClTmp)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_instMag (&iedModel_B1HYD_DSTK1_OutClTmp_instMag)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_instMag_f (&iedModel_B1HYD_DSTK1_OutClTmp_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_mag (&iedModel_B1HYD_DSTK1_OutClTmp_mag)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_mag_f (&iedModel_B1HYD_DSTK1_OutClTmp_mag_f)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_q (&iedModel_B1HYD_DSTK1_OutClTmp_q)
#define IEDMODEL_B1HYD_DSTK1_OutClTmp_t (&iedModel_B1HYD_DSTK1_OutClTmp_t)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres (&iedModel_B1HYD_DSTK1_InH2Pres)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_instMag (&iedModel_B1HYD_DSTK1_InH2Pres_instMag)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_instMag_f (&iedModel_B1HYD_DSTK1_InH2Pres_instMag_f)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_mag (&iedModel_B1HYD_DSTK1_InH2Pres_mag)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_mag_f (&iedModel_B1HYD_DSTK1_InH2Pres_mag_f)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_q (&iedModel_B1HYD_DSTK1_InH2Pres_q)
#define IEDMODEL_B1HYD_DSTK1_InH2Pres_t (&iedModel_B1HYD_DSTK1_InH2Pres_t)

/* --- Defines SPRS1 --- */
#define IEDMODEL_B1HYD_SPRS1_Health (&iedModel_B1HYD_SPRS1_Health)
#define IEDMODEL_B1HYD_SPRS1_Health_stVal (&iedModel_B1HYD_SPRS1_Health_stVal)
#define IEDMODEL_B1HYD_SPRS1_Health_q (&iedModel_B1HYD_SPRS1_Health_q)
#define IEDMODEL_B1HYD_SPRS1_Health_t (&iedModel_B1HYD_SPRS1_Health_t)
#define IEDMODEL_B1HYD_SPRS1_AlmSet (&iedModel_B1HYD_SPRS1_AlmSet)
#define IEDMODEL_B1HYD_SPRS1_AlmSet_setMag (&iedModel_B1HYD_SPRS1_AlmSet_setMag)
#define IEDMODEL_B1HYD_SPRS1_AlmSet_setMag_f (&iedModel_B1HYD_SPRS1_AlmSet_setMag_f)
#define IEDMODEL_B1HYD_SPRS1_AlmSet_minVal (&iedModel_B1HYD_SPRS1_AlmSet_minVal)
#define IEDMODEL_B1HYD_SPRS1_AlmSet_minVal_f (&iedModel_B1HYD_SPRS1_AlmSet_minVal_f)
#define IEDMODEL_B1HYD_SPRS1_AlmSet_maxVal (&iedModel_B1HYD_SPRS1_AlmSet_maxVal) 
#define IEDMODEL_B1HYD_SPRS1_AlmSet_maxVal_f (&iedModel_B1HYD_SPRS1_AlmSet_maxVal_f)

/* --- Defines TPRS1 --- */
#define IEDMODEL_B1HYD_TPRS1 (&iedModel_B1HYD_TPRS1)
#define IEDMODEL_B1HYD_TPRS1_EEName (&iedModel_B1HYD_TPRS1_EEName)
#define IEDMODEL_B1HYD_TPRS1_EEName_vendor (&iedModel_B1HYD_TPRS1_EEName_vendor)
#define IEDMODEL_B1HYD_TPRS1_EEName_model (&iedModel_B1HYD_TPRS1_EEName_model)
#define IEDMODEL_B1HYD_TPRS1_EEHealth (&iedModel_B1HYD_TPRS1_EEHealth)
#define IEDMODEL_B1HYD_TPRS1_EEHealth_stVal (&iedModel_B1HYD_TPRS1_EEHealth_stVal)
#define IEDMODEL_B1HYD_TPRS1_EEHealth_q (&iedModel_B1HYD_TPRS1_EEHealth_q)
#define IEDMODEL_B1HYD_TPRS1_EEHealth_t (&iedModel_B1HYD_TPRS1_EEHealth_t)
#define IEDMODEL_B1HYD_TPRS1_Beh (&iedModel_B1HYD_TPRS1_Beh)
#define IEDMODEL_B1HYD_TPRS1_Beh_stVal (&iedModel_B1HYD_TPRS1_Beh_stVal)
#define IEDMODEL_B1HYD_TPRS1_Beh_q (&iedModel_B1HYD_TPRS1_Beh_q)
#define IEDMODEL_B1HYD_TPRS1_Beh_t (&iedModel_B1HYD_TPRS1_Beh_t)
#define IEDMODEL_B1HYD_TPRS1_Health (&iedModel_B1HYD_TPRS1_Health)
#define IEDMODEL_B1HYD_TPRS1_Health_stVal (&iedModel_B1HYD_TPRS1_Health_stVal)
#define IEDMODEL_B1HYD_TPRS1_Health_q (&iedModel_B1HYD_TPRS1_Health_q)
#define IEDMODEL_B1HYD_TPRS1_Health_t (&iedModel_B1HYD_TPRS1_Health_t)
#define IEDMODEL_B1HYD_TPRS1_PresSv (&iedModel_B1HYD_TPRS1_PresSv)
#define IEDMODEL_B1HYD_TPRS1_PresSv_instMag (&iedModel_B1HYD_TPRS1_PresSv_instMag)
#define IEDMODEL_B1HYD_TPRS1_PresSv_instMag_f (&iedModel_B1HYD_TPRS1_PresSv_instMag_f)
#define IEDMODEL_B1HYD_TPRS1_PresSv_q (&iedModel_B1HYD_TPRS1_PresSv_q)
#define IEDMODEL_B1HYD_TPRS1_PresSv_t (&iedModel_B1HYD_TPRS1_PresSv_t)

/* --- Defines DFPM1 --- */
#define IEDMODEL_B1HYD_DFPM1 (&iedModel_B1HYD_DFPM1)
#define IEDMODEL_B1HYD_DFPM1_FPMSt (&iedModel_B1HYD_DFPM1_FPMSt)
#define IEDMODEL_B1HYD_DFPM1_FPMSt_stVal (&iedModel_B1HYD_DFPM1_FPMSt_stVal)
#define IEDMODEL_B1HYD_DFPM1_FPMSt_q (&iedModel_B1HYD_DFPM1_FPMSt_q)
#define IEDMODEL_B1HYD_DFPM1_FPMSt_t (&iedModel_B1HYD_DFPM1_FPMSt_t)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc (&iedModel_B1HYD_DFPM1_CnvEfc)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc_mag (&iedModel_B1HYD_DFPM1_CnvEfc_mag)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc_mag_f (&iedModel_B1HYD_DFPM1_CnvEfc_mag_f)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc_q (&iedModel_B1HYD_DFPM1_CnvEfc_q)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc_t (&iedModel_B1HYD_DFPM1_CnvEfc_t)
#define IEDMODEL_B1HYD_DFPM1_CnvEfc_units (&iedModel_B1HYD_DFPM1_CnvEfc_units)
#define IEDMODEL_B1HYD_DFPM1_ProcTyp (&iedModel_B1HYD_DFPM1_ProcTyp)
#define IEDMODEL_B1HYD_DFPM1_ProcTyp_setVal (&iedModel_B1HYD_DFPM1_ProcTyp_setVal)

/* --- Defines TNKXSWI1 --- */
#define IEDMODEL_B1HYD_TNKXSWI1 (&iedModel_B1HYD_TNKXSWI1)
#define IEDMODEL_B1HYD_TNKXSWI1_SwTyp (&iedModel_B1HYD_TNKXSWI1_SwTyp)
#define IEDMODEL_B1HYD_TNKXSWI1_SwTyp_stVal (&iedModel_B1HYD_TNKXSWI1_SwTyp_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_SwTyp_q (&iedModel_B1HYD_TNKXSWI1_SwTyp_q)
#define IEDMODEL_B1HYD_TNKXSWI1_SwTyp_t (&iedModel_B1HYD_TNKXSWI1_SwTyp_t)
#define IEDMODEL_B1HYD_TNKXSWI1_Loc (&iedModel_B1HYD_TNKXSWI1_Loc)
#define IEDMODEL_B1HYD_TNKXSWI1_Loc_stVal (&iedModel_B1HYD_TNKXSWI1_Loc_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_Loc_q (&iedModel_B1HYD_TNKXSWI1_Loc_q)
#define IEDMODEL_B1HYD_TNKXSWI1_Loc_t (&iedModel_B1HYD_TNKXSWI1_Loc_t)
#define IEDMODEL_B1HYD_TNKXSWI1_OpCnt (&iedModel_B1HYD_TNKXSWI1_OpCnt)
#define IEDMODEL_B1HYD_TNKXSWI1_OpCnt_stVal (&iedModel_B1HYD_TNKXSWI1_OpCnt_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_OpCnt_q (&iedModel_B1HYD_TNKXSWI1_OpCnt_q)
#define IEDMODEL_B1HYD_TNKXSWI1_OpCnt_t (&iedModel_B1HYD_TNKXSWI1_OpCnt_t)
#define IEDMODEL_B1HYD_TNKXSWI1_Beh (&iedModel_B1HYD_TNKXSWI1_Beh)
#define IEDMODEL_B1HYD_TNKXSWI1_Beh_stVal (&iedModel_B1HYD_TNKXSWI1_Beh_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_Beh_q (&iedModel_B1HYD_TNKXSWI1_Beh_q)
#define IEDMODEL_B1HYD_TNKXSWI1_Beh_t (&iedModel_B1HYD_TNKXSWI1_Beh_t)
#define IEDMODEL_B1HYD_TNKXSWI1_Health (&iedModel_B1HYD_TNKXSWI1_Health)
#define IEDMODEL_B1HYD_TNKXSWI1_Health_stVal (&iedModel_B1HYD_TNKXSWI1_Health_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_Health_q (&iedModel_B1HYD_TNKXSWI1_Health_q)
#define IEDMODEL_B1HYD_TNKXSWI1_Health_t (&iedModel_B1HYD_TNKXSWI1_Health_t)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos (&iedModel_B1HYD_TNKXSWI1_Pos)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_stVal (&iedModel_B1HYD_TNKXSWI1_Pos_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_q (&iedModel_B1HYD_TNKXSWI1_Pos_q)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_t (&iedModel_B1HYD_TNKXSWI1_Pos_t)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_ctlModel (&iedModel_B1HYD_TNKXSWI1_Pos_ctlModel)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_Oper (&iedModel_B1HYD_TNKXSWI1_Pos_Oper)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_Oper_ctlVal (&iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlVal)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_Oper_origin (&iedModel_B1HYD_TNKXSWI1_Pos_Oper_origin)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_Oper_ctlNum (&iedModel_B1HYD_TNKXSWI1_Pos_Oper_ctlNum)
#define IEDMODEL_B1HYD_TNKXSWI1_Pos_Oper_T (&iedModel_B1HYD_TNKXSWI1_Pos_Oper_T)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn (&iedModel_B1HYD_TNKXSWI1_BlkOpn)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_stVal (&iedModel_B1HYD_TNKXSWI1_BlkOpn_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_q (&iedModel_B1HYD_TNKXSWI1_BlkOpn_q)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_t (&iedModel_B1HYD_TNKXSWI1_BlkOpn_t)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_ctlModel (&iedModel_B1HYD_TNKXSWI1_BlkOpn_ctlModel)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_Oper (&iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlVal (&iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlVal)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_Oper_origin (&iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_origin)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlNum (&iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_ctlNum)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkOpn_Oper_T (&iedModel_B1HYD_TNKXSWI1_BlkOpn_Oper_T)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls (&iedModel_B1HYD_TNKXSWI1_BlkCls)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_stVal (&iedModel_B1HYD_TNKXSWI1_BlkCls_stVal)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_q (&iedModel_B1HYD_TNKXSWI1_BlkCls_q)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_t (&iedModel_B1HYD_TNKXSWI1_BlkCls_t)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_ctlModel (&iedModel_B1HYD_TNKXSWI1_BlkCls_ctlModel)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_Oper (&iedModel_B1HYD_TNKXSWI1_BlkCls_Oper)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_Oper_ctlVal (&iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlVal)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_Oper_origin (&iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_origin)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_Oper_ctlNum (&iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_ctlNum)
#define IEDMODEL_B1HYD_TNKXSWI1_BlkCls_Oper_T (&iedModel_B1HYD_TNKXSWI1_BlkCls_Oper_T)

/* --- Defines CELXSWI1 --- */
#define IEDMODEL_B1HYD_CELXSWI1 (&iedModel_B1HYD_CELXSWI1)
#define IEDMODEL_B1HYD_CELXSWI1_SwTyp (&iedModel_B1HYD_CELXSWI1_SwTyp)
#define IEDMODEL_B1HYD_CELXSWI1_SwTyp_stVal (&iedModel_B1HYD_CELXSWI1_SwTyp_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_SwTyp_q (&iedModel_B1HYD_CELXSWI1_SwTyp_q)
#define IEDMODEL_B1HYD_CELXSWI1_SwTyp_t (&iedModel_B1HYD_CELXSWI1_SwTyp_t)
#define IEDMODEL_B1HYD_CELXSWI1_Loc (&iedModel_B1HYD_CELXSWI1_Loc)
#define IEDMODEL_B1HYD_CELXSWI1_Loc_stVal (&iedModel_B1HYD_CELXSWI1_Loc_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_Loc_q (&iedModel_B1HYD_CELXSWI1_Loc_q)
#define IEDMODEL_B1HYD_CELXSWI1_Loc_t (&iedModel_B1HYD_CELXSWI1_Loc_t)
#define IEDMODEL_B1HYD_CELXSWI1_OpCnt (&iedModel_B1HYD_CELXSWI1_OpCnt)
#define IEDMODEL_B1HYD_CELXSWI1_OpCnt_stVal (&iedModel_B1HYD_CELXSWI1_OpCnt_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_OpCnt_q (&iedModel_B1HYD_CELXSWI1_OpCnt_q)
#define IEDMODEL_B1HYD_CELXSWI1_OpCnt_t (&iedModel_B1HYD_CELXSWI1_OpCnt_t)
#define IEDMODEL_B1HYD_CELXSWI1_Beh (&iedModel_B1HYD_CELXSWI1_Beh)
#define IEDMODEL_B1HYD_CELXSWI1_Beh_stVal (&iedModel_B1HYD_CELXSWI1_Beh_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_Beh_q (&iedModel_B1HYD_CELXSWI1_Beh_q)
#define IEDMODEL_B1HYD_CELXSWI1_Beh_t (&iedModel_B1HYD_CELXSWI1_Beh_t)
#define IEDMODEL_B1HYD_CELXSWI1_Health (&iedModel_B1HYD_CELXSWI1_Health)
#define IEDMODEL_B1HYD_CELXSWI1_Health_stVal (&iedModel_B1HYD_CELXSWI1_Health_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_Health_q (&iedModel_B1HYD_CELXSWI1_Health_q)
#define IEDMODEL_B1HYD_CELXSWI1_Health_t (&iedModel_B1HYD_CELXSWI1_Health_t)
#define IEDMODEL_B1HYD_CELXSWI1_Pos (&iedModel_B1HYD_CELXSWI1_Pos)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_stVal (&iedModel_B1HYD_CELXSWI1_Pos_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_q (&iedModel_B1HYD_CELXSWI1_Pos_q)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_t (&iedModel_B1HYD_CELXSWI1_Pos_t)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_ctlModel (&iedModel_B1HYD_CELXSWI1_Pos_ctlModel)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_Oper (&iedModel_B1HYD_CELXSWI1_Pos_Oper)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_Oper_ctlVal (&iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlVal)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_Oper_origin (&iedModel_B1HYD_CELXSWI1_Pos_Oper_origin)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_Oper_ctlNum (&iedModel_B1HYD_CELXSWI1_Pos_Oper_ctlNum)
#define IEDMODEL_B1HYD_CELXSWI1_Pos_Oper_T (&iedModel_B1HYD_CELXSWI1_Pos_Oper_T)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn (&iedModel_B1HYD_CELXSWI1_BlkOpn)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_stVal (&iedModel_B1HYD_CELXSWI1_BlkOpn_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_q (&iedModel_B1HYD_CELXSWI1_BlkOpn_q)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_t (&iedModel_B1HYD_CELXSWI1_BlkOpn_t)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_ctlModel (&iedModel_B1HYD_CELXSWI1_BlkOpn_ctlModel)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_Oper (&iedModel_B1HYD_CELXSWI1_BlkOpn_Oper)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_Oper_ctlVal (&iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlVal)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_Oper_origin (&iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_origin)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_Oper_ctlNum (&iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_ctlNum)
#define IEDMODEL_B1HYD_CELXSWI1_BlkOpn_Oper_T (&iedModel_B1HYD_CELXSWI1_BlkOpn_Oper_T)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls (&iedModel_B1HYD_CELXSWI1_BlkCls)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_stVal (&iedModel_B1HYD_CELXSWI1_BlkCls_stVal)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_q (&iedModel_B1HYD_CELXSWI1_BlkCls_q)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_t (&iedModel_B1HYD_CELXSWI1_BlkCls_t)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_ctlModel (&iedModel_B1HYD_CELXSWI1_BlkCls_ctlModel)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_Oper (&iedModel_B1HYD_CELXSWI1_BlkCls_Oper)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_Oper_ctlVal (&iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlVal)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_Oper_origin (&iedModel_B1HYD_CELXSWI1_BlkCls_Oper_origin)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_Oper_ctlNum (&iedModel_B1HYD_CELXSWI1_BlkCls_Oper_ctlNum)
#define IEDMODEL_B1HYD_CELXSWI1_BlkCls_Oper_T (&iedModel_B1HYD_CELXSWI1_BlkCls_Oper_T)

#endif /* STATIC_MODEL_H_B1HYD_C */
