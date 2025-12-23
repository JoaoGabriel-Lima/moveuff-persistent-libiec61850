/*
 * static_model.h
 * Versão "Do Zero" (Adicionando DEEV1)
 *
 * LNs: LLN0, LPHD1, DEEV1
 * Dispositivo Lógico: BIKE
 * Estrutura: v1.5 (compatível com o exemplo do server_example_basic_io)
 */

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

/* ==================================================================
 * LLN0 (Base)
 * ==================================================================
 */

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
 * LPHD1 (Base)
 * ==================================================================
 */

/* LPHD1 Data Objects and Attributes (Mínimo) */
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
extern DataAttribute iedModel_BIKE_DEEV1_NamPlt_ldNs;

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
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC; /* sVC como DO (v1.5) */
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_sVC_offset;

extern DataObject iedModel_BIKE_DEEV1_AMax;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC; /* sVC como DO (v1.5) */
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_sVC_offset;

extern DataObject iedModel_BIKE_DEEV1_AMin;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC; /* sVC como DO (v1.5) */
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_AMin_sVC_offset;

extern DataObject iedModel_BIKE_DEEV1_EnAmnt;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_setMag_f;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC; /* sVC como DO (v1.5) */
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_scaleFactor;
extern DataAttribute iedModel_BIKE_DEEV1_EnAmnt_sVC_offset;


/* ==================================================================
 * Defines for easy access
 * ==================================================================
 */

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

#define IEDMODEL_BIKE_DEEV1 (&iedModel_BIKE_DEEV1)
#define IEDMODEL_BIKE_DEEV1_EVNam (&iedModel_BIKE_DEEV1_EVNam)
#define IEDMODEL_BIKE_DEEV1_EVNam_vendor (&iedModel_BIKE_DEEV1_EVNam_vendor)
#define IEDMODEL_BIKE_DEEV1_NamPlt (&iedModel_BIKE_DEEV1_NamPlt)
#define IEDMODEL_BIKE_DEEV1_NamPlt_vendor (&iedModel_BIKE_DEEV1_NamPlt_vendor)
#define IEDMODEL_BIKE_DEEV1_NamPlt_swRev (&iedModel_BIKE_DEEV1_NamPlt_swRev)
#define IEDMODEL_BIKE_DEEV1_NamPlt_d (&iedModel_BIKE_DEEV1_NamPlt_d)
#define IEDMODEL_BIKE_DEEV1_NamPlt_configRev (&iedModel_BIKE_DEEV1_NamPlt_configRev)
#define IEDMODEL_BIKE_DEEV1_NamPlt_ldNs (&iedModel_BIKE_DEEV1_NamPlt_ldNs)
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

#endif /* STATIC_MODEL_H_ */