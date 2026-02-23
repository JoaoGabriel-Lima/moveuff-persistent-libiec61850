#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_B1EBK; //Dispositivo Lógico

/* LNs */
extern LogicalNode iedModel_B1EBK_LLN0;
extern LogicalNode iedModel_B1EBK_DEEV1;
extern LogicalNode iedModel_B1EBK_ISAF1;
extern LogicalNode iedModel_B1EBK_LANTXSWI1;
extern LogicalNode iedModel_B1EBK_ALMXSWI1;
extern LogicalNode iedModel_B1EBK_MOTXSWI1;
extern LogicalNode iedModel_B1EBK_TMVM1;
extern LogicalNode iedModel_B1EBK_ZMOT1;
extern LogicalNode iedModel_B1EBK_MMXU1;
extern LogicalNode iedModel_B1EBK_TLOC1;

/* =================================================================
 * LLN0
 * =================================================================
 */

extern DataObject iedModel_B1EBK_LLN0_Mod;
extern DataAttribute iedModel_B1EBK_LLN0_Mod_stVal;
extern DataAttribute iedModel_B1EBK_LLN0_Mod_q;
extern DataAttribute iedModel_B1EBK_LLN0_Mod_t;
extern DataAttribute iedModel_B1EBK_LLN0_Mod_ctlModel;
extern DataObject iedModel_B1EBK_LLN0_Beh;
extern DataAttribute iedModel_B1EBK_LLN0_Beh_stVal;
extern DataAttribute iedModel_B1EBK_LLN0_Beh_q;
extern DataAttribute iedModel_B1EBK_LLN0_Beh_t;
extern DataObject iedModel_B1EBK_LLN0_Health;
extern DataAttribute iedModel_B1EBK_LLN0_Health_stVal;
extern DataAttribute iedModel_B1EBK_LLN0_Health_q;
extern DataAttribute iedModel_B1EBK_LLN0_Health_t;
extern DataObject iedModel_B1EBK_LLN0_NamPlt;
extern DataAttribute iedModel_B1EBK_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_B1EBK_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_B1EBK_LLN0_NamPlt_d;
extern DataAttribute iedModel_B1EBK_LLN0_NamPlt_configRev;
extern DataAttribute iedModel_B1EBK_LLN0_NamPlt_lnNs;
extern DataObject iedModel_B1EBK_LLN0_Diag;
extern DataAttribute iedModel_B1EBK_LLN0_Diag_stVal;
extern DataAttribute iedModel_B1EBK_LLN0_Diag_q;
extern DataAttribute iedModel_B1EBK_LLN0_Diag_t;
extern DataObject iedModel_B1EBK_LLN0_LEDRs;
extern DataAttribute iedModel_B1EBK_LLN0_LEDRs_stVal;
extern DataAttribute iedModel_B1EBK_LLN0_LEDRs_q;
extern DataAttribute iedModel_B1EBK_LLN0_LEDRs_t;

/* =================================================================
 * DEEV1
 * =================================================================
 */

extern DataObject iedModel_B1EBK_DEEV1_EVNam;
extern DataAttribute iedModel_B1EBK_DEEV1_EVNam_vendor;
extern DataAttribute iedModel_B1EBK_DEEV1_EVNam_model;
extern DataObject iedModel_B1EBK_DEEV1_NamPlt;
extern DataAttribute iedModel_B1EBK_DEEV1_NamPlt_vendor;
extern DataAttribute iedModel_B1EBK_DEEV1_NamPlt_swRev;
extern DataAttribute iedModel_B1EBK_DEEV1_NamPlt_d;
extern DataAttribute iedModel_B1EBK_DEEV1_NamPlt_configRev;
extern DataAttribute iedModel_B1EBK_DEEV1_NamPlt_lnNs;
extern DataObject iedModel_B1EBK_DEEV1_ConnTypSel;
extern DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_stVal;
extern DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_q;
extern DataAttribute iedModel_B1EBK_DEEV1_ConnTypSel_t;
extern DataObject iedModel_B1EBK_DEEV1_Beh;
extern DataAttribute iedModel_B1EBK_DEEV1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_DEEV1_Beh_q;
extern DataAttribute iedModel_B1EBK_DEEV1_Beh_t;
extern DataObject iedModel_B1EBK_DEEV1_Health;
extern DataAttribute iedModel_B1EBK_DEEV1_Health_stVal;
extern DataAttribute iedModel_B1EBK_DEEV1_Health_q;
extern DataAttribute iedModel_B1EBK_DEEV1_Health_t;
extern DataObject iedModel_B1EBK_DEEV1_Soc;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_mag;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_mag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_q;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_t;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_subEna;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_subMag;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_subMag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_subQ;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_subID;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_blkEna;
extern DataAttribute iedModel_B1EBK_DEEV1_Soc_db;
extern DataObject iedModel_B1EBK_DEEV1_EVId;
extern DataAttribute iedModel_B1EBK_DEEV1_EVId_setVal;
extern DataObject iedModel_B1EBK_DEEV1_DptTm;
extern DataAttribute iedModel_B1EBK_DEEV1_DptTm_setTm;
extern DataObject iedModel_B1EBK_DEEV1_VMax;
extern DataAttribute iedModel_B1EBK_DEEV1_VMax_setMag;
extern DataAttribute iedModel_B1EBK_DEEV1_VMax_setMag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC;  
extern DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC_scaleFactor;
extern DataAttribute iedModel_B1EBK_DEEV1_VMax_sVC_offset;
extern DataObject iedModel_B1EBK_DEEV1_AMax;
extern DataAttribute iedModel_B1EBK_DEEV1_AMax_setMag;
extern DataAttribute iedModel_B1EBK_DEEV1_AMax_setMag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC;  
extern DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC_scaleFactor;
extern DataAttribute iedModel_B1EBK_DEEV1_AMax_sVC_offset;
extern DataObject iedModel_B1EBK_DEEV1_AMin;
extern DataAttribute iedModel_B1EBK_DEEV1_AMin_setMag;
extern DataAttribute iedModel_B1EBK_DEEV1_AMin_setMag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC;  
extern DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC_scaleFactor;
extern DataAttribute iedModel_B1EBK_DEEV1_AMin_sVC_offset;
extern DataObject iedModel_B1EBK_DEEV1_EnAmnt;
extern DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_setMag;
extern DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_setMag_f;
extern DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC; 
extern DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor;
extern DataAttribute iedModel_B1EBK_DEEV1_EnAmnt_sVC_offset;

