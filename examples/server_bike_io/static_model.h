#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_BIKE;

/* LNs */
extern LogicalNode iedModel_BIKE_LLN0;
extern LogicalNode iedModel_BIKE_LPHD1;
extern LogicalNode iedModel_BIKE_DEEV1;
extern LogicalNode iedModel_BIKE_ISAF1;
extern LogicalNode iedModel_BIKE_XSWI1;
extern LogicalNode iedModel_BIKE_TMVM1;
extern LogicalNode iedModel_BIKE_ZMOT1;
extern LogicalNode iedModel_BIKE_MMXU1;
extern LogicalNode iedModel_BIKE_DLOC1;

/* LLN0 Data Objects and Attributes */
extern DataObject iedModel_BIKE_LLN0_Mod;
extern DataAttribute iedModel_BIKE_LLN0_Mod_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Mod_q;
extern DataAttribute iedModel_BIKE_LLN0_Mod_t;
extern DataAttribute iedModel_BIKE_LLN0_Mod_ctlModel;
extern DataObject iedModel_BIKE_LLN0_Beh;
extern DataAttribute iedModel_BIKE_LLN0_Beh_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Beh_q;
extern DataAttribute iedModel_BIKE_LLN0_Beh_t;
extern DataObject iedModel_BIKE_LLN0_Health;
extern DataAttribute iedModel_BIKE_LLN0_Health_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Health_q;
extern DataAttribute iedModel_BIKE_LLN0_Health_t;
extern DataObject iedModel_BIKE_LLN0_NamPlt;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_d;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_configRev;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_ldNs;
extern DataObject iedModel_BIKE_LLN0_Diag;
extern DataAttribute iedModel_BIKE_LLN0_Diag_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Diag_q;
extern DataAttribute iedModel_BIKE_LLN0_Diag_t;
extern DataObject iedModel_BIKE_LLN0_LEDRs;
extern DataAttribute iedModel_BIKE_LLN0_LEDRs_stVal;
extern DataAttribute iedModel_BIKE_LLN0_LEDRs_q;
extern DataAttribute iedModel_BIKE_LLN0_LEDRs_t;

/* ==================================================================
 * LPHD1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_LPHD1_PhyNam;
extern DataAttribute iedModel_BIKE_LPHD1_PhyNam_vendor;
extern DataObject iedModel_BIKE_LPHD1_PhyHealth;
extern DataAttribute iedModel_BIKE_LPHD1_PhyHealth_stVal;
extern DataAttribute iedModel_BIKE_LPHD1_PhyHealth_q;
extern DataAttribute iedModel_BIKE_LPHD1_PhyHealth_t;
extern DataObject iedModel_BIKE_LPHD1_NamPlt;
extern DataAttribute iedModel_BIKE_LPHD1_NamPlt_vendor;
extern DataAttribute iedModel_BIKE_LPHD1_NamPlt_swRev;
extern DataAttribute iedModel_BIKE_LPHD1_NamPlt_ldNs;

/* ==================================================================
 * DEEV1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_DEEV1_EVNam;
extern DataAttribute iedModel_BIKE_DEEV1_EVNam_vendor;
extern DataObject iedModel_BIKE_DEEV1_NamPlt;
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_vendor;
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_swRev;
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_d;
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_configRev;
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_lnNs;
extern DataObject iedModel_BIKE_DEEV1_ConnTypSel;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_q;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_t;
extern DataObject iedModel_BIKE_DEEV1_Beh;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_q;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_t;
extern DataObject iedModel_BIKE_DEEV1_Health;
extern DataAttribute iedModel_BIKE_DEEV1_Health_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_Health_q;
extern DataAttribute iedModel_BIKE_DEEV1_Health_t;
extern DataObject iedModel_BIKE_DEEV1_Soc;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_mag;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_mag_f;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_q;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_t;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_subEna;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_subMag;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_subMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_subQ;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_subID;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_blkEna;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_db;
extern DataObject iedModel_BIKE_DEEV1_EVId;
extern DataAttribute iedModel_BIKE_DEEV1_EVId_setVal;
extern DataObject iedModel_BIKE_DEEV1_DptTm;
extern DataAttribute iedModel_BIKE_DEEV1_DptTm_setTm;
extern DataObject iedModel_BIKE_DEEV1_VMax;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC; /* CORRIGIDO: Agora é Atributo */
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_offset;
extern DataObject iedModel_BIKE_DEEV1_AMax;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC; /* CORRIGIDO: Agora é Atributo */
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_offset;
extern DataObject iedModel_BIKE_DEEV1_AMin;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC; /* CORRIGIDO: Agora é Atributo */
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_offset;
extern DataObject iedModel_BIKE_DEEV1_EnAmnt;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC; /* CORRIGIDO: Agora é Atributo */
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_offset;

