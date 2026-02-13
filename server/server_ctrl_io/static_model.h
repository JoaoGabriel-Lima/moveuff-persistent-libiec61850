 #ifndef STATIC_MODEL_H_
 #define STATIC_MODEL_H_

 #include <stdlib.h>
 #include "iec61850_model.h"

 extern IedModel iedModel;
 extern LogicalDevice iedModel_B1CTR; //Dispositivo Lógico

 /* LNs */
 extern LogicalNode iedModel_B1CTR_LPHD1;
 extern LogicalNode iedModel_B1CTR_LLN0;
 extern LogicalNode iedModel_B1CTR_LGOS1;
 extern LogicalNode iedModel_B1CTR_LTIM1;
 extern LogicalNode iedModel_B1CTR_LTMS1;
 extern LogicalNode iedModel_B1CTR_LTRK1;

/* =================================================================
 * LPHD1
 * =================================================================
 */

 extern DataObject iedModel_B1CTR_LPHD1_NamPlt;
 extern DataAttribute iedModel_B1CTR_LPHD1_NamPlt_vendor;
 extern DataAttribute iedModel_B1CTR_LPHD1_NamPlt_swRev;
 extern DataAttribute iedModel_B1CTR_LPHD1_NamPlt_lnNs;
 extern DataObject iedModel_B1CTR_LPHD1_PhyNam;
 extern DataAttribute iedModel_B1CTR_LPHD1_PhyNam_vendor;
 extern DataAttribute iedModel_B1CTR_LPHD1_PhyNam_model;
 extern DataObject iedModel_B1CTR_LPHD1_PhyHealth;
 extern DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_stVal;
 extern DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_q;
 extern DataAttribute iedModel_B1CTR_LPHD1_PhyHealth_t;
 extern DataObject iedModel_B1CTR_LPHD1_OutOv;
 extern DataAttribute iedModel_B1CTR_LPHD1_OutOv_stVal;
 extern DataAttribute iedModel_B1CTR_LPHD1_OutOv_q;
 extern DataAttribute iedModel_B1CTR_LPHD1_OutOv_t;
 extern DataObject iedModel_B1CTR_LPHD1_Proxy;
 extern DataAttribute iedModel_B1CTR_LPHD1_Proxy_stVal;
 extern DataAttribute iedModel_B1CTR_LPHD1_Proxy_q;
 extern DataAttribute iedModel_B1CTR_LPHD1_Proxy_t;
 extern DataObject iedModel_B1CTR_LPHD1_OpTmh;
 extern DataAttribute iedModel_B1CTR_LPHD1_OpTmh_stVal;
 extern DataAttribute iedModel_B1CTR_LPHD1_OpTmh_q;
 extern DataAttribute iedModel_B1CTR_LPHD1_OpTmh_t;
 extern DataObject iedModel_B1CTR_LPHD1_Sim; 
 extern DataAttribute iedModel_B1CTR_LPHD1_Sim_stVal;
 extern DataAttribute iedModel_B1CTR_LPHD1_Sim_q;
 extern DataAttribute iedModel_B1CTR_LPHD1_Sim_t;
 extern DataAttribute iedModel_B1CTR_LPHD1_Sim_ctlModel;

/* =================================================================
 * LLN0
 * =================================================================
 */

extern DataObject iedModel_B1CTR_LLN0_Mod;
extern DataAttribute iedModel_B1CTR_LLN0_Mod_ctlVal; 
extern DataAttribute iedModel_B1CTR_LLN0_Mod_stVal;
extern DataAttribute iedModel_B1CTR_LLN0_Mod_q;
extern DataAttribute iedModel_B1CTR_LLN0_Mod_t;
extern DataAttribute iedModel_B1CTR_LLN0_Mod_ctlModel;
extern DataObject iedModel_B1CTR_LLN0_Beh;
extern DataAttribute iedModel_B1CTR_LLN0_Beh_stVal;
extern DataAttribute iedModel_B1CTR_LLN0_Beh_q;
extern DataAttribute iedModel_B1CTR_LLN0_Beh_t;
extern DataObject iedModel_B1CTR_LLN0_Health;
extern DataAttribute iedModel_B1CTR_LLN0_Health_stVal;
extern DataAttribute iedModel_B1CTR_LLN0_Health_q;
extern DataAttribute iedModel_B1CTR_LLN0_Health_t;
extern DataObject iedModel_B1CTR_LLN0_NamPlt;
extern DataAttribute iedModel_B1CTR_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_B1CTR_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_B1CTR_LLN0_NamPlt_lnNs;
extern DataAttribute iedModel_B1CTR_LLN0_NamPlt_configRev;
extern DataObject iedModel_B1CTR_LLN0_Diag;
extern DataAttribute iedModel_B1CTR_LLN0_Diag_stVal;
extern DataAttribute iedModel_B1CTR_LLN0_Diag_q;
extern DataAttribute iedModel_B1CTR_LLN0_Diag_t;
extern DataObject iedModel_B1CTR_LLN0_LEDRs;
extern DataAttribute iedModel_B1CTR_LLN0_LEDRs_stVal;
extern DataAttribute iedModel_B1CTR_LLN0_LEDRs_q;
extern DataAttribute iedModel_B1CTR_LLN0_LEDRs_t;
extern DataAttribute iedModel_B1CTR_LLN0_LEDRs_ctlModel;

