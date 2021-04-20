#if !defined(IL_DEFINES_H)
#define IL_DEFINES_H
/* ===========================================================================
//
//                     CONFIDENTIAL VISTEON CORPORATION
//
//  This is an unpublished work of authorship, which contains trade secrets,
//  created in 2006.  Visteon Corporation owns all rights to this work and
//  intends to maintain it in confidence to preserve its trade secret status.
//  Visteon Corporation reserves the right, under the copyright laws of the
//  United States or those of any other country that may have jurisdiction, to
//  protect this work as an unpublished work, in the event of an inadvertent
//  or deliberate unauthorized publication.  Visteon Corporation also reserves
//  its rights under all copyright laws to protect this work as a published
//  work, when appropriate.  Those having access to this work may not copy it,
//  use it, modify it or disclose the information contained in it without the
//  written authorization of Visteon Corporation.
//
// =========================================================================*/
/* ===========================================================================
//
//  Name:           CANIl_Defines.h
//
//  Description:    CAN Interaction Layer typedef and structure declarations
//
//  Organization:   Multiplex Core Technology
//
// =========================================================================*/

#include "CclStack_Types.h"
#include "can_type.h"
#include "can_defs.h"
#include "CanCcl.h"
#include "CanIl_Cfg.h"

/* ===========================================================================
//  P U B L I C   T Y P E   D E F I N I T I O N S
// =========================================================================*/

/* ===========================================================================
//
// Type name:       CAN_IL_RMD
//
// Description:     Type definition for CAN IL message receive record.
//
// =========================================================================*/
typedef struct tagCAN_IL_RMD
{
    CAN_UINT8    Size;                          /* CAN message data length */

#ifdef CAN_IL_REQ_FRAME_SUPPORT
    CAN_IDENT    Identifier;                    /* CAN message identifier  */
#endif

    CAN_UINT8    Data [CAN_MAX_DATA_LENGTH];    /* CAN message data        */
    CAN_UINT8    Vector;                        /* CAN message vector ID   */

} CAN_IL_RMD, *PCAN_IL_RMD;


/* ===========================================================================
//
// Type name:       CAN_IL_TMD
//
// Description:     CAN IL message descriptor type definition.
//
// =========================================================================*/
typedef struct tagCAN_IL_TMD
{
    CAN_UINT8           Size;           /* CAN message data length  */

#ifdef CAN_IL_REQ_FRAME_SUPPORT
    CAN_IDENT           Identifier;     /* CAN message identifier   */
#endif

    CAN_UINT8 const *   pData;          /* Pointer to Data          */
    CAN_TMH             MsgHandle;      /* Transmit Message Handle  */

} CAN_IL_TMD, *PCAN_IL_TMD;


/* Frame Transmit Complete Callback Function Pointer Type Definition */
typedef void (* pIL_TX_FRAME_INDICATION)( uint8 sighndl );

/* Burst Mode Transmission Complete Callback Function Pointer Type Definition */
typedef void (* pIL_TX_BURST_COMPLETE_INDICATION)( uint8 sighndl );

/* Frame Reception Indication Callback Function Pointer Type Definition */
typedef void (* pIL_RX_FRAME_INDICATION)( uint8 sighndl );

/* Frame Reception Timeout Gain/Loss Callback Function Pointer Type Definition */
typedef void (* pIL_RX_FRAME_LOSS_INDICATION)( uint8 sighndl );

typedef void (* pTxPrecopyfn)( CAN_UINT8 );

typedef CAN_BOOLEAN (* pCAN_Request_Preprocessing)( CAN_IL_TMD const * const , CAN_IL_TMD * const );


typedef struct sCAN_IL_SIGNAL
{
    CAN_UINT16  frmHandle;      /* CAN Frame Handle             */

    CAN_UINT8   nBytes;         /* Number of Bytes in Signal    */

    CAN_UINT8   msByte;         /* MS Byte of the Signal        */

    CAN_UINT8   msBit;          /* MS Bit of the Signal         */

    CAN_UINT8   lsByte;         /* LS Byte of the Signal        */

    CAN_UINT8   lsBit;          /* LS Bit of the Signal         */

} CAN_IL_SIGNAL;

/* =========================================================================*/
/* Structure definition for taking the receive data pointer */
/* =========================================================================*/

typedef struct
{
    CAN_UINT8 *CanRxDataPtr;

} Can_Il_Rx_Data_Pointer;



typedef struct sCAN_IL_TX_MESSAGE
{
    CAN_UINT8   nSignals;                       /* Number of Signals in Message                 */

    CAN_UINT8   nBytes;                         /* Sum of Individual Signal Bytes in Message    */

    CAN_UINT8   const * const pInitValues;      /* Pointer to Signal Initialization Bytes       */

} CAN_IL_TX_MESSAGE;


typedef struct sCAN_IL_TX_BURST_PERIODIC
{
    CAN_UINT16  const burstPeriod;              /* Burst Period (in Task Tics)          */

    CAN_UINT8   const nBurstFrames;             /* Number of Burst Frames               */

    CAN_UINT8  * const pBurstCount;             /* Pointer to Burst Count               */

} CAN_IL_TX_BURST_PERIODIC;


