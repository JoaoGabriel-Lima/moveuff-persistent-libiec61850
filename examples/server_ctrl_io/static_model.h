
 /*
  * static_model.h
  *
  * Modelo estático para o IED, baseado na lista de LNs fornecida.
  * LNs: LLN0, LPHD1, DEEV1, XSWI1, DBAT1, DESE1, LGOS1, LTIM1, LTMS1
  */

 #ifndef STATIC_MODEL_H_
 #define STATIC_MODEL_H_

 #include <stdlib.h>
 #include "iec61850_model.h"

 extern IedModel iedModel;
 extern LogicalDevice iedModel_CTRL;

 /* LNs */
 extern LogicalNode iedModel_CTRL_LPHD1;
 extern LogicalNode iedModel_CTRL_LLN0;
 //extern LogicalNode iedModel_CTRL_DEEV1;
 //extern LogicalNode iedModel_CTRL_XSWI1;
 //extern LogicalNode iedModel_CTRL_DBAT1;
 //extern LogicalNode iedModel_CTRL_DESE1;
 extern LogicalNode iedModel_CTRL_LGOS1;
 extern LogicalNode iedModel_CTRL_LTIM1;
 extern LogicalNode iedModel_CTRL_LTMS1;

 /* LPHD1 Data Objects and Attributes */
 extern DataObject iedModel_CTRL_LPHD1_NamPlt;
 extern DataAttribute iedModel_CTRL_LPHD1_NamPlt_vendor;
 extern DataAttribute iedModel_CTRL_LPHD1_NamPlt_swRev;
 extern DataAttribute iedModel_CTRL_LPHD1_NamPlt_ldNs;
 extern DataObject iedModel_CTRL_LPHD1_PhyNam;
 extern DataAttribute iedModel_CTRL_LPHD1_PhyNam_vendor;
 extern DataObject iedModel_CTRL_LPHD1_PhyHealth;
 extern DataAttribute iedModel_CTRL_LPHD1_PhyHealth_stVal;
 extern DataAttribute iedModel_CTRL_LPHD1_PhyHealth_q;
 extern DataAttribute iedModel_CTRL_LPHD1_PhyHealth_t;
 extern DataObject iedModel_CTRL_LPHD1_OutOv;
 extern DataAttribute iedModel_CTRL_LPHD1_OutOv_stVal;
 extern DataObject iedModel_CTRL_LPHD1_Proxy;
 extern DataAttribute iedModel_CTRL_LPHD1_Proxy_stVal;
 extern DataObject iedModel_CTRL_LPHD1_OpTmh;
 extern DataAttribute iedModel_CTRL_LPHD1_OpTmh_stVal;
//  extern DataObject iedModel_CTRL_LPHD1_Sim;
//  extern DataAttribute iedModel_CTRL_LPHD1_Sim_ctlVal; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_LPHD1_Sim_stVal;
//  extern DataAttribute iedModel_CTRL_LPHD1_Sim_q;
//  extern DataAttribute iedModel_CTRL_LPHD1_Sim_t;
//  extern DataAttribute iedModel_CTRL_LPHD1_Sim_ctlModel;

 /* LLN0 Data Objects and Attributes */
  extern DataObject iedModel_CTRL_LLN0_Mod;
  extern DataAttribute iedModel_CTRL_LLN0_Mod_ctlVal; /* Atributo de Controle */
  extern DataAttribute iedModel_CTRL_LLN0_Mod_stVal;
  extern DataAttribute iedModel_CTRL_LLN0_Mod_q;
  extern DataAttribute iedModel_CTRL_LLN0_Mod_t;
  extern DataAttribute iedModel_CTRL_LLN0_Mod_ctlModel;
  extern DataObject iedModel_CTRL_LLN0_Beh;
  extern DataAttribute iedModel_CTRL_LLN0_Beh_stVal;
  extern DataAttribute iedModel_CTRL_LLN0_Beh_q;
  extern DataAttribute iedModel_CTRL_LLN0_Beh_t;
  extern DataObject iedModel_CTRL_LLN0_Health;
  extern DataAttribute iedModel_CTRL_LLN0_Health_stVal;
  extern DataAttribute iedModel_CTRL_LLN0_Health_q;
  extern DataAttribute iedModel_CTRL_LLN0_Health_t;
  extern DataObject iedModel_CTRL_LLN0_NamPlt;
  extern DataAttribute iedModel_CTRL_LLN0_NamPlt_vendor;
  extern DataAttribute iedModel_CTRL_LLN0_NamPlt_swRev;
  extern DataAttribute iedModel_CTRL_LLN0_NamPlt_ldNs;
  extern DataAttribute iedModel_CTRL_LLN0_NamPlt_configRev;
  extern DataAttribute iedModel_CTRL_LLN0_NamPlt_d;

 /* DEEV1 Data Objects and Attributes */
 /*
 extern DataObject iedModel_CTRL_DEEV1_Mod;
 extern DataAttribute iedModel_CTRL_DEEV1_Mod_stVal;
 extern DataAttribute iedModel_CTRL_DEEV1_Mod_q;
 extern DataAttribute iedModel_CTRL_DEEV1_Mod_t;
 extern DataAttribute iedModel_CTRL_DEEV1_Mod_ctlModel;
 extern DataObject iedModel_CTRL_DEEV1_Beh;
 extern DataAttribute iedModel_CTRL_DEEV1_Beh_stVal;
 extern DataAttribute iedModel_CTRL_DEEV1_Beh_q;
 extern DataAttribute iedModel_CTRL_DEEV1_Beh_t;
 extern DataObject iedModel_CTRL_DEEV1_Health;
 extern DataAttribute iedModel_CTRL_DEEV1_Health_stVal;
 extern DataAttribute iedModel_CTRL_DEEV1_Health_q;
 extern DataAttribute iedModel_CTRL_DEEV1_Health_t;
 extern DataObject iedModel_CTRL_DEEV1_NamPlt;
 extern DataAttribute iedModel_CTRL_DEEV1_NamPlt_vendor;
 extern DataObject iedModel_CTRL_DEEV1_Loc;
 extern DataAttribute iedModel_CTRL_DEEV1_Loc_stVal;
 extern DataAttribute iedModel_CTRL_DEEV1_Loc_q;
 extern DataAttribute iedModel_CTRL_DEEV1_Loc_t;
 extern DataObject iedModel_CTRL_DEEV1_EVNam;
 extern DataAttribute iedModel_CTRL_DEEV1_EVNam_stVal;
 extern DataObject iedModel_CTRL_DEEV1_ConnTypSel;
 extern DataAttribute iedModel_CTRL_DEEV1_ConnTypSel_stVal;
 extern DataObject iedModel_CTRL_DEEV1_Soc;
 extern DataAttribute iedModel_CTRL_DEEV1_Soc_mag;
 extern DataAttribute iedModel_CTRL_DEEV1_Soc_mag_f;
 extern DataAttribute iedModel_CTRL_DEEV1_Soc_q;
 extern DataAttribute iedModel_CTRL_DEEV1_Soc_t;
 extern DataObject iedModel_CTRL_DEEV1_EVId;
 extern DataAttribute iedModel_CTRL_DEEV1_EVId_stVal;
 extern DataObject iedModel_CTRL_DEEV1_DptTm;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_setMag;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_setMag_f;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_ctlVal;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_origin;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_origin_orCat;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_origin_orIdent;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_ctlNum;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_T;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_Test;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_Oper_Check;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_stVal;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_q;
 extern DataAttribute iedModel_CTRL_DEEV1_DptTm_t;
 extern DataObject iedModel_CTRL_DEEV1_VMax;
 extern DataAttribute iedModel_CTRL_DEEV1_VMax_setMag;
 extern DataAttribute iedModel_CTRL_DEEV1_VMax_setMag_f;
 extern DataObject iedModel_CTRL_DEEV1_AMax;
 extern DataAttribute iedModel_CTRL_DEEV1_AMax_setMag;
 extern DataAttribute iedModel_CTRL_DEEV1_AMax_setMag_f;
 extern DataObject iedModel_CTRL_DEEV1_AMin;
 extern DataAttribute iedModel_CTRL_DEEV1_AMin_setMag;
 extern DataAttribute iedModel_CTRL_DEEV1_AMin_setMag_f;
 extern DataObject iedModel_CTRL_DEEV1_EnAmnt;
 extern DataAttribute iedModel_CTRL_DEEV1_EnAmnt_setMag;
 extern DataAttribute iedModel_CTRL_DEEV1_EnAmnt_setMag_f; 

//  /* XSWI1 Data Objects and Attributes (Ordem Corrigida) */
//  extern DataObject iedModel_CTRL_XSWI1_Mod;
//  extern DataAttribute iedModel_CTRL_XSWI1_Mod_ctlVal; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_XSWI1_Mod_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Mod_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_Mod_t;
//  extern DataAttribute iedModel_CTRL_XSWI1_Mod_ctlModel;
//  extern DataObject iedModel_CTRL_XSWI1_Beh;
//  extern DataAttribute iedModel_CTRL_XSWI1_Beh_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Beh_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_Beh_t;
//  extern DataObject iedModel_CTRL_XSWI1_Health;
//  extern DataAttribute iedModel_CTRL_XSWI1_Health_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Health_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_Health_t;
//  extern DataObject iedModel_CTRL_XSWI1_Loc;
//  extern DataAttribute iedModel_CTRL_XSWI1_Loc_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Loc_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_Loc_t;
//  extern DataObject iedModel_CTRL_XSWI1_SwTyp;
//  extern DataAttribute iedModel_CTRL_XSWI1_SwTyp_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_SwTyp_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_SwTyp_t;
//  extern DataObject iedModel_CTRL_XSWI1_OpCnt;
//  extern DataAttribute iedModel_CTRL_XSWI1_OpCnt_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_OpCnt_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_OpCnt_t;
//  extern DataObject iedModel_CTRL_XSWI1_Pos;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_ctlVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_origin;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_origin_orCat;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_origin_orIdent;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_ctlNum;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_T;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_Test;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_Oper_Check;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_t;
//  extern DataAttribute iedModel_CTRL_XSWI1_Pos_ctlModel;
//  extern DataObject iedModel_CTRL_XSWI1_BlkOpn;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_ctlVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_origin;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_origin_orCat;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_origin_orIdent;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_ctlNum;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_T;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_Test;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_Oper_Check;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_t;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkOpn_ctlModel;
//  extern DataObject iedModel_CTRL_XSWI1_BlkCls;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_ctlVal; /* CORRIGIDO: Agora é SPC */
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_stVal;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_q;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_t;
//  extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_ctlModel;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_ctlVal;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_origin;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_origin_orCat;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_origin_orIdent;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_ctlNum;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_T;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_Test;
//   extern DataAttribute iedModel_CTRL_XSWI1_BlkCls_Oper_Check;

