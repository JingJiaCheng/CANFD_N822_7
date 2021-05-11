#if !defined(CAN_XCVR_H)
#define CAN_XCVR_H

/* ===========================================================================
**
**                       CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

#include "system.h"
#include "fbl_can_cfg.h"

/*******************************************************************************
================================================================================
 								Macros                                        
================================================================================
*******************************************************************************/
#define CAN_CH_CCAN (UINT8)FBL_CAN_CHANNEL_ID

/*******************************************************************************
================================================================================
 								Global Variables                                        
================================================================================
*******************************************************************************/


/*******************************************************************************
================================================================================
 								Prototypes                                        
================================================================================
*******************************************************************************/
void CANXCVR_NormalMode(UINT8 Channel);
void CANXCVR_Initialize(UINT8 Channel);
void CANXCVR_Enable(void);
void PortPinInit(void);
void HyperFlash_PowerEnable(void);
void Voltage_3_3Enable(void);
#endif /*CAN_XCVR_H */

/*******************************************************************************
================================================================================
				RTC    REVISION     NOTES									   
  		For each change to this file, be sure to record:					   
  		1.   Who made the change and when the change was made.				   
  		2.   Why the change was made and the intended result.				   
  																			   
  		Date      version     By         Reason For Change					   
================================================================================  																			   
       10-03-16      1      PSATHISH      Initial version						   

================================================================================
*******************************************************************************/