typedef struct sCAN_IL_TX_PERIODIC
{
    CAN_UINT16  const period;               /* Primary Period (in Task Tics)            */

    CAN_UINT16  const offset;               /* Initial Offset (in Task Tics)            */

    CAN_UINT16 * const pTxPeriodicCount;    /* Pointer to the Transmit Status           */

} CAN_IL_TX_PERIODIC;


typedef struct sCAN_IL_TX_FRAME
{
    CAN_UINT8    const txAttributes;                        /* Frame Transmission Attributes                */

    CAN_UINT8  * const pTxStatus;                           /* Pointer to the Transmit Status               */

    CAN_UINT8  * const pTxData;                             /* Pointer to the Transmitted Frame Data        */

    CAN_UINT16 * const pTxDelayCount;                       /* Pointer to the Transmit Status               */

    CAN_UINT16   const minDelay;                            /* Minimum Delay Between Message Frames         */

    CAN_IL_TX_PERIODIC const * const  pcanPerAttr;          /* Pointer to Periodic Frame Attributes         */

    CAN_IL_TX_BURST_PERIODIC const * const pcanBurstAttr;   /* Pointer to Burst Periodic Frame Attributes   */

    CAN_IL_TMD const * const pcanTmd;                       /* Pointer to Transmit Data Structure           */

} CAN_IL_TX_FRAME;


typedef struct sCAN_IL_RX_FRAME_REQUEST
{
    CAN_UINT8    const nInitReqs;                       /* Number of Requests Made at Initialization    */

    CAN_UINT8 *  const pNumReqs;                        /* Pointer to Number of Requests                */

    CAN_UINT16 * const pReqTimer;                       /* Pointer to Request Timer                     */

    CAN_IL_TMD const * const pTmd;                      /* Ptr to Rx Request Transmit Data Structure    */

    CAN_UINT8 *  const pReqStatus;                      /* Request Status indication */
	
	pCAN_Request_Preprocessing const pPreProcessing;	/* Pointer to preprocessing Function */

} CAN_IL_RX_FRAME_REQUEST;


typedef struct sCAN_IL_RX_FRAME
{
    CAN_UINT8    const rxAttributes;                    /* Frame Reception Attributes          */

	CAN_UINT16   const SignalStartIndex;				/* Rx Signal Start Index               */
	
	CAN_UINT8    const nSignals;                        /* Number of Signals in Message        */

    CAN_UINT8    const minDlc;                          /* Minimum Data Length Code            */

    CAN_UINT8  * const pRxStatus;                       /* Pointer to the Receive  Status      */

    CAN_UINT8  * const pRxData;                         /* Pointer to the Received Frame Data  */

    CAN_UINT16 * const pRxTimeoutCount;                 /* Receive Timeout Counter             */

    CAN_UINT16   const timeOut;                         /* Receive Timeout Value               */

    CAN_IL_RX_FRAME_REQUEST const * const pcanRxRequest;     /* Pointer to Frame Request Attributes */

} CAN_IL_RX_FRAME;


/* ===========================================================================	*/
// Receive Request Response status
/* ===========================================================================*/
#ifdef CAN_IL_REQ_FRAME_SUPPORT

typedef struct
{
 CAN_UINT8 Can_Il_Rx_Request_Status;
 CAN_UINT8 Can_Il_Rx_Response_Status;
 CAN_UINT8 Can_Il_Rx_Req_Res_Timer;
 CAN_UINT8 Can_Il_Rx_Req_Res_Timer_Flag;
 CAN_UINT8 Can_Il_Rx_Init_Complete;

}Can_Il_Rx_Request_Status_t;

#endif /* CAN_IL_REQ_FRAME_SUPPORT */

/* ===========================================================================
//  P U B L I C   M A C R O S
// =========================================================================*/

/* Conversion from Time in Milliseconds to Interaction Layer Task Tics */
#define IL_TIME_IN_TASK_TICS( tMs )           ((CAN_UINT16) (((tMs) /IL_TASK_PERIOD_MS) ))

#define STATUS_CLEAR_ALL                      ((CAN_UINT8)0xFF)
#define IL_TX_ALL_STATUS					  ((CAN_UINT8)0xFF)
#define IL_RX_ALL_STATUS					  ((CAN_UINT8)0xFF)

#define SETMODE                               ((CAN_BOOLEAN)0)
#define CLEARMODE							  ((CAN_BOOLEAN)1)

#define ILSTATUS                              ((CAN_UINT8)0)
#define ILRXSTATUS                            ((CAN_UINT8)1)
#define ILTXSTATUS                            ((CAN_UINT8)2)

#define IL_STATUS_ERROR						  ((CAN_UINT8)0xFF)

#ifndef SUCCESS
#define SUCCESS      						  ((CAN_UINT8)0x01)
#endif

#ifndef FAILURE
#define FAILURE      						  ((CAN_UINT8)0x00)
#endif