/* =================================================================
 * LTRK1
 * =================================================================
 */

extern DataObject iedModel_B1CTR_LTRK1_Beh;
extern DataAttribute iedModel_B1CTR_LTRK1_Beh_stVal;
extern DataAttribute iedModel_B1CTR_LTRK1_Beh_q;
extern DataAttribute iedModel_B1CTR_LTRK1_Beh_t;
extern DataObject iedModel_B1CTR_LTRK1_Health;
extern DataAttribute iedModel_B1CTR_LTRK1_Health_stVal;
extern DataAttribute iedModel_B1CTR_LTRK1_Health_q;
extern DataAttribute iedModel_B1CTR_LTRK1_Health_t;
extern DataObject iedModel_B1CTR_LTRK1_GenTrk;
extern DataAttribute iedModel_B1CTR_LTRK1_GenTrk_objRef;
extern DataAttribute iedModel_B1CTR_LTRK1_GenTrk_serviceType;
extern DataAttribute iedModel_B1CTR_LTRK1_GenTrk_errorCode;
extern DataAttribute iedModel_B1CTR_LTRK1_GenTrk_t;
extern DataObject iedModel_B1CTR_LTRK1_GocbTrk;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_objRef;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_serviceType;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_errorCode;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_t;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goEna;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_goID;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_datSet;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_confRev;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_ndsCom;
extern DataAttribute iedModel_B1CTR_LTRK1_GocbTrk_dstAddress;

/* =================================================================
 * LGOS1
 * =================================================================
 */

extern DataObject iedModel_B1CTR_LGOS1_Mod;
extern DataAttribute iedModel_B1CTR_LGOS1_Mod_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_Mod_ctlVal;
extern DataAttribute iedModel_B1CTR_LGOS1_Mod_q;
extern DataAttribute iedModel_B1CTR_LGOS1_Mod_t;
extern DataAttribute iedModel_B1CTR_LGOS1_Mod_ctlModel;
extern DataObject iedModel_B1CTR_LGOS1_Beh;
extern DataAttribute iedModel_B1CTR_LGOS1_Beh_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_Beh_q;
extern DataAttribute iedModel_B1CTR_LGOS1_Beh_t;
extern DataObject iedModel_B1CTR_LGOS1_Health;
extern DataAttribute iedModel_B1CTR_LGOS1_Health_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_Health_q;
extern DataAttribute iedModel_B1CTR_LGOS1_Health_t;
extern DataObject iedModel_B1CTR_LGOS1_GoCBRef;
extern DataAttribute iedModel_B1CTR_LGOS1_GoCBRef_setSrcRef;
extern DataAttribute iedModel_B1CTR_LGOS1_St_t;
extern DataObject iedModel_B1CTR_LGOS1_St;
extern DataAttribute iedModel_B1CTR_LGOS1_St_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_St_q;
extern DataAttribute iedModel_B1CTR_LGOS1_St_t;
extern DataObject iedModel_B1CTR_LGOS1_NdsCom;
extern DataAttribute iedModel_B1CTR_LGOS1_NdsCom_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_NdsCom_q;
extern DataAttribute iedModel_B1CTR_LGOS1_NdsCom_t;
extern DataObject iedModel_B1CTR_LGOS1_SimSt;
extern DataAttribute iedModel_B1CTR_LGOS1_SimSt_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_SimSt_q;
extern DataAttribute iedModel_B1CTR_LGOS1_SimSt_t;
extern DataObject iedModel_B1CTR_LGOS1_ConfRevNum;
extern DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_q;
extern DataAttribute iedModel_B1CTR_LGOS1_ConfRevNum_t;
extern DataObject iedModel_B1CTR_LGOS1_RxConfRevNum;
extern DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_q;
extern DataAttribute iedModel_B1CTR_LGOS1_RxConfRevNum_t;
extern DataObject iedModel_B1CTR_LGOS1_LastStNum;
extern DataAttribute iedModel_B1CTR_LGOS1_LastStNum_stVal;
extern DataAttribute iedModel_B1CTR_LGOS1_LastStNum_q;
extern DataAttribute iedModel_B1CTR_LGOS1_LastStNum_t;

