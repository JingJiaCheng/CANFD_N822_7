//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2016] Visteon Corporation
// All Rights Reserved.
//
// NOTICE: This is an unpublished work of authorship, which contains trade secrets.
// Visteon Corporation owns all rights to this work and intends to maintain it in confidence to preserve
// its trade secret status. Visteon Corporation reserves the right, under the copyright laws of the United States
// or those of any other country that may have jurisdiction, to protect this work as an unpublished work,
// in the event of an inadvertent or deliberate unauthorized publication. Visteon Corporation also reserves its rights
// under all copyright laws to protect this work as a published work, when appropriate.
// Those having access to this work may not copy it, use it, modify it, or disclose the information contained in it
// without the written authorization of Visteon Corporation.
//
//---------------------------------------------------------------------------------------------------------------------
//
// File generated automatically using Visteon StpCdd Configurator 1.0
// Date:           Wed Apr 20 11:30:39 EEST 2016
// User:           Sofia11
// Configuration:  DIAGNOSTICS
// Comment:
//      Configuration for TA 1.4
//
//---------------------------------------------------------------------------------------------------------------------
#ifndef STPDIAGCDD_CFG
#define STPDIAGCDD_CFG

#include "Rte_Dcm_Type.h" // Required for DCM response related macros
#undef RTE_APPLICATION_HEADER_FILE
#include "Rte_StpCdd.h"

/* Define the Gauges enabled in your project and GaugeId should be same as ID's define in StpMgrCdd_Cfg.h but add with 1
** For example: cPtrSpeedoView_MotorID is 1 in 	StpMgrCdd_Cfg.h and define here  cSpeedo_GaugeID as 2.
*/


/*#define cTacho_GaugeID          ((uint8)4)*/
#define cSpeedo_GaugeID         ((uint8)1)
#define cFuel_GaugeID           ((uint8)2)    //Meet_Sw
#define cEngineTemp_GaugeID      ((uint8)3)    //Meet_Sw	 


#define cPTR_FREE_MOVEMENT_DETECT_LIMIT   (uint16)8

#define STPDIAGCDD_WRITE_PP_AUTHORISATION_AS_DISABLE(PointerPlacementAuthorisationStatus)  Rte_Call_rpNvmGaugePtrCalib_SetNvm_Gauge_Pointer_Authorization(PointerPlacementAuthorisationStatus);
#endif // STPDIAGCDD_CFG