/* ==================================================================
 * ISAF1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_ISAF1_Alm;
extern DataAttribute iedModel_B1EBK_ISAF1_Alm_stVal;
extern DataAttribute iedModel_B1EBK_ISAF1_Alm_q;
extern DataAttribute iedModel_B1EBK_ISAF1_Alm_t;
extern DataObject iedModel_B1EBK_ISAF1_Beh;
extern DataAttribute iedModel_B1EBK_ISAF1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_ISAF1_Beh_q;
extern DataAttribute iedModel_B1EBK_ISAF1_Beh_t;
extern DataObject iedModel_B1EBK_ISAF1_Health;
extern DataAttribute iedModel_B1EBK_ISAF1_Health_stVal;
extern DataAttribute iedModel_B1EBK_ISAF1_Health_q;
extern DataAttribute iedModel_B1EBK_ISAF1_Health_t;

/* ==================================================================
 * LANTXSWI1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_LANTXSWI1_SwTyp;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_SwTyp_t;
extern DataObject iedModel_B1EBK_LANTXSWI1_Loc;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Loc_t;
extern DataObject iedModel_B1EBK_LANTXSWI1_OpCnt;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_OpCnt_t;
extern DataObject iedModel_B1EBK_LANTXSWI1_Beh;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Beh_t;
extern DataObject iedModel_B1EBK_LANTXSWI1_Health;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Health_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Health_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Health_t;
extern DataObject iedModel_B1EBK_LANTXSWI1_Pos;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_T;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_Test;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_Oper_Check;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_t;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_Pos_ctlModel;
extern DataObject iedModel_B1EBK_LANTXSWI1_BlkOpn;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_T;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Test;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_Check;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1EBK_LANTXSWI1_BlkCls;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_T;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Test;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_Check;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_q;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_t;
extern DataAttribute iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel;

/* ==================================================================
 * ALMXSWI1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_ALMXSWI1_SwTyp;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_SwTyp_t;
extern DataObject iedModel_B1EBK_ALMXSWI1_Loc;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Loc_t;
extern DataObject iedModel_B1EBK_ALMXSWI1_OpCnt;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_OpCnt_t;
extern DataObject iedModel_B1EBK_ALMXSWI1_Beh;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Beh_t;
extern DataObject iedModel_B1EBK_ALMXSWI1_Health;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Health_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Health_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Health_t;
extern DataObject iedModel_B1EBK_ALMXSWI1_Pos;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_T;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_Test;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_Oper_Check;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_t;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_Pos_ctlModel;
extern DataObject iedModel_B1EBK_ALMXSWI1_BlkOpn;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_T;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Test;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_Check;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1EBK_ALMXSWI1_BlkCls;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_T;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Test;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_Check;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_q;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_t;
extern DataAttribute iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel;


/* ==================================================================
 * TMVM1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_TMVM1_EEHealth;
extern DataAttribute iedModel_B1EBK_TMVM1_EEHealth_stVal;
extern DataAttribute iedModel_B1EBK_TMVM1_EEHealth_q;
extern DataAttribute iedModel_B1EBK_TMVM1_EEHealth_t;
extern DataObject iedModel_B1EBK_TMVM1_Beh;
extern DataAttribute iedModel_B1EBK_TMVM1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_TMVM1_Beh_q;
extern DataAttribute iedModel_B1EBK_TMVM1_Beh_t;
extern DataObject iedModel_B1EBK_TMVM1_Health;
extern DataAttribute iedModel_B1EBK_TMVM1_Health_stVal;
extern DataAttribute iedModel_B1EBK_TMVM1_Health_q;
extern DataAttribute iedModel_B1EBK_TMVM1_Health_t;
extern DataObject iedModel_B1EBK_TMVM1_MvmRteSv;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_instMag;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_instMag_f;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_q;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_t;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units_SIUnit;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_units_multiplier;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor;
extern DataAttribute iedModel_B1EBK_TMVM1_MvmRteSv_sVC_offset;

/* ==================================================================
 * ZMOT1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_ZMOT1_EEName;
extern DataAttribute iedModel_B1EBK_ZMOT1_EEName_vendor;
extern DataAttribute iedModel_B1EBK_ZMOT1_EEName_model;
extern DataObject iedModel_B1EBK_ZMOT1_RotThmSt;
extern DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_stVal;
extern DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_q;
extern DataAttribute iedModel_B1EBK_ZMOT1_RotThmSt_t;
extern DataObject iedModel_B1EBK_ZMOT1_PresAlm;
extern DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_stVal;
extern DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_q;
extern DataAttribute iedModel_B1EBK_ZMOT1_PresAlm_t;
extern DataObject iedModel_B1EBK_ZMOT1_EEHealth;
extern DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_stVal;
extern DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_q;
extern DataAttribute iedModel_B1EBK_ZMOT1_EEHealth_t;
extern DataObject iedModel_B1EBK_ZMOT1_MotSt;
extern DataAttribute iedModel_B1EBK_ZMOT1_MotSt_stVal;
extern DataAttribute iedModel_B1EBK_ZMOT1_MotSt_q;
extern DataAttribute iedModel_B1EBK_ZMOT1_MotSt_t;
extern DataObject iedModel_B1EBK_ZMOT1_NamPlt;
extern DataAttribute iedModel_B1EBK_ZMOT1_NamPlt_vendor;

/* ==================================================================
 * MMXU1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_MMXU1_NamPlt;
extern DataAttribute iedModel_B1EBK_MMXU1_NamPlt_vendor;
extern DataAttribute iedModel_B1EBK_MMXU1_NamPlt_swRev;
extern DataAttribute iedModel_B1EBK_MMXU1_NamPlt_lnNs;
extern DataObject iedModel_B1EBK_MMXU1_Beh;
extern DataAttribute iedModel_B1EBK_MMXU1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_MMXU1_Beh_q;
extern DataAttribute iedModel_B1EBK_MMXU1_Beh_t;
extern DataObject iedModel_B1EBK_MMXU1_Health;
extern DataAttribute iedModel_B1EBK_MMXU1_Health_stVal;
extern DataAttribute iedModel_B1EBK_MMXU1_Health_q;
extern DataAttribute iedModel_B1EBK_MMXU1_Health_t;
extern DataObject iedModel_B1EBK_MMXU1_TotW;
extern DataAttribute iedModel_B1EBK_MMXU1_TotW_mag;
extern DataAttribute iedModel_B1EBK_MMXU1_TotW_mag_f;
extern DataAttribute iedModel_B1EBK_MMXU1_TotW_q;
extern DataAttribute iedModel_B1EBK_MMXU1_TotW_t;
extern DataAttribute iedModel_B1EBK_MMXU1_TotW_db;

/* ==================================================================
 * TLOC1
 * ==================================================================
 */