/* ==================================================================
 * ISAF1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_ISAF1_Alm;
extern DataAttribute iedModel_BIKE_ISAF1_Alm_stVal;
extern DataAttribute iedModel_BIKE_ISAF1_Alm_q;
extern DataAttribute iedModel_BIKE_ISAF1_Alm_t;
extern DataObject iedModel_BIKE_ISAF1_Beh;
extern DataAttribute iedModel_BIKE_ISAF1_Beh_stVal;
extern DataAttribute iedModel_BIKE_ISAF1_Beh_q;
extern DataAttribute iedModel_BIKE_ISAF1_Beh_t;
extern DataObject iedModel_BIKE_ISAF1_Health;
extern DataAttribute iedModel_BIKE_ISAF1_Health_stVal;
extern DataAttribute iedModel_BIKE_ISAF1_Health_q;
extern DataAttribute iedModel_BIKE_ISAF1_Health_t;

/* ==================================================================
 * XSWI1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_XSWI1_SwTyp;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_q;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_t;
extern DataObject iedModel_BIKE_XSWI1_Loc;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_q;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_t;
extern DataObject iedModel_BIKE_XSWI1_OpCnt;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_q;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_t;
extern DataObject iedModel_BIKE_XSWI1_Beh;
extern DataAttribute iedModel_BIKE_XSWI1_Beh_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_Beh_q;
extern DataAttribute iedModel_BIKE_XSWI1_Beh_t;
extern DataObject iedModel_BIKE_XSWI1_Health;
extern DataAttribute iedModel_BIKE_XSWI1_Health_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_Health_q;
extern DataAttribute iedModel_BIKE_XSWI1_Health_t;
extern DataObject iedModel_BIKE_XSWI1_Pos;
extern DataAttribute iedModel_BIKE_XSWI1_Pos_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_Pos_q;
extern DataAttribute iedModel_BIKE_XSWI1_Pos_t;
extern DataAttribute iedModel_BIKE_XSWI1_Pos_ctlModel;
extern DataObject iedModel_BIKE_XSWI1_BlkOpn;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_q;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_t;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlModel;
extern DataObject iedModel_BIKE_XSWI1_BlkCls;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_q;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_t;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlModel;

/* ==================================================================
 * TMVM1
 * ==================================================================
 */
extern DataObject iedModel_BIKE_TMVM1_EEHealth;
extern DataAttribute iedModel_BIKE_TMVM1_EEHealth_stVal;
extern DataAttribute iedModel_BIKE_TMVM1_EEHealth_q;
extern DataAttribute iedModel_BIKE_TMVM1_EEHealth_t;
extern DataObject iedModel_BIKE_TMVM1_Beh;
extern DataAttribute iedModel_BIKE_TMVM1_Beh_stVal;
extern DataAttribute iedModel_BIKE_TMVM1_Beh_q;
extern DataAttribute iedModel_BIKE_TMVM1_Beh_t;
extern DataObject iedModel_BIKE_TMVM1_Health;
extern DataAttribute iedModel_BIKE_TMVM1_Health_stVal;
extern DataAttribute iedModel_BIKE_TMVM1_Health_q;
extern DataAttribute iedModel_BIKE_TMVM1_Health_t;
extern DataObject iedModel_BIKE_TMVM1_MvmRteSv;
extern DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_setMag;
extern DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_setMag_f;
extern DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC;
extern DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_TMVM1_MvmRteSv_sVC_offset;

/* ==================================================================
 * ZMOT1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_ZMOT1_EEName;
extern DataAttribute iedModel_BIKE_ZMOT1_EEName_stVal;
extern DataAttribute iedModel_BIKE_ZMOT1_EEName_q;
extern DataAttribute iedModel_BIKE_ZMOT1_EEName_t;
extern DataObject iedModel_BIKE_ZMOT1_RotThmSt;
extern DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_stVal;
extern DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_q;
extern DataAttribute iedModel_BIKE_ZMOT1_RotThmSt_t;
extern DataObject iedModel_BIKE_ZMOT1_PresAlm;
extern DataAttribute iedModel_BIKE_ZMOT1_PresAlm_stVal;
extern DataAttribute iedModel_BIKE_ZMOT1_PresAlm_q;
extern DataAttribute iedModel_BIKE_ZMOT1_PresAlm_t;
extern DataObject iedModel_BIKE_ZMOT1_EEHealth;
extern DataAttribute iedModel_BIKE_ZMOT1_EEHealth_stVal;
extern DataAttribute iedModel_BIKE_ZMOT1_EEHealth_q;
extern DataAttribute iedModel_BIKE_ZMOT1_EEHealth_t;

/* ==================================================================
 * MMXU1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_MMXU1_NamPlt;
extern DataAttribute iedModel_BIKE_MMXU1_NamPlt_vendor;
extern DataAttribute iedModel_BIKE_MMXU1_NamPlt_swRev;
extern DataAttribute iedModel_BIKE_MMXU1_NamPlt_lnNs;
extern DataObject iedModel_BIKE_MMXU1_Beh;
extern DataAttribute iedModel_BIKE_MMXU1_Beh_stVal;
extern DataAttribute iedModel_BIKE_MMXU1_Beh_q;
extern DataAttribute iedModel_BIKE_MMXU1_Beh_t;
extern DataObject iedModel_BIKE_MMXU1_Health;
extern DataAttribute iedModel_BIKE_MMXU1_Health_stVal;
extern DataAttribute iedModel_BIKE_MMXU1_Health_q;
extern DataAttribute iedModel_BIKE_MMXU1_Health_t;
extern DataObject iedModel_BIKE_MMXU1_TotW;
extern DataAttribute iedModel_BIKE_MMXU1_TotW_mag;
extern DataAttribute iedModel_BIKE_MMXU1_TotW_mag_f;
extern DataAttribute iedModel_BIKE_MMXU1_TotW_q;
extern DataAttribute iedModel_BIKE_MMXU1_TotW_t;
extern DataAttribute iedModel_BIKE_MMXU1_TotW_db;

/* ==================================================================
 * DLOC1
 * ==================================================================
 */

