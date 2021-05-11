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

File Name        :  fbl_compress_cfg.h
Module Short Name:  vehiclecomm.core.fbl.compress
VOBName          :  vehiclecomm.core.fbl.compress\cfg\fbl_compress_cfg.h
Author           :  kshanmu4
Description      :  FBL Compression Module Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_COMPRESS_CFG_H
#define FBL_COMPRESS_CFG_H

/* Select Algorithm. Available libraries: VECTOR_LZSS, HEATSHRINK_LZSS */
#define COMPRESS_LIB  	HEATSHRINK_LZSS

/* Enable Compression API */
//#define COMPRESS_ENABLE

/* Enable DeCompression API */
#define DECOMPRESS_ENABLE

#endif /* FBL_COMPRESS_CFG_H */
