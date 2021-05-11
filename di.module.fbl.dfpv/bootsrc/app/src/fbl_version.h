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

File Name        :  fbl_version.h
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_version.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported
                    by fbl_version.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_VERSION_H
#define FBL_VERSION_H

/**  Include Files  **/
#include "system.h"
#include "fbl_comp.h"
#include "fbl_version_cfg.h"

#ifdef COMPILER_RENESAS_SHC
#pragma pack 1
#endif
struct SFblHeader
{
    struct SCompHeader  compHeader;
};
#ifdef COMPILER_RENESAS_SHC
#pragma unpack
#endif

extern const struct SFblHeader FblHeader;

/**  Version extraction macros  **/
#define FblGetMajorVersion()        (UINT8)FblHeader.compHeader.version.majorVersion
#define FblGetMinorVersion()        (UINT8)FblHeader.compHeader.version.minorVersion
#define FblGetPatchVersion()        (((UINT16)(FblHeader.compHeader.version.patchVersionHigh << 8)) | (UINT16)FblHeader.compHeader.version.patchVersionLow)
#define FblGetPatchHighVersion()    (UINT8)FblHeader.compHeader.version.patchVersionHigh
#define FblGetPatchLowVersion()     (UINT8)FblHeader.compHeader.version.patchVersionLow
#define FblGetBuilderId()           (UINT8)FblHeader.compHeader.version.builderId
#define FblGetBuildYear()           (UINT8)FblHeader.compHeader.version.buildYear
#define FblGetBuildMonth()          (UINT8)FblHeader.compHeader.version.buildMonth
#define FblGetBuildDay()            (UINT8)FblHeader.compHeader.version.buildDay
#define FblGetBuildHour()           (UINT8)FblHeader.compHeader.version.buildHour
#define FblGetBuildMinute()         (UINT8)FblHeader.compHeader.version.buildMinute
#define FblGetCommitHashByte(x)     (UINT8)FblHeader.compHeader.version.commitHash[x]
#define FblGetBuildNumberByte(x)    (UINT8)FblHeader.compHeader.version.buildNumber[x]

#endif /* FBL_VERSION_H */
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
