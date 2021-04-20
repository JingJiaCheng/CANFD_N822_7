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
**  Name:           CanSm_Par_Cfg.c
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

#include "CanSm_Par_Cfg.h"
#include "CanNm_Defines.h"
#include "CanSm_Defines.h"
#include "CanSm_Cfg.h"
#include "CanNm_Cfg.h"

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

/* ===========================================================================
** G L O B A L   C O N S T A N T   D E F I N I T I O N S
** =========================================================================*/

/**********************************************************************************************************************
  CclMgr_Channel
**********************************************************************************************************************/
/** 
  \var    CclMgr_Channel
  \brief  Contains configuration parameters about channels
  \details
  Element                Description
  BusType                The channel bus type
  J1939Support           Decides if the channel supports J1939
  GwType                 The partial network gateway type, relevant for channels attached to coordinated partial networks
  InhibitionInitValue    Initial value of the inhibition status of the channel
  NmType                 The Network management type fo the channel
*/ 
CONST(CanSm_ChannelType, CCLMGR_CONST) CanSm_Channel[CANSM_NUMBER_OF_CHANNELS] = {
    /* Index    BusType              J1939Support  GwType                    InhibitionInitValue  NmType                 Referrable Keys */
	{ /*     0 */ CANSM_BUS_TYPE_CAN,        FALSE, CANSM_GATEWAY_TYPE_NONE,               0x00U, NM_VARIANT_FULL },   /* [CclMgrChannel_0] */
	{ /*	 1 */ CANSM_BUS_TYPE_CAN,		 FALSE, CANSM_GATEWAY_TYPE_NONE,			   0x00U, NM_VARIANT_FULL }   /* [CclMgrChannel_0] */

};/*no sue*/

/**********************************************************************************************************************
  Nm_ChannelConfig
**********************************************************************************************************************/
/** 
  \var    Nm_ChannelConfig
  \brief  Structure for channel specific configuration parameters
  \details
  Element               Description
  NmChannelId       
  NmFunctionTableIdx    the index of the 1:1 relation pointing to Nm_NmFunctionTable
*/ 

CONST(Nm_ChannelConfigType, NM_CONST) Nm_ChannelConfig[CANSM_NUMBER_OF_CHANNELS] = {
    /* Index    NmChannelId                        NmFunctionTableIdx */
  { /*     0 */ CanSmConf_CanSmChannel_CAN,                        0U }
};/*no use*/

/**********************************************************************************************************************
  Nm_NmFunctionTable
**********************************************************************************************************************/
/** 
  \var    Nm_NmFunctionTable
  \details
  Element                   Description
  GetLocalNodeIdentifier
  GetNodeIdentifier     
  GetPduData            
  GetUserData           
  GetState              
  SetUserData           
  DisableCommunication  
  EnableCommunication   
  NetworkRelease        
  NetworkRequest        
  PassiveStartUp        
*/ 
# if 0
CONST(Nm_NmFunctionTableType, NM_CONST) Nm_NmFunctionTable[CAN_NM_NUMBER_OF_CHANNELS] = {
    /* Index    GetLocalNodeIdentifier        GetNodeIdentifier        GetPduData        GetUserData        GetState        SetUserData        DisableCommunication        EnableCommunication        NetworkRelease        NetworkRequest        PassiveStartUp              Referrable Keys */
  { /*     0 */ CanNm_GetLocalNodeIdentifier, CanNm_GetNodeIdentifier, CanNm_GetPduData, CanNm_GetUserData, CanNm_GetState, CanNm_SetUserData, CanNm_DisableCommunication, CanNm_EnableCommunication, CanNm_NetworkRelease, CanNm_NetworkRequest, CanNm_PassiveStartUp }   /* [CanNm] */
};
#endif

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/