extern DataObject iedModel_BIKE_DLOC1_EVDistTot;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistTot_mag;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistTot_mag_f;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistTot_q;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistTot_t;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistTot_db;
extern DataObject iedModel_BIKE_DLOC1_EVDistSess;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistSess_mag;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistSess_mag_f;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistSess_q;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistSess_t;
extern DataAttribute iedModel_BIKE_DLOC1_EVDistSess_db;
extern DataObject iedModel_BIKE_DLOC1_VocOri;
extern DataAttribute iedModel_BIKE_DLOC1_VocOri_stVal;
extern DataAttribute iedModel_BIKE_DLOC1_VocOri_q;
extern DataAttribute iedModel_BIKE_DLOC1_VocOri_t;
extern DataObject iedModel_BIKE_DLOC1_NavFai;
extern DataAttribute iedModel_BIKE_DLOC1_NavFai_stVal;
extern DataAttribute iedModel_BIKE_DLOC1_NavFai_q;
extern DataAttribute iedModel_BIKE_DLOC1_NavFai_t;
extern DataObject iedModel_BIKE_DLOC1_SatAvl;
extern DataAttribute iedModel_BIKE_DLOC1_SatAvl_stVal;
extern DataAttribute iedModel_BIKE_DLOC1_SatAvl_q;
extern DataAttribute iedModel_BIKE_DLOC1_SatAvl_t;
extern DataObject iedModel_BIKE_DLOC1_LocPrec;
extern DataAttribute iedModel_BIKE_DLOC1_LocPrec_stVal;
extern DataAttribute iedModel_BIKE_DLOC1_LocPrec_q;
extern DataAttribute iedModel_BIKE_DLOC1_LocPrec_t;
extern DataObject iedModel_BIKE_DLOC1_LocDist;
extern DataAttribute iedModel_BIKE_DLOC1_LocDist_mag;
extern DataAttribute iedModel_BIKE_DLOC1_LocDist_mag_f;
extern DataAttribute iedModel_BIKE_DLOC1_LocDist_q;
extern DataAttribute iedModel_BIKE_DLOC1_LocDist_t;
extern DataAttribute iedModel_BIKE_DLOC1_LocDist_db;
extern DataObject iedModel_BIKE_DLOC1_LocTime;
extern DataAttribute iedModel_BIKE_DLOC1_LocTime_mag;
extern DataAttribute iedModel_BIKE_DLOC1_LocTime_mag_f;
extern DataAttribute iedModel_BIKE_DLOC1_LocTime_q;
extern DataAttribute iedModel_BIKE_DLOC1_LocTime_t;
extern DataAttribute iedModel_BIKE_DLOC1_LocTime_db;



#define IEDMODEL_BIKE (&iedModel_BIKE)

/* --- Defines LLN0 --- */
#define IEDMODEL_BIKE_LLN0 (&iedModel_BIKE_LLN0)
#define IEDMODEL_BIKE_LLN0_Mod (&iedModel_BIKE_LLN0_Mod)
#define IEDMODEL_BIKE_LLN0_Mod_stVal (&iedModel_BIKE_LLN0_Mod_stVal)
#define IEDMODEL_BIKE_LLN0_Mod_q (&iedModel_BIKE_LLN0_Mod_q)
#define IEDMODEL_BIKE_LLN0_Mod_t (&iedModel_BIKE_LLN0_Mod_t)
#define IEDMODEL_BIKE_LLN0_Mod_ctlModel (&iedModel_BIKE_LLN0_Mod_ctlModel)
#define IEDMODEL_BIKE_LLN0_Beh (&iedModel_BIKE_LLN0_Beh)
#define IEDMODEL_BIKE_LLN0_Beh_stVal (&iedModel_BIKE_LLN0_Beh_stVal)
#define IEDMODEL_BIKE_LLN0_Beh_q (&iedModel_BIKE_LLN0_Beh_q)
#define IEDMODEL_BIKE_LLN0_Beh_t (&iedModel_BIKE_LLN0_Beh_t)
#define IEDMODEL_BIKE_LLN0_Health (&iedModel_BIKE_LLN0_Health)
#define IEDMODEL_BIKE_LLN0_Health_stVal (&iedModel_BIKE_LLN0_Health_stVal)
#define IEDMODEL_BIKE_LLN0_Health_q (&iedModel_BIKE_LLN0_Health_q)
#define IEDMODEL_BIKE_LLN0_Health_t (&iedModel_BIKE_LLN0_Health_t)
#define IEDMODEL_BIKE_LLN0_NamPlt (&iedModel_BIKE_LLN0_NamPlt)
#define IEDMODEL_BIKE_LLN0_NamPlt_vendor (&iedModel_BIKE_LLN0_NamPlt_vendor)
#define IEDMODEL_BIKE_LLN0_NamPlt_swRev (&iedModel_BIKE_LLN0_NamPlt_swRev)
#define IEDMODEL_BIKE_LLN0_NamPlt_d (&iedModel_BIKE_LLN0_NamPlt_d)
#define IEDMODEL_BIKE_LLN0_NamPlt_configRev (&iedModel_BIKE_LLN0_NamPlt_configRev)
#define IEDMODEL_BIKE_LLN0_NamPlt_ldNs (&iedModel_BIKE_LLN0_NamPlt_ldNs)
#define IEDMODEL_BIKE_LLN0_Diag (&iedModel_BIKE_LLN0_Diag)
#define IEDMODEL_BIKE_LLN0_Diag_stVal (&iedModel_BIKE_LLN0_Diag_stVal)
#define IEDMODEL_BIKE_LLN0_Diag_q (&iedModel_BIKE_LLN0_Diag_q)
#define IEDMODEL_BIKE_LLN0_Diag_t (&iedModel_BIKE_LLN0_Diag_t)
#define IEDMODEL_BIKE_LLN0_LEDRs (&iedModel_BIKE_LLN0_LEDRs)
#define IEDMODEL_BIKE_LLN0_LEDRs_stVal (&iedModel_BIKE_LLN0_LEDRs_stVal)
#define IEDMODEL_BIKE_LLN0_LEDRs_q (&iedModel_BIKE_LLN0_LEDRs_q)
#define IEDMODEL_BIKE_LLN0_LEDRs_t (&iedModel_BIKE_LLN0_LEDRs_t)