//  /* DBAT1 Data Objects and Attributes */
//  extern DataObject iedModel_CTRL_DBAT1_EEName;
//  extern DataAttribute iedModel_CTRL_DBAT1_EEName_vendor;
//  extern DataObject iedModel_CTRL_DBAT1_ChaSt;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaSt_stVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaSt_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaSt_t;
//  extern DataObject iedModel_CTRL_DBAT1_DschSt;
//  extern DataAttribute iedModel_CTRL_DBAT1_DschSt_stVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_DschSt_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_DschSt_t;
//  extern DataObject iedModel_CTRL_DBAT1_EEHealth;
//  extern DataAttribute iedModel_CTRL_DBAT1_EEHealth_stVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_EEHealth_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_EEHealth_t;
//  extern DataObject iedModel_CTRL_DBAT1_Amp;
//  extern DataAttribute iedModel_CTRL_DBAT1_Amp_mag;
//  extern DataAttribute iedModel_CTRL_DBAT1_Amp_mag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_Amp_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_Amp_t;
//  extern DataObject iedModel_CTRL_DBAT1_Watt;
//  extern DataAttribute iedModel_CTRL_DBAT1_Watt_mag;
//  extern DataAttribute iedModel_CTRL_DBAT1_Watt_mag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_Watt_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_Watt_t;
//  extern DataObject iedModel_CTRL_DBAT1_AvlChaAhr;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlChaAhr_mag;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlChaAhr_mag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlChaAhr_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlChaAhr_t;
//  extern DataObject iedModel_CTRL_DBAT1_AvlDschAhr;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_Oper; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_Oper_ctlVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin_orCat;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin_orIdent;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_setMag;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_setMag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_AvlDschAhr_t;
//  extern DataObject iedModel_CTRL_DBAT1_BatTyp;
//  extern DataAttribute iedModel_CTRL_DBAT1_BatTyp_stVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_BatTyp_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_BatTyp_t;
//  extern DataObject iedModel_CTRL_DBAT1_ChaAmpMax;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_Oper; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_Oper_ctlVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin_orCat;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin_orIdent;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_setMag;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_setMag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_ChaAmpMax_t;
//  extern DataObject iedModel_CTRL_DBAT1_AhrRtg;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_Oper; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_Oper_ctlVal;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_Oper_origin;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_Oper_origin_orCat;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_Oper_origin_orIdent;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_setMag;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_setMag_f;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_q;
//  extern DataAttribute iedModel_CTRL_DBAT1_AhrRtg_t;


 /* DESE1 Data Objects and Attributes */
 /*
 extern DataObject iedModel_CTRL_DESE1_Mod;
 extern DataAttribute iedModel_CTRL_DESE1_Mod_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_Mod_q;
 extern DataAttribute iedModel_CTRL_DESE1_Mod_t;
 extern DataAttribute iedModel_CTRL_DESE1_Mod_ctlModel;
 extern DataObject iedModel_CTRL_DESE1_Beh;
 extern DataAttribute iedModel_CTRL_DESE1_Beh_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_Beh_q;
 extern DataAttribute iedModel_CTRL_DESE1_Beh_t;
 extern DataObject iedModel_CTRL_DESE1_Health;
 extern DataAttribute iedModel_CTRL_DESE1_Health_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_Health_q;
 extern DataAttribute iedModel_CTRL_DESE1_Health_t;
 extern DataObject iedModel_CTRL_DESE1_NamPlt;
 extern DataAttribute iedModel_CTRL_DESE1_NamPlt_vendor;
 extern DataObject iedModel_CTRL_DESE1_Loc;
 extern DataAttribute iedModel_CTRL_DESE1_Loc_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_Loc_q;
 extern DataAttribute iedModel_CTRL_DESE1_Loc_t;
 extern DataObject iedModel_CTRL_DESE1_EVSENam;
 extern DataAttribute iedModel_CTRL_DESE1_EVSENam_stVal;
 extern DataObject iedModel_CTRL_DESE1_EVSEId;
 extern DataAttribute iedModel_CTRL_DESE1_EVSEId_stVal;
 extern DataObject iedModel_CTRL_DESE1_DigCommLos;
 extern DataAttribute iedModel_CTRL_DESE1_DigCommLos_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_DigCommLos_q;
 extern DataAttribute iedModel_CTRL_DESE1_DigCommLos_t;
 extern DataObject iedModel_CTRL_DESE1_WldDet;
 extern DataAttribute iedModel_CTRL_DESE1_WldDet_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_WldDet_q;
 extern DataAttribute iedModel_CTRL_DESE1_WldDet_t;
 extern DataObject iedModel_CTRL_DESE1_ChaV;
 extern DataAttribute iedModel_CTRL_DESE1_ChaV_mag;
 extern DataAttribute iedModel_CTRL_DESE1_ChaV_mag_f;
 extern DataAttribute iedModel_CTRL_DESE1_ChaV_q;
 extern DataAttribute iedModel_CTRL_DESE1_ChaV_t;
 extern DataObject iedModel_CTRL_DESE1_ChaA;
 extern DataAttribute iedModel_CTRL_DESE1_ChaA_mag;
 extern DataAttribute iedModel_CTRL_DESE1_ChaA_mag_f;
 extern DataAttribute iedModel_CTRL_DESE1_ChaA_q;
 extern DataAttribute iedModel_CTRL_DESE1_ChaA_t;
 extern DataObject iedModel_CTRL_DESE1_ChaPwrTgt;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_setMag;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_setMag_f;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_ctlVal;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin_orCat;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin_orIdent;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_ctlNum;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_T;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_Test;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_Oper_Check;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_q;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrTgt_t;
 extern DataObject iedModel_CTRL_DESE1_ChaPwrLim;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrLim_mag;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrLim_mag_f;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrLim_q;
 extern DataAttribute iedModel_CTRL_DESE1_ChaPwrLim_t;
 extern DataObject iedModel_CTRL_DESE1_ConnTypDC;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypDC_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypDC_q;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypDC_t;
 extern DataObject iedModel_CTRL_DESE1_ConnTypPhs;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypPhs_stVal;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypPhs_q;
 extern DataAttribute iedModel_CTRL_DESE1_ConnTypPhs_t;
 extern DataObject iedModel_CTRL_DESE1_ConnACRef;
 extern DataAttribute iedModel_CTRL_DESE1_ConnACRef_stVal;
 extern DataObject iedModel_CTRL_DESE1_ConnDCRef;
 extern DataAttribute iedModel_CTRL_DESE1_ConnDCRef_stVal;

//  /* LGOS1 Data Objects and Attributes */
  extern DataObject iedModel_CTRL_LGOS1_Mod;
  extern DataAttribute iedModel_CTRL_LGOS1_Mod_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_Mod_ctlVal; /* Atributo de Controle */
  extern DataAttribute iedModel_CTRL_LGOS1_Mod_q;
  extern DataAttribute iedModel_CTRL_LGOS1_Mod_t;
  extern DataAttribute iedModel_CTRL_LGOS1_Mod_ctlModel;
  extern DataObject iedModel_CTRL_LGOS1_Beh;
  extern DataAttribute iedModel_CTRL_LGOS1_Beh_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_Beh_q;
  extern DataAttribute iedModel_CTRL_LGOS1_Beh_t;
  extern DataObject iedModel_CTRL_LGOS1_Health;
  extern DataAttribute iedModel_CTRL_LGOS1_Health_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_Health_q;
  extern DataAttribute iedModel_CTRL_LGOS1_Health_t;
  extern DataObject iedModel_CTRL_LGOS1_NamPlt;
  extern DataAttribute iedModel_CTRL_LGOS1_NamPlt_vendor;
  extern DataObject iedModel_CTRL_LGOS1_GoCBRef;
  extern DataAttribute iedModel_CTRL_LGOS1_GoCBRef_stVal;
  extern DataObject iedModel_CTRL_LGOS1_St;
  extern DataAttribute iedModel_CTRL_LGOS1_St_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_St_q;
  extern DataAttribute iedModel_CTRL_LGOS1_St_t;
  extern DataObject iedModel_CTRL_LGOS1_NdsCom;
  extern DataAttribute iedModel_CTRL_LGOS1_NdsCom_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_NdsCom_q;
  extern DataAttribute iedModel_CTRL_LGOS1_NdsCom_t;
  extern DataObject iedModel_CTRL_LGOS1_SimSt;
  extern DataAttribute iedModel_CTRL_LGOS1_SimSt_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_SimSt_q;
  extern DataAttribute iedModel_CTRL_LGOS1_SimSt_t;
  extern DataObject iedModel_CTRL_LGOS1_ConfRevNum;
  extern DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_q;
  extern DataAttribute iedModel_CTRL_LGOS1_ConfRevNum_t;
  extern DataObject iedModel_CTRL_LGOS1_RxConfRevNum;
  extern DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_q;
  extern DataAttribute iedModel_CTRL_LGOS1_RxConfRevNum_t;
  extern DataObject iedModel_CTRL_LGOS1_LastStNum;
  extern DataAttribute iedModel_CTRL_LGOS1_LastStNum_stVal;
  extern DataAttribute iedModel_CTRL_LGOS1_LastStNum_q;
  extern DataAttribute iedModel_CTRL_LGOS1_LastStNum_t;

