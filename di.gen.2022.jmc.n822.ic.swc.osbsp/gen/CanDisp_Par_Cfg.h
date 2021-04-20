#if !defined( CAN_DISP_APP_CFG_H )
#define CAN_DISP_APP_CFG_H

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
**  Name:           CanDisp_Par_Cfg.h
**
**  Description:    CAN Dispatcher configuration parameters for configured 
**                    database
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/
/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "Compiler.h"
# include "CanDisp_Cfg.h"
# include "CanDisp_Defines.h"

/*===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#ifndef ControllerId
#define ControllerId            (0u)
#endif

#define CanDisp_Type_Of_Messages             6u
#define CanDisp_Number_Of_Rx_Messages        47u /*ch0 and ch1 total*/
#define CanDisp_Number_Of_Rx_MBs             47u /*finally not used*/
#define CanDisp_Number_Of_Tx_MBs             8u /*finally not used*/
#define CanDisp_Number_Of_MBs                55u /*ch0 and ch1 total*/
#define CanDisp_Number_Of_Tx_Messages        8u /*ch0 and ch1 total*/
#define CanDisp_Number_Of_Tx_Messages_Ch0    8u /*ch0 tx total*/
#define CanDisp_Number_Of_Tx_Messages_Ch1    0u /*ch1 tx total*/
#define CanDisp_Number_Of_Wake_Channels      1u /*finally not used*/
/* ===========================================================================
** G L O B A L   C O N S T A N T   D E C L A R A T I O N S
** =========================================================================*/
/**********************************************************************************************************************
  CanDisp_RxIndicationFctList
**********************************************************************************************************************/
/** 
  var    CanDisp_RxIndicationFctList
  brief  Rx indication functions table.
  details
  Element               Description
  RxIndicationFct       Rx indication function.
  RxIndicationLayout    Layout of Rx indication function.
*/ 
extern CONST(CanDisp_RxIndicationFctListType, CANDISP_CONST) CanDisp_RxIndicationFctList[CanDisp_Type_Of_Messages]; 

/**********************************************************************************************************************
  CanDisp_RxPduConfig
**********************************************************************************************************************/
/** 
  var    CanDisp_RxPduConfig
  brief  Rx-PDU configuration table.
  details
  Element         Description
  UpperPduId      PDU ID defined by upper layer.
  Dlc             Data length code.
  RxIndication    Rx indication function.
*/
extern CONST(CanDisp_RxPduConfigType, CANDISP_CONST) CanDisp_RxPduConfig[CanDisp_Number_Of_Rx_Messages];

/**********************************************************************************************************************
  CanDisp_RxPduCanId
**********************************************************************************************************************/
/** 
  var    CanDisp_RxPduCanId
  brief  Rx-PDU: CAN identifier.
*/ 
extern CONST(CanDisp_RxPduCanIdentType, CANDISP_CONST) CanDisp_RxPduCanId[CanDisp_Number_Of_Rx_Messages];

/**********************************************************************************************************************
  CanDisp_ControllerConfig
**********************************************************************************************************************/
/** 
  var    CanDisp_ControllerConfig
  brief  CAN controller configuration - Tx-BasicCAN.
  details
  Element           Description
  TxBCStartIndex    Tx-BasicCAN start index
  TxBCStopIndex     Tx-BasicCAN stop index
*/ 
extern CONST(CanDisp_ControllerConfigType, CANDISP_CONST) CanDisp_ControllerConfig[CAN_NUMBER_OF_CHANNELS];

/**********************************************************************************************************************
  CanDisp_MailBoxConfig
**********************************************************************************************************************/
/** 
  var    CanDisp_MailBoxConfig
  brief  Mailbox table.
  details
  Element        Description
  PduIdFirst     "First" PDU mapped to mailbox.
  PduIdLast      "Last" PDU mapped to mailbox.
  Controller     Handle ID of controller.
  MailBoxType    Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused.
*/ 
extern CONST(CanDisp_MailBoxConfigType, CANDISP_CONST) CanDisp_MailBoxConfig[CanDisp_Number_Of_MBs];

/**********************************************************************************************************************
  CanDisp_RxPduMask
**********************************************************************************************************************/
/** 
  var    CanDisp_RxPduMask
  brief  Rx-PDU: CAN identifier mask.
*/ 
extern CONST(CanDisp_RxPduMaskType, CANDISP_CONST) CanDisp_RxPduMask[CanDisp_Number_Of_Rx_Messages];

/**********************************************************************************************************************
  CanDisp_TxConfirmationFctList
**********************************************************************************************************************/
/** 
  var    CanDisp_TxConfirmationFctList
  brief  Tx confirmation functions table.
*/ 
extern CONST(CanDisp_TxConfirmationFctType, CANDISP_CONST) CanDisp_TxConfirmationFctList[CanDisp_Type_Of_Messages];

/**********************************************************************************************************************
  CanDisp_TxPduConfig
**********************************************************************************************************************/
/** 
  var    CanDisp_TxPduConfig
  brief  Tx-PDUs - configuration.
  details
  Element              Description
  Hth                  Hardware transmit handle.
  CanId                CAN identifier (16bit / 32bit).
  UpperLayerTxPduId    Upper layer handle ID (8bit / 16bit).
  Controller           Controller.
  Dlc                  Data length code.
  TxConfirmation       Tx confirmation function.
*/ 
extern CONST(CanDisp_TxPduConfigType, CANDISP_CONST) CanDisp_TxPduConfig[CanDisp_Number_Of_Tx_Messages];


/**********************************************************************************************************************
  CanDisp_WakeUpConfig
**********************************************************************************************************************/
/** 
  var    CanDisp_WakeUpConfig
  brief                 Wake-up source configuration
  details
  Element                Description
  WakeUpSource           Wake-up source identifier
  Controller             CAN controller handle ID
  WakeUpTargetAddress    Logical handle ID of target (CAN controller / transceiver)
  WakeUpTargetModule     Target for wake-up source: CAN controller / transceiver
*/

extern CONST(CanDisp_WakeUpConfigType, CANDISP_CONST) CanDisp_WakeUpConfig[CanDisp_Number_Of_Wake_Channels];


#endif /* CAN_DISP_APP_CFG_H */
/*****************************************************************************
    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
------------------------------------------------------------------------------

******************************************************************************/
/*****************************************************************************
Date          : 2021-04-07 09:22:03
By              : ChengJia
Traceability    : N822_7inch_BCAN_Matrix_20210315.dbc
Change Description  : Tool Generated code
*****************************************************************************/