/* =================================================================
 * LTIM1
 * =================================================================
 */

extern DataObject iedModel_B1CTR_LTIM1_Beh;
extern DataAttribute iedModel_B1CTR_LTIM1_Beh_stVal;
extern DataAttribute iedModel_B1CTR_LTIM1_Beh_q;
extern DataAttribute iedModel_B1CTR_LTIM1_Beh_t;
extern DataObject iedModel_B1CTR_LTIM1_Health;
extern DataAttribute iedModel_B1CTR_LTIM1_Health_stVal;
extern DataAttribute iedModel_B1CTR_LTIM1_Health_q;
extern DataAttribute iedModel_B1CTR_LTIM1_Health_t;
extern DataObject iedModel_B1CTR_LTIM1_TmDT;
extern DataAttribute iedModel_B1CTR_LTIM1_TmDT_stVal;
extern DataAttribute iedModel_B1CTR_LTIM1_TmDT_q;
extern DataAttribute iedModel_B1CTR_LTIM1_TmDT_t;
extern DataObject iedModel_B1CTR_LTMS1_Beh;
extern DataAttribute iedModel_B1CTR_LTMS1_Beh_stVal;
extern DataAttribute iedModel_B1CTR_LTMS1_Beh_q;
extern DataAttribute iedModel_B1CTR_LTMS1_Beh_t;
extern DataObject iedModel_B1CTR_LTMS1_TmSrc;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrc_stVal;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrc_q;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrc_t;
extern DataObject iedModel_B1CTR_LTMS1_TmSrcTyp;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_stVal;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_q;
extern DataAttribute iedModel_B1CTR_LTMS1_TmSrcTyp_t;


#define IEDMODEL_B1CTR (&iedModel_B1CTR)