//  /* LTIM1 Data Objects and Attributes */
//  extern DataObject iedModel_CTRL_LTIM1_Mod;
//  extern DataAttribute iedModel_CTRL_LTIM1_Mod_stVal;
//  extern DataAttribute iedModel_CTRL_LTIM1_Mod_q;
//  extern DataAttribute iedModel_CTRL_LTIM1_Mod_t;
  extern DataObject iedModel_CTRL_LTIM1_Beh;
  extern DataAttribute iedModel_CTRL_LTIM1_Beh_stVal;
  extern DataAttribute iedModel_CTRL_LTIM1_Beh_q;
  extern DataAttribute iedModel_CTRL_LTIM1_Beh_t;
  extern DataObject iedModel_CTRL_LTIM1_Health;
  extern DataAttribute iedModel_CTRL_LTIM1_Health_stVal;
  extern DataAttribute iedModel_CTRL_LTIM1_Health_q;
  extern DataAttribute iedModel_CTRL_LTIM1_Health_t;
  extern DataObject iedModel_CTRL_LTIM1_Tm;
  extern DataAttribute iedModel_CTRL_LTIM1_Tm_stVal;
  extern DataAttribute iedModel_CTRL_LTIM1_Tm_q;
  extern DataAttribute iedModel_CTRL_LTIM1_Tm_t;
  
//  extern DataObject iedModel_CTRL_LTIM1_NamPlt;
//  extern DataAttribute iedModel_CTRL_LTIM1_NamPlt_vendor;
//  extern DataObject iedModel_CTRL_LTIM1_Tm;
//  extern DataAttribute iedModel_CTRL_LTIM1_Tm_val;

//  /* LTMS1 Data Objects and Attributes */
//  extern DataObject iedModel_CTRL_LTMS1_Mod;
//  extern DataAttribute iedModel_CTRL_LTMS1_Mod_ctlVal; /* Atributo de Controle */
//  extern DataAttribute iedModel_CTRL_LTMS1_Mod_stVal;
//  extern DataAttribute iedModel_CTRL_LTMS1_Mod_q;
//  extern DataAttribute iedModel_CTRL_LTMS1_Mod_t;
//  extern DataAttribute iedModel_CTRL_LTMS1_Mod_ctlModel;
  extern DataObject iedModel_CTRL_LTMS1_Beh;
  extern DataAttribute iedModel_CTRL_LTMS1_Beh_stVal;
  extern DataAttribute iedModel_CTRL_LTMS1_Beh_q;
  extern DataAttribute iedModel_CTRL_LTMS1_Beh_t;
//  extern DataObject iedModel_CTRL_LTMS1_Health;
//  extern DataAttribute iedModel_CTRL_LTMS1_Health_stVal;
//  extern DataAttribute iedModel_CTRL_LTMS1_Health_q;
//  extern DataAttribute iedModel_CTRL_LTMS1_Health_t;
//  extern DataObject iedModel_CTRL_LTMS1_NamPlt;
//  extern DataAttribute iedModel_CTRL_LTMS1_NamPlt_vendor;
  extern DataObject iedModel_CTRL_LTMS1_TmSrc;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrc_stVal;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrc_q;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrc_t;
  extern DataObject iedModel_CTRL_LTMS1_TmSrcTyp;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_stVal;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_q;
  extern DataAttribute iedModel_CTRL_LTMS1_TmSrcTyp_t;

 /* Defines for easy access */

//  #define IEDMODEL_CTRL_LLN0_Diag (&iedModel_CTRL_LLN0_Diag)
//  #define IEDMODEL_CTRL_LLN0_Diag_stVal (&iedModel_CTRL_LLN0_Diag_stVal)
//  #define IEDMODEL_CTRL_LLN0_Diag_q (&iedModel_CTRL_LLN0_Diag_q)
//  #define IEDMODEL_CTRL_LLN0_Diag_t (&iedModel_CTRL_LLN0_Diag_t)
//  #define IEDMODEL_CTRL_LLN0_LEDRs (&iedModel_CTRL_LLN0_LEDRs)
//  #define IEDMODEL_CTRL_LLN0_LEDRs_stVal (&iedModel_CTRL_LLN0_LEDRs_stVal)
//  #define IEDMODEL_CTRL_LLN0_LEDRs_q (&iedModel_CTRL_LLN0_LEDRs_q)
//  #define IEDMODEL_CTRL_LLN0_LEDRs_t (&iedModel_CTRL_LLN0_LEDRs_t)*/

  #define IEDMODEL_CTRL_LPHD1 (&iedModel_CTRL_LPHD1)
  #define IEDMODEL_CTRL_LPHD1_PhyNam (&iedModel_CTRL_LPHD1_PhyNam)
  #define IEDMODEL_CTRL_LPHD1_PhyNam_vendor (&iedModel_CTRL_LPHD1_PhyNam_vendor)
  #define IEDMODEL_CTRL_LPHD1_PhyHealth (&iedModel_CTRL_LPHD1_PhyHealth)
  #define IEDMODEL_CTRL_LPHD1_PhyHealth_stVal (&iedModel_CTRL_LPHD1_PhyHealth_stVal)
  #define IEDMODEL_CTRL_LPHD1_PhyHealth_q (&iedModel_CTRL_LPHD1_PhyHealth_q)
  #define IEDMODEL_CTRL_LPHD1_PhyHealth_t (&iedModel_CTRL_LPHD1_PhyHealth_t)
  #define IEDMODEL_CTRL_LPHD1_OutOv (&iedModel_CTRL_LPHD1_OutOv)
  #define IEDMODEL_CTRL_LPHD1_OutOv_stVal (&iedModel_CTRL_LPHD1_OutOv_stVal)
  #define IEDMODEL_CTRL_LPHD1_OutOv_q (&iedModel_CTRL_LPHD1_OutOv_q)
  #define IEDMODEL_CTRL_LPHD1_OutOv_t (&iedModel_CTRL_LPHD1_OutOv_t)
  #define IEDMODEL_CTRL_LPHD1_Proxy (&iedModel_CTRL_LPHD1_Proxy)
  #define IEDMODEL_CTRL_LPHD1_Proxy_stVal (&iedModel_CTRL_LPHD1_Proxy_stVal)
  #define IEDMODEL_CTRL_LPHD1_Proxy_q (&iedModel_CTRL_LPHD1_Proxy_q)
  #define IEDMODEL_CTRL_LPHD1_Proxy_t (&iedModel_CTRL_LPHD1_Proxy_t)
  #define IEDMODEL_CTRL_LPHD1_OpTmh (&iedModel_CTRL_LPHD1_OpTmh)
  #define IEDMODEL_CTRL_LPHD1_OpTmh_stVal (&iedModel_CTRL_LPHD1_OpTmh_stVal)
  #define IEDMODEL_CTRL_LPHD1_OpTmh_q (&iedModel_CTRL_LPHD1_OpTmh_q)
  #define IEDMODEL_CTRL_LPHD1_OpTmh_t (&iedModel_CTRL_LPHD1_OpTmh_t)