/* --- Defines LPHD1 --- */
#define IEDMODEL_BIKE_LPHD1 (&iedModel_BIKE_LPHD1)
#define IEDMODEL_BIKE_LPHD1_PhyNam (&iedModel_BIKE_LPHD1_PhyNam)
#define IEDMODEL_BIKE_LPHD1_PhyNam_vendor (&iedModel_BIKE_LPHD1_PhyNam_vendor)
#define IEDMODEL_BIKE_LPHD1_PhyHealth (&iedModel_BIKE_LPHD1_PhyHealth)
#define IEDMODEL_BIKE_LPHD1_PhyHealth_stVal (&iedModel_BIKE_LPHD1_PhyHealth_stVal)
#define IEDMODEL_BIKE_LPHD1_PhyHealth_q (&iedModel_BIKE_LPHD1_PhyHealth_q)
#define IEDMODEL_BIKE_LPHD1_PhyHealth_t (&iedModel_BIKE_LPHD1_PhyHealth_t)
#define IEDMODEL_BIKE_LPHD1_NamPlt (&iedModel_BIKE_LPHD1_NamPlt)
#define IEDMODEL_BIKE_LPHD1_NamPlt_vendor (&iedModel_BIKE_LPHD1_NamPlt_vendor)
#define IEDMODEL_BIKE_LPHD1_NamPlt_swRev (&iedModel_BIKE_LPHD1_NamPlt_swRev)
#define IEDMODEL_BIKE_LPHD1_NamPlt_ldNs (&iedModel_BIKE_LPHD1_NamPlt_ldNs)

/* --- Defines DEEV1 --- */
#define IEDMODEL_BIKE_DEEV1 (&iedModel_BIKE_DEEV1)
#define IEDMODEL_BIKE_DEEV1_EVNam (&iedModel_BIKE_DEEV1_EVNam)
#define IEDMODEL_BIKE_DEEV1_EVNam_vendor (&iedModel_BIKE_DEEV1_EVNam_vendor)
#define IEDMODEL_BIKE_DEEV1_NamPlt (&iedModel_BIKE_DEEV1_NamPlt)
#define IEDMODEL_BIKE_DEEV1_NamPlt_vendor (&iedModel_BIKE_DEEV1_NamPlt_vendor)
#define IEDMODEL_BIKE_DEEV1_NamPlt_swRev (&iedModel_BIKE_DEEV1_NamPlt_swRev)
#define IEDMODEL_BIKE_DEEV1_NamPlt_d (&iedModel_BIKE_DEEV1_NamPlt_d)
#define IEDMODEL_BIKE_DEEV1_NamPlt_configRev (&iedModel_BIKE_DEEV1_NamPlt_configRev)
#define IEDMODEL_BIKE_DEEV1_NamPlt_lnNs (&iedModel_BIKE_DEEV1_NamPlt_lnNs)
#define IEDMODEL_BIKE_DEEV1_ConnTypSel (&iedModel_BIKE_DEEV1_ConnTypSel)
#define IEDMODEL_BIKE_DEEV1_ConnTypSel_stVal (&iedModel_BIKE_DEEV1_ConnTypSel_stVal)
#define IEDMODEL_BIKE_DEEV1_ConnTypSel_q (&iedModel_BIKE_DEEV1_ConnTypSel_q)
#define IEDMODEL_BIKE_DEEV1_ConnTypSel_t (&iedModel_BIKE_DEEV1_ConnTypSel_t)
#define IEDMODEL_BIKE_DEEV1_Beh (&iedModel_BIKE_DEEV1_Beh)
#define IEDMODEL_BIKE_DEEV1_Beh_stVal (&iedModel_BIKE_DEEV1_Beh_stVal)
#define IEDMODEL_BIKE_DEEV1_Beh_q (&iedModel_BIKE_DEEV1_Beh_q)
#define IEDMODEL_BIKE_DEEV1_Beh_t (&iedModel_BIKE_DEEV1_Beh_t)
#define IEDMODEL_BIKE_DEEV1_Health (&iedModel_BIKE_DEEV1_Health)
#define IEDMODEL_BIKE_DEEV1_Health_stVal (&iedModel_BIKE_DEEV1_Health_stVal)
#define IEDMODEL_BIKE_DEEV1_Health_q (&iedModel_BIKE_DEEV1_Health_q)
#define IEDMODEL_BIKE_DEEV1_Health_t (&iedModel_BIKE_DEEV1_Health_t)
#define IEDMODEL_BIKE_DEEV1_Soc (&iedModel_BIKE_DEEV1_Soc)
#define IEDMODEL_BIKE_DEEV1_Soc_mag (&iedModel_BIKE_DEEV1_Soc_mag)
#define IEDMODEL_BIKE_DEEV1_Soc_mag_f (&iedModel_BIKE_DEEV1_Soc_mag_f)
#define IEDMODEL_BIKE_DEEV1_Soc_q (&iedModel_BIKE_DEEV1_Soc_q)
#define IEDMODEL_BIKE_DEEV1_Soc_t (&iedModel_BIKE_DEEV1_Soc_t)
#define IEDMODEL_BIKE_DEEV1_Soc_subEna (&iedModel_BIKE_DEEV1_Soc_subEna)
#define IEDMODEL_BIKE_DEEV1_Soc_subMag (&iedModel_BIKE_DEEV1_Soc_subMag)
#define IEDMODEL_BIKE_DEEV1_Soc_subMag_f (&iedModel_BIKE_DEEV1_Soc_subMag_f)
#define IEDMODEL_BIKE_DEEV1_Soc_subQ (&iedModel_BIKE_DEEV1_Soc_subQ)
#define IEDMODEL_BIKE_DEEV1_Soc_subID (&iedModel_BIKE_DEEV1_Soc_subID)
#define IEDMODEL_BIKE_DEEV1_Soc_blkEna (&iedModel_BIKE_DEEV1_Soc_blkEna)
#define IEDMODEL_BIKE_DEEV1_Soc_db (&iedModel_BIKE_DEEV1_Soc_db)
#define IEDMODEL_BIKE_DEEV1_EVId (&iedModel_BIKE_DEEV1_EVId)
#define IEDMODEL_BIKE_DEEV1_EVId_setVal (&iedModel_BIKE_DEEV1_EVId_setVal)
#define IEDMODEL_BIKE_DEEV1_DptTm (&iedModel_BIKE_DEEV1_DptTm)
#define IEDMODEL_BIKE_DEEV1_DptTm_setTm (&iedModel_BIKE_DEEV1_DptTm_setTm)
#define IEDMODEL_BIKE_DEEV1_VMax (&iedModel_BIKE_DEEV1_VMax)
#define IEDMODEL_BIKE_DEEV1_VMax_setMag (&iedModel_BIKE_DEEV1_VMax_setMag)
#define IEDMODEL_BIKE_DEEV1_VMax_setMag_f (&iedModel_BIKE_DEEV1_VMax_setMag_f)
#define IEDMODEL_BIKE_DEEV1_VMax_sVC (&iedModel_BIKE_DEEV1_VMax_sVC)
#define IEDMODEL_BIKE_DEEV1_VMax_sVC_scaleFactor (&iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor)
#define IEDMODEL_BIKE_DEEV1_VMax_sVC_offset (&iedModel_BIKE_DEEV1_VMax_sVC_offset)
#define IEDMODEL_BIKE_DEEV1_AMax (&iedModel_BIKE_DEEV1_AMax)
#define IEDMODEL_BIKE_DEEV1_AMax_setMag (&iedModel_BIKE_DEEV1_AMax_setMag)
#define IEDMODEL_BIKE_DEEV1_AMax_setMag_f (&iedModel_BIKE_DEEV1_AMax_setMag_f)
#define IEDMODEL_BIKE_DEEV1_AMax_sVC (&iedModel_BIKE_DEEV1_AMax_sVC)
#define IEDMODEL_BIKE_DEEV1_AMax_sVC_scaleFactor (&iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor)
#define IEDMODEL_BIKE_DEEV1_AMax_sVC_offset (&iedModel_BIKE_DEEV1_AMax_sVC_offset)
#define IEDMODEL_BIKE_DEEV1_AMin (&iedModel_BIKE_DEEV1_AMin)
#define IEDMODEL_BIKE_DEEV1_AMin_setMag (&iedModel_BIKE_DEEV1_AMin_setMag)
#define IEDMODEL_BIKE_DEEV1_AMin_setMag_f (&iedModel_BIKE_DEEV1_AMin_setMag_f)
#define IEDMODEL_BIKE_DEEV1_AMin_sVC (&iedModel_BIKE_DEEV1_AMin_sVC)
#define IEDMODEL_BIKE_DEEV1_AMin_sVC_scaleFactor (&iedModel_BIKE_DEEV1_AMin_sVC_scaleFactor)
#define IEDMODEL_BIKE_DEEV1_AMin_sVC_offset (&iedModel_BIKE_DEEV1_AMin_sVC_offset)
#define IEDMODEL_BIKE_DEEV1_EnAmnt (&iedModel_BIKE_DEEV1_EnAmnt)
#define IEDMODEL_BIKE_DEEV1_EnAmnt_setMag (&iedModel_BIKE_DEEV1_EnAmnt_setMag)
#define IEDMODEL_BIKE_DEEV1_EnAmnt_setMag_f (&iedModel_BIKE_DEEV1_EnAmnt_setMag_f)
#define IEDMODEL_BIKE_DEEV1_EnAmnt_sVC (&iedModel_BIKE_DEEV1_EnAmnt_sVC)
#define IEDMODEL_BIKE_DEEV1_EnAmnt_sVC_scaleFactor (&iedModel_BIKE_DEEV1_EnAmnt_sVC_scaleFactor)
#define IEDMODEL_BIKE_DEEV1_EnAmnt_sVC_offset (&iedModel_BIKE_DEEV1_EnAmnt_sVC_offset)


