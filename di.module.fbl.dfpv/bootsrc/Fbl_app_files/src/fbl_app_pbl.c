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

File Name        :  fbl_app_init.c
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\src\fbl_app_pbl.c
Author           :  kshanmu4
Description      :  Defines Logic for Application specific hardware 
					initialization routines
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

#include "fbl_app.h"
#include "udsdiag.h"
#include "fbl_startup_cfg.h"

// Program MPU Configuration
SFblStartupMpuConfig AppMpuConfig[APP_NUM_MPU_REGIONS] =
{
	/* MPU start address,	MPU Access Rights,		MPU Region Number,	MPU Access Size */
    {(UINT32)0x00a00000u,		(UINT32)0x00000225UL,	(UINT8)0U,			(UINT8)0x2BU  	},
	{(UINT32)0x009F0000u,		(UINT32)0x00000225UL,	(UINT8)1U,			(UINT8)0x1FU  	},
	{(UINT32)0x50200000u,		(UINT32)0x00001310UL,	(UINT8)2U,			(UINT8)0x39U  	},
	{(UINT32)0x00000000u,		(UINT32)0x00000225UL,	(UINT8)3U,			(UINT8)0x29U  	},
	{(UINT32)0x50000000u,		(UINT32)0x0000132cUL,	(UINT8)4U,			(UINT8)0x29U  	},
	{HYPERFLASH0_START_ADDRESS,	(UINT32)0x00000304UL,	(UINT8)5U,			(UINT8)0x3AU  	},
	{(UINT32)0xB0000000u,		(UINT32)0x00000304UL,	(UINT8)6U,			(UINT8)0x35U  	},
	{(UINT32)0xB8000000u,		(UINT32)0x00001325UL,	(UINT8)7U,			(UINT8)0x35U  	},
	{(UINT32)0x0E800000u,		(UINT32)0x00001325UL,	(UINT8)8U,			(UINT8)0x27U  	},
	{(UINT32)0xFFFF0000u,		(UINT32)0x00001325UL,	(UINT8)9U,			(UINT8)0x1fU  	},
	{(UINT32)0xFFFEE000u,		(UINT32)0x00001325UL,	(UINT8)10U,			(UINT8)0x19U  	},
	{(UINT32)0x01a00000u,		(UINT32)0x00000225UL,	(UINT8)11U,			(UINT8)0x2BU  	},
};

#pragma ghs startdata
//#pragma ghs section rodata="SEC_KEY"



#pragma ghs section rodata=default
#pragma ghs enddata


UINT8 FblApp_CheckFblExitCondition(void)
{
	UINT8 exitFbl = (UINT8)TRUE;
	
	if(GET_SESSION() != DEFAULTSESSION)
	{
		exitFbl = (UINT8)FALSE;
	}
	
	return exitFbl;
}