/* Transmit Frame Attributes */
#define IL_TX_ATTR_DEFAULT                    (0x00u)
#define IL_TX_ATTR_EVENT                      BIT0
#define IL_TX_ATTR_PERIODIC                   BIT1
#define IL_TX_ATTR_BURST                      BIT2
#define IL_TX_ATTR_TXC_NOTIFY                 BIT3
#define IL_TX_ATTR_INIT                       BIT4

/* New attribut to support Periodic message  transmission on Request*/
#define IL_TX_PERIODIC_ON_REQ                 ((CAN_UINT8)(BIT0 | BIT7))

/* Transmit Frame Status */
#define IL_TX_STATUS_BURST_ACTIVE             BIT0
#define IL_TX_STATUS_BURST_COMPLETE           BIT1
#define IL_TX_STATUS_PERIODIC_TX_PENDING      BIT2
#define IL_TX_STATUS_EVENT_TX_PENDING         BIT3
#define IL_TX_STATUS_TXC_NOTIFY               BIT4
#define IL_TX_STATUS_INIT                     BIT5
#define IL_TX_STATUS_PERIODIC                 BIT6
#define IL_TX_STATUS_EVENT                    BIT7

/* Receive Frame Attributes */
#define IL_RX_ATTR_DEFAULT                    (0x00u)
#define IL_RX_ATTR_EVENT                      BIT0
#define IL_RX_ATTR_PERIODIC                   BIT1
#define IL_RX_ATTR_TIMEOUT_MONITOR            BIT2
#define IL_RX_ATTR_RECEIVE_REQUEST            BIT3
#define IL_RX_ATTR_RECEIVE_POLLING            BIT4

/* Receive Frame Status Bits */
#define IL_RX_STATUS_RX_PENDING               BIT0
#define IL_RX_STATUS_GAIN_NOTIFIED            BIT1
#define IL_RX_STATUS_LOSS_NOTIFIED            BIT2
#define IL_RX_STATUS_TIMEOUT_MONITOR          BIT3
#define IL_RX_STATUS_REQ_TX_START             BIT4
#define IL_RX_STATUS_RX_REQ_ACTIVE            BIT5
#define IL_RX_STATUS_WAIT_RX_REQ_TXC          BIT6

#define IL_RX_REQ_ISSUED				      BIT7
#define VALID_RX_REQ_ISSUED				      ((CAN_UINT8)0x81)


/* Interaction Layer Status Bits */
#define IL_STATUS_SUSPEND                     BIT0
#define IL_STATUS_TX_SUSPEND                  BIT1
#define IL_STATUS_RX_TIMEOUT_DISABLE          BIT2
#define IL_STATUS_RESUME_ALL                  ((CAN_UINT8)0xFF)

#define IL_RX_NO_LOAD                         ((CAN_UINT8) 0x00)
#define IL_RX_NEW_LOAD                        ((CAN_UINT8) 0x01)
#define IL_RX_DFLT_LOAD                       ((CAN_UINT8) 0x02)

/* Frame Type Mask (Type 1 or Type 2 in CAN ID) */
#define IL_FRAME_TYPE_MASK                    ((CAN_UINT32) 0x00F80000u)

/* PF - DA Mask  (PF and DA Bytes in CAN ID) */
#define IL_PF_DA_MASK                         ((CAN_UINT32) 0x00FFFF00u)

#define IL_RX_REQUEST_TIMEOUT_TICS            IL_TIME_IN_TASK_TICS( 100 )
#define IL_RX_REQ_TX_MSG_HANDLE_OFFSET        (0x8000u)

#define IL_INIT_NOT_DONE                      0x00
#define IL_INIT_DONE                          0x01

#define CAN_IL_SETBITS( operand, bit_mask, bit_shift, type )    ((operand) |= (type)((bit_mask) << (bit_shift)))
#define CAN_IL_CLEARBITS( operand, bit_mask, bit_shift, type )  ((operand) &= (type)(~((bit_mask) << (bit_shift)))

/* ===========================================================================
  Bit Width Masks (Used to Pack and Unpack Frames)
 =========================================================================*/
#define CAN_IL_0_BITS_WIDE  ((CAN_UINT8) 0x00u)
#define CAN_IL_1_BITS_WIDE  ((CAN_UINT8) 0x01u)
#define CAN_IL_2_BITS_WIDE  ((CAN_UINT8) 0x03u)
#define CAN_IL_3_BITS_WIDE  ((CAN_UINT8) 0x07u)
#define CAN_IL_4_BITS_WIDE  ((CAN_UINT8) 0x0Fu)
#define CAN_IL_5_BITS_WIDE  ((CAN_UINT8) 0x1Fu)
#define CAN_IL_6_BITS_WIDE  ((CAN_UINT8) 0x3Fu)
#define CAN_IL_7_BITS_WIDE  ((CAN_UINT8) 0x7Fu)
#define CAN_IL_8_BITS_WIDE  ((CAN_UINT8) 0xFFu)

#define BIG                                   0x00
#define LITTLE                                0x01
#define MIXED                                 0x02

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* IL_DEFINES_H */