extern DataObject iedModel_B1EBK_TLOC1_DistTot;
extern DataAttribute iedModel_B1EBK_TLOC1_DistTot_mag;
extern DataAttribute iedModel_B1EBK_TLOC1_DistTot_mag_f;
extern DataAttribute iedModel_B1EBK_TLOC1_DistTot_q;
extern DataAttribute iedModel_B1EBK_TLOC1_DistTot_t;
extern DataObject iedModel_B1EBK_TLOC1_DistSess;
extern DataAttribute iedModel_B1EBK_TLOC1_DistSess_mag;
extern DataAttribute iedModel_B1EBK_TLOC1_DistSess_mag_f;
extern DataAttribute iedModel_B1EBK_TLOC1_DistSess_q;
extern DataAttribute iedModel_B1EBK_TLOC1_DistSess_t;
extern DataObject iedModel_B1EBK_TLOC1_NavFai;
extern DataAttribute iedModel_B1EBK_TLOC1_NavFai_stVal;
extern DataAttribute iedModel_B1EBK_TLOC1_NavFai_q;
extern DataAttribute iedModel_B1EBK_TLOC1_NavFai_t;
extern DataObject iedModel_B1EBK_TLOC1_SatAvl;
extern DataAttribute iedModel_B1EBK_TLOC1_SatAvl_stVal;
extern DataAttribute iedModel_B1EBK_TLOC1_SatAvl_q;
extern DataAttribute iedModel_B1EBK_TLOC1_SatAvl_t;
extern DataObject iedModel_B1EBK_TLOC1_LocPrec;
extern DataAttribute iedModel_B1EBK_TLOC1_LocPrec_stVal;
extern DataAttribute iedModel_B1EBK_TLOC1_LocPrec_q;
extern DataAttribute iedModel_B1EBK_TLOC1_LocPrec_t;
extern DataObject iedModel_B1EBK_TLOC1_LocDist;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_instMag;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_instMag_f;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_mag;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_mag_f;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_q;
extern DataAttribute iedModel_B1EBK_TLOC1_LocDist_t;
extern DataObject iedModel_B1EBK_TLOC1_AutDis;
extern DataAttribute iedModel_B1EBK_TLOC1_AutDis_stVal;
extern DataAttribute iedModel_B1EBK_TLOC1_AutDis_q;
extern DataAttribute iedModel_B1EBK_TLOC1_AutDis_t;
extern DataObject iedModel_B1EBK_TLOC1_GeoLoc;
extern DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_latitude;
extern DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_longitude;
extern DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_general;
extern DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_q;
extern DataAttribute iedModel_B1EBK_TLOC1_GeoLoc_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_SwTyp;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_SwTyp_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_Loc;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Loc_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_OpCnt;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_OpCnt_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_Beh;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Beh_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_Health;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Health_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Health_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Health_t;
extern DataObject iedModel_B1EBK_MOTXSWI1_Pos;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_T;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_Test;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_Oper_Check;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_t;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_Pos_ctlModel;
extern DataObject iedModel_B1EBK_MOTXSWI1_BlkOpn;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_T;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Test;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_Oper_Check;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_t;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_B1EBK_MOTXSWI1_BlkCls;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orCat;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_origin_orIdent;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_ctlNum;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_T;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Test;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_Oper_Check;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_stVal;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_q;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_t;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_BlkCls_ctlModel;
extern DataObject iedModel_B1EBK_MOTXSWI1_NamPlt;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_vendor;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_swRev;
extern DataAttribute iedModel_B1EBK_MOTXSWI1_NamPlt_lnNs;


#define IEDMODEL_B1EBK (&iedModel_B1EBK)

/* --- Defines LLN0 --- */
#define IEDMODEL_B1EBK_LLN0 (&iedModel_B1EBK_LLN0)
#define IEDMODEL_B1EBK_LLN0_Mod (&iedModel_B1EBK_LLN0_Mod)
#define IEDMODEL_B1EBK_LLN0_Mod_stVal (&iedModel_B1EBK_LLN0_Mod_stVal)
#define IEDMODEL_B1EBK_LLN0_Mod_q (&iedModel_B1EBK_LLN0_Mod_q)
#define IEDMODEL_B1EBK_LLN0_Mod_t (&iedModel_B1EBK_LLN0_Mod_t)
#define IEDMODEL_B1EBK_LLN0_Mod_ctlModel (&iedModel_B1EBK_LLN0_Mod_ctlModel)
#define IEDMODEL_B1EBK_LLN0_Beh (&iedModel_B1EBK_LLN0_Beh)
#define IEDMODEL_B1EBK_LLN0_Beh_stVal (&iedModel_B1EBK_LLN0_Beh_stVal)
#define IEDMODEL_B1EBK_LLN0_Beh_q (&iedModel_B1EBK_LLN0_Beh_q)
#define IEDMODEL_B1EBK_LLN0_Beh_t (&iedModel_B1EBK_LLN0_Beh_t)
#define IEDMODEL_B1EBK_LLN0_Health (&iedModel_B1EBK_LLN0_Health)
#define IEDMODEL_B1EBK_LLN0_Health_stVal (&iedModel_B1EBK_LLN0_Health_stVal)
#define IEDMODEL_B1EBK_LLN0_Health_q (&iedModel_B1EBK_LLN0_Health_q)
#define IEDMODEL_B1EBK_LLN0_Health_t (&iedModel_B1EBK_LLN0_Health_t)
#define IEDMODEL_B1EBK_LLN0_NamPlt (&iedModel_B1EBK_LLN0_NamPlt)
#define IEDMODEL_B1EBK_LLN0_NamPlt_vendor (&iedModel_B1EBK_LLN0_NamPlt_vendor)
#define IEDMODEL_B1EBK_LLN0_NamPlt_swRev (&iedModel_B1EBK_LLN0_NamPlt_swRev)
#define IEDMODEL_B1EBK_LLN0_NamPlt_d (&iedModel_B1EBK_LLN0_NamPlt_d)
#define IEDMODEL_B1EBK_LLN0_NamPlt_configRev (&iedModel_B1EBK_LLN0_NamPlt_configRev)
#define IEDMODEL_B1EBK_LLN0_NamPlt_lnNs (&iedModel_B1EBK_LLN0_NamPlt_lnNs)
#define IEDMODEL_B1EBK_LLN0_Diag (&iedModel_B1EBK_LLN0_Diag)
#define IEDMODEL_B1EBK_LLN0_Diag_stVal (&iedModel_B1EBK_LLN0_Diag_stVal)
#define IEDMODEL_B1EBK_LLN0_Diag_q (&iedModel_B1EBK_LLN0_Diag_q)
#define IEDMODEL_B1EBK_LLN0_Diag_t (&iedModel_B1EBK_LLN0_Diag_t)
#define IEDMODEL_B1EBK_LLN0_LEDRs (&iedModel_B1EBK_LLN0_LEDRs)
#define IEDMODEL_B1EBK_LLN0_LEDRs_stVal (&iedModel_B1EBK_LLN0_LEDRs_stVal)
#define IEDMODEL_B1EBK_LLN0_LEDRs_q (&iedModel_B1EBK_LLN0_LEDRs_q)
#define IEDMODEL_B1EBK_LLN0_LEDRs_t (&iedModel_B1EBK_LLN0_LEDRs_t)

