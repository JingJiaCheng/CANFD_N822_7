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

File Name        :  fbl_version_cfg.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\cfg\fbl_version_cfg.h
Author           :  kshanmu4
Description      :  FBL Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_VERSION_CFG_H
#define FBL_VERSION_CFG_H

#define FBL_MAJOR_VERSION			0x03
#define FBL_MINOR_VERSION			0x00
#define FBL_PATCH_HIGH_VERSION		0x00
#define FBL_PATCH_LOW_VERSION		0x00

/* The following can be overridden during compilation */
#ifndef FBL_BUILDER_ID
#define FBL_BUILDER_ID				0x0F
#endif
#ifndef FBL_BUILD_YEAR
#define FBL_BUILD_YEAR				0x16
#endif
#ifndef FBL_BUILD_MONTH
#define FBL_BUILD_MONTH				0x01
#endif
#ifndef FBL_BUILD_DAY
#define FBL_BUILD_DAY				0x01
#endif
#ifndef FBL_BUILD_HOUR
#define FBL_BUILD_HOUR				0x10
#endif
#ifndef FBL_BUILD_MINUTE
#define FBL_BUILD_MINUTE			0x10
#endif
#ifndef FBL_COMMIT_HASH
#define FBL_COMMIT_HASH				0x00,0x00,0x00,0x00,0x00
#endif
#ifndef FBL_BUILD_NUMBER
#define FBL_BUILD_NUMBER			0x00,0x00,0x00,0x00
#endif
#endif /* FBL_VERSION_CFG_H */

/* End of file **************************************************************/
