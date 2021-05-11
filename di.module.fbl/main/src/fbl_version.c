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

File Name        :  fbl_version.c
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_version.c
Author           :  kshanmu4
Description      :  Implements the Component management routines.
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_version.h"

#ifdef COMPILER_RENESAS_SHC
#pragma section FBLHEADER
#endif
const struct SFblHeader FblHeader =
{ /* FblHeader */
    { /* CompHeader */
        { /* VersionHeader */
            FBL_MAJOR_VERSION,
            FBL_MINOR_VERSION,
            FBL_PATCH_HIGH_VERSION,
            FBL_PATCH_LOW_VERSION,
            FBL_BUILDER_ID,
            FBL_BUILD_YEAR,
            FBL_BUILD_MONTH,
            FBL_BUILD_DAY,
            FBL_BUILD_HOUR,
            FBL_BUILD_MINUTE,
            { FBL_COMMIT_HASH },
            { FBL_BUILD_NUMBER }
        }
    }
};
#ifdef COMPILER_RENESAS_SHC
#pragma section
#endif
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
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