/* --- Defines DEEV1 --- */
#define IEDMODEL_B1EBK_DEEV1 (&iedModel_B1EBK_DEEV1)
#define IEDMODEL_B1EBK_DEEV1_EVNam (&iedModel_B1EBK_DEEV1_EVNam)
#define IEDMODEL_B1EBK_DEEV1_EVNam_vendor (&iedModel_B1EBK_DEEV1_EVNam_vendor)
#define IEDMODEL_B1EBK_DEEV1_NamPlt (&iedModel_B1EBK_DEEV1_NamPlt)
#define IEDMODEL_B1EBK_DEEV1_NamPlt_vendor (&iedModel_B1EBK_DEEV1_NamPlt_vendor)
#define IEDMODEL_B1EBK_DEEV1_NamPlt_swRev (&iedModel_B1EBK_DEEV1_NamPlt_swRev)
#define IEDMODEL_B1EBK_DEEV1_NamPlt_d (&iedModel_B1EBK_DEEV1_NamPlt_d)
#define IEDMODEL_B1EBK_DEEV1_NamPlt_configRev (&iedModel_B1EBK_DEEV1_NamPlt_configRev)
#define IEDMODEL_B1EBK_DEEV1_NamPlt_lnNs (&iedModel_B1EBK_DEEV1_NamPlt_lnNs)
#define IEDMODEL_B1EBK_DEEV1_ConnTypSel (&iedModel_B1EBK_DEEV1_ConnTypSel)
#define IEDMODEL_B1EBK_DEEV1_ConnTypSel_stVal (&iedModel_B1EBK_DEEV1_ConnTypSel_stVal)
#define IEDMODEL_B1EBK_DEEV1_ConnTypSel_q (&iedModel_B1EBK_DEEV1_ConnTypSel_q)
#define IEDMODEL_B1EBK_DEEV1_ConnTypSel_t (&iedModel_B1EBK_DEEV1_ConnTypSel_t)
#define IEDMODEL_B1EBK_DEEV1_Beh (&iedModel_B1EBK_DEEV1_Beh)
#define IEDMODEL_B1EBK_DEEV1_Beh_stVal (&iedModel_B1EBK_DEEV1_Beh_stVal)
#define IEDMODEL_B1EBK_DEEV1_Beh_q (&iedModel_B1EBK_DEEV1_Beh_q)
#define IEDMODEL_B1EBK_DEEV1_Beh_t (&iedModel_B1EBK_DEEV1_Beh_t)
#define IEDMODEL_B1EBK_DEEV1_Health (&iedModel_B1EBK_DEEV1_Health)
#define IEDMODEL_B1EBK_DEEV1_Health_stVal (&iedModel_B1EBK_DEEV1_Health_stVal)
#define IEDMODEL_B1EBK_DEEV1_Health_q (&iedModel_B1EBK_DEEV1_Health_q)
#define IEDMODEL_B1EBK_DEEV1_Health_t (&iedModel_B1EBK_DEEV1_Health_t)
#define IEDMODEL_B1EBK_DEEV1_Soc (&iedModel_B1EBK_DEEV1_Soc)
#define IEDMODEL_B1EBK_DEEV1_Soc_mag (&iedModel_B1EBK_DEEV1_Soc_mag)
#define IEDMODEL_B1EBK_DEEV1_Soc_mag_f (&iedModel_B1EBK_DEEV1_Soc_mag_f)
#define IEDMODEL_B1EBK_DEEV1_Soc_q (&iedModel_B1EBK_DEEV1_Soc_q)
#define IEDMODEL_B1EBK_DEEV1_Soc_t (&iedModel_B1EBK_DEEV1_Soc_t)
#define IEDMODEL_B1EBK_DEEV1_Soc_subEna (&iedModel_B1EBK_DEEV1_Soc_subEna)
#define IEDMODEL_B1EBK_DEEV1_Soc_subMag (&iedModel_B1EBK_DEEV1_Soc_subMag)
#define IEDMODEL_B1EBK_DEEV1_Soc_subMag_f (&iedModel_B1EBK_DEEV1_Soc_subMag_f)
#define IEDMODEL_B1EBK_DEEV1_Soc_subQ (&iedModel_B1EBK_DEEV1_Soc_subQ)
#define IEDMODEL_B1EBK_DEEV1_Soc_subID (&iedModel_B1EBK_DEEV1_Soc_subID)
#define IEDMODEL_B1EBK_DEEV1_Soc_blkEna (&iedModel_B1EBK_DEEV1_Soc_blkEna)
#define IEDMODEL_B1EBK_DEEV1_Soc_db (&iedModel_B1EBK_DEEV1_Soc_db)
#define IEDMODEL_B1EBK_DEEV1_EVId (&iedModel_B1EBK_DEEV1_EVId)
#define IEDMODEL_B1EBK_DEEV1_EVId_setVal (&iedModel_B1EBK_DEEV1_EVId_setVal)
#define IEDMODEL_B1EBK_DEEV1_DptTm (&iedModel_B1EBK_DEEV1_DptTm)
#define IEDMODEL_B1EBK_DEEV1_DptTm_setTm (&iedModel_B1EBK_DEEV1_DptTm_setTm)
#define IEDMODEL_B1EBK_DEEV1_VMax (&iedModel_B1EBK_DEEV1_VMax)
#define IEDMODEL_B1EBK_DEEV1_VMax_setMag (&iedModel_B1EBK_DEEV1_VMax_setMag)
#define IEDMODEL_B1EBK_DEEV1_VMax_setMag_f (&iedModel_B1EBK_DEEV1_VMax_setMag_f)
#define IEDMODEL_B1EBK_DEEV1_VMax_sVC (&iedModel_B1EBK_DEEV1_VMax_sVC)
#define IEDMODEL_B1EBK_DEEV1_VMax_sVC_scaleFactor (&iedModel_B1EBK_DEEV1_VMax_sVC_scaleFactor)
#define IEDMODEL_B1EBK_DEEV1_VMax_sVC_offset (&iedModel_B1EBK_DEEV1_VMax_sVC_offset)
#define IEDMODEL_B1EBK_DEEV1_AMax (&iedModel_B1EBK_DEEV1_AMax)
#define IEDMODEL_B1EBK_DEEV1_AMax_setMag (&iedModel_B1EBK_DEEV1_AMax_setMag)
#define IEDMODEL_B1EBK_DEEV1_AMax_setMag_f (&iedModel_B1EBK_DEEV1_AMax_setMag_f)
#define IEDMODEL_B1EBK_DEEV1_AMax_sVC (&iedModel_B1EBK_DEEV1_AMax_sVC)
#define IEDMODEL_B1EBK_DEEV1_AMax_sVC_scaleFactor (&iedModel_B1EBK_DEEV1_AMax_sVC_scaleFactor)
#define IEDMODEL_B1EBK_DEEV1_AMax_sVC_offset (&iedModel_B1EBK_DEEV1_AMax_sVC_offset)
#define IEDMODEL_B1EBK_DEEV1_AMin (&iedModel_B1EBK_DEEV1_AMin)
#define IEDMODEL_B1EBK_DEEV1_AMin_setMag (&iedModel_B1EBK_DEEV1_AMin_setMag)
#define IEDMODEL_B1EBK_DEEV1_AMin_setMag_f (&iedModel_B1EBK_DEEV1_AMin_setMag_f)
#define IEDMODEL_B1EBK_DEEV1_AMin_sVC (&iedModel_B1EBK_DEEV1_AMin_sVC)
#define IEDMODEL_B1EBK_DEEV1_AMin_sVC_scaleFactor (&iedModel_B1EBK_DEEV1_AMin_sVC_scaleFactor)
#define IEDMODEL_B1EBK_DEEV1_AMin_sVC_offset (&iedModel_B1EBK_DEEV1_AMin_sVC_offset)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt (&iedModel_B1EBK_DEEV1_EnAmnt)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt_setMag (&iedModel_B1EBK_DEEV1_EnAmnt_setMag)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt_setMag_f (&iedModel_B1EBK_DEEV1_EnAmnt_setMag_f)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt_sVC (&iedModel_B1EBK_DEEV1_EnAmnt_sVC)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor (&iedModel_B1EBK_DEEV1_EnAmnt_sVC_scaleFactor)
#define IEDMODEL_B1EBK_DEEV1_EnAmnt_sVC_offset (&iedModel_B1EBK_DEEV1_EnAmnt_sVC_offset)
 

