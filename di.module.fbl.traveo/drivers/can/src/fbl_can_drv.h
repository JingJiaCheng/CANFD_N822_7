/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2016. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/

/*****************************************************************************

File Name        :  fbl_can_drv.h
Module Short Name:  fbl.drivers.sh726x\can
VOBName          :  fbl.drivers.sh726x\can\src\fbl_can_drv.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_can_drv.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_CAN_DRV_H
#define FBL_CAN_DRV_H

/**  Include Files  **/
#include "can.h"
#include "canxcvr.h"
#include "fbl_main.h"

 /*============================================================================
 ** Function Name:    FblCanDrv_Init
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the CAN Bus
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblCanDrv_Init(void);

 /*============================================================================
 ** Function Name:    FblCanDrv_Task
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to service the CAN Bus task
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void  FblCanDrv_Task(void);

 /*============================================================================
 ** Function Name:    FblCanDrv_Send
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to send a frame over the CAN Bus
 **
 ** Invocation:       Invoked by FBL
 **
 ** Inputs            UINT8 handle   - CAN Tramsit Handle
 **                   UINT16 canId   - CAN Message ID
 **                   UINT8 *pData   - Pointer to the data buffer
 **                   UINT8 len      - Length of the data buffer
 **
 ** Return:           FBL_OK - Success
 **                   FBL_FAIL - Transmit failure
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCanDrv_Send(UINT8 handle, UINT16 canId, const UINT8 *pData, UINT8 len);

 /*============================================================================
 ** Function Name:    FblCanDrv_TxConfirmCallback
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called by the FBL CAN driver to confirm
 **                   the transmission of the CAN frame
 **
 ** Invocation:       Invoked by FBL CAN Driver
 **
 ** Inputs            PduIdType pdu - Transmit Handle
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
 void FblCanDrv_TxConfirmCallback(UINT8 pdu);

 /*============================================================================
 ** Function Name:    FblCanDrv_RxIndication
 **
 ** Visibility:       Public
 **
 ** Description:      This function is called by the FBL CAN driver when a
 **                   CAN Frame is received. TP implements this function
 **
 ** Invocation:       Invoked by FBL CAN Driver
 **
 ** Inputs            UINT32 MessageId - CAN Message ID
 **                   UINT32 MessageLength - CAN Message Length
 **                   UINT8 const* DataPtr - Data pointer
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void FblCanDrv_RxIndication(UINT32 MessageId, UINT8 MessageLength, UINT8 const* pDataPtr);

#endif /* FBL_CAN_DRV_H */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 21-NOV-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