/* --- Defines LLN0 --- */
#define IEDMODEL_B1CTR_LPHD1 (&iedModel_B1CTR_LPHD1)
#define IEDMODEL_B1CTR_LPHD1_PhyNam (&iedModel_B1CTR_LPHD1_PhyNam)
#define IEDMODEL_B1CTR_LPHD1_PhyNam_vendor (&iedModel_B1CTR_LPHD1_PhyNam_vendor)
#define IEDMODEL_B1CTR_LPHD1_PhyNam_model (&iedModel_B1CTR_LPHD1_PhyNam_model)
#define IEDMODEL_B1CTR_LPHD1_PhyHealth (&iedModel_B1CTR_LPHD1_PhyHealth)
#define IEDMODEL_B1CTR_LPHD1_PhyHealth_stVal (&iedModel_B1CTR_LPHD1_PhyHealth_stVal)
#define IEDMODEL_B1CTR_LPHD1_PhyHealth_q (&iedModel_B1CTR_LPHD1_PhyHealth_q)
#define IEDMODEL_B1CTR_LPHD1_PhyHealth_t (&iedModel_B1CTR_LPHD1_PhyHealth_t)
#define IEDMODEL_B1CTR_LPHD1_OutOv (&iedModel_B1CTR_LPHD1_OutOv)
#define IEDMODEL_B1CTR_LPHD1_OutOv_stVal (&iedModel_B1CTR_LPHD1_OutOv_stVal)
#define IEDMODEL_B1CTR_LPHD1_OutOv_q (&iedModel_B1CTR_LPHD1_OutOv_q)
#define IEDMODEL_B1CTR_LPHD1_OutOv_t (&iedModel_B1CTR_LPHD1_OutOv_t)
#define IEDMODEL_B1CTR_LPHD1_Proxy (&iedModel_B1CTR_LPHD1_Proxy)
#define IEDMODEL_B1CTR_LPHD1_Proxy_stVal (&iedModel_B1CTR_LPHD1_Proxy_stVal)
#define IEDMODEL_B1CTR_LPHD1_Proxy_q (&iedModel_B1CTR_LPHD1_Proxy_q)
#define IEDMODEL_B1CTR_LPHD1_Proxy_t (&iedModel_B1CTR_LPHD1_Proxy_t)
#define IEDMODEL_B1CTR_LPHD1_OpTmh (&iedModel_B1CTR_LPHD1_OpTmh)
#define IEDMODEL_B1CTR_LPHD1_OpTmh_stVal (&iedModel_B1CTR_LPHD1_OpTmh_stVal)
#define IEDMODEL_B1CTR_LPHD1_OpTmh_q (&iedModel_B1CTR_LPHD1_OpTmh_q)
#define IEDMODEL_B1CTR_LPHD1_OpTmh_t (&iedModel_B1CTR_LPHD1_OpTmh_t)
#define IEDMODEL_B1CTR_LPHD1_Sim (&iedModel_B1CTR_LPHD1_Sim)
#define IEDMODEL_B1CTR_LPHD1_Sim_stVal (&iedModel_B1CTR_LPHD1_Sim_stVal)
#define IEDMODEL_B1CTR_LPHD1_Sim_q (&iedModel_B1CTR_LPHD1_Sim_q)
#define IEDMODEL_B1CTR_LPHD1_Sim_t (&iedModel_B1CTR_LPHD1_Sim_t)
#define IEDMODEL_B1CTR_LPHD1_Sim_ctlModel (&iedModel_B1CTR_LPHD1_Sim_ctlModel)
#define IEDMODEL_B1CTR_LPHD1_NamPlt (&iedModel_B1CTR_LPHD1_NamPlt)
#define IEDMODEL_B1CTR_LPHD1_NamPlt_vendor (&iedModel_B1CTR_LPHD1_NamPlt_vendor)
#define IEDMODEL_B1CTR_LPHD1_NamPlt_swRev (&iedModel_B1CTR_LPHD1_NamPlt_swRev)
#define IEDMODEL_B1CTR_LPHD1_NamPlt_lnNs (&iedModel_B1CTR_LPHD1_NamPlt_lnNs)

/* --- Defines LLN0 --- */
#define IEDMODEL_B1CTR_LLN0 (&iedModel_B1CTR_LLN0)
#define IEDMODEL_B1CTR_LLN0_Mod (&iedModel_B1CTR_LLN0_Mod)
#define IEDMODEL_B1CTR_LLN0_Mod_ctlVal (&iedModel_B1CTR_LLN0_Mod_ctlVal) /* ADICIONADO */
#define IEDMODEL_B1CTR_LLN0_Mod_stVal (&iedModel_B1CTR_LLN0_Mod_stVal)
#define IEDMODEL_B1CTR_LLN0_Mod_q (&iedModel_B1CTR_LLN0_Mod_q)
#define IEDMODEL_B1CTR_LLN0_Mod_t (&iedModel_B1CTR_LLN0_Mod_t)
#define IEDMODEL_B1CTR_LLN0_Mod_ctlModel (&iedModel_B1CTR_LLN0_Mod_ctlModel)
#define IEDMODEL_B1CTR_LLN0_Beh (&iedModel_B1CTR_LLN0_Beh)
#define IEDMODEL_B1CTR_LLN0_Beh_stVal (&iedModel_B1CTR_LLN0_Beh_stVal)
#define IEDMODEL_B1CTR_LLN0_Beh_q (&iedModel_B1CTR_LLN0_Beh_q)
#define IEDMODEL_B1CTR_LLN0_Beh_t (&iedModel_B1CTR_LLN0_Beh_t)
#define IEDMODEL_B1CTR_LLN0_Health (&iedModel_B1CTR_LLN0_Health)
#define IEDMODEL_B1CTR_LLN0_Health_stVal (&iedModel_B1CTR_LLN0_Health_stVal)
#define IEDMODEL_B1CTR_LLN0_Health_q (&iedModel_B1CTR_LLN0_Health_q)
#define IEDMODEL_B1CTR_LLN0_Health_t (&iedModel_B1CTR_LLN0_Health_t)
#define IEDMODEL_B1CTR_LLN0_NamPlt (&iedModel_B1CTR_LLN0_NamPlt)
#define IEDMODEL_B1CTR_LLN0_NamPlt_vendor (&iedModel_B1CTR_LLN0_NamPlt_vendor)
#define IEDMODEL_B1CTR_LLN0_NamPlt_swRev (&iedModel_B1CTR_LLN0_NamPlt_swRev)
#define IEDMODEL_B1CTR_LLN0_NamPlt_configRev (&iedModel_B1CTR_LLN0_NamPlt_configRev) 
#define IEDMODEL_B1CTR_LLN0_NamPlt_lnNs (&iedModel_B1CTR_LLN0_NamPlt_lnNs)
#define IEDMODEL_B1CTR_LLN0_Diag (&iedModel_B1CTR_LLN0_Diag)
#define IEDMODEL_B1CTR_LLN0_Diag_stVal (&iedModel_B1CTR_LLN0_Diag_stVal)
#define IEDMODEL_B1CTR_LLN0_Diag_q (&iedModel_B1CTR_LLN0_Diag_q)
#define IEDMODEL_B1CTR_LLN0_Diag_t (&iedModel_B1CTR_LLN0_Diag_t)
#define IEDMODEL_B1CTR_LLN0_LEDRs (&iedModel_B1CTR_LLN0_LEDRs)
#define IEDMODEL_B1CTR_LLN0_LEDRs_stVal (&iedModel_B1CTR_LLN0_LEDRs_stVal)
#define IEDMODEL_B1CTR_LLN0_LEDRs_q (&iedModel_B1CTR_LLN0_LEDRs_q)
#define IEDMODEL_B1CTR_LLN0_LEDRs_t (&iedModel_B1CTR_LLN0_LEDRs_t)
#define IEDMODEL_B1CTR_LLN0_LEDRs_ctlModel (&iedModel_B1CTR_LLN0_LEDRs_ctlModel)