/* --- Defines ISAF1 --- */
#define IEDMODEL_B1EBK_ISAF1 (&iedModel_B1EBK_ISAF1)
#define IEDMODEL_B1EBK_ISAF1_Alm (&iedModel_B1EBK_ISAF1_Alm)
#define IEDMODEL_B1EBK_ISAF1_Alm_stVal (&iedModel_B1EBK_ISAF1_Alm_stVal)
#define IEDMODEL_B1EBK_ISAF1_Alm_q (&iedModel_B1EBK_ISAF1_Alm_q)
#define IEDMODEL_B1EBK_ISAF1_Alm_t (&iedModel_B1EBK_ISAF1_Alm_t)
#define IEDMODEL_B1EBK_ISAF1_Beh (&iedModel_B1EBK_ISAF1_Beh)
#define IEDMODEL_B1EBK_ISAF1_Beh_stVal (&iedModel_B1EBK_ISAF1_Beh_stVal)
#define IEDMODEL_B1EBK_ISAF1_Beh_q (&iedModel_B1EBK_ISAF1_Beh_q)
#define IEDMODEL_B1EBK_ISAF1_Beh_t (&iedModel_B1EBK_ISAF1_Beh_t)
#define IEDMODEL_B1EBK_ISAF1_Health (&iedModel_B1EBK_ISAF1_Health)
#define IEDMODEL_B1EBK_ISAF1_Health_stVal (&iedModel_B1EBK_ISAF1_Health_stVal)
#define IEDMODEL_B1EBK_ISAF1_Health_q (&iedModel_B1EBK_ISAF1_Health_q)
#define IEDMODEL_B1EBK_ISAF1_Health_t (&iedModel_B1EBK_ISAF1_Health_t)

/* --- Defines ALMXSWI1 --- */
#define IEDMODEL_B1EBK_ALMXSWI1 (&iedModel_B1EBK_ALMXSWI1)
#define IEDMODEL_B1EBK_ALMXSWI1_SwTyp (&iedModel_B1EBK_ALMXSWI1_SwTyp)
#define IEDMODEL_B1EBK_ALMXSWI1_SwTyp_stVal (&iedModel_B1EBK_ALMXSWI1_SwTyp_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_SwTyp_q (&iedModel_B1EBK_ALMXSWI1_SwTyp_q)
#define IEDMODEL_B1EBK_ALMXSWI1_SwTyp_t (&iedModel_B1EBK_ALMXSWI1_SwTyp_t)
#define IEDMODEL_B1EBK_ALMXSWI1_Loc (&iedModel_B1EBK_ALMXSWI1_Loc)
#define IEDMODEL_B1EBK_ALMXSWI1_Loc_stVal (&iedModel_B1EBK_ALMXSWI1_Loc_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_Loc_q (&iedModel_B1EBK_ALMXSWI1_Loc_q)
#define IEDMODEL_B1EBK_ALMXSWI1_Loc_t (&iedModel_B1EBK_ALMXSWI1_Loc_t)
#define IEDMODEL_B1EBK_ALMXSWI1_OpCnt (&iedModel_B1EBK_ALMXSWI1_OpCnt)
#define IEDMODEL_B1EBK_ALMXSWI1_OpCnt_stVal (&iedModel_B1EBK_ALMXSWI1_OpCnt_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_OpCnt_q (&iedModel_B1EBK_ALMXSWI1_OpCnt_q)
#define IEDMODEL_B1EBK_ALMXSWI1_OpCnt_t (&iedModel_B1EBK_ALMXSWI1_OpCnt_t)
#define IEDMODEL_B1EBK_ALMXSWI1_Beh (&iedModel_B1EBK_ALMXSWI1_Beh)
#define IEDMODEL_B1EBK_ALMXSWI1_Beh_stVal (&iedModel_B1EBK_ALMXSWI1_Beh_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_Beh_q (&iedModel_B1EBK_ALMXSWI1_Beh_q)
#define IEDMODEL_B1EBK_ALMXSWI1_Beh_t (&iedModel_B1EBK_ALMXSWI1_Beh_t)
#define IEDMODEL_B1EBK_ALMXSWI1_Health (&iedModel_B1EBK_ALMXSWI1_Health)
#define IEDMODEL_B1EBK_ALMXSWI1_Health_stVal (&iedModel_B1EBK_ALMXSWI1_Health_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_Health_q (&iedModel_B1EBK_ALMXSWI1_Health_q)
#define IEDMODEL_B1EBK_ALMXSWI1_Health_t (&iedModel_B1EBK_ALMXSWI1_Health_t)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos (&iedModel_B1EBK_ALMXSWI1_Pos)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_Oper (&iedModel_B1EBK_ALMXSWI1_Pos_Oper)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_Oper_ctlVal (&iedModel_B1EBK_ALMXSWI1_Pos_Oper_ctlVal)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_stVal (&iedModel_B1EBK_ALMXSWI1_Pos_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_q (&iedModel_B1EBK_ALMXSWI1_Pos_q)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_t (&iedModel_B1EBK_ALMXSWI1_Pos_t)
#define IEDMODEL_B1EBK_ALMXSWI1_Pos_ctlModel (&iedModel_B1EBK_ALMXSWI1_Pos_ctlModel)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn (&iedModel_B1EBK_ALMXSWI1_BlkOpn)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_Oper (&iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal (&iedModel_B1EBK_ALMXSWI1_BlkOpn_Oper_ctlVal)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_stVal (&iedModel_B1EBK_ALMXSWI1_BlkOpn_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_q (&iedModel_B1EBK_ALMXSWI1_BlkOpn_q)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_t (&iedModel_B1EBK_ALMXSWI1_BlkOpn_t)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkOpn_ctlModel (&iedModel_B1EBK_ALMXSWI1_BlkOpn_ctlModel)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls (&iedModel_B1EBK_ALMXSWI1_BlkCls)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_Oper (&iedModel_B1EBK_ALMXSWI1_BlkCls_Oper)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal (&iedModel_B1EBK_ALMXSWI1_BlkCls_Oper_ctlVal)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_stVal (&iedModel_B1EBK_ALMXSWI1_BlkCls_stVal)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_q (&iedModel_B1EBK_ALMXSWI1_BlkCls_q)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_t (&iedModel_B1EBK_ALMXSWI1_BlkCls_t)
#define IEDMODEL_B1EBK_ALMXSWI1_BlkCls_ctlModel (&iedModel_B1EBK_ALMXSWI1_BlkCls_ctlModel)

 /* --- Defines LANTXSWI1 --- */