//   #define IEDMODEL_CTRL_LPHD1_Sim (&iedModel_CTRL_LPHD1_Sim)
//   //#define IEDMODEL_CTRL_LPHD1_Sim_ctlVal (&iedModel_CTRL_LPHD1_Sim_ctlVal) /* ADICIONADO */
//   #define IEDMODEL_CTRL_LPHD1_Sim_stVal (&iedModel_CTRL_LPHD1_Sim_stVal)
//   #define IEDMODEL_CTRL_LPHD1_Sim_q (&iedModel_CTRL_LPHD1_Sim_q)
//   #define IEDMODEL_CTRL_LPHD1_Sim_t (&iedModel_CTRL_LPHD1_Sim_t)
//   #define IEDMODEL_CTRL_LPHD1_Sim_ctlModel (&iedModel_CTRL_LPHD1_Sim_ctlModel)
  #define IEDMODEL_CTRL_LPHD1_NamPlt (&iedModel_CTRL_LPHD1_NamPlt)
  #define IEDMODEL_CTRL_LPHD1_NamPlt_vendor (&iedModel_CTRL_LPHD1_NamPlt_vendor)
  #define IEDMODEL_CTRL_LPHD1_NamPlt_swRev (&iedModel_CTRL_LPHD1_NamPlt_swRev)
  #define IEDMODEL_CTRL_LPHD1_NamPlt_ldNs (&iedModel_CTRL_LPHD1_NamPlt_ldNs)

  #define IEDMODEL_CTRL (&iedModel_CTRL)
  #define IEDMODEL_CTRL_LLN0 (&iedModel_CTRL_LLN0)
  #define IEDMODEL_CTRL_LLN0_Mod (&iedModel_CTRL_LLN0_Mod)
  #define IEDMODEL_CTRL_LLN0_Mod_ctlVal (&iedModel_CTRL_LLN0_Mod_ctlVal) /* ADICIONADO */
  #define IEDMODEL_CTRL_LLN0_Mod_stVal (&iedModel_CTRL_LLN0_Mod_stVal)
  #define IEDMODEL_CTRL_LLN0_Mod_q (&iedModel_CTRL_LLN0_Mod_q)
  #define IEDMODEL_CTRL_LLN0_Mod_t (&iedModel_CTRL_LLN0_Mod_t)
  #define IEDMODEL_CTRL_LLN0_Mod_ctlModel (&iedModel_CTRL_LLN0_Mod_ctlModel)
  #define IEDMODEL_CTRL_LLN0_Beh (&iedModel_CTRL_LLN0_Beh)
  #define IEDMODEL_CTRL_LLN0_Beh_stVal (&iedModel_CTRL_LLN0_Beh_stVal)
  #define IEDMODEL_CTRL_LLN0_Beh_q (&iedModel_CTRL_LLN0_Beh_q)
  #define IEDMODEL_CTRL_LLN0_Beh_t (&iedModel_CTRL_LLN0_Beh_t)
  #define IEDMODEL_CTRL_LLN0_Health (&iedModel_CTRL_LLN0_Health)
  #define IEDMODEL_CTRL_LLN0_Health_stVal (&iedModel_CTRL_LLN0_Health_stVal)
  #define IEDMODEL_CTRL_LLN0_Health_q (&iedModel_CTRL_LLN0_Health_q)
  #define IEDMODEL_CTRL_LLN0_Health_t (&iedModel_CTRL_LLN0_Health_t)
  #define IEDMODEL_CTRL_LLN0_NamPlt (&iedModel_CTRL_LLN0_NamPlt)
  #define IEDMODEL_CTRL_LLN0_NamPlt_vendor (&iedModel_CTRL_LLN0_NamPlt_vendor)
  #define IEDMODEL_CTRL_LLN0_NamPlt_swRev (&iedModel_CTRL_LLN0_NamPlt_swRev)
  #define IEDMODEL__CTRL_LLN0_NamPlt_d (&iedModel_CTRL_LLN0_NamPlt_d)
  #define IEDMODEL__CTRL_LLN0_NamPlt_configRev (&iedModel_CTRL_LLN0_NamPlt_configRev) 
  #define IEDMODEL_CTRL_LLN0_NamPlt_ldNs (&iedModel_CTRL_LLN0_NamPlt_ldNs)

//  #define IEDMODEL_CTRL_DEEV1 (&iedModel_CTRL_DEEV1)
//  #define IEDMODEL_CTRL_DEEV1_Mod (&iedModel_CTRL_DEEV1_Mod)
//  #define IEDMODEL_CTRL_DEEV1_Mod_stVal (&iedModel_CTRL_DEEV1_Mod_stVal)
//  #define IEDMODEL_CTRL_DEEV1_Mod_q (&iedModel_CTRL_DEEV1_Mod_q)
//  #define IEDMODEL_CTRL_DEEV1_Mod_t (&iedModel_CTRL_DEEV1_Mod_t)
//  #define IEDMODEL_CTRL_DEEV1_Mod_ctlModel (&iedModel_CTRL_DEEV1_Mod_ctlModel)
//  #define IEDMODEL_CTRL_DEEV1_Beh (&iedModel_CTRL_DEEV1_Beh)
//  #define IEDMODEL_CTRL_DEEV1_Beh_stVal (&iedModel_CTRL_DEEV1_Beh_stVal)
//  #define IEDMODEL_CTRL_DEEV1_Beh_q (&iedModel_CTRL_DEEV1_Beh_q)
//  #define IEDMODEL_CTRL_DEEV1_Beh_t (&iedModel_CTRL_DEEV1_Beh_t)
//  #define IEDMODEL_CTRL_DEEV1_Health (&iedModel_CTRL_DEEV1_Health)
//  #define IEDMODEL_CTRL_DEEV1_Health_stVal (&iedModel_CTRL_DEEV1_Health_stVal)
//  #define IEDMODEL_CTRL_DEEV1_Health_q (&iedModel_CTRL_DEEV1_Health_q)
//  #define IEDMODEL_CTRL_DEEV1_Health_t (&iedModel_CTRL_DEEV1_Health_t)
//  #define IEDMODEL_CTRL_DEEV1_NamPlt (&iedModel_CTRL_DEEV1_NamPlt)
//  #define IEDMODEL_CTRL_DEEV1_NamPlt_vendor (&iedModel_CTRL_DEEV1_NamPlt_vendor)
//  #define IEDMODEL_CTRL_DEEV1_Loc (&iedModel_CTRL_DEEV1_Loc)
//  #define IEDMODEL_CTRL_DEEV1_Loc_stVal (&iedModel_CTRL_DEEV1_Loc_stVal)
//  #define IEDMODEL_CTRL_DEEV1_Loc_q (&iedModel_CTRL_DEEV1_Loc_q)
//  #define IEDMODEL_CTRL_DEEV1_Loc_t (&iedModel_CTRL_DEEV1_Loc_t)
//  #define IEDMODEL_CTRL_DEEV1_EVNam (&iedModel_CTRL_DEEV1_EVNam)
//  #define IEDMODEL_CTRL_DEEV1_EVNam_stVal (&iedModel_CTRL_DEEV1_EVNam_stVal)
//  #define IEDMODEL_CTRL_DEEV1_ConnTypSel (&iedModel_CTRL_DEEV1_ConnTypSel)
//  #define IEDMODEL_CTRL_DEEV1_ConnTypSel_stVal (&iedModel_CTRL_DEEV1_ConnTypSel_stVal)
//  #define IEDMODEL_CTRL_DEEV1_Soc (&iedModel_CTRL_DEEV1_Soc)
//  #define IEDMODEL_CTRL_DEEV1_Soc_mag (&iedModel_CTRL_DEEV1_Soc_mag)
//  #define IEDMODEL_CTRL_DEEV1_Soc_mag_f (&iedModel_CTRL_DEEV1_Soc_mag_f)
//  #define IEDMODEL_CTRL_DEEV1_Soc_q (&iedModel_CTRL_DEEV1_Soc_q)
//  #define IEDMODEL_CTRL_DEEV1_Soc_t (&iedModel_CTRL_DEEV1_Soc_t)
//  #define IEDMODEL_CTRL_DEEV1_EVId (&iedModel_CTRL_DEEV1_EVId)
//  #define IEDMODEL_CTRL_DEEV1_EVId_stVal (&iedModel_CTRL_DEEV1_EVId_stVal)
//  #define IEDMODEL_CTRL_DEEV1_DptTm (&iedModel_CTRL_DEEV1_DptTm)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_setMag (&iedModel_CTRL_DEEV1_DptTm_setMag)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_setMag_f (&iedModel_CTRL_DEEV1_DptTm_setMag_f)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper (&iedModel_CTRL_DEEV1_DptTm_Oper)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_ctlVal (&iedModel_CTRL_DEEV1_DptTm_Oper_ctlVal)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_origin (&iedModel_CTRL_DEEV1_DptTm_Oper_origin)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_origin_orCat (&iedModel_CTRL_DEEV1_DptTm_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_origin_orIdent (&iedModel_CTRL_DEEV1_DptTm_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_ctlNum (&iedModel_CTRL_DEEV1_DptTm_Oper_ctlNum)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_T (&iedModel_CTRL_DEEV1_DptTm_Oper_T)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_Test (&iedModel_CTRL_DEEV1_DptTm_Oper_Test)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_Oper_Check (&iedModel_CTRL_DEEV1_DptTm_Oper_Check)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_stVal (&iedModel_CTRL_DEEV1_DptTm_stVal)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_q (&iedModel_CTRL_DEEV1_DptTm_q)
//  #define IEDMODEL_CTRL_DEEV1_DptTm_t (&iedModel_CTRL_DEEV1_DptTm_t)
//  #define IEDMODEL_CTRL_DEEV1_VMax (&iedModel_CTRL_DEEV1_VMax)
//  #define IEDMODEL_CTRL_DEEV1_VMax_setMag (&iedModel_CTRL_DEEV1_VMax_setMag)
//  #define IEDMODEL_CTRL_DEEV1_VMax_setMag_f (&iedModel_CTRL_DEEV1_VMax_setMag_f)
//  #define IEDMODEL_CTRL_DEEV1_AMax (&iedModel_CTRL_DEEV1_AMax)
//  #define IEDMODEL_CTRL_DEEV1_AMax_setMag (&iedModel_CTRL_DEEV1_AMax_setMag)
//  #define IEDMODEL_CTRL_DEEV1_AMax_setMag_f (&iedModel_CTRL_DEEV1_AMax_setMag_f)
//  #define IEDMODEL_CTRL_DEEV1_AMin (&iedModel_CTRL_DEEV1_AMin)
//  #define IEDMODEL_CTRL_DEEV1_AMin_setMag (&iedModel_CTRL_DEEV1_AMin_setMag)
//  #define IEDMODEL_CTRL_DEEV1_AMin_setMag_f (&iedModel_CTRL_DEEV1_AMin_setMag_f)
//  #define IEDMODEL_CTRL_DEEV1_EnAmnt (&iedModel_CTRL_DEEV1_EnAmnt)
//  #define IEDMODEL_CTRL_DEEV1_EnAmnt_setMag (&iedModel_CTRL_DEEV1_EnAmnt_setMag)
//  #define IEDMODEL_CTRL_DEEV1_EnAmnt_setMag_f (&iedModel_CTRL_DEEV1_EnAmnt_setMag_f)