/* --- Defines LGOS1 --- */
#define IEDMODEL_B1CTR_LGOS1 (&iedModel_B1CTR_LGOS1)
#define IEDMODEL_B1CTR_LGOS1_Beh (&iedModel_B1CTR_LGOS1_Beh)
#define IEDMODEL_B1CTR_LGOS1_Beh_stVal (&iedModel_B1CTR_LGOS1_Beh_stVal)
#define IEDMODEL_B1CTR_LGOS1_Beh_q (&iedModel_B1CTR_LGOS1_Beh_q)
#define IEDMODEL_B1CTR_LGOS1_Beh_t (&iedModel_B1CTR_LGOS1_Beh_t)
#define IEDMODEL_B1CTR_LGOS1_Health (&iedModel_B1CTR_LGOS1_Health)
#define IEDMODEL_B1CTR_LGOS1_Health_stVal (&iedModel_B1CTR_LGOS1_Health_stVal)
#define IEDMODEL_B1CTR_LGOS1_Health_q (&iedModel_B1CTR_LGOS1_Health_q)
#define IEDMODEL_B1CTR_LGOS1_Health_t (&iedModel_B1CTR_LGOS1_Health_t)
#define IEDMODEL_B1CTR_LGOS1_GoCBRef (&iedModel_B1CTR_LGOS1_GoCBRef)
#define IEDMODEL_B1CTR_LGOS1_GoCBRef_setSrcRef (&iedModel_B1CTR_LGOS1_GoCBRef_setSrcRef)
#define IEDMODEL_B1CTR_LGOS1_St (&iedModel_B1CTR_LGOS1_St)
#define IEDMODEL_B1CTR_LGOS1_St_stVal (&iedModel_B1CTR_LGOS1_St_stVal)
#define IEDMODEL_B1CTR_LGOS1_St_q (&iedModel_B1CTR_LGOS1_St_q)
#define IEDMODEL_B1CTR_LGOS1_St_t (&iedModel_B1CTR_LGOS1_St_t)
#define IEDMODEL_B1CTR_LGOS1_NdsCom (&iedModel_B1CTR_LGOS1_NdsCom)
#define IEDMODEL_B1CTR_LGOS1_NdsCom_stVal (&iedModel_B1CTR_LGOS1_NdsCom_stVal)
#define IEDMODEL_B1CTR_LGOS1_NdsCom_q (&iedModel_B1CTR_LGOS1_NdsCom_q)
#define IEDMODEL_B1CTR_LGOS1_NdsCom_t (&iedModel_B1CTR_LGOS1_NdsCom_t)
#define IEDMODEL_B1CTR_LGOS1_SimSt (&iedModel_B1CTR_LGOS1_SimSt)
#define IEDMODEL_B1CTR_LGOS1_SimSt_stVal (&iedModel_B1CTR_LGOS1_SimSt_stVal)
#define IEDMODEL_B1CTR_LGOS1_SimSt_q (&iedModel_B1CTR_LGOS1_SimSt_q)
#define IEDMODEL_B1CTR_LGOS1_SimSt_t (&iedModel_B1CTR_LGOS1_SimSt_t)
#define IEDMODEL_B1CTR_LGOS1_ConfRevNum (&iedModel_B1CTR_LGOS1_ConfRevNum)
#define IEDMODEL_B1CTR_LGOS1_ConfRevNum_stVal (&iedModel_B1CTR_LGOS1_ConfRevNum_stVal)
#define IEDMODEL_B1CTR_LGOS1_ConfRevNum_q (&iedModel_B1CTR_LGOS1_ConfRevNum_q)
#define IEDMODEL_B1CTR_LGOS1_ConfRevNum_t (&iedModel_B1CTR_LGOS1_ConfRevNum_t)
#define IEDMODEL_B1CTR_LGOS1_RxConfRevNum (&iedModel_B1CTR_LGOS1_RxConfRevNum)
#define IEDMODEL_B1CTR_LGOS1_RxConfRevNum_stVal (&iedModel_B1CTR_LGOS1_RxConfRevNum_stVal)
#define IEDMODEL_B1CTR_LGOS1_RxConfRevNum_q (&iedModel_B1CTR_LGOS1_RxConfRevNum_q)
#define IEDMODEL_B1CTR_LGOS1_RxConfRevNum_t (&iedModel_B1CTR_LGOS1_RxConfRevNum_t)
#define IEDMODEL_B1CTR_LGOS1_LastStNum (&iedModel_B1CTR_LGOS1_LastStNum)
#define IEDMODEL_B1CTR_LGOS1_LastStNum_stVal (&iedModel_B1CTR_LGOS1_LastStNum_stVal)
#define IEDMODEL_B1CTR_LGOS1_LastStNum_q (&iedModel_B1CTR_LGOS1_LastStNum_q)
#define IEDMODEL_B1CTR_LGOS1_LastStNum_t (&iedModel_B1CTR_LGOS1_LastStNum_t)