#define IEDMODEL_B1EBK_LANTXSWI1 (&iedModel_B1EBK_LANTXSWI1)
#define IEDMODEL_B1EBK_LANTXSWI1_SwTyp (&iedModel_B1EBK_LANTXSWI1_SwTyp)
#define IEDMODEL_B1EBK_LANTXSWI1_SwTyp_stVal (&iedModel_B1EBK_LANTXSWI1_SwTyp_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_SwTyp_q (&iedModel_B1EBK_LANTXSWI1_SwTyp_q)
#define IEDMODEL_B1EBK_LANTXSWI1_SwTyp_t (&iedModel_B1EBK_LANTXSWI1_SwTyp_t)
#define IEDMODEL_B1EBK_LANTXSWI1_Loc (&iedModel_B1EBK_LANTXSWI1_Loc)
#define IEDMODEL_B1EBK_LANTXSWI1_Loc_stVal (&iedModel_B1EBK_LANTXSWI1_Loc_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_Loc_q (&iedModel_B1EBK_LANTXSWI1_Loc_q)
#define IEDMODEL_B1EBK_LANTXSWI1_Loc_t (&iedModel_B1EBK_LANTXSWI1_Loc_t)
#define IEDMODEL_B1EBK_LANTXSWI1_OpCnt (&iedModel_B1EBK_LANTXSWI1_OpCnt)
#define IEDMODEL_B1EBK_LANTXSWI1_OpCnt_stVal (&iedModel_B1EBK_LANTXSWI1_OpCnt_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_OpCnt_q (&iedModel_B1EBK_LANTXSWI1_OpCnt_q)
#define IEDMODEL_B1EBK_LANTXSWI1_OpCnt_t (&iedModel_B1EBK_LANTXSWI1_OpCnt_t)
#define IEDMODEL_B1EBK_LANTXSWI1_Beh (&iedModel_B1EBK_LANTXSWI1_Beh)
#define IEDMODEL_B1EBK_LANTXSWI1_Beh_stVal (&iedModel_B1EBK_LANTXSWI1_Beh_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_Beh_q (&iedModel_B1EBK_LANTXSWI1_Beh_q)
#define IEDMODEL_B1EBK_LANTXSWI1_Beh_t (&iedModel_B1EBK_LANTXSWI1_Beh_t)
#define IEDMODEL_B1EBK_LANTXSWI1_Health (&iedModel_B1EBK_LANTXSWI1_Health)
#define IEDMODEL_B1EBK_LANTXSWI1_Health_stVal (&iedModel_B1EBK_LANTXSWI1_Health_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_Health_q (&iedModel_B1EBK_LANTXSWI1_Health_q)
#define IEDMODEL_B1EBK_LANTXSWI1_Health_t (&iedModel_B1EBK_LANTXSWI1_Health_t)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos (&iedModel_B1EBK_LANTXSWI1_Pos)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_Oper (&iedModel_B1EBK_LANTXSWI1_Pos_Oper)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_Oper_ctlVal (&iedModel_B1EBK_LANTXSWI1_Pos_Oper_ctlVal)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_stVal (&iedModel_B1EBK_LANTXSWI1_Pos_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_q (&iedModel_B1EBK_LANTXSWI1_Pos_q)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_t (&iedModel_B1EBK_LANTXSWI1_Pos_t)
#define IEDMODEL_B1EBK_LANTXSWI1_Pos_ctlModel (&iedModel_B1EBK_LANTXSWI1_Pos_ctlModel)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn (&iedModel_B1EBK_LANTXSWI1_BlkOpn)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_Oper (&iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal (&iedModel_B1EBK_LANTXSWI1_BlkOpn_Oper_ctlVal)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_stVal (&iedModel_B1EBK_LANTXSWI1_BlkOpn_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_q (&iedModel_B1EBK_LANTXSWI1_BlkOpn_q)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_t (&iedModel_B1EBK_LANTXSWI1_BlkOpn_t)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkOpn_ctlModel (&iedModel_B1EBK_LANTXSWI1_BlkOpn_ctlModel)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls (&iedModel_B1EBK_LANTXSWI1_BlkCls)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_Oper (&iedModel_B1EBK_LANTXSWI1_BlkCls_Oper)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal (&iedModel_B1EBK_LANTXSWI1_BlkCls_Oper_ctlVal)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_stVal (&iedModel_B1EBK_LANTXSWI1_BlkCls_stVal)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_q (&iedModel_B1EBK_LANTXSWI1_BlkCls_q)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_t (&iedModel_B1EBK_LANTXSWI1_BlkCls_t)
#define IEDMODEL_B1EBK_LANTXSWI1_BlkCls_ctlModel (&iedModel_B1EBK_LANTXSWI1_BlkCls_ctlModel)

 /* --- Defines LANTXSWI1 --- */
#define IEDMODEL_B1EBK_MOTXSWI1 (&iedModel_B1EBK_MOTXSWI1)
#define IEDMODEL_B1EBK_MOTXSWI1_SwTyp_stVal (&iedModel_B1EBK_MOTXSWI1_SwTyp_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_Loc_stVal (&iedModel_B1EBK_MOTXSWI1_Loc_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_OpCnt_stVal (&iedModel_B1EBK_MOTXSWI1_OpCnt_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_Pos (&iedModel_B1EBK_MOTXSWI1_Pos)
#define IEDMODEL_B1EBK_MOTXSWI1_Pos_stVal (&iedModel_B1EBK_MOTXSWI1_Pos_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_Pos_t (&iedModel_B1EBK_MOTXSWI1_Pos_t)
#define IEDMODEL_B1EBK_MOTXSWI1_Pos_ctlModel (&iedModel_B1EBK_MOTXSWI1_Pos_ctlModel)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkOpn (&iedModel_B1EBK_MOTXSWI1_BlkOpn)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkOpn_stVal (&iedModel_B1EBK_MOTXSWI1_BlkOpn_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkOpn_t (&iedModel_B1EBK_MOTXSWI1_BlkOpn_t)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkCls (&iedModel_B1EBK_MOTXSWI1_BlkCls)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkCls_stVal (&iedModel_B1EBK_MOTXSWI1_BlkCls_stVal)
#define IEDMODEL_B1EBK_MOTXSWI1_BlkCls_t (&iedModel_B1EBK_MOTXSWI1_BlkCls_t)

