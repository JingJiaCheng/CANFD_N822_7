#if !defined( CAN_TP_H )
#define CAN_TP_H

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
**  Name:           CanTp.h
**
**  Description:    CAN Transport Layer function prototypes
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

#include "Can_defs.h"
#include "CanTp_Defines.h"
#include "CanTp_Par_Cfg.h"
#include "CanDisp_Cfg.h"


/****************************************************************************/
/*  Global constants and variables                                          */
/****************************************************************************/

/****************************************************************************/
/*  Public Macros definitions                                               */
/****************************************************************************/

/****************************************************************************/
/*  Function prototypes                                                     */
/****************************************************************************/

/*********************************************************************************************************************/
/** Can Tp Interfaces */
/*********************************************************************************************************************/
extern void CanTp_Init(void);
extern void CanTp_DeInit(void);
extern void CanTp_Channel_Init(VTP_UINT8 channel);
extern void CanTp_MainFunction(void);
extern void CanTp_TxConfirm(VTP_UINT8 channel);
extern void CanTp_AbortTransmit(VTP_UINT8 channel);
extern void CanTp_SetFC_Overflow(VTP_UINT8 channel);
extern Std_ReturnType CanTp_Transmit(VTP_UINT8 CtrlId, PduIdType CanTxPduId, PduInfoType const * PduInfoPtr); 

# if(CANDISP_TP_SUPPORT_API == STD_ON)
/* Rx indication function for TP message. */
extern void CanTp_RxIndication(VTP_UINT8 const CtrlId, PduIdType const RxPduId,  CAN_RMD const * const pRmd);
/* Tx confirmation function for TP message. */
extern void CanTp_TxConfirmation(VTP_UINT8 const CtrlId, PduIdType const TxPduId);
# endif /* (CANDISP_TP_SUPPORT_API == STD_ON) */

#if(VTP_WAITFC_SUPPORT == VTP_YES)
extern void CanTp_SetFC_Wait( VTP_UINT8 channel );
#endif /* (VTP_WAITFC_SUPPORT == VTP_YES) */

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_TP_H */