//  #define IEDMODEL_CTRL_XSWI1_Loc (&iedModel_CTRL_XSWI1_Loc)
//  #define IEDMODEL_CTRL_XSWI1_Loc_stVal (&iedModel_CTRL_XSWI1_Loc_stVal)
//  #define IEDMODEL_CTRL_XSWI1_Loc_q (&iedModel_CTRL_XSWI1_Loc_q)
//  #define IEDMODEL_CTRL_XSWI1_Loc_t (&iedModel_CTRL_XSWI1_Loc_t)
//  #define IEDMODEL_CTRL_XSWI1_SwTyp (&iedModel_CTRL_XSWI1_SwTyp)
//  #define IEDMODEL_CTRL_XSWI1_SwTyp_stVal (&iedModel_CTRL_XSWI1_SwTyp_stVal)
//  #define IEDMODEL_CTRL_XSWI1_SwTyp_q (&iedModel_CTRL_XSWI1_SwTyp_q)
//  #define IEDMODEL_CTRL_XSWI1_SwTyp_t (&iedModel_CTRL_XSWI1_SwTyp_t)
//  #define IEDMODEL_CTRL_XSWI1_OpCnt (&iedModel_CTRL_XSWI1_OpCnt)
//  #define IEDMODEL_CTRL_XSWI1_OpCnt_stVal (&iedModel_CTRL_XSWI1_OpCnt_stVal)
//  #define IEDMODEL_CTRL_XSWI1_OpCnt_q (&iedModel_CTRL_XSWI1_OpCnt_q)
//  #define IEDMODEL_CTRL_XSWI1_OpCnt_t (&iedModel_CTRL_XSWI1_OpCnt_t)
//  #define IEDMODEL_CTRL_XSWI1 (&iedModel_CTRL_XSWI1)
//  #define IEDMODEL_CTRL_XSWI1_Mod (&iedModel_CTRL_XSWI1_Mod)
//  #define IEDMODEL_CTRL_XSWI1_Mod_ctlVal (&iedModel_CTRL_XSWI1_Mod_ctlVal) /* ADICIONADO */
//  #define IEDMODEL_CTRL_XSWI1_Mod_stVal (&iedModel_CTRL_XSWI1_Mod_stVal)
//  #define IEDMODEL_CTRL_XSWI1_Mod_q (&iedModel_CTRL_XSWI1_Mod_q)
//  #define IEDMODEL_CTRL_XSWI1_Mod_t (&iedModel_CTRL_XSWI1_Mod_t)
//  #define IEDMODEL_CTRL_XSWI1_Mod_ctlModel (&iedModel_CTRL_XSWI1_Mod_ctlModel)
//  #define IEDMODEL_CTRL_XSWI1_Beh (&iedModel_CTRL_XSWI1_Beh)
//  #define IEDMODEL_CTRL_XSWI1_Beh_stVal (&iedModel_CTRL_XSWI1_Beh_stVal)
//  #define IEDMODEL_CTRL_XSWI1_Beh_q (&iedModel_CTRL_XSWI1_Beh_q)
//  #define IEDMODEL_CTRL_XSWI1_Beh_t (&iedModel_CTRL_XSWI1_Beh_t)
//  #define IEDMODEL_CTRL_XSWI1_Health (&iedModel_CTRL_XSWI1_Health)
//  #define IEDMODEL_CTRL_XSWI1_Health_stVal (&iedModel_CTRL_XSWI1_Health_stVal)
//  #define IEDMODEL_CTRL_XSWI1_Health_q (&iedModel_CTRL_XSWI1_Health_q)
//  #define IEDMODEL_CTRL_XSWI1_Health_t (&iedModel_CTRL_XSWI1_Health_t)
//  #define IEDMODEL_CTRL_XSWI1_Pos (&iedModel_CTRL_XSWI1_Pos)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper (&iedModel_CTRL_XSWI1_Pos_Oper)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_ctlVal (&iedModel_CTRL_XSWI1_Pos_Oper_ctlVal)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_origin (&iedModel_CTRL_XSWI1_Pos_Oper_origin)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_origin_orCat (&iedModel_CTRL_XSWI1_Pos_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_origin_orIdent (&iedModel_CTRL_XSWI1_Pos_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_ctlNum (&iedModel_CTRL_XSWI1_Pos_Oper_ctlNum)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_T (&iedModel_CTRL_XSWI1_Pos_Oper_T)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_Test (&iedModel_CTRL_XSWI1_Pos_Oper_Test)
//  #define IEDMODEL_CTRL_XSWI1_Pos_Oper_Check (&iedModel_CTRL_XSWI1_Pos_Oper_Check)
//  #define IEDMODEL_CTRL_XSWI1_Pos_stVal (&iedModel_CTRL_XSWI1_Pos_stVal)
//  #define IEDMODEL_CTRL_XSWI1_Pos_q (&iedModel_CTRL_XSWI1_Pos_q)
//  #define IEDMODEL_CTRL_XSWI1_Pos_t (&iedModel_CTRL_XSWI1_Pos_t)
//  #define IEDMODEL_CTRL_XSWI1_Pos_ctlModel (&iedModel_CTRL_XSWI1_Pos_ctlModel)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn (&iedModel_CTRL_XSWI1_BlkOpn)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper (&iedModel_CTRL_XSWI1_BlkOpn_Oper)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_ctlVal (&iedModel_CTRL_XSWI1_BlkOpn_Oper_ctlVal)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_origin (&iedModel_CTRL_XSWI1_BlkOpn_Oper_origin)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_origin_orCat (&iedModel_CTRL_XSWI1_BlkOpn_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_origin_orIdent (&iedModel_CTRL_XSWI1_BlkOpn_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_ctlNum (&iedModel_CTRL_XSWI1_BlkOpn_Oper_ctlNum)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_T (&iedModel_CTRL_XSWI1_BlkOpn_Oper_T)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_Test (&iedModel_CTRL_XSWI1_BlkOpn_Oper_Test)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_Oper_Check (&iedModel_CTRL_XSWI1_BlkOpn_Oper_Check)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_stVal (&iedModel_CTRL_XSWI1_BlkOpn_stVal)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_q (&iedModel_CTRL_XSWI1_BlkOpn_q)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_t (&iedModel_CTRL_XSWI1_BlkOpn_t)
//  #define IEDMODEL_CTRL_XSWI1_BlkOpn_ctlModel (&iedModel_CTRL_XSWI1_BlkOpn_ctlModel)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls (&iedModel_CTRL_XSWI1_BlkCls)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_ctlVal (&iedModel_CTRL_XSWI1_BlkCls_ctlVal) /* CORRIGIDO: DPC -> SPC */
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_stVal (&iedModel_CTRL_XSWI1_BlkCls_stVal)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_q (&iedModel_CTRL_XSWI1_BlkCls_q)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_t (&iedModel_CTRL_XSWI1_BlkCls_t)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_ctlModel (&iedModel_CTRL_XSWI1_BlkCls_ctlModel)

//  /* #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper (&iedModel_CTRL_XSWI1_BlkCls_Oper)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_ctlVal (&iedModel_CTRL_XSWI1_BlkCls_Oper_ctlVal)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_origin (&iedModel_CTRL_XSWI1_BlkCls_Oper_origin)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_origin_orCat (&iedModel_CTRL_XSWI1_BlkCls_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_origin_orIdent (&iedModel_CTRL_XSWI1_BlkCls_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_ctlNum (&iedModel_CTRL_XSWI1_BlkCls_Oper_ctlNum)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_T (&iedModel_CTRL_XSWI1_BlkCls_Oper_T)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_Test (&iedModel_CTRL_XSWI1_BlkCls_Oper_Test)
//  #define IEDMODEL_CTRL_XSWI1_BlkCls_Oper_Check (&iedModel_CTRL_XSWI1_BlkCls_Oper_Check) */