/* --- Defines LTIM1 --- */
#define IEDMODEL_B1CTR_LTIM1 (&iedModel_B1CTR_LTIM1)
#define IEDMODEL_B1CTR_LTIM1_Beh (&iedModel_B1CTR_LTIM1_Beh)
#define IEDMODEL_B1CTR_LTIM1_Beh_stVal (&iedModel_B1CTR_LTIM1_Beh_stVal)
#define IEDMODEL_B1CTR_LTIM1_Beh_q (&iedModel_B1CTR_LTIM1_Beh_q)
#define IEDMODEL_B1CTR_LTIM1_Beh_t (&iedModel_B1CTR_LTIM1_Beh_t)
#define IEDMODEL_B1CTR_LTIM1_Health (&iedModel_B1CTR_LTIM1_Health)
#define IEDMODEL_B1CTR_LTIM1_Health_stVal (&iedModel_B1CTR_LTIM1_Health_stVal)
#define IEDMODEL_B1CTR_LTIM1_Health_q (&iedModel_B1CTR_LTIM1_Health_q)
#define IEDMODEL_B1CTR_LTIM1_Health_t (&iedModel_B1CTR_LTIM1_Health_t)
#define IEDMODEL_B1CTR_LTIM1_TmDT (&iedModel_B1CTR_LTIM1_TmDT)
#define IEDMODEL_B1CTR_LTIM1_TmDT_stVal (&iedModel_B1CTR_LTIM1_TmDT_stVal)
#define IEDMODEL_B1CTR_LTIM1_TmDT_q (&iedModel_B1CTR_LTIM1_TmDT_q)
#define IEDMODEL_B1CTR_LTIM1_TmDT_t (&iedModel_B1CTR_LTIM1_TmDT_t)