/* --- Defines TMVM1 --- */
#define IEDMODEL_B1EBK_TMVM1 (&iedModel_B1EBK_TMVM1)
#define IEDMODEL_B1EBK_TMVM1_EEHealth (&iedModel_B1EBK_TMVM1_EEHealth)
#define IEDMODEL_B1EBK_TMVM1_EEHealth_stVal (&iedModel_B1EBK_TMVM1_EEHealth_stVal)
#define IEDMODEL_B1EBK_TMVM1_EEHealth_q (&iedModel_B1EBK_TMVM1_EEHealth_q)
#define IEDMODEL_B1EBK_TMVM1_EEHealth_t (&iedModel_B1EBK_TMVM1_EEHealth_t)
#define IEDMODEL_B1EBK_TMVM1_Beh (&iedModel_B1EBK_TMVM1_Beh)
#define IEDMODEL_B1EBK_TMVM1_Beh_stVal (&iedModel_B1EBK_TMVM1_Beh_stVal)
#define IEDMODEL_B1EBK_TMVM1_Beh_q (&iedModel_B1EBK_TMVM1_Beh_q)
#define IEDMODEL_B1EBK_TMVM1_Beh_t (&iedModel_B1EBK_TMVM1_Beh_t)
#define IEDMODEL_B1EBK_TMVM1_Health (&iedModel_B1EBK_TMVM1_Health)
#define IEDMODEL_B1EBK_TMVM1_Health_stVal (&iedModel_B1EBK_TMVM1_Health_stVal)
#define IEDMODEL_B1EBK_TMVM1_Health_q (&iedModel_B1EBK_TMVM1_Health_q)
#define IEDMODEL_B1EBK_TMVM1_Health_t (&iedModel_B1EBK_TMVM1_Health_t)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv (&iedModel_B1EBK_TMVM1_MvmRteSv)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_instMag (&iedModel_B1EBK_TMVM1_MvmRteSv_instMag)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_instMag_f (&iedModel_B1EBK_TMVM1_MvmRteSv_instMag_f)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_q (&iedModel_B1EBK_TMVM1_MvmRteSv_q)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_t (&iedModel_B1EBK_TMVM1_MvmRteSv_t)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_units (&iedModel_B1EBK_TMVM1_MvmRteSv_units)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_units_SIUnit (&iedModel_B1EBK_TMVM1_MvmRteSv_units_SIUnit)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_units_multiplier (&iedModel_B1EBK_TMVM1_MvmRteSv_units_multiplier)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_sVC (&iedModel_B1EBK_TMVM1_MvmRteSv_sVC)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor (&iedModel_B1EBK_TMVM1_MvmRteSv_sVC_scaleFactor)
#define IEDMODEL_B1EBK_TMVM1_MvmRteSv_sVC_offset (&iedModel_B1EBK_TMVM1_MvmRteSv_sVC_offset)

/* --- Defines ZMOT1 --- */
#define IEDMODEL_B1EBK_ZMOT1 (&iedModel_B1EBK_ZMOT1)
#define IEDMODEL_B1EBK_ZMOT1_EEName (&iedModel_B1EBK_ZMOT1_EEName)
#define IEDMODEL_B1EBK_ZMOT1_EEName_vendor (&iedModel_B1EBK_ZMOT1_EEName_vendor)
#define IEDMODEL_B1EBK_ZMOT1_EEName_model (&iedModel_B1EBK_ZMOT1_EEName_model)
#define IEDMODEL_B1EBK_ZMOT1_RotThmSt (&iedModel_B1EBK_ZMOT1_RotThmSt)
#define IEDMODEL_B1EBK_ZMOT1_RotThmSt_stVal (&iedModel_B1EBK_ZMOT1_RotThmSt_stVal)
#define IEDMODEL_B1EBK_ZMOT1_RotThmSt_q (&iedModel_B1EBK_ZMOT1_RotThmSt_q)
#define IEDMODEL_B1EBK_ZMOT1_RotThmSt_t (&iedModel_B1EBK_ZMOT1_RotThmSt_t)
#define IEDMODEL_B1EBK_ZMOT1_PresAlm (&iedModel_B1EBK_ZMOT1_PresAlm)
#define IEDMODEL_B1EBK_ZMOT1_PresAlm_stVal (&iedModel_B1EBK_ZMOT1_PresAlm_stVal)
#define IEDMODEL_B1EBK_ZMOT1_PresAlm_q (&iedModel_B1EBK_ZMOT1_PresAlm_q)
#define IEDMODEL_B1EBK_ZMOT1_PresAlm_t (&iedModel_B1EBK_ZMOT1_PresAlm_t)
#define IEDMODEL_B1EBK_ZMOT1_EEHealth (&iedModel_B1EBK_ZMOT1_EEHealth)
#define IEDMODEL_B1EBK_ZMOT1_EEHealth_stVal (&iedModel_B1EBK_ZMOT1_EEHealth_stVal)
#define IEDMODEL_B1EBK_ZMOT1_EEHealth_q (&iedModel_B1EBK_ZMOT1_EEHealth_q)
#define IEDMODEL_B1EBK_ZMOT1_EEHealth_t (&iedModel_B1EBK_ZMOT1_EEHealth_t)
#define IEDMODEL_B1EBK_ZMOT1_MotSt (&iedModel_B1EBK_ZMOT1_MotSt)
#define IEDMODEL_B1EBK_ZMOT1_MotSt_stVal (&iedModel_B1EBK_ZMOT1_MotSt_stVal)
#define IEDMODEL_B1EBK_ZMOT1_MotSt_q (&iedModel_B1EBK_ZMOT1_MotSt_q)
#define IEDMODEL_B1EBK_ZMOT1_MotSt_t (&iedModel_B1EBK_ZMOT1_MotSt_t)
#define IEDMODEL_B1EBK_ZMOT1_NamPlt (&iedModel_B1EBK_MMXU1_NamPlt)
#define IEDMODEL_B1EBK_ZMOT1_NamPlt_vendor (&iedModel_B1EBK_MMXU1_NamPlt_vendor)