//  #define IEDMODEL_CTRL_DBAT1 (&iedModel_CTRL_DBAT1)
//  #define IEDMODEL_CTRL_DBAT1_EEName (&iedModel_CTRL_DBAT1_EEName)
//  #define IEDMODEL_CTRL_DBAT1_EEName_vendor (&iedModel_CTRL_DBAT1_EEName_vendor)
//  #define IEDMODEL_CTRL_DBAT1_ChaSt (&iedModel_CTRL_DBAT1_ChaSt)
//  #define IEDMODEL_CTRL_DBAT1_ChaSt_stVal (&iedModel_CTRL_DBAT1_ChaSt_stVal)
//  #define IEDMODEL_CTRL_DBAT1_ChaSt_q (&iedModel_CTRL_DBAT1_ChaSt_q)
//  #define IEDMODEL_CTRL_DBAT1_ChaSt_t (&iedModel_CTRL_DBAT1_ChaSt_t)
//  #define IEDMODEL_CTRL_DBAT1_DschSt (&iedModel_CTRL_DBAT1_DschSt)
//  #define IEDMODEL_CTRL_DBAT1_DschSt_stVal (&iedModel_CTRL_DBAT1_DschSt_stVal)
//  #define IEDMODEL_CTRL_DBAT1_DschSt_q (&iedModel_CTRL_DBAT1_DschSt_q)
//  #define IEDMODEL_CTRL_DBAT1_DschSt_t (&iedModel_CTRL_DBAT1_DschSt_t)
//  #define IEDMODEL_CTRL_DBAT1_EEHealth (&iedModel_CTRL_DBAT1_EEHealth)
//  #define IEDMODEL_CTRL_DBAT1_EEHealth_stVal (&iedModel_CTRL_DBAT1_EEHealth_stVal)
//  #define IEDMODEL_CTRL_DBAT1_EEHealth_q (&iedModel_CTRL_DBAT1_EEHealth_q)
//  #define IEDMODEL_CTRL_DBAT1_EEHealth_t (&iedModel_CTRL_DBAT1_EEHealth_t)
//  #define IEDMODEL_CTRL_DBAT1_Amp (&iedModel_CTRL_DBAT1_Amp)
//  #define IEDMODEL_CTRL_DBAT1_Amp_mag (&iedModel_CTRL_DBAT1_Amp_mag)
//  #define IEDMODEL_CTRL_DBAT1_Amp_mag_f (&iedModel_CTRL_DBAT1_Amp_mag_f)
//  #define IEDMODEL_CTRL_DBAT1_Amp_q (&iedModel_CTRL_DBAT1_Amp_q)
//  #define IEDMODEL_CTRL_DBAT1_Amp_t (&iedModel_CTRL_DBAT1_Amp_t)
//  #define IEDMODEL_CTRL_DBAT1_Watt (&iedModel_CTRL_DBAT1_Watt)
//  #define IEDMODEL_CTRL_DBAT1_Watt_mag (&iedModel_CTRL_DBAT1_Watt_mag)
//  #define IEDMODEL_CTRL_DBAT1_Watt_mag_f (&iedModel_CTRL_DBAT1_Watt_mag_f)
//  #define IEDMODEL_CTRL_DBAT1_Watt_q (&iedModel_CTRL_DBAT1_Watt_q)
//  #define IEDMODEL_CTRL_DBAT1_Watt_t (&iedModel_CTRL_DBAT1_Watt_t)
//  #define IEDMODEL_CTRL_DBAT1_AvlChaAhr (&iedModel_CTRL_DBAT1_AvlChaAhr)
//  #define IEDMODEL_CTRL_DBAT1_AvlChaAhr_mag (&iedModel_CTRL_DBAT1_AvlChaAhr_mag)
//  #define IEDMODEL_CTRL_DBAT1_AvlChaAhr_mag_f (&iedModel_CTRL_DBAT1_AvlChaAhr_mag_f)
//  #define IEDMODEL_CTRL_DBAT1_AvlChaAhr_q (&iedModel_CTRL_DBAT1_AvlChaAhr_q)
//  #define IEDMODEL_CTRL_DBAT1_AvlChaAhr_t (&iedModel_CTRL_DBAT1_AvlChaAhr_t)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr (&iedModel_CTRL_DBAT1_AvlDschAhr)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_Oper (&iedModel_CTRL_DBAT1_AvlDschAhr_Oper) /* ADICIONADO */
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_Oper_ctlVal (&iedModel_CTRL_DBAT1_AvlDschAhr_Oper_ctlVal)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_Oper_origin (&iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_Oper_origin_orCat (&iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_Oper_origin_orIdent (&iedModel_CTRL_DBAT1_AvlDschAhr_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_setMag (&iedModel_CTRL_DBAT1_AvlDschAhr_setMag)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_setMag_f (&iedModel_CTRL_DBAT1_AvlDschAhr_setMag_f)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_q (&iedModel_CTRL_DBAT1_AvlDschAhr_q)
//  #define IEDMODEL_CTRL_DBAT1_AvlDschAhr_t (&iedModel_CTRL_DBAT1_AvlDschAhr_t)
//  #define IEDMODEL_CTRL_DBAT1_BatTyp (&iedModel_CTRL_DBAT1_BatTyp)
//  #define IEDMODEL_CTRL_DBAT1_BatTyp_stVal (&iedModel_CTRL_DBAT1_BatTyp_stVal)
//  #define IEDMODEL_CTRL_DBAT1_BatTyp_q (&iedModel_CTRL_DBAT1_BatTyp_q)
//  #define IEDMODEL_CTRL_DBAT1_BatTyp_t (&iedModel_CTRL_DBAT1_BatTyp_t)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax (&iedModel_CTRL_DBAT1_ChaAmpMax)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_Oper (&iedModel_CTRL_DBAT1_ChaAmpMax_Oper) /* ADICIONADO */
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_Oper_ctlVal (&iedModel_CTRL_DBAT1_ChaAmpMax_Oper_ctlVal)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_Oper_origin (&iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_Oper_origin_orCat (&iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_Oper_origin_orIdent (&iedModel_CTRL_DBAT1_ChaAmpMax_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_setMag (&iedModel_CTRL_DBAT1_ChaAmpMax_setMag)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_setMag_f (&iedModel_CTRL_DBAT1_ChaAmpMax_setMag_f)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_q (&iedModel_CTRL_DBAT1_ChaAmpMax_q)
//  #define IEDMODEL_CTRL_DBAT1_ChaAmpMax_t (&iedModel_CTRL_DBAT1_ChaAmpMax_t)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg (&iedModel_CTRL_DBAT1_AhrRtg)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_Oper (&iedModel_CTRL_DBAT1_AhrRtg_Oper) /* ADICIONADO */
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_Oper_ctlVal (&iedModel_CTRL_DBAT1_AhrRtg_Oper_ctlVal)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_Oper_origin (&iedModel_CTRL_DBAT1_AhrRtg_Oper_origin)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_Oper_origin_orCat (&iedModel_CTRL_DBAT1_AhrRtg_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_Oper_origin_orIdent (&iedModel_CTRL_DBAT1_AhrRtg_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_setMag (&iedModel_CTRL_DBAT1_AhrRtg_setMag)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_setMag_f (&iedModel_CTRL_DBAT1_AhrRtg_setMag_f)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_q (&iedModel_CTRL_DBAT1_AhrRtg_q)
//  #define IEDMODEL_CTRL_DBAT1_AhrRtg_t (&iedModel_CTRL_DBAT1_AhrRtg_t)

//  #define IEDMODEL_CTRL_DESE1 (&iedModel_CTRL_DESE1)
//  #define IEDMODEL_CTRL_DESE1_Mod (&iedModel_CTRL_DESE1_Mod)
//  #define IEDMODEL_CTRL_DESE1_Mod_stVal (&iedModel_CTRL_DESE1_Mod_stVal)
//  #define IEDMODEL_CTRL_DESE1_Mod_q (&iedModel_CTRL_DESE1_Mod_q)
//  #define IEDMODEL_CTRL_DESE1_Mod_t (&iedModel_CTRL_DESE1_Mod_t)
//  #define IEDMODEL_CTRL_DESE1_Mod_ctlModel (&iedModel_CTRL_DESE1_Mod_ctlModel)
//  #define IEDMODEL_CTRL_DESE1_Beh (&iedModel_CTRL_DESE1_Beh)
//  #define IEDMODEL_CTRL_DESE1_Beh_stVal (&iedModel_CTRL_DESE1_Beh_stVal)
//  #define IEDMODEL_CTRL_DESE1_Beh_q (&iedModel_CTRL_DESE1_Beh_q)
//  #define IEDMODEL_CTRL_DESE1_Beh_t (&iedModel_CTRL_DESE1_Beh_t)
//  #define IEDMODEL_CTRL_DESE1_Health (&iedModel_CTRL_DESE1_Health)
//  #define IEDMODEL_CTRL_DESE1_Health_stVal (&iedModel_CTRL_DESE1_Health_stVal)
//  #define IEDMODEL_CTRL_DESE1_Health_q (&iedModel_CTRL_DESE1_Health_q)
//  #define IEDMODEL_CTRL_DESE1_Health_t (&iedModel_CTRL_DESE1_Health_t)
//  #define IEDMODEL_CTRL_DESE1_NamPlt (&iedModel_CTRL_DESE1_NamPlt)
//  #define IEDMODEL_CTRL_DESE1_NamPlt_vendor (&iedModel_CTRL_DESE1_NamPlt_vendor)
//  #define IEDMODEL_CTRL_DESE1_Loc (&iedModel_CTRL_DESE1_Loc)
//  #define IEDMODEL_CTRL_DESE1_Loc_stVal (&iedModel_CTRL_DESE1_Loc_stVal)
//  #define IEDMODEL_CTRL_DESE1_Loc_q (&iedModel_CTRL_DESE1_Loc_q)
//  #define IEDMODEL_CTRL_DESE1_Loc_t (&iedModel_CTRL_DESE1_Loc_t)
//  #define IEDMODEL_CTRL_DESE1_EVSENam (&iedModel_CTRL_DESE1_EVSENam)
//  #define IEDMODEL_CTRL_DESE1_EVSENam_stVal (&iedModel_CTRL_DESE1_EVSENam_stVal)
//  #define IEDMODEL_CTRL_DESE1_EVSEId (&iedModel_CTRL_DESE1_EVSEId)
//  #define IEDMODEL_CTRL_DESE1_EVSEId_stVal (&iedModel_CTRL_DESE1_EVSEId_stVal)
//  #define IEDMODEL_CTRL_DESE1_DigCommLos (&iedModel_CTRL_DESE1_DigCommLos)
//  #define IEDMODEL_CTRL_DESE1_DigCommLos_stVal (&iedModel_CTRL_DESE1_DigCommLos_stVal)
//  #define IEDMODEL_CTRL_DESE1_DigCommLos_q (&iedModel_CTRL_DESE1_DigCommLos_q)
//  #define IEDMODEL_CTRL_DESE1_DigCommLos_t (&iedModel_CTRL_DESE1_DigCommLos_t)
//  #define IEDMODEL_CTRL_DESE1_WldDet (&iedModel_CTRL_DESE1_WldDet)
//  #define IEDMODEL_CTRL_DESE1_WldDet_stVal (&iedModel_CTRL_DESE1_WldDet_stVal)
//  #define IEDMODEL_CTRL_DESE1_WldDet_q (&iedModel_CTRL_DESE1_WldDet_q)
//  #define IEDMODEL_CTRL_DESE1_WldDet_t (&iedModel_CTRL_DESE1_WldDet_t)
//  #define IEDMODEL_CTRL_DESE1_ChaV (&iedModel_CTRL_DESE1_ChaV)
//  #define IEDMODEL_CTRL_DESE1_ChaV_mag (&iedModel_CTRL_DESE1_ChaV_mag)
//  #define IEDMODEL_CTRL_DESE1_ChaV_mag_f (&iedModel_CTRL_DESE1_ChaV_mag_f)
//  #define IEDMODEL_CTRL_DESE1_ChaV_q (&iedModel_CTRL_DESE1_ChaV_q)
//  #define IEDMODEL_CTRL_DESE1_ChaV_t (&iedModel_CTRL_DESE1_ChaV_t)
//  #define IEDMODEL_CTRL_DESE1_ChaA (&iedModel_CTRL_DESE1_ChaA)
//  #define IEDMODEL_CTRL_DESE1_ChaA_mag (&iedModel_CTRL_DESE1_ChaA_mag)
//  #define IEDMODEL_CTRL_DESE1_ChaA_mag_f (&iedModel_CTRL_DESE1_ChaA_mag_f)
//  #define IEDMODEL_CTRL_DESE1_ChaA_q (&iedModel_CTRL_DESE1_ChaA_q)
//  #define IEDMODEL_CTRL_DESE1_ChaA_t (&iedModel_CTRL_DESE1_ChaA_t)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt (&iedModel_CTRL_DESE1_ChaPwrTgt)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_setMag (&iedModel_CTRL_DESE1_ChaPwrTgt_setMag)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_setMag_f (&iedModel_CTRL_DESE1_ChaPwrTgt_setMag_f)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_ctlVal (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_ctlVal)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_origin (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_origin_orCat (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin_orCat)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_origin_orIdent (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_origin_orIdent)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_ctlNum (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_ctlNum)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_T (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_T)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_Test (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_Test)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_Oper_Check (&iedModel_CTRL_DESE1_ChaPwrTgt_Oper_Check)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_stVal (&iedModel_CTRL_DESE1_ChaPwrTgt_stVal)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_q (&iedModel_CTRL_DESE1_ChaPwrTgt_q)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrTgt_t (&iedModel_CTRL_DESE1_ChaPwrTgt_t)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrLim (&iedModel_CTRL_DESE1_ChaPwrLim)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrLim_mag (&iedModel_CTRL_DESE1_ChaPwrLim_mag)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrLim_mag_f (&iedModel_CTRL_DESE1_ChaPwrLim_mag_f)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrLim_q (&iedModel_CTRL_DESE1_ChaPwrLim_q)
//  #define IEDMODEL_CTRL_DESE1_ChaPwrLim_t (&iedModel_CTRL_DESE1_ChaPwrLim_t)
//  #define IEDMODEL_CTRL_DESE1_ConnTypDC (&iedModel_CTRL_DESE1_ConnTypDC)
//  #define IEDMODEL_CTRL_DESE1_ConnTypDC_stVal (&iedModel_CTRL_DESE1_ConnTypDC_stVal)
//  #define IEDMODEL_CTRL_DESE1_ConnTypDC_q (&iedModel_CTRL_DESE1_ConnTypDC_q)
//  #define IEDMODEL_CTRL_DESE1_ConnTypDC_t (&iedModel_CTRL_DESE1_ConnTypDC_t)
//  #define IEDMODEL_CTRL_DESE1_ConnTypPhs (&iedModel_CTRL_DESE1_ConnTypPhs)
//  #define IEDMODEL_CTRL_DESE1_ConnTypPhs_stVal (&iedModel_CTRL_DESE1_ConnTypPhs_stVal)
//  #define IEDMODEL_CTRL_DESE1_ConnTypPhs_q (&iedModel_CTRL_DESE1_ConnTypPhs_q)
//  #define IEDMODEL_CTRL_DESE1_ConnTypPhs_t (&iedModel_CTRL_DESE1_ConnTypPhs_t)
//  #define IEDMODEL_CTRL_DESE1_ConnACRef (&iedModel_CTRL_DESE1_ConnACRef)
//  #define IEDMODEL_CTRL_DESE1_ConnACRef_stVal (&iedModel_CTRL_DESE1_ConnACRef_stVal)
//  #define IEDMODEL_CTRL_DESE1_ConnDCRef (&iedModel_CTRL_DESE1_ConnDCRef)
//  #define IEDMODEL_CTRL_DESE1_ConnDCRef_stVal (&iedModel_CTRL_DESE1_ConnDCRef_stVal)

  #define IEDMODEL_CTRL_LGOS1 (&iedModel_CTRL_LGOS1)
  #define IEDMODEL_CTRL_LGOS1_Mod (&iedModel_CTRL_LGOS1_Mod)
  #define IEDMODEL_CTRL_LGOS1_Mod_ctlVal (&iedModel_CTRL_LGOS1_Mod_ctlVal) /* ADICIONADO */
  #define IEDMODEL_CTRL_LGOS1_Mod_stVal (&iedModel_CTRL_LGOS1_Mod_stVal)
  #define IEDMODEL_CTRL_LGOS1_Mod_q (&iedModel_CTRL_LGOS1_Mod_q)
  #define IEDMODEL_CTRL_LGOS1_Mod_t (&iedModel_CTRL_LGOS1_Mod_t)
  #define IEDMODEL_CTRL_LGOS1_Mod_ctlModel (&iedModel_CTRL_LGOS1_Mod_ctlModel)
  #define IEDMODEL_CTRL_LGOS1_Beh (&iedModel_CTRL_LGOS1_Beh)
  #define IEDMODEL_CTRL_LGOS1_Beh_stVal (&iedModel_CTRL_LGOS1_Beh_stVal)
  #define IEDMODEL_CTRL_LGOS1_Beh_q (&iedModel_CTRL_LGOS1_Beh_q)
  #define IEDMODEL_CTRL_LGOS1_Beh_t (&iedModel_CTRL_LGOS1_Beh_t)
  #define IEDMODEL_CTRL_LGOS1_Health (&iedModel_CTRL_LGOS1_Health)
  #define IEDMODEL_CTRL_LGOS1_Health_stVal (&iedModel_CTRL_LGOS1_Health_stVal)
  #define IEDMODEL_CTRL_LGOS1_Health_q (&iedModel_CTRL_LGOS1_Health_q)
  #define IEDMODEL_CTRL_LGOS1_Health_t (&iedModel_CTRL_LGOS1_Health_t)
  #define IEDMODEL_CTRL_LGOS1_NamPlt (&iedModel_CTRL_LGOS1_NamPlt)
  #define IEDMODEL_CTRL_LGOS1_NamPlt_vendor (&iedModel_CTRL_LGOS1_NamPlt_vendor)
  #define IEDMODEL_CTRL_LGOS1_GoCBRef (&iedModel_CTRL_LGOS1_GoCBRef)
  #define IEDMODEL_CTRL_LGOS1_GoCBRef_stVal (&iedModel_CTRL_LGOS1_GoCBRef_stVal)
  #define IEDMODEL_CTRL_LGOS1_St (&iedModel_CTRL_LGOS1_St)
  #define IEDMODEL_CTRL_LGOS1_St_stVal (&iedModel_CTRL_LGOS1_St_stVal)
  #define IEDMODEL_CTRL_LGOS1_St_q (&iedModel_CTRL_LGOS1_St_q)
  #define IEDMODEL_CTRL_LGOS1_St_t (&iedModel_CTRL_LGOS1_St_t)
  #define IEDMODEL_CTRL_LGOS1_NdsCom (&iedModel_CTRL_LGOS1_NdsCom)
  #define IEDMODEL_CTRL_LGOS1_NdsCom_stVal (&iedModel_CTRL_LGOS1_NdsCom_stVal)
  #define IEDMODEL_CTRL_LGOS1_NdsCom_q (&iedModel_CTRL_LGOS1_NdsCom_q)
  #define IEDMODEL_CTRL_LGOS1_NdsCom_t (&iedModel_CTRL_LGOS1_NdsCom_t)
  #define IEDMODEL_CTRL_LGOS1_SimSt (&iedModel_CTRL_LGOS1_SimSt)
  #define IEDMODEL_CTRL_LGOS1_SimSt_stVal (&iedModel_CTRL_LGOS1_SimSt_stVal)
  #define IEDMODEL_CTRL_LGOS1_SimSt_q (&iedModel_CTRL_LGOS1_SimSt_q)
  #define IEDMODEL_CTRL_LGOS1_SimSt_t (&iedModel_CTRL_LGOS1_SimSt_t)
  #define IEDMODEL_CTRL_LGOS1_ConfRevNum (&iedModel_CTRL_LGOS1_ConfRevNum)
  #define IEDMODEL_CTRL_LGOS1_ConfRevNum_stVal (&iedModel_CTRL_LGOS1_ConfRevNum_stVal)
  #define IEDMODEL_CTRL_LGOS1_ConfRevNum_q (&iedModel_CTRL_LGOS1_ConfRevNum_q)
  #define IEDMODEL_CTRL_LGOS1_ConfRevNum_t (&iedModel_CTRL_LGOS1_ConfRevNum_t)
  #define IEDMODEL_CTRL_LGOS1_RxConfRevNum (&iedModel_CTRL_LGOS1_RxConfRevNum)
  #define IEDMODEL_CTRL_LGOS1_RxConfRevNum_stVal (&iedModel_CTRL_LGOS1_RxConfRevNum_stVal)
  #define IEDMODEL_CTRL_LGOS1_RxConfRevNum_q (&iedModel_CTRL_LGOS1_RxConfRevNum_q)
  #define IEDMODEL_CTRL_LGOS1_RxConfRevNum_t (&iedModel_CTRL_LGOS1_RxConfRevNum_t)
  #define IEDMODEL_CTRL_LGOS1_LastStNum (&iedModel_CTRL_LGOS1_LastStNum)
  #define IEDMODEL_CTRL_LGOS1_LastStNum_stVal (&iedModel_CTRL_LGOS1_LastStNum_stVal)
  #define IEDMODEL_CTRL_LGOS1_LastStNum_q (&iedModel_CTRL_LGOS1_LastStNum_q)
  #define IEDMODEL_CTRL_LGOS1_LastStNum_t (&iedModel_CTRL_LGOS1_LastStNum_t)

#define IEDMODEL_CTRL_LTIM1 (&iedModel_CTRL_LTIM1)
//  #define IEDMODEL_CTRL_LTIM1_Mod (&iedModel_CTRL_LTIM1_Mod)
//  #define IEDMODEL_CTRL_LTIM1_Mod_ctlVal (&iedModel_CTRL_LTIM1_Mod_ctlVal) /* ADICIONADO */
//  #define IEDMODEL_CTRL_LTIM1_Mod_stVal (&iedModel_CTRL_LTIM1_Mod_stVal)
//  #define IEDMODEL_CTRL_LTIM1_Mod_q (&iedModel_CTRL_LTIM1_Mod_q)
//  #define IEDMODEL_CTRL_LTIM1_Mod_t (&iedModel_CTRL_LTIM1_Mod_t)
//  #define IEDMODEL_CTRL_LTIM1_Mod_ctlModel (&iedModel_CTRL_LTIM1_Mod_ctlModel)
  #define IEDMODEL_CTRL_LTIM1_Beh (&iedModel_CTRL_LTIM1_Beh)
  #define IEDMODEL_CTRL_LTIM1_Beh_stVal (&iedModel_CTRL_LTIM1_Beh_stVal)
  #define IEDMODEL_CTRL_LTIM1_Beh_q (&iedModel_CTRL_LTIM1_Beh_q)
  #define IEDMODEL_CTRL_LTIM1_Beh_t (&iedModel_CTRL_LTIM1_Beh_t)
  #define IEDMODEL_CTRL_LTIM1_Health (&iedModel_CTRL_LTIM1_Health)
  #define IEDMODEL_CTRL_LTIM1_Health_stVal (&iedModel_CTRL_LTIM1_Health_stVal)
  #define IEDMODEL_CTRL_LTIM1_Health_q (&iedModel_CTRL_LTIM1_Health_q)
  #define IEDMODEL_CTRL_LTIM1_Health_t (&iedModel_CTRL_LTIM1_Health_t)
//  #define IEDMODEL_CTRL_LTIM1_NamPlt (&iedModel_CTRL_LTIM1_NamPlt)
//  #define IEDMODEL_CTRL_LTIM1_NamPlt_vendor (&iedModel_CTRL_LTIM1_NamPlt_vendor)
  #define IEDMODEL_CTRL_LTIM1_Tm (&iedModel_CTRL_LTIM1_Tm)
  #define IEDMODEL_CTRL_LTIM1_Tm_stVal (&iedModel_CTRL_LTIM1_Tm_stVal)
  #define IEDMODEL_CTRL_LTIM1_Tm_q (&iedModel_CTRL_LTIM1_Tm_q)
  #define IEDMODEL_CTRL_LTIM1_Tm_t (&iedModel_CTRL_LTIM1_Tm_t)

  #define IEDMODEL_CTRL_LTMS1 (&iedModel_CTRL_LTMS1)
//  #define IEDMODEL_CTRL_LTMS1_Mod (&iedModel_CTRL_LTMS1_Mod)
//  #define IEDMODEL_CTRL_LTMS1_Mod_ctlVal (&iedModel_CTRL_LTMS1_Mod_ctlVal) /* ADICIONADO */
//  #define IEDMODEL_CTRL_LTMS1_Mod_stVal (&iedModel_CTRL_LTMS1_Mod_stVal)
//  #define IEDMODEL_CTRL_LTMS1_Mod_q (&iedModel_CTRL_LTMS1_Mod_q)
//  #define IEDMODEL_CTRL_LTMS1_Mod_t (&iedModel_CTRL_LTMS1_Mod_t)
//  #define IEDMODEL_CTRL_LTMS1_Mod_ctlModel (&iedModel_CTRL_LTMS1_Mod_ctlModel)
  #define IEDMODEL_CTRL_LTMS1_Beh (&iedModel_CTRL_LTMS1_Beh)
  #define IEDMODEL_CTRL_LTMS1_Beh_stVal (&iedModel_CTRL_LTMS1_Beh_stVal)
  #define IEDMODEL_CTRL_LTMS1_Beh_q (&iedModel_CTRL_LTMS1_Beh_q)
  #define IEDMODEL_CTRL_LTMS1_Beh_t (&iedModel_CTRL_LTMS1_Beh_t)
//  #define IEDMODEL_CTRL_LTMS1_Health (&iedModel_CTRL_LTMS1_Health)
//  #define IEDMODEL_CTRL_LTMS1_Health_stVal (&iedModel_CTRL_LTMS1_Health_stVal)
//  #define IEDMODEL_CTRL_LTMS1_Health_q (&iedModel_CTRL_LTMS1_Health_q)
//  #define IEDMODEL_CTRL_LTMS1_Health_t (&iedModel_CTRL_LTMS1_Health_t)
//  #define IEDMODEL_CTRL_LTMS1_NamPlt (&iedModel_CTRL_LTMS1_NamPlt)
//  #define IEDMODEL_CTRL_LTMS1_NamPlt_vendor (&iedModel_CTRL_LTMS1_NamPlt_vendor)
  #define IEDMODEL_CTRL_LTMS1_TmSrc (&iedModel_CTRL_LTMS1_TmSrc)
  #define IEDMODEL_CTRL_LTMS1_TmSrc_stVal (&iedModel_CTRL_LTMS1_TmSrc_stVal)
  #define IEDMODEL_CTRL_LTMS1_TmSrc_q (&iedModel_CTRL_LTMS1_TmSrc_q)
  #define IEDMODEL_CTRL_LTMS1_TmSrc_t (&iedModel_CTRL_LTMS1_TmSrc_t)
  #define IEDMODEL_CTRL_LTMS1_TmSrcTyp (&iedModel_CTRL_LTMS1_TmSrcTyp)
  #define IEDMODEL_CTRL_LTMS1_TmSrcTyp_stVal (&iedModel_CTRL_LTMS1_TmSrcTyp_stVal)
  #define IEDMODEL_CTRL_LTMS1_TmSrcTyp_q (&iedModel_CTRL_LTMS1_TmSrcTyp_q)
  #define IEDMODEL_CTRL_LTMS1_TmSrcTyp_t (&iedModel_CTRL_LTMS1_TmSrcTyp_t)

 #endif /* STATIC_MODEL_H_ */