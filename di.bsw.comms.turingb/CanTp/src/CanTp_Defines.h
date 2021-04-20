#if !defined( CAN_TP_DEFINES_H )
#define CAN_TP_DEFINES_H

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
**  Name:           CanTp_Defines.h
**
**  Description:    CAN Transport protocol typedefs and datatype definitions
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/
#include "CclStack_Types.h"
#include "Can_defs.h"

/*******************************************************************************
================================================================================
 P U B L I C   M A C R O S
================================================================================
*******************************************************************************/
#define VTP_TRUE                     1
#define VTP_FALSE                    0

#define VTP_NOTOK                    VTP_FALSE
#define VTP_OK                       VTP_TRUE

#define VTP_YES                      VTP_TRUE
#define VTP_NO                       VTP_FALSE

#define VTP_ERROR                   (0xFF)
#define VTP_SUCCESS                 (0x01)

#define CANTP_FRAME_BYTE0           (0x00)
#define CANTP_FRAME_BYTE1           (0x01)
#define CANTP_FRAME_BYTE2           (0x02)
#define CANTP_FRAME_BYTE3           (0x03)
#define CANTP_FRAME_BYTE4           (0x04)
#define CANTP_FRAME_BYTE5           (0x05)
#define CANTP_FRAME_BYTE6           (0x06)
#define CANTP_FRAME_BYTE7           (0x07)

#define CANTP_CONTROL_MASK          (0xF0)
#define CANTP_FF_CF_BYTE0LEN_MASK   (0x0F)

#define CANTP_SF_CONTROL            (0x00)
#define CANTP_FF_CONTROL            (0x10)
#define CANTP_CF_CONTROL            (0x20)
#define CANTP_FC_CONTROL            (0x30)

#define CANTP_FC_CTS_BYTE           (0x30)
#define CANTP_FC_WAIT_BYTE          (0x31)
#define CANTP_FC_OVERFLOW_BYTE      (0x32)

#define CANTP_FC_CTS_MASK           (0x00)
#define CANTP_FC_WAIT_MASK          (0x01)
#define CANTP_FC_OVERFLOW_MASK      (0x02)

#define CANTP_FC_MAX_VALUE          (0x7F)

#define CANTP_CF_FIRST_SEQNUM       (0x01)
#define CANTP_CF_MAX_SEQNUM         (0x0F)
#define CANTP_CF_RSTRT_SEQNUM       (0x00)

#define CANTP_STATUS_INIT           (0x00)
#define CANTP_STATUS_COMPLETE       (0x01)
#define CANTP_STATUS_ERROR          (0x02)

#define CANTP_DIAG_MESSAGE          (0x01)
#define CANTP_APPL_MESSAGE          (0x02)
#define CANTP_XCP_MESSAGE           (0x03)

#define CANTP_TIMER_ZERO            (0x00)
#define CANTP_INVALID_PDUID         (0xFF)
#define CANTP_INVALID_CHANNEL       (0xFF)

#define CANTP_SF_MAX_LENGTH         (0x07)
#define CANTP_FF_MAX_LENGTH         (0x06)
#define CANTP_CF_MAX_LENGTH         (0x07)

#define CANTP_SF_FC_DL_BYTE         (0x00)
#define CANTP_FF_DL_IBYTE           (0x00)
#define CANTP_FF_DL_IIBYTE          (0x01)

#define CANTP_FF_BYTE0LEN_MASK      (0x0F)

#include "CanTp_Cfg.h"


/*================================================================================
 P U B L I C   T Y P E   D E F I N I T I O N S
================================================================================*/

typedef unsigned char   VTP_UINT8;
typedef unsigned char   VTP_BOOL;
typedef unsigned short  VTP_UINT16;
typedef unsigned int    VTP_UINT32;

typedef enum
{
    CANTP_UNINIT = 0x00,     
    CANTP_INIT   = 0x01      
} CanTp_StatusType;

