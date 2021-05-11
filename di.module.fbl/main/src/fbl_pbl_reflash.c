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

File Name        :  fbl_pbl_reflash.c
Module Short Name:  vehiclecomm.core.fbl.main
VOBName          :  vehiclecomm.core.fbl.main\src\fbl_main.c
Author           :  kshanmu4
Description      :  Defines Logic for Flash Bootloader
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

#include "system.h"
#include "fbl_app.h"
#include "fbl_startup.h"
#include "fbl_timer_drv.h"
#include "fbl_wdt_drv.h"
#include "fbl_crypto.h"
#include "fbl_pbl_reflash.h"
#include "pblrom.h"

#define PBL_COMP_ID			0
#define APP_COMP_ID			1
#define PBL_BUFFER_SIZE		512
#define PBL_MAX_RETRY		5
#define PBL_MEM_ADDR		0x20000

UINT32 fblMsTick;
UINT8  fblRetryCount;
UINT8  fblProgBuffer[PBL_BUFFER_SIZE];
struct SFblTesterInfoData testerInfo;
struct SFblCrypto 	sha256Inst;
static UINT8		sha256Hash[32];

/* Need to make it compile with fbl_app_init.c*/
UINT8 udsdiag_currsess;

struct SReflashHeader
{
	void (*entry_func)(void);
};

#pragma section PBLReflashHeader
const struct SReflashHeader reflashHeader = 
{
	FblMain
};
#pragma section

void FblMain(void)
{
	UINT32 fblSize;
	UINT32 bytesProgrammed;
	UINT32 index;
	UINT8  isError;
	
	/* Disable all interrupts */
	FblStartup_InterruptDisable();
	
	/* Perform common micro specific Init */
	(void)FblStartup_Init();

	/* Initialize RAM */
	FblStartup_InitRAM();
	
	/* Perform application specific hw Init */
	FblApp_HwInit();
	
	/* Init Basic Drivers */
	FblWdtDrv_Init();
	FblTimerDrv_Init(FBL_TIMER_0, FBL_TIMER_PERIOD_MS);
	
	/* Init Components */
	FblComp_Init();
	
	/* Initialize Variables */
	fblRetryCount = 0;
	fblMsTick = 0;
	bytesProgrammed = 0;
	isError = TRUE;
	
	fblSize = FblComp_GetSize(PBL_COMP_ID);

	if(PBLROM_LENGTH == fblSize)
	{	
		while((TRUE == isError) && (fblRetryCount < PBL_MAX_RETRY))
		{
			isError = FALSE;
			
			FblMain_RunTimer();
			
			/* Init SHA-256 */
			(void)FblCrypto_SHA256_Start(&sha256Inst);
			
			/* Remove PBL Authorization */
			if(FBL_OK != FblComp_SetAuthorization(PBL_COMP_ID, FBL_COMP_NOT_AUTHORIZED))
			{
				isError = TRUE;
			}
			
			/* Copy MainApp Fingerprint to current session */
			if(FALSE == isError)
			{
				if(FBL_OK != FblComp_ReadTesterInfo(APP_COMP_ID, &testerInfo))
				{
					isError = TRUE;
				}
				else if(FBL_OK != FblComp_WriteTesterInfo(&testerInfo))
				{
					isError = TRUE;
				}
				else
				{
					
				}
			}
			
			/* Erase PBL */
			if(FALSE == isError)
			{
				if(FBL_OK != FblComp_Erase(PBL_COMP_ID))
				{
					isError = TRUE;	
				}
			}

			/* Program FBL */
			while((FALSE == isError) && (bytesProgrammed < fblSize))
			{
				/* Copy chunk */
				MEMCPY(fblProgBuffer, &pblrom[bytesProgrammed], PBL_BUFFER_SIZE);
				
				/* Program chunk */
				if(FBL_OK == FblComp_Write(PBL_MEM_ADDR + bytesProgrammed, PBL_BUFFER_SIZE, fblProgBuffer))
				{
					bytesProgrammed += PBL_BUFFER_SIZE;
					
					/* Calculate SHA256 */
					(void)FblCrypto_SHA256_Process(&sha256Inst, fblProgBuffer, PBL_BUFFER_SIZE);			
				}
				else
				{
					isError = TRUE;
				}
			}
			
			/* Check for incomplete programming */
			if(bytesProgrammed < fblSize)
			{
				isError = TRUE;
			}
			
			/* Verify PBL */
			for(index = 0; ((index < PBLROM_LENGTH) && (FALSE == isError)); index++)
			{
				FblWdtDrv_Pet();
				
				if(pblrom[index] != ((UINT8*)PBL_MEM_ADDR)[index])
				{
					isError = TRUE;
				}
			}

			/* Update SHA256 */
			if(FALSE == isError)
			{
				if(FBL_OK == FblCrypto_SHA256_Done(&sha256Inst, sha256Hash, 32))
				{
					FblComp_SaveSHA256(PBL_COMP_ID, sha256Hash, 32);
				}
				else
				{
					isError = TRUE;
				}
			}		
			
			if(FALSE == isError)
			{
				/* Authorize PBL */
				if(FBL_OK != FblComp_SetAuthorization(PBL_COMP_ID, FBL_COMP_APP_AUTHORIZED))
				{
					isError = TRUE;
				}
				/* De-Authorize Main App */
				else if (FBL_OK != FblComp_SetAuthorization(APP_COMP_ID, FBL_COMP_NOT_AUTHORIZED))
				{
					isError = TRUE;
				}
				else
				{
					
				}
			}
			
			/* Error! Retry programmaing */
			if(isError == TRUE)
			{
				fblRetryCount++;
				bytesProgrammed = 0;
			}
		}
	}
	
	/* Reset ECU */
	FblApp_ResetECU();
}

void FblMain_RunTimer(void)
{
	while(!FblTimerDrv_IsElapsed(FBL_TIMER_0))
	{
		FblWdtDrv_Pet();			/* Make sure this runs every 125ms */
	}
	fblMsTick++;
	FblTimerDrv_Reset(FBL_TIMER_0);
}

UINT32 FblMain_GetCounter(UINT32 timeout)
{
	return (timeout + fblMsTick);
}

UINT8 FblMain_IsTimeoutElapsed(UINT32 timeout)
{
	UINT8 elapsed = TRUE;
	
	FblMain_RunTimer();
	
	if(timeout > fblMsTick)
	{
		elapsed = FALSE;
	}
	return elapsed;
}

void   FblMain_SendRCRRP(void)
{
	/* Do nothing */
	return;
}
