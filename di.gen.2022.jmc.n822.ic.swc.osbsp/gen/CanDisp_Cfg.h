#if !defined( CAN_DISP_CFG_H )
#define CAN_DISP_CFG_H

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
**  Name:           CanDisp_Cfg.h
**
**  Description:    CAN Dispatcher specific configuration parameters
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/



/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/
#define CanDisp_Config_Ptr                         NULL_PTR

/* CAN Number of Hardware Channels */
#define CAN_NUMBER_OF_CHANNELS                     2
#define CAN_MAX_DATA_SIZE                          8


#define CANDISP_NM_SUPPORT_TYPE                        NONE
#define CANDISP_DLC_CHECK                              STD_ON
#define CANDISP_TP_SUPPORT_API                         STD_ON
#define CAN_RXQ_SIZE                                   0
#define CAN_TXQ_SIZE                                   5
#define CANDISP_WAKEUP_SUPPORT                         STD_ON
#define CANDISP_STATIC_FD_TXQUEUE                  STD_OFF
#define CANDISP_WAKEUP_VALID_ALL_RX_MSGS           STD_OFF
#define CANDISP_TRANSMIT_CANCELLATION              STD_OFF
#define CANDISP_POLLED_RECEIVE_DISPATCH            STD_OFF
#define CANDISP_SET_BAUDRATE_API                   STD_OFF
#define CANDISP_TRANSMIT_RECEIVE_QUEUE_SUPPORT     STD_ON
#define CANDISP_XCVR_HANDLING                      STD_ON
#define CANDISP_SETDYNAMICTXID_API                 STD_OFF
#define CANDISP_SEARCH_ALGORITHM                   CANDISP_LINEAR
#define CANDISP_PUBLIC_TX_CONFIRM_POLLING_SUPPORT  STD_OFF
#define CANDISP_DEV_ERROR_DETECT                   STD_ON
#define CANDISP_POLLED_CONFIRMATION_DISPATCH       STD_OFF
#define CANDISP_BUSOFF_INDICATION_API              STD_ON
#define CANDISP_TRANSMIT_CONFIRMATION_API          STD_ON
#define CANDISP_TRANSMIT_BUFFER                    STD_ON
#define CANDISP_WAKEUP_VALIDATION                  STD_OFF
#define CANDISP_TRIGGER_TRANSMIT_API               STD_OFF
#define CANDISP_RECEIVE_INDICATION_API             STD_ON
#define CANDISP_WAKEUP_VALID_ONLY_NM_RX_MSGS       STD_OFF
#define CANDISP_PN_WU_TX_PDU_FILTER                STD_OFF
#define CANDISP_XCP_SUPPORT_API                    STD_OFF
#define CANDISP_BITQUEUE                           STD_ON
#define CANDISP_CANCEL_SUPPORT_API                 STD_OFF
#define CANDISP_EXTENDEDID_SUPPORT                 STD_OFF
#define CANDISP_PN_XCVR_HANDLING                   STD_OFF
#define CANDISP_CH0_SEARCH_ALGORITHM               CANDISP_LINEAR


#endif /* CAN_DISP_CFG_H */


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
Date          : 2018-06-11 14:28
By              : JCHEN57
Traceability    : ['JMC_SUV_Body_CAN_Matrix_V1.36_20180611.dbc']
Change Description  : Tool Generated code
*****************************************************************************/
