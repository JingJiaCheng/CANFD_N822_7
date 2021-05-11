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

File Name        :  fbl_app_cfg.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\cfg\fbl_app_cfg.h
Author           :  kshanmu4
Description      :  FBL Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_APP_CFG_H
#define FBL_APP_CFG_H

#include "system.h"
#include <string.h> /* Needed for Memcpy */

#define COMPRESS_MODE_ENABLE

#define COMM_PROTOCOL 			(1)
#define LIN_PROTOCOL  			(0)
#define CAN_PROTOCOL 			(1)

/* Utility Macros */
#define GET_ADDR(x)         (*(unsigned int*)x)
#define JUMP(x)             (*((void(*)(void))x))()         /* Jump to sub routine */

/* Standard Library Functions */
#define MEMCPY(dst,src,size)              (void)FblApp_Memcpy(dst,src,size)
#define MEMSET(dst,src,size)              (void)FblApp_Memset(dst,src,size)

/* Application Jump Address */
#define APP_START_ADDR                  0x00A00010u



/* APP Marker Configuration */
#define APP_MARKER_PATTERN_SIZE         4u
#define APP_FLASH_DELETED               0xFFu
#define APP_MARKER_PATTERN_BEGIN        {0xAAu, 0x55u, 0xAAu, 0x55u}
#define APP_MARKER_PATTERN_END          {0x55u, 0xAAu, 0x55u, 0xAAu}



#define APP_MARKER_START_ADD			0x01A00000UL
#define APP_MARKER_END_ADD				0x01BFFFFCUL
#define MARKER_PATTERN_BEGIN            0x55AA55AAUL
#define MARKER_PATTERN_END              0xAA55AA55UL


/* HFlash 2 Marker Configuration */
#define HFLASH2_MARKER_START_ADD        0x48000000UL
#define HFLASH2_MARKER_END_ADD          0x4BFFFFF0UL

/* Timer Configuration */
#define FBL_TIMER_PERIOD_MS             1u

#define FBL_STAY_IN_BOOT_TIMEOUT_MS     10u

/* FBL Magic Flag Value */
#define FBL_MAGICFLAG_START_VALUE       {0x11u, 0x22u, 0x33u, 0x44u}

/* Jump into App */
#define JUMP_APP()                      FblApp_JumpApp()

#define FblApp_IsValidApp              	FblIsValidApp

#define __no_init
#define __far

#define DISABLE   0x00u
#define ENABLE   0x01u

#define D53_PBL


extern void FblApp_Memcpy(UINT8 *dst,UINT8 *src,UINT32 size);
extern void FblApp_Memset(UINT8 *dst,UINT8 src,UINT32 size);

#endif /* FBL_APP_CFG_H */

/* End of file **************************************************************/