/* --- Defines ISAF1 --- */
#define IEDMODEL_BIKE_ISAF1 (&iedModel_BIKE_ISAF1)
#define IEDMODEL_BIKE_ISAF1_Alm (&iedModel_BIKE_ISAF1_Alm)
#define IEDMODEL_BIKE_ISAF1_Alm_stVal (&iedModel_BIKE_ISAF1_Alm_stVal)
#define IEDMODEL_BIKE_ISAF1_Alm_q (&iedModel_BIKE_ISAF1_Alm_q)
#define IEDMODEL_BIKE_ISAF1_Alm_t (&iedModel_BIKE_ISAF1_Alm_t)
#define IEDMODEL_BIKE_ISAF1_Beh (&iedModel_BIKE_ISAF1_Beh)
#define IEDMODEL_BIKE_ISAF1_Beh_stVal (&iedModel_BIKE_ISAF1_Beh_stVal)
#define IEDMODEL_BIKE_ISAF1_Beh_q (&iedModel_BIKE_ISAF1_Beh_q)
#define IEDMODEL_BIKE_ISAF1_Beh_t (&iedModel_BIKE_ISAF1_Beh_t)
#define IEDMODEL_BIKE_ISAF1_Health (&iedModel_BIKE_ISAF1_Health)
#define IEDMODEL_BIKE_ISAF1_Health_stVal (&iedModel_BIKE_ISAF1_Health_stVal)
#define IEDMODEL_BIKE_ISAF1_Health_q (&iedModel_BIKE_ISAF1_Health_q)
#define IEDMODEL_BIKE_ISAF1_Health_t (&iedModel_BIKE_ISAF1_Health_t)

