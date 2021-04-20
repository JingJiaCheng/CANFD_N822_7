#if !defined(IL_H)
#define IL_H
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
//  Name:           il.h
//
//  Description:    CAN Interaction Layer
//
//  Organization:   Multiplex Core Technology
//
// =========================================================================*/

#include "CclStack_Types.h"
#include "can_type.h"
#include "can_defs.h"
#include "CanIl_Defines.h"
#include "CanIl_Cfg.h"
#include "CanIl_Par_Cfg.h"
#include "CanCcl.h"


/* ===========================================================================
//  P U B L I C   M A C R O S
// =========================================================================*/

/*** For External Linkage to other files ****/
extern CAN_IL_TX_FRAME const* pCan_Il_Tx_Frame[CAN_IL_NUM_OF_CHANNELS];
extern CAN_IL_TX_MESSAGE const* pCan_Il_Tx_Message[CAN_IL_NUM_OF_CHANNELS];


#ifdef CANIL_CCLSUPPORT

#define pRxIndicationFunc                         Ccl_RxIndication
#define pTxConfirmationFunc                       Ccl_TxConfirmation
#define pRxToutIndicationFunc                     Ccl_RxToutIndication

#else

#endif

/* ===========================================================================
//  P U B L I C   F U N C T I O N   P R O T O T Y P E S
// =========================================================================*/

/* ===========================================================================
// Transmit (Put) and Receive ( Get) Functions
// =========================================================================*/
extern void
CanIlInit( CAN_HWINST const hwInst);

extern void
CanIlTxTask( CAN_HWINST const hwInst);

extern void
CanIlRxTask( CAN_HWINST const hwInst);

extern void
CanIl_RxIndication(CAN_HWINST /*const*/ hwInst, CAN_UINT16 const canFrameHandle, CAN_RMD const * const pRmd);


extern void
CanIlAppHookReceive( CAN_UINT8 const * const, CAN_UINT32,CAN_HWINST const );

extern void
CanAppHookReceive( CAN_UINT8 const * const, CAN_UINT32,CAN_HWINST const );

extern void
CanIl_TxConfirmation( CAN_HWINST const hwInst, CAN_TMH const hTxMsg );

extern void
CanIlSetStatusTxPeriodic ( CAN_UINT16 const, CAN_HWINST const, CAN_BOOLEAN txState );

extern void
CanIlSetRxMode ( CAN_UINT16 const, CAN_HWINST const, CAN_BOOLEAN rxState );

extern void
CanIlSetIlStatus( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 setMode );

extern void
CanIlSetRxStatus( CAN_HWINST const hwInst, CAN_UINT16 iHandle, CAN_BOOLEAN rxState );

extern void
CanIlSetTxStatus ( CAN_HWINST const hwInst, CAN_UINT16 iHandle, CAN_BOOLEAN txState );

extern CAN_UINT8
CanIlGetIlMode( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 iHandle );

extern void
CanIlSetIlMode( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 iState, CAN_UINT8 iHandle, CAN_UINT8 setMode );

extern void
IC_0x510_RollingCounter_Checksum(CAN_UINT8 iHandle);

extern void
IC_0x525_RollingCounter_Checksum(CAN_UINT8 iHandle);


/* ===========================================================================
// Interaction Layer Suspend, Resume and Enable Functions
// =========================================================================*/
extern void
CanIlSuspend( CAN_HWINST const );

extern void
CanIlResume( CAN_HWINST const hwInst);

extern void
CanIlTxSuspend( CAN_HWINST const );

extern void
CanIlTxResume( CAN_HWINST const );

extern void
CanIlEnable( CAN_HWINST const );


/* ===========================================================================
// Receive Request Message Control Functions
// =========================================================================*/

extern CAN_UINT8
CanIlInspectPendingReceiveRequest( CAN_UINT16 const, CAN_HWINST const );

/* ===========================================================================
// Data receive and transmit Control Functions
// =========================================================================*/

extern CAN_BOOLEAN
CanIlTxGetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 * numBytes, CAN_HWINST const hwInst );

extern CAN_BOOLEAN
CanIlTxSetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst);

extern CAN_BOOLEAN
CanIlTxPutSetMessage( CAN_UINT16 const msgHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 const numBytes, CAN_BOOLEAN const txMsg, CAN_HWINST const hwInst );

extern CAN_BOOLEAN
CanIlTxPutSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 const numBytes, CAN_HWINST const hwInst );

extern void
CanIlTxEnableBurstPeriodic( CAN_TMH const, CAN_HWINST const );

extern void
CanIlHookRequestReceive( CAN_IL_RMD const * const, CAN_HWINST const );

extern CAN_BOOLEAN
CanIlRxGetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst );

extern CAN_BOOLEAN
CanIlRxGetMessage( CAN_UINT16 const msgHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 const numBytes, CAN_HWINST const hwInst );

extern CAN_UINT8
CanIlRxRequestMessage( CAN_UINT16 const, CAN_UINT8 const, CAN_HWINST const );

extern void 
CanIlRxPutSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const *pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst);

extern void 
CanIlCopyToReceiveBuffer( CAN_UINT8 canFrameHdl, CAN_UINT8 const * const fl_local_buff_ptr,CAN_UINT8 hwInst );

extern void 
CanIlCopyToTransmitBuffer( CAN_UINT8 canFrameHdl, CAN_UINT8 const * const fl_local_buff_ptr,CAN_UINT8 hwInst );

extern void 
CanIlInitRequestFrames( CAN_HWINST const hwInst );


#ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT

extern void	CanIl_FrValidation_Init( CAN_HWINST hwInst );

extern CAN_BOOLEAN
CanIlValidateTransmitFrame( CAN_HWINST hwInst, CAN_IL_TMD const * const tx_data_buffer, CAN_UINT8 iHandle );

extern CAN_BOOLEAN
CanIlVerifyReceivedFrame( CAN_HWINST hwInst, CAN_IL_RMD const * const rx_data_buffer, CAN_UINT8 iHandle );

extern void CanIlHandleInvalidRxFrame( void );

#endif

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* IL_H */