/* --- Defines MMXU1 --- */
#define IEDMODEL_B1EBK_MMXU1 (&iedModel_B1EBK_MMXU1)
#define IEDMODEL_B1EBK_MMXU1_NamPlt (&iedModel_B1EBK_MMXU1_NamPlt)
#define IEDMODEL_B1EBK_MMXU1_NamPlt_vendor (&iedModel_B1EBK_MMXU1_NamPlt_vendor)
#define IEDMODEL_B1EBK_MMXU1_NamPlt_swRev (&iedModel_B1EBK_MMXU1_NamPlt_swRev)
#define IEDMODEL_B1EBK_MMXU1_NamPlt_lnNs (&iedModel_B1EBK_MMXU1_NamPlt_lnNs)
#define IEDMODEL_B1EBK_MMXU1_Beh (&iedModel_B1EBK_MMXU1_Beh)
#define IEDMODEL_B1EBK_MMXU1_Beh_stVal (&iedModel_B1EBK_MMXU1_Beh_stVal)
#define IEDMODEL_B1EBK_MMXU1_Beh_q (&iedModel_B1EBK_MMXU1_Beh_q)
#define IEDMODEL_B1EBK_MMXU1_Beh_t (&iedModel_B1EBK_MMXU1_Beh_t)
#define IEDMODEL_B1EBK_MMXU1_Health (&iedModel_B1EBK_MMXU1_Health)
#define IEDMODEL_B1EBK_MMXU1_Health_stVal (&iedModel_B1EBK_MMXU1_Health_stVal)
#define IEDMODEL_B1EBK_MMXU1_Health_q (&iedModel_B1EBK_MMXU1_Health_q)
#define IEDMODEL_B1EBK_MMXU1_Health_t (&iedModel_B1EBK_MMXU1_Health_t)
#define IEDMODEL_B1EBK_MMXU1_TotW (&iedModel_B1EBK_MMXU1_TotW)
#define IEDMODEL_B1EBK_MMXU1_TotW_mag (&iedModel_B1EBK_MMXU1_TotW_mag)
#define IEDMODEL_B1EBK_MMXU1_TotW_mag_f (&iedModel_B1EBK_MMXU1_TotW_mag_f)
#define IEDMODEL_B1EBK_MMXU1_TotW_q (&iedModel_B1EBK_MMXU1_TotW_q)
#define IEDMODEL_B1EBK_MMXU1_TotW_t (&iedModel_B1EBK_MMXU1_TotW_t)
#define IEDMODEL_B1EBK_MMXU1_TotW_db (&iedModel_B1EBK_MMXU1_TotW_db)

/* --- Defines TLOC1 --- */
#define IEDMODEL_B1EBK_TLOC1 (&iedModel_B1EBK_TLOC1)
#define IEDMODEL_B1EBK_TLOC1_DistTot (&iedModel_B1EBK_TLOC1_DistTot)
#define IEDMODEL_B1EBK_TLOC1_DistTot_mag_f (&iedModel_B1EBK_TLOC1_DistTot_mag_f)
#define IEDMODEL_B1EBK_TLOC1_DistTot_q (&iedModel_B1EBK_TLOC1_DistTot_q)
#define IEDMODEL_B1EBK_TLOC1_DistTot_t (&iedModel_B1EBK_TLOC1_DistTot_t)
#define IEDMODEL_B1EBK_TLOC1_DistSess (&iedModel_B1EBK_TLOC1_DistSess)
#define IEDMODEL_B1EBK_TLOC1_DistSess_mag_f (&iedModel_B1EBK_TLOC1_DistSess_mag_f)
#define IEDMODEL_B1EBK_TLOC1_DistSess_q (&iedModel_B1EBK_TLOC1_DistSess_q)
#define IEDMODEL_B1EBK_TLOC1_DistSess_t (&iedModel_B1EBK_TLOC1_DistSess_t)
#define IEDMODEL_B1EBK_TLOC1_NavFai (&iedModel_B1EBK_TLOC1_NavFai)
#define IEDMODEL_B1EBK_TLOC1_NavFai_stVal (&iedModel_B1EBK_TLOC1_NavFai_stVal)
#define IEDMODEL_B1EBK_TLOC1_NavFai_q (&iedModel_B1EBK_TLOC1_NavFai_q)
#define IEDMODEL_B1EBK_TLOC1_NavFai_t (&iedModel_B1EBK_TLOC1_NavFai_t)
#define IEDMODEL_B1EBK_TLOC1_SatAvl (&iedModel_B1EBK_TLOC1_SatAvl)
#define IEDMODEL_B1EBK_TLOC1_SatAvl_stVal (&iedModel_B1EBK_TLOC1_SatAvl_stVal)
#define IEDMODEL_B1EBK_TLOC1_SatAvl_q (&iedModel_B1EBK_TLOC1_SatAvl_q)
#define IEDMODEL_B1EBK_TLOC1_SatAvl_t (&iedModel_B1EBK_TLOC1_SatAvl_t)
#define IEDMODEL_B1EBK_TLOC1_LocPrec (&iedModel_B1EBK_TLOC1_LocPrec)
#define IEDMODEL_B1EBK_TLOC1_LocPrec_stVal (&iedModel_B1EBK_TLOC1_LocPrec_stVal)
#define IEDMODEL_B1EBK_TLOC1_LocPrec_q (&iedModel_B1EBK_TLOC1_LocPrec_q)
#define IEDMODEL_B1EBK_TLOC1_LocPrec_t (&iedModel_B1EBK_TLOC1_LocPrec_t)
#define IEDMODEL_B1EBK_TLOC1_LocDist (&iedModel_B1EBK_TLOC1_LocDist)
#define IEDMODEL_B1EBK_TLOC1_LocDist_instMag (&iedModel_B1EBK_TLOC1_LocDist_instMag)
#define IEDMODEL_B1EBK_TLOC1_LocDist_instMag_f (&iedModel_B1EBK_TLOC1_LocDist_instMag_f)
#define IEDMODEL_B1EBK_TLOC1_LocDist_mag (&iedModel_B1EBK_TLOC1_LocDist_mag)
#define IEDMODEL_B1EBK_TLOC1_LocDist_mag_f (&iedModel_B1EBK_TLOC1_LocDist_mag_f)
#define IEDMODEL_B1EBK_TLOC1_LocDist_q (&iedModel_B1EBK_TLOC1_LocDist_q)
#define IEDMODEL_B1EBK_TLOC1_LocDist_t (&iedModel_B1EBK_TLOC1_LocDist_t)
#define IEDMODEL_B1EBK_TLOC1_AutDis (&iedModel_B1EBK_TLOC1_AutDis)
#define IEDMODEL_B1EBK_TLOC1_AutDis_stVal (&iedModel_B1EBK_TLOC1_AutDis_stVal)
#define IEDMODEL_B1EBK_TLOC1_AutDis_q (&iedModel_B1EBK_TLOC1_AutDis_q)
#define IEDMODEL_B1EBK_TLOC1_AutDis_t (&iedModel_B1EBK_TLOC1_AutDis_t)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc (&iedModel_B1EBK_TLOC1_GeoLoc)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc_latitude (&iedModel_B1EBK_TLOC1_GeoLoc_latitude)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc_longitude (&iedModel_B1EBK_TLOC1_GeoLoc_longitude)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc_general (&iedModel_B1EBK_TLOC1_GeoLoc_general)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc_q (&iedModel_B1EBK_TLOC1_GeoLoc_q)
#define IEDMODEL_B1EBK_TLOC1_GeoLoc_t (&iedModel_B1EBK_TLOC1_GeoLoc_t)

#endif /* STATIC_MODEL_H_ */