/* --- Defines XSWI1 --- */
#define IEDMODEL_BIKE_XSWI1 (&iedModel_BIKE_XSWI1)
#define IEDMODEL_BIKE_XSWI1_SwTyp (&iedModel_BIKE_XSWI1_SwTyp)
#define IEDMODEL_BIKE_XSWI1_SwTyp_stVal (&iedModel_BIKE_XSWI1_SwTyp_stVal)
#define IEDMODEL_BIKE_XSWI1_SwTyp_q (&iedModel_BIKE_XSWI1_SwTyp_q)
#define IEDMODEL_BIKE_XSWI1_SwTyp_t (&iedModel_BIKE_XSWI1_SwTyp_t)
#define IEDMODEL_BIKE_XSWI1_Loc (&iedModel_BIKE_XSWI1_Loc)
#define IEDMODEL_BIKE_XSWI1_Loc_stVal (&iedModel_BIKE_XSWI1_Loc_stVal)
#define IEDMODEL_BIKE_XSWI1_Loc_q (&iedModel_BIKE_XSWI1_Loc_q)
#define IEDMODEL_BIKE_XSWI1_Loc_t (&iedModel_BIKE_XSWI1_Loc_t)
#define IEDMODEL_BIKE_XSWI1_OpCnt (&iedModel_BIKE_XSWI1_OpCnt)
#define IEDMODEL_BIKE_XSWI1_OpCnt_stVal (&iedModel_BIKE_XSWI1_OpCnt_stVal)
#define IEDMODEL_BIKE_XSWI1_OpCnt_q (&iedModel_BIKE_XSWI1_OpCnt_q)
#define IEDMODEL_BIKE_XSWI1_OpCnt_t (&iedModel_BIKE_XSWI1_OpCnt_t)
#define IEDMODEL_BIKE_XSWI1_Beh (&iedModel_BIKE_XSWI1_Beh)
#define IEDMODEL_BIKE_XSWI1_Beh_stVal (&iedModel_BIKE_XSWI1_Beh_stVal)
#define IEDMODEL_BIKE_XSWI1_Beh_q (&iedModel_BIKE_XSWI1_Beh_q)
#define IEDMODEL_BIKE_XSWI1_Beh_t (&iedModel_BIKE_XSWI1_Beh_t)
#define IEDMODEL_BIKE_XSWI1_Health (&iedModel_BIKE_XSWI1_Health)
#define IEDMODEL_BIKE_XSWI1_Health_stVal (&iedModel_BIKE_XSWI1_Health_stVal)
#define IEDMODEL_BIKE_XSWI1_Health_q (&iedModel_BIKE_XSWI1_Health_q)
#define IEDMODEL_BIKE_XSWI1_Health_t (&iedModel_BIKE_XSWI1_Health_t)
#define IEDMODEL_BIKE_XSWI1_Pos (&iedModel_BIKE_XSWI1_Pos)
#define IEDMODEL_BIKE_XSWI1_Pos_stVal (&iedModel_BIKE_XSWI1_Pos_stVal)
#define IEDMODEL_BIKE_XSWI1_Pos_q (&iedModel_BIKE_XSWI1_Pos_q)
#define IEDMODEL_BIKE_XSWI1_Pos_t (&iedModel_BIKE_XSWI1_Pos_t)
#define IEDMODEL_BIKE_XSWI1_Pos_ctlModel (&iedModel_BIKE_XSWI1_Pos_ctlModel)
#define IEDMODEL_BIKE_XSWI1_BlkOpn (&iedModel_BIKE_XSWI1_BlkOpn)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_stVal (&iedModel_BIKE_XSWI1_BlkOpn_stVal)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_q (&iedModel_BIKE_XSWI1_BlkOpn_q)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_t (&iedModel_BIKE_XSWI1_BlkOpn_t)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_ctlModel (&iedModel_BIKE_XSWI1_BlkOpn_ctlModel)
#define IEDMODEL_BIKE_XSWI1_BlkCls (&iedModel_BIKE_XSWI1_BlkCls)
#define IEDMODEL_BIKE_XSWI1_BlkCls_stVal (&iedModel_BIKE_XSWI1_BlkCls_stVal)
#define IEDMODEL_BIKE_XSWI1_BlkCls_q (&iedModel_BIKE_XSWI1_BlkCls_q)
#define IEDMODEL_BIKE_XSWI1_BlkCls_t (&iedModel_BIKE_XSWI1_BlkCls_t)
#define IEDMODEL_BIKE_XSWI1_BlkCls_ctlModel (&iedModel_BIKE_XSWI1_BlkCls_ctlModel)

/* --- Defines TMVM1 --- */
#define IEDMODEL_BIKE_TMVM1 (&iedModel_BIKE_TMVM1)
#define IEDMODEL_BIKE_TMVM1_EEHealth (&iedModel_BIKE_TMVM1_EEHealth)
#define IEDMODEL_BIKE_TMVM1_EEHealth_stVal (&iedModel_BIKE_TMVM1_EEHealth_stVal)
#define IEDMODEL_BIKE_TMVM1_EEHealth_q (&iedModel_BIKE_TMVM1_EEHealth_q)
#define IEDMODEL_BIKE_TMVM1_EEHealth_t (&iedModel_BIKE_TMVM1_EEHealth_t)
#define IEDMODEL_BIKE_TMVM1_Beh (&iedModel_BIKE_TMVM1_Beh)
#define IEDMODEL_BIKE_TMVM1_Beh_stVal (&iedModel_BIKE_TMVM1_Beh_stVal)
#define IEDMODEL_BIKE_TMVM1_Beh_q (&iedModel_BIKE_TMVM1_Beh_q)
#define IEDMODEL_BIKE_TMVM1_Beh_t (&iedModel_BIKE_TMVM1_Beh_t)
#define IEDMODEL_BIKE_TMVM1_Health (&iedModel_BIKE_TMVM1_Health)
#define IEDMODEL_BIKE_TMVM1_Health_stVal (&iedModel_BIKE_TMVM1_Health_stVal)
#define IEDMODEL_BIKE_TMVM1_Health_q (&iedModel_BIKE_TMVM1_Health_q)
#define IEDMODEL_BIKE_TMVM1_Health_t (&iedModel_BIKE_TMVM1_Health_t)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv (&iedModel_BIKE_TMVM1_MvmRteSv)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv_setMag (&iedModel_BIKE_TMVM1_MvmRteSv_setMag)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv_setMag_f (&iedModel_BIKE_TMVM1_MvmRteSv_setMag_f)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv_sVC (&iedModel_BIKE_TMVM1_MvmRteSv_sVC)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv_sVC_scaleFactor (&iedModel_BIKE_TMVM1_MvmRteSv_sVC_scaleFactor)
#define IEDMODEL_BIKE_TMVM1_MvmRteSv_sVC_offset (&iedModel_BIKE_TMVM1_MvmRteSv_sVC_offset)

