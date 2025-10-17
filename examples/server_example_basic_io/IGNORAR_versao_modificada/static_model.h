/*
 * static_model.h
 *
 * automatically generated from SEL_421.ICD
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_BIKE;
extern LogicalNode   iedModel_BIKE_LLN0;
extern DataObject    iedModel_BIKE_LLN0_Mod;
extern DataAttribute iedModel_BIKE_LLN0_Mod_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Mod_q;
extern DataAttribute iedModel_BIKE_LLN0_Mod_t;
extern DataAttribute iedModel_BIKE_LLN0_Mod_ctlModel;
extern DataObject    iedModel_BIKE_LLN0_Beh;
extern DataAttribute iedModel_BIKE_LLN0_Beh_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Beh_q;
extern DataAttribute iedModel_BIKE_LLN0_Beh_t;
extern DataObject    iedModel_BIKE_LLN0_Health;
extern DataAttribute iedModel_BIKE_LLN0_Health_stVal;
extern DataAttribute iedModel_BIKE_LLN0_Health_q;
extern DataAttribute iedModel_BIKE_LLN0_Health_t;
extern DataObject    iedModel_BIKE_LLN0_NamPlt;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_vendor;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_swRev;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_d;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_configRev;
extern DataAttribute iedModel_BIKE_LLN0_NamPlt_ldNs;
extern LogicalNode   iedModel_BIKE_DEEV1;
extern DataObject    iedModel_BIKE_DEEV1_EVNam;
extern DataAttribute iedModel_BIKE_DEEV1_EVNam_vendor;
extern DataAttribute iedModel_BIKE_DEEV1_EVNam_latitude;
extern DataAttribute iedModel_BIKE_DEEV1_EVNam_longitude;
extern DataAttribute iedModel_BIKE_DEEV1_EVNam_altitude;
extern DataObject    iedModel_BIKE_DEEV1_ConnTypSel;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_q;
extern DataAttribute iedModel_BIKE_DEEV1_ConnTypSel_t;
extern DataObject    iedModel_BIKE_DEEV1_Beh;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_q;
extern DataAttribute iedModel_BIKE_DEEV1_Beh_t;
extern DataObject    iedModel_BIKE_DEEV1_Health;
extern DataAttribute iedModel_BIKE_DEEV1_Health_stVal;
extern DataAttribute iedModel_BIKE_DEEV1_Health_q;
extern DataAttribute iedModel_BIKE_DEEV1_Health_t;
extern DataObject    iedModel_BIKE_DEEV1_Soc;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_instMag;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_mag;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_q;
extern DataAttribute iedModel_BIKE_DEEV1_Soc_t;
extern DataObject    iedModel_BIKE_DEEV1_EVId;
extern DataAttribute iedModel_BIKE_DEEV1_EVId_setVal;
extern DataObject    iedModel_BIKE_DEEV1_DptTm;
extern DataAttribute iedModel_BIKE_DEEV1_DptTm_setTm;
extern DataObject    iedModel_BIKE_DEEV1_VMax;
extern DataAttribute iedModel_BIKE_DEEV1_VMax_setMag;
extern DataObject    iedModel_BIKE_DEEV1_AMax;
extern DataAttribute iedModel_BIKE_DEEV1_AMax_setMag;
extern LogicalNode   iedModel_BIKE_XSWI1;
extern DataObject    iedModel_BIKE_XSWI1_Loc;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_q;
extern DataAttribute iedModel_BIKE_XSWI1_Loc_t;
//extern DataAttribute iedModel_BIKE_XSWI1_Loc_d;
extern DataObject    iedModel_BIKE_XSWI1_OpCnt;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_q;
extern DataAttribute iedModel_BIKE_XSWI1_OpCnt_t;
extern DataObject    iedModel_BIKE_XSWI1_SwTyp;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_q;
extern DataAttribute iedModel_BIKE_XSWI1_SwTyp_t;
// extern DataObject    iedModel_BIKE_XSWI1_Pos;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlVal;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_ctlNum;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_T;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Test;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_Oper_Check;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_stVal;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_q;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_t;
// extern DataAttribute iedModel_BIKE_XSWI1_Pos_ctlModel;
extern DataObject    iedModel_BIKE_XSWI1_BlkOpn;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_q;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_t;
extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlModel;
//extern DataAttribute iedModel_BIKE_XSWI1_BlkOpn_ctlVal;
extern DataObject    iedModel_BIKE_XSWI1_BlkCls;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_stVal;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_q;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_t;
extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlModel;
//extern DataAttribute iedModel_BIKE_XSWI1_BlkCls_ctlVal;
extern LogicalNode   iedModel_BIKE_GGIO1;
extern DataObject    iedModel_BIKE_GGIO1_EEName;
extern DataAttribute iedModel_BIKE_GGIO1_EEName_vendor;
extern DataAttribute iedModel_BIKE_GGIO1_EEName_name;
extern DataObject    iedModel_BIKE_GGIO1_Intln;
extern DataAttribute iedModel_BIKE_GGIO1_Intln_stVal;
extern DataAttribute iedModel_BIKE_GGIO1_Intln_q;
extern DataAttribute iedModel_BIKE_GGIO1_Intln_t;

#define IEDMODEL_BIKE (&iedModel_BIKE)
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
#define IEDMODEL_BIKE_DEEV1 (&iedModel_BIKE_DEEV1)
#define IEDMODEL_BIKE_DEEV1_EVNam (&iedModel_BIKE_DEEV1_EVNam)
#define IEDMODEL_BIKE_DEEV1_EVNam_vendor (&iedModel_BIKE_DEEV1_EVNam_vendor)
#define IEDMODEL_BIKE_DEEV1_EVNam_latitude (&iedModel_BIKE_DEEV1_EVNam_latitude)
#define IEDMODEL_BIKE_DEEV1_EVNam_longitude (&iedModel_BIKE_DEEV1_EVNam_longitude)
#define IEDMODEL_BIKE_DEEV1_EVNam_altitude (&iedModel_BIKE_DEEV1_EVNam_altitude)
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
#define IEDMODEL_BIKE_DEEV1_Soc_instMag (&iedModel_BIKE_DEEV1_Soc_instMag)
#define IEDMODEL_BIKE_DEEV1_Soc_mag (&iedModel_BIKE_DEEV1_Soc_mag)
#define IEDMODEL_BIKE_DEEV1_Soc_q (&iedModel_BIKE_DEEV1_Soc_q)
#define IEDMODEL_BIKE_DEEV1_Soc_t (&iedModel_BIKE_DEEV1_Soc_t)
#define IEDMODEL_BIKE_DEEV1_EVId (&iedModel_BIKE_DEEV1_EVId)
#define IEDMODEL_BIKE_DEEV1_EVId_setVal (&iedModel_BIKE_DEEV1_EVId_setVal)
#define IEDMODEL_BIKE_DEEV1_DptTm (&iedModel_BIKE_DEEV1_DptTm)
#define IEDMODEL_BIKE_DEEV1_DptTm_setTm (&iedModel_BIKE_DEEV1_DptTm_setTm)
#define IEDMODEL_BIKE_DEEV1_VMax (&iedModel_BIKE_DEEV1_VMax)
#define IEDMODEL_BIKE_DEEV1_VMax_setMag (&iedModel_BIKE_DEEV1_VMax_setMag)
#define IEDMODEL_BIKE_DEEV1_AMax (&iedModel_BIKE_DEEV1_AMax)
#define IEDMODEL_BIKE_DEEV1_AMax_setMag (&iedModel_BIKE_DEEV1_AMax_setMag)
#define IEDMODEL_BIKE_XSWI1 (&iedModel_BIKE_XSWI1)
#define IEDMODEL_BIKE_XSWI1_Loc (&iedModel_BIKE_XSWI1_Loc)
#define IEDMODEL_BIKE_XSWI1_Loc_stVal (&iedModel_BIKE_XSWI1_Loc_stVal)
#define IEDMODEL_BIKE_XSWI1_Loc_q (&iedModel_BIKE_XSWI1_Loc_q)
#define IEDMODEL_BIKE_XSWI1_Loc_t (&iedModel_BIKE_XSWI1_Loc_t)
//#define IEDMODEL_BIKE_XSWI1_Loc_d (&iedModel_BIKE_XSWI1_Loc_d)
#define IEDMODEL_BIKE_XSWI1_OpCnt (&iedModel_BIKE_XSWI1_OpCnt)
#define IEDMODEL_BIKE_XSWI1_OpCnt_stVal (&iedModel_BIKE_XSWI1_OpCnt_stVal)
#define IEDMODEL_BIKE_XSWI1_OpCnt_q (&iedModel_BIKE_XSWI1_OpCnt_q)
#define IEDMODEL_BIKE_XSWI1_OpCnt_t (&iedModel_BIKE_XSWI1_OpCnt_t)
#define IEDMODEL_BIKE_XSWI1_SwTyp (&iedModel_BIKE_XSWI1_SwTyp)
#define IEDMODEL_BIKE_XSWI1_SwTyp_stVal (&iedModel_BIKE_XSWI1_SwTyp_stVal)
#define IEDMODEL_BIKE_XSWI1_SwTyp_q (&iedModel_BIKE_XSWI1_SwTyp_q)
#define IEDMODEL_BIKE_XSWI1_SwTyp_t (&iedModel_BIKE_XSWI1_SwTyp_t)
// #define IEDMODEL_BIKE_XSWI1_Pos (&iedModel_BIKE_XSWI1_Pos)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper (&iedModel_BIKE_XSWI1_Pos_Oper)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_ctlVal (&iedModel_BIKE_XSWI1_Pos_Oper_ctlVal)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_origin (&iedModel_BIKE_XSWI1_Pos_Oper_origin)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_origin_orCat (&iedModel_BIKE_XSWI1_Pos_Oper_origin_orCat)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_origin_orIdent (&iedModel_BIKE_XSWI1_Pos_Oper_origin_orIdent)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_ctlNum (&iedModel_BIKE_XSWI1_Pos_Oper_ctlNum)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_T (&iedModel_BIKE_XSWI1_Pos_Oper_T)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_Test (&iedModel_BIKE_XSWI1_Pos_Oper_Test)
// #define IEDMODEL_BIKE_XSWI1_Pos_Oper_Check (&iedModel_BIKE_XSWI1_Pos_Oper_Check)
// #define IEDMODEL_BIKE_XSWI1_Pos_stVal (&iedModel_BIKE_XSWI1_Pos_stVal)
// #define IEDMODEL_BIKE_XSWI1_Pos_q (&iedModel_BIKE_XSWI1_Pos_q)
// #define IEDMODEL_BIKE_XSWI1_Pos_t (&iedModel_BIKE_XSWI1_Pos_t)
// #define IEDMODEL_BIKE_XSWI1_Pos_ctlModel (&iedModel_BIKE_XSWI1_Pos_ctlModel)
#define IEDMODEL_BIKE_XSWI1_BlkOpn (&iedModel_BIKE_XSWI1_BlkOpn)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_stVal (&iedModel_BIKE_XSWI1_BlkOpn_stVal)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_q (&iedModel_BIKE_XSWI1_BlkOpn_q)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_t (&iedModel_BIKE_XSWI1_BlkOpn_t)
#define IEDMODEL_BIKE_XSWI1_BlkOpn_ctlModel (&iedModel_BIKE_XSWI1_BlkOpn_ctlModel)
//#define IEDMODEL_BIKE_XSWI1_BlkOpn_ctlVal (&iedModel_BIKE_XSWI1_BlkOpn_ctlVal)
#define IEDMODEL_BIKE_XSWI1_BlkCls (&iedModel_BIKE_XSWI1_BlkCls)
#define IEDMODEL_BIKE_XSWI1_BlkCls_stVal (&iedModel_BIKE_XSWI1_BlkCls_stVal)
#define IEDMODEL_BIKE_XSWI1_BlkCls_q (&iedModel_BIKE_XSWI1_BlkCls_q)
#define IEDMODEL_BIKE_XSWI1_BlkCls_t (&iedModel_BIKE_XSWI1_BlkCls_t)
#define IEDMODEL_BIKE_XSWI1_BlkCls_ctlModel (&iedModel_BIKE_XSWI1_BlkCls_ctlModel)
//#define IEDMODEL_BIKE_XSWI1_BlkCls_ctlVal (&iedModel_BIKE_XSWI1_BlkCls_ctlVal)
#define IEDMODEL_BIKE_GGIO1 (&iedModel_BIKE_GGIO1)
#define IEDMODEL_BIKE_GGIO1_EEName (&iedModel_BIKE_GGIO1_EEName)
#define IEDMODEL_BIKE_GGIO1_EEName_vendor (&iedModel_BIKE_GGIO1_EEName_vendor)
#define IEDMODEL_BIKE_GGIO1_EEName_name (&iedModel_BIKE_GGIO1_EEName_name)
#define IEDMODEL_BIKE_GGIO1_Intln (&iedModel_BIKE_GGIO1_Intln)
#define IEDMODEL_BIKE_GGIO1_Intln_stVal (&iedModel_BIKE_GGIO1_Intln_stVal)
#define IEDMODEL_BIKE_GGIO1_Intln_q (&iedModel_BIKE_GGIO1_Intln_q)
#define IEDMODEL_BIKE_GGIO1_Intln_t (&iedModel_BIKE_GGIO1_Intln_t)


#endif /* STATIC_MODEL_H_ */