/* --- Defines LTMS1 --- */
#define IEDMODEL_B1CTR_LTMS1 (&iedModel_B1CTR_LTMS1)
#define IEDMODEL_B1CTR_LTMS1_Beh (&iedModel_B1CTR_LTMS1_Beh)
#define IEDMODEL_B1CTR_LTMS1_Beh_stVal (&iedModel_B1CTR_LTMS1_Beh_stVal)
#define IEDMODEL_B1CTR_LTMS1_Beh_q (&iedModel_B1CTR_LTMS1_Beh_q)
#define IEDMODEL_B1CTR_LTMS1_Beh_t (&iedModel_B1CTR_LTMS1_Beh_t)
#define IEDMODEL_B1CTR_LTMS1_TmSrc (&iedModel_B1CTR_LTMS1_TmSrc)
#define IEDMODEL_B1CTR_LTMS1_TmSrc_stVal (&iedModel_B1CTR_LTMS1_TmSrc_stVal)
#define IEDMODEL_B1CTR_LTMS1_TmSrc_q (&iedModel_B1CTR_LTMS1_TmSrc_q)
#define IEDMODEL_B1CTR_LTMS1_TmSrc_t (&iedModel_B1CTR_LTMS1_TmSrc_t)
#define IEDMODEL_B1CTR_LTMS1_TmSrcTyp (&iedModel_B1CTR_LTMS1_TmSrcTyp)
#define IEDMODEL_B1CTR_LTMS1_TmSrcTyp_stVal (&iedModel_B1CTR_LTMS1_TmSrcTyp_stVal)
#define IEDMODEL_B1CTR_LTMS1_TmSrcTyp_q (&iedModel_B1CTR_LTMS1_TmSrcTyp_q)
#define IEDMODEL_B1CTR_LTMS1_TmSrcTyp_t (&iedModel_B1CTR_LTMS1_TmSrcTyp_t)
#define IEDMODEL_B1CTR_LTRK1 (&iedModel_B1CTR_LTRK1)
#define IEDMODEL_B1CTR_LTRK1_Beh (&iedModel_B1CTR_LTRK1_Beh)
#define IEDMODEL_B1CTR_LTRK1_Beh_stVal (&iedModel_B1CTR_LTRK1_Beh_stVal)
#define IEDMODEL_B1CTR_LTRK1_Beh_q (&iedModel_B1CTR_LTRK1_Beh_q)
#define IEDMODEL_B1CTR_LTRK1_Beh_t (&iedModel_B1CTR_LTRK1_Beh_t)
#define IEDMODEL_B1CTR_LTRK1_Health (&iedModel_B1CTR_LTRK1_Health)
#define IEDMODEL_B1CTR_LTRK1_Health_stVal (&iedModel_B1CTR_LTRK1_Health_stVal)
#define IEDMODEL_B1CTR_LTRK1_Health_q (&iedModel_B1CTR_LTRK1_Health_q)
#define IEDMODEL_B1CTR_LTRK1_Health_t (&iedModel_B1CTR_LTRK1_Health_t)
#define IEDMODEL_B1CTR_LTRK1_GenTrk (&iedModel_B1CTR_LTRK1_GenTrk)
#define IEDMODEL_B1CTR_LTRK1_GenTrk_objRef (&iedModel_B1CTR_LTRK1_GenTrk_objRef)
#define IEDMODEL_B1CTR_LTRK1_GenTrk_serviceType (&iedModel_B1CTR_LTRK1_GenTrk_serviceType)
#define IEDMODEL_B1CTR_LTRK1_GenTrk_errorCode (&iedModel_B1CTR_LTRK1_GenTrk_errorCode)
#define IEDMODEL_B1CTR_LTRK1_GenTrk_t (&iedModel_B1CTR_LTRK1_GenTrk_t)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk (&iedModel_B1CTR_LTRK1_GocbTrk)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_objRef (&iedModel_B1CTR_LTRK1_GocbTrk_objRef)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_serviceType (&iedModel_B1CTR_LTRK1_GocbTrk_serviceType)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_errorCode (&iedModel_B1CTR_LTRK1_GocbTrk_errorCode)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_t (&iedModel_B1CTR_LTRK1_GocbTrk_t)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_goEna (&iedModel_B1CTR_LTRK1_GocbTrk_goEna)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_goID (&iedModel_B1CTR_LTRK1_GocbTrk_goID)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_datSet (&iedModel_B1CTR_LTRK1_GocbTrk_datSet)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_confRev (&iedModel_B1CTR_LTRK1_GocbTrk_confRev)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_ndsCom (&iedModel_B1CTR_LTRK1_GocbTrk_ndsCom)
#define IEDMODEL_B1CTR_LTRK1_GocbTrk_dstAddress (&iedModel_B1CTR_LTRK1_GocbTrk_dstAddress)

#endif /* STATIC_MODEL_H_ */