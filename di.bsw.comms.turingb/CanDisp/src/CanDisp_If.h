#if !defined(CANDISP_IF_H)
#define CANDISP_IF_H

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
**  Name:           CanDisp_If.h
**
**  Description:    CAN Dispatcher to ASR CAN If layer mapping macros for typedefs  
**                   and functions
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define   CANIF_CS_UNINIT                        CANDISP_CS_UNINIT
#define   CANIF_CS_STOPPED                       CANDISP_CS_STOPPED
#define   CANIF_CS_STARTED                       CANDISP_CS_STARTED
#define   CANIF_CS_SLEEP                         CANDISP_CS_SLEEP
 
#define   CANIF_NO_NOTIFICATION                  CANDISP_NO_NOTIFICATION
#define   CANIF_TX_RX_NOTIFICATION               CANDISP_TX_RX_NOTIFICATION
 
#define   CANIF_OFFLINE                          CANDISP_OFFLINE
#define   CANIF_RX_OFFLINE                       CANDISP_RX_OFFLINE
#define   CANIF_RX_ONLINE                        CANDISP_RX_ONLINE
#define   CANIF_TX_OFFLINE                       CANDISP_TX_OFFLINE
#define   CANIF_TX_ONLINE                        CANDISP_TX_ONLINE
#define   CANIF_ONLINE                           CANDISP_ONLINE
#define   CANIF_TX_OFFLINE_ACTIVE                CANDISP_TX_OFFLINE_ACTIVE
#define   CANIF_NO_MODE_PDU_MODE_TYPE_END        CANDISP_NO_MODE_PDU_MODE_TYPE_END

#define   CANIF_TRANSMIT_BUFFER                  CANDISP_TRANSMIT_BUFFER

#define   CANIF_RxBasicCANMailbox                CANDISP_RxBasicCANMailbox
#define   CANIF_RxFullCANMailbox                 CANDISP_RxFullCANMailbox
#define   CANIF_TxBasicCANMailbox                CANDISP_TxBasicCANMailbox
#define   CANIF_TxFullCANMailbox                 CANDISP_TxFullCANMailbox
#define   CANIF_UnusedCANMailbox                 CANDISP_UnusedCANMailbox
 
#define   CANIF_WAKEUPREQUEST_NONE               CANDISP_WAKEUPREQUEST_NONE
#define   CANIF_WAKEUPREQUEST_CAN                CANDISP_WAKEUPREQUEST_CAN
#define   CANIF_WAKEUPREQUEST_TRCV               CANDISP_WAKEUPREQUEST_TRCV
 
#define   CanIf_ControllerModeType			      CanDisp_ControllerModeType

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANDISP_IF_H */