typedef struct
{
    VTP_UINT16   SeqNum            : 4;
    VTP_UINT16   Tx_inprogress     : 1;
    VTP_UINT16   Rx_inprogress     : 1;
    VTP_UINT16   SendMsg           : 1;
    VTP_UINT16   Wait4FC           : 1;
    VTP_UINT16   MsgRcvd           : 1;
    VTP_UINT16   Rx_Status         : 2;
    VTP_UINT16   Tx_Status         : 2;
    VTP_UINT16   FC_Status         : 2;
	VTP_UINT16   reserved          : 1;
}VTP_StatusType;

typedef struct
{
    VTP_UINT8   *Data;
    VTP_UINT32  DataLength;
}VTP_SDU;

typedef struct
{
    VTP_UINT32  MsgHandle;
    VTP_UINT8   Size;
    VTP_UINT8   Data[8];
}VTP_PDU;

typedef struct
{
    VTP_UINT8   ControllerIDofChannel;
    VTP_UINT8   VTPStartRequestHandle;
    VTP_UINT8   VTPStopRequestHandle;
    VTP_UINT8   VTPResponseHandle;
    VTP_UINT8   VTPMessageType;
#if (VTP_FC_SUPPORT == VTP_YES)
    VTP_UINT8   FlowControlSupport;
#endif
#if (VTP_PADDING_SUPPORT == VTP_YES)
    VTP_UINT8   PaddingSupport;
    VTP_UINT8   PaddingValue;
#endif
    VTP_UINT8   VTPRxTxCallBackIndex;
    VTP_UINT8   VTPTxRetryCnt;
}sTP_Parameter_Config_Type;

typedef struct
{
#if (VTP_FC_SUPPORT == VTP_YES)
    VTP_UINT16  WaitCFTimeOut;
#endif
    VTP_UINT16  MaxRxWaitCount;
}sTP_RxTiming_Config_Type;

#if (VTP_FC_SUPPORT == VTP_YES)
typedef struct
{
    VTP_UINT8   STMin;
    VTP_UINT8   BlockSize;
}sTP_FC_Config_Type;
#endif

typedef struct
{
    VTP_UINT16  WaitTxConfTimeOut;
#if (VTP_FC_SUPPORT == VTP_YES)
    VTP_UINT16  WaitFCTimeOut;
    sTP_FC_Config_Type  TxFCConfig;
#endif
    VTP_UINT16  MaxTxWaitCount;
    VTP_UINT16  TransmitCFTimeOut;
}sTP_TxTiming_Config_Type;

typedef BufReq_ReturnType (*ptrTPStartofRx) ( PduIdType ,const PduInfoType * ,PduLengthType ,PduLengthType * );
typedef BufReq_ReturnType (*ptrTPCopyRxData) ( PduIdType ,const PduInfoType * ,PduLengthType * );
typedef void (*ptrReceiveAckFuncType) ( PduIdType, VTP_UINT8 );

#if (VTP_PADDING_SUPPORT == VTP_YES)
typedef void (*ptrTPInvRxData) ( PduIdType );
#endif


typedef struct
{
    ptrTPStartofRx  StartOfRxFunc;
    ptrTPCopyRxData  CopyRxFunc;
    ptrReceiveAckFuncType  RxAckFunc;
#if (VTP_PADDING_SUPPORT == VTP_YES)
    ptrTPInvRxData InvRxDataFunc;
#endif
}sTP_RxCB_Config_Type;

typedef BufReq_ReturnType (*ptrTPCopyTxData) ( PduIdType , const PduInfoType * ,RetryInfoType * , PduLengthType * );
typedef void (*ptrTPTransmitCnfFuncType) ( PduIdType ,VTP_UINT8 );
typedef void (*ptrTransmitCnfFuncType) ( PduIdType );

typedef struct
{
    ptrTPCopyTxData  CopyTxFunc;
    ptrTPTransmitCnfFuncType  TpTxConfirmationFunc;
    ptrTransmitCnfFuncType  TxConfirmationFunc;
}sTP_TxCB_Config_Type;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_TP_DEFINES_H */