/* --- Defines ZMOT1 --- */
#define IEDMODEL_BIKE_ZMOT1 (&iedModel_BIKE_ZMOT1)
#define IEDMODEL_BIKE_ZMOT1_EEName (&iedModel_BIKE_ZMOT1_EEName)
#define IEDMODEL_BIKE_ZMOT1_EEName_stVal (&iedModel_BIKE_ZMOT1_EEName_stVal)
#define IEDMODEL_BIKE_ZMOT1_EEName_q (&iedModel_BIKE_ZMOT1_EEName_q)
#define IEDMODEL_BIKE_ZMOT1_EEName_t (&iedModel_BIKE_ZMOT1_EEName_t)
#define IEDMODEL_BIKE_ZMOT1_RotThmSt (&iedModel_BIKE_ZMOT1_RotThmSt)
#define IEDMODEL_BIKE_ZMOT1_RotThmSt_stVal (&iedModel_BIKE_ZMOT1_RotThmSt_stVal)
#define IEDMODEL_BIKE_ZMOT1_RotThmSt_q (&iedModel_BIKE_ZMOT1_RotThmSt_q)
#define IEDMODEL_BIKE_ZMOT1_RotThmSt_t (&iedModel_BIKE_ZMOT1_RotThmSt_t)
#define IEDMODEL_BIKE_ZMOT1_PresAlm (&iedModel_BIKE_ZMOT1_PresAlm)
#define IEDMODEL_BIKE_ZMOT1_PresAlm_stVal (&iedModel_BIKE_ZMOT1_PresAlm_stVal)
#define IEDMODEL_BIKE_ZMOT1_PresAlm_q (&iedModel_BIKE_ZMOT1_PresAlm_q)
#define IEDMODEL_BIKE_ZMOT1_PresAlm_t (&iedModel_BIKE_ZMOT1_PresAlm_t)
#define IEDMODEL_BIKE_ZMOT1_EEHealth (&iedModel_BIKE_ZMOT1_EEHealth)
#define IEDMODEL_BIKE_ZMOT1_EEHealth_stVal (&iedModel_BIKE_ZMOT1_EEHealth_stVal)
#define IEDMODEL_BIKE_ZMOT1_EEHealth_q (&iedModel_BIKE_ZMOT1_EEHealth_q)
#define IEDMODEL_BIKE_ZMOT1_EEHealth_t (&iedModel_BIKE_ZMOT1_EEHealth_t)

/* --- Defines MMXU1 --- */
#define IEDMODEL_BIKE_MMXU1 (&iedModel_BIKE_MMXU1)
#define IEDMODEL_BIKE_MMXU1_NamPlt (&iedModel_BIKE_MMXU1_NamPlt)
#define IEDMODEL_BIKE_MMXU1_NamPlt_vendor (&iedModel_BIKE_MMXU1_NamPlt_vendor)
#define IEDMODEL_BIKE_MMXU1_NamPlt_swRev (&iedModel_BIKE_MMXU1_NamPlt_swRev)
#define IEDMODEL_BIKE_MMXU1_NamPlt_lnNs (&iedModel_BIKE_MMXU1_NamPlt_lnNs)
#define IEDMODEL_BIKE_MMXU1_Beh (&iedModel_BIKE_MMXU1_Beh)
#define IEDMODEL_BIKE_MMXU1_Beh_stVal (&iedModel_BIKE_MMXU1_Beh_stVal)
#define IEDMODEL_BIKE_MMXU1_Beh_q (&iedModel_BIKE_MMXU1_Beh_q)
#define IEDMODEL_BIKE_MMXU1_Beh_t (&iedModel_BIKE_MMXU1_Beh_t)
#define IEDMODEL_BIKE_MMXU1_Health (&iedModel_BIKE_MMXU1_Health)
#define IEDMODEL_BIKE_MMXU1_Health_stVal (&iedModel_BIKE_MMXU1_Health_stVal)
#define IEDMODEL_BIKE_MMXU1_Health_q (&iedModel_BIKE_MMXU1_Health_q)
#define IEDMODEL_BIKE_MMXU1_Health_t (&iedModel_BIKE_MMXU1_Health_t)
#define IEDMODEL_BIKE_MMXU1_TotW (&iedModel_BIKE_MMXU1_TotW)
#define IEDMODEL_BIKE_MMXU1_TotW_mag (&iedModel_BIKE_MMXU1_TotW_mag)
#define IEDMODEL_BIKE_MMXU1_TotW_mag_f (&iedModel_BIKE_MMXU1_TotW_mag_f)
#define IEDMODEL_BIKE_MMXU1_TotW_q (&iedModel_BIKE_MMXU1_TotW_q)
#define IEDMODEL_BIKE_MMXU1_TotW_t (&iedModel_BIKE_MMXU1_TotW_t)
#define IEDMODEL_BIKE_MMXU1_TotW_db (&iedModel_BIKE_MMXU1_TotW_db)

