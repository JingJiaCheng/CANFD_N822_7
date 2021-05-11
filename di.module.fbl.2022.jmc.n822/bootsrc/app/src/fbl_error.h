#ifndef FBL_ERROR_H
#define FBL_ERROR_H

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

File Name        :  fbl_error.h
Module Short Name:  fbl.main\src
VOBName          :  fbl.main\src\fbl_error.h
Author           :  kshanmu4
Description      :  Error codes returned by the APIs. 
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  All
Target Processor :  All
******************************************************************************/

#define FBL_OK							0U
#define FBL_FAIL						1U
#define FBL_TIMEOUT						2U
#define FBL_INVALID_PARAM				3U
#define FBL_INVALID_ADDR				4U
#define FBL_INVALID_SIZE				5U
#define FBL_BUSY						7U
#define FBL_COMM_FAIL					8U

#endif /* FBL_ERROR_H */
