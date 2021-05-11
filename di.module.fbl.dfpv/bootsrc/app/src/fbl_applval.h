#if !defined(FBL_APPLVAL_H)
#define FBL_APPLVAL_H
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



/* ===========================================================================

  							Name   : fbl_applval.h

  					Description	   : Application Validation routines declarations.

  					Organization   : Multiplex Core Technology

==============================================================================*/


/*******************************************************************************
================================================================================
 								FileInclusions                                 
================================================================================
*******************************************************************************/
#include "system.h"
#include "fbl_app_cfg.h"


/*******************************************************************************
================================================================================
 								Macros                                        
================================================================================
*******************************************************************************/
#define IMPROPER_APPL_VALID_CONST 0xBBBBBBBBuL


/*******************************************************************************
================================================================================
								Global Prototypes                               
================================================================================
*******************************************************************************/
extern UINT8 FblIsValidApp(void);

#endif /*FBL_APPLVAL_H */

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
