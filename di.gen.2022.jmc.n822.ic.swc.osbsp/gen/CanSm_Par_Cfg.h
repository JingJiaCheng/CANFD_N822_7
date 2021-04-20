#if !defined(CCL_MGR_APP_CFG_H)
#define CCL_MGR_APP_CFG_H

/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**   its rights under all copyright laws to protect this work as a published
**   work, when appropriate.  Those having access to this work may not copy it,
**   use it, modify it or disclose the information contained in it without the
**   written authorization of Visteon Corporation.
** 
**  =========================================================================*/

/* ===========================================================================
**
**  Name:           CanSm_Par_Cfg.h
**
**  Description:    CAN State Manager parameter Configuration file for 
**                   configured database 
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "CanSm_Defines.h"
#include "CanSm_Cfg.h"
#include "CanNm_Cfg.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define CANSM_BUSOFF_COUNTER_VAL_SLOW                 (170u/10u) /*[180,220]ms*/
#define CANSM_BUSOFF_COUNTER_VAL_FAST                 (40u/10u)  /*[45,70]ms*/
#define CANSM_BUSOFF_COUNTER_FAST                     5u
#define CANSM_BUSOFF_REVOVERY_VAL					  (200u/10u)

#define NWBS_TIME                                     150u
/* ===========================================================================
** G L O B A L   C O N S T A N T   D E C L A R A T I O N S
** =========================================================================*/

/**********************************************************************************************************************
  CclMgr_Channel
**********************************************************************************************************************/
/** 
  \var    CanSm_Channel
  \brief  Contains configuration parameters about channels
  \details
  Element                Description
  BusType                The channel bus type
  J1939Support           Decides if the channel supports J1939
  GwType                 The partial network gateway type, relevant for channels attached to coordinated partial networks
  InhibitionInitValue    Initial value of the inhibition status of the channel
  NmType                 The Network management type fo the channel
*/ 
extern CONST(CanSm_ChannelType, CCLMGR_CONST) CanSm_Channel[CANSM_NUMBER_OF_CHANNELS];


/**********************************************************************************************************************
  CclMgr_Channel
**********************************************************************************************************************/
/** 
  \var    CanSm_Channel
  \brief  Contains configuration parameters about channels
  \details
  Element                Description
  BusType                The channel bus type
  J1939Support           Decides if the channel supports J1939
  GwType                 The partial network gateway type, relevant for channels attached to coordinated partial networks
  InhibitionInitValue    Initial value of the inhibition status of the channel
  NmType                 The Network management type fo the channel
*/ 
extern CONST(Nm_ChannelConfigType, NM_CONST) Nm_ChannelConfig[CANSM_NUMBER_OF_CHANNELS];


/**********************************************************************************************************************
  CclMgr_Channel
**********************************************************************************************************************/
/** 
  \var    CanSm_Channel
  \brief  Contains configuration parameters about channels
  \details
  Element                Description
  BusType                The channel bus type
  J1939Support           Decides if the channel supports J1939
  GwType                 The partial network gateway type, relevant for channels attached to coordinated partial networks
  InhibitionInitValue    Initial value of the inhibition status of the channel
  NmType                 The Network management type fo the channel
*/ 
/*extern CONST(Nm_NmFunctionTableType, NM_CONST) Nm_NmFunctionTable[CANSM_NUMBER_OF_CHANNELS];*/

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CCL_MGR_APP_CFG_H */




