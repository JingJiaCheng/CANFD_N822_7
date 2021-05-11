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

  					Description	   : Application Validation routines.

  					Organization   : Multiplex Core Technology

==============================================================================*/



/*******************************************************************************
================================================================================
 								FileInclusions                                 
================================================================================
*******************************************************************************/
#include "fbl_applval.h"
#include "fbl_app_cfg.h"


/*******************************************************************************
================================================================================
 					   Local Global variables                               
================================================================================
*******************************************************************************/

#define  FBL_VALID_APPLN_0   (0xBB)
#define  FBL_VALID_APPLN_1	 (0xBB)
#define  FBL_VALID_APPLN_2	 (0xBB)
#define  FBL_VALID_APPLN_3	 (0xBB)

/* Application validation flags */
#pragma ghs startdata
#pragma ghs section rodata="V_APPLVAL_1A"
const UINT8 appValidStart[4] = 
{
    FBL_VALID_APPLN_0,
    FBL_VALID_APPLN_1,
    FBL_VALID_APPLN_2,
    FBL_VALID_APPLN_3
};
#pragma ghs section rodata=default
#pragma ghs enddata

#pragma ghs startdata
#pragma ghs section rodata="V_APPLVAL_1B"
const UINT8 appValidEnd[8] = 
{
    FBL_VALID_APPLN_0,
    FBL_VALID_APPLN_1,
    FBL_VALID_APPLN_2,
    FBL_VALID_APPLN_3,
    FBL_VALID_APPLN_0,
    FBL_VALID_APPLN_1,
    FBL_VALID_APPLN_2,
    FBL_VALID_APPLN_3
};
#pragma ghs section rodata=default
#pragma ghs enddata

#pragma ghs startdata
#pragma ghs section rodata="V_FBLVAL"
const UINT8 app_HPflash_ValidEnd[4] = 
{
    FBL_VALID_APPLN_0,
    FBL_VALID_APPLN_1,
    FBL_VALID_APPLN_2,
    FBL_VALID_APPLN_3
};
#pragma ghs section rodata=default
#pragma ghs enddata

UINT8 FblApp_IsValidApp(void)
{
    UINT8 valid = (UINT8)TRUE;
    UINT8 i;
    UINT8 validBegin[APP_MARKER_PATTERN_SIZE] = APP_MARKER_PATTERN_BEGIN;
    UINT8 validEnd[APP_MARKER_PATTERN_SIZE] = APP_MARKER_PATTERN_END;

 
    for(i = 0; i < APP_MARKER_PATTERN_SIZE; i++)
    {
        if((validBegin[i] != appValidStart[i]) ||
            (validEnd[i] != appValidEnd[i+APP_MARKER_PATTERN_SIZE]))
       {
           valid = (UINT8)FALSE;
           break;
       }
        else
        {
            if ( app_HPflash_ValidEnd[i] != appValidEnd[i])         
            {
                valid = (UINT8)FALSE;
                break;
            }
            else
            {
                ;/* DO NOTHING */
            }
        }
    }	
	return valid;
}

UINT8 FblApp_IsAppDependencies(void)
{
    UINT8 valid = (UINT8)TRUE;
    UINT8 i;
    UINT8 validBegin[APP_MARKER_PATTERN_SIZE] = APP_MARKER_PATTERN_BEGIN;
    UINT8 validEnd[APP_MARKER_PATTERN_SIZE] = APP_MARKER_PATTERN_END;
 
    for(i = 0; i < APP_MARKER_PATTERN_SIZE; i++)
    {
        if((validBegin[i] != appValidStart[i]) ||
            (validEnd[i] != appValidEnd[i+APP_MARKER_PATTERN_SIZE])
            )
        {
            valid = (UINT8)FALSE;
            break;
        }
        else
        {
        
        }
    }	
    return valid;
}



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