/* --- Defines DLOC1 --- */
#define IEDMODEL_BIKE_DLOC1 (&iedModel_BIKE_DLOC1)
#define IEDMODEL_BIKE_DLOC1_EVDistTot (&iedModel_BIKE_DLOC1_EVDistTot)
#define IEDMODEL_BIKE_DLOC1_EVDistTot_mag (&iedModel_BIKE_DLOC1_EVDistTot_mag)
#define IEDMODEL_BIKE_DLOC1_EVDistTot_mag_f (&iedModel_BIKE_DLOC1_EVDistTot_mag_f)
#define IEDMODEL_BIKE_DLOC1_EVDistTot_q (&iedModel_BIKE_DLOC1_EVDistTot_q)
#define IEDMODEL_BIKE_DLOC1_EVDistTot_t (&iedModel_BIKE_DLOC1_EVDistTot_t)
#define IEDMODEL_BIKE_DLOC1_EVDistTot_db (&iedModel_BIKE_DLOC1_EVDistTot_db)
#define IEDMODEL_BIKE_DLOC1_EVDistSess (&iedModel_BIKE_DLOC1_EVDistSess)
#define IEDMODEL_BIKE_DLOC1_EVDistSess_mag (&iedModel_BIKE_DLOC1_EVDistSess_mag)
#define IEDMODEL_BIKE_DLOC1_EVDistSess_mag_f (&iedModel_BIKE_DLOC1_EVDistSess_mag_f)
#define IEDMODEL_BIKE_DLOC1_EVDistSess_q (&iedModel_BIKE_DLOC1_EVDistSess_q)
#define IEDMODEL_BIKE_DLOC1_EVDistSess_t (&iedModel_BIKE_DLOC1_EVDistSess_t)
#define IEDMODEL_BIKE_DLOC1_EVDistSess_db (&iedModel_BIKE_DLOC1_EVDistSess_db)
#define IEDMODEL_BIKE_DLOC1_VocOri (&iedModel_BIKE_DLOC1_VocOri)
#define IEDMODEL_BIKE_DLOC1_VocOri_stVal (&iedModel_BIKE_DLOC1_VocOri_stVal)
#define IEDMODEL_BIKE_DLOC1_VocOri_q (&iedModel_BIKE_DLOC1_VocOri_q)
#define IEDMODEL_BIKE_DLOC1_VocOri_t (&iedModel_BIKE_DLOC1_VocOri_t)
#define IEDMODEL_BIKE_DLOC1_NavFai (&iedModel_BIKE_DLOC1_NavFai)
#define IEDMODEL_BIKE_DLOC1_NavFai_stVal (&iedModel_BIKE_DLOC1_NavFai_stVal)
#define IEDMODEL_BIKE_DLOC1_NavFai_q (&iedModel_BIKE_DLOC1_NavFai_q)
#define IEDMODEL_BIKE_DLOC1_NavFai_t (&iedModel_BIKE_DLOC1_NavFai_t)
#define IEDMODEL_BIKE_DLOC1_SatAvl (&iedModel_BIKE_DLOC1_SatAvl)
#define IEDMODEL_BIKE_DLOC1_SatAvl_stVal (&iedModel_BIKE_DLOC1_SatAvl_stVal)
#define IEDMODEL_BIKE_DLOC1_SatAvl_q (&iedModel_BIKE_DLOC1_SatAvl_q)
#define IEDMODEL_BIKE_DLOC1_SatAvl_t (&iedModel_BIKE_DLOC1_SatAvl_t)
#define IEDMODEL_BIKE_DLOC1_LocPrec (&iedModel_BIKE_DLOC1_LocPrec)
#define IEDMODEL_BIKE_DLOC1_LocPrec_stVal (&iedModel_BIKE_DLOC1_LocPrec_stVal)
#define IEDMODEL_BIKE_DLOC1_LocPrec_q (&iedModel_BIKE_DLOC1_LocPrec_q)
#define IEDMODEL_BIKE_DLOC1_LocPrec_t (&iedModel_BIKE_DLOC1_LocPrec_t)
#define IEDMODEL_BIKE_DLOC1_LocDist (&iedModel_BIKE_DLOC1_LocDist)
#define IEDMODEL_BIKE_DLOC1_LocDist_mag (&iedModel_BIKE_DLOC1_LocDist_mag)
#define IEDMODEL_BIKE_DLOC1_LocDist_mag_f (&iedModel_BIKE_DLOC1_LocDist_mag_f)
#define IEDMODEL_BIKE_DLOC1_LocDist_q (&iedModel_BIKE_DLOC1_LocDist_q)
#define IEDMODEL_BIKE_DLOC1_LocDist_t (&iedModel_BIKE_DLOC1_LocDist_t)
#define IEDMODEL_BIKE_DLOC1_LocDist_db (&iedModel_BIKE_DLOC1_LocDist_db)
#define IEDMODEL_BIKE_DLOC1_LocTime (&iedModel_BIKE_DLOC1_LocTime)
#define IEDMODEL_BIKE_DLOC1_LocTime_mag (&iedModel_BIKE_DLOC1_LocTime_mag)
#define IEDMODEL_BIKE_DLOC1_LocTime_mag_f (&iedModel_BIKE_DLOC1_LocTime_mag_f)
#define IEDMODEL_BIKE_DLOC1_LocTime_q (&iedModel_BIKE_DLOC1_LocTime_q)
#define IEDMODEL_BIKE_DLOC1_LocTime_t (&iedModel_BIKE_DLOC1_LocTime_t)
#define IEDMODEL_BIKE_DLOC1_LocTime_db (&iedModel_BIKE_DLOC1_LocTime_db)



#endif /* STATIC_MODEL_H_ */