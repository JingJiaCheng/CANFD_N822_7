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
VOBName          :  fbl.main.df91\src\fbl_app_init.c
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
#include "fbl_main.h"
#include "fbl_memdrv.h"
#include "fbl_app_cfg.h"
#include "fbl_timer_drv.h"
#include "fbl_drv.h"

#include "system.h"
#include "s6j3200io_basetypes.h"
#include "s6j3200io.h"
#include "fbl_can_drv.h"
#include "udsdiag.h"
#include "fbl_sfr.h"
#include "idd_driver.h"
#include "hf.h"

#include "fbl_wdt_drv.h"

#include "abstract.h"

#include "s6j3200_SYSC.h"

#define SYSC_KEY_UNLOCK				      0x5CACCE55UL

/*-- Declare the Stuck & Reset Cause when entering the bootloader */
UINT8 fblResetCauseMessage[2];

# pragma ghs section data = ".fbl_magic_flag"
UINT8 fblAppMagicFlag[4] = {0xFFu,0xFFu,0xFFu,0xFFu};
# pragma ghs section data=default


static void (*appl_ptr)(void);
static void udspbl_force_rcrrp (void);
static UINT32 rcrp_time;
extern void HBus_Init( void );

UINT8 FblApp_PreHwInit(void)
{        
	/*China D53 CAN Pin Configuration*/
	/*
	 * Base Address	: B473_8000
	 * 	NAME			|	PORT	|	PIN		|
	 *	========================================|
	 * 		Hyper Flash - 64MB					|
	 * 	========================================|
	 * 	RESET_CON		|	P0		|	26		|
	 * 	+3.3VSW_EN		|	P2		|	22		|
	 *	5VSW_EN			|	P4		|	05		|
	 *
	 * */
	volatile un_ppc_pcfgrn_t *punHyperPwrPcfgrn = &PPC.unPCFGR405;
	volatile un_ppc_pcfgrn_t *punPpcPcfgrn 		= &PPC.unPCFGR222;
	volatile un_ppc_pcfgrn_t *punRST_CONPcfgrn 	= &PPC.unPCFGR026;

	FblWdtDrv_Init();
	FblTimerDrv_Init(FBL_TIMER_0, FBL_TIMER_PERIOD_MS);

	// SW 5V Power Disable
	IDD_PORT_WPREG_PPC(punHyperPwrPcfgrn->u16Register,0xC020u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR4, (UINT32)(1u << 5u));
	IDD_PORT_WPREG_GPIO(GPIO_POSR4_POS5,1u);

	// Enable 3.3V
	IDD_PORT_WPREG_PPC(punPpcPcfgrn->u16Register,0xC020u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR2, (UINT32)(1u << 22u));
	IDD_PORT_WPREG_GPIO(GPIO_POSR2_POS22,0u);
	
    delay_ms(5u);
	HBus_Init();
	
	// Enable 3.3V
	IDD_PORT_WPREG_PPC(punRST_CONPcfgrn->u16Register,0xC020u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR0, (UINT32)(1u << 26u));
	IDD_PORT_WPREG_GPIO(GPIO_POSR0_POS26,1u);     // Hyper Flash reset pin should be high
	IDD_PORT_WPREG_GPIO(GPIO_PORTEN, 0x00000001u);   /* Resource input cutoff function */

    return (UINT8)TRUE;
}

void FblApp_HwInit(void)
{
	/*China D53 CAN Pin Configuration*/
	/*
	 * Base Address	: B473_8000
	 * 	NAME			|	PORT	|	PIN		|
	 * 	========================================|
	 * 					CAN B - CAN 1			|
	 * 	========================================|
	 * 	B_CAN_MCU_STB	|	P3		|	03		|
	 * 	B_CAN_MCU_RXD	|	P3		|	05		|
	 * 	B_CAN_MCU_TXD	|	P3		|	06		|
	 *											|
	 *											|
	 *	========================================|
	 * 					CAN P - CAN 6			|
	 * 	========================================|
	 * 	P_CAN_MCU_STB	|	P3		|	15		|
	 * 	P_CAN_MCU_RXD	|	P3		|	16		|
	 * 	P_CAN_MCU_TXD	|	P3		|	17		|
	 * 	========================================|
	 * */
	/*CAN and XCVR Registers*/
	volatile un_ppc_pcfgrn_t* punXcvrPcfgrn 	= &PPC.unPCFGR303;//Transceiver Strobe Pin
	volatile un_ppc_pcfgrn_t* punEINTPcfgrn 	= &PPC.unPCFGR305;//Rx pin
	volatile un_ppc_pcfgrn_t* punTxPcfgrn 		= &PPC.unPCFGR306;//Tx pin
	volatile un_ric_resinn_t * punRicResinn 	= &RIC.unRESIN137;

	// Initialize CAN Pins
	IDD_PORT_WPREG_PPC(punTxPcfgrn->u16Register,0x80C2u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR3, (UINT32)(1u << 6u)); 		/* Data Direction Set Register */
	IDD_PORT_WPREG_RIC(punRicResinn->au8Byte[1],2u); 		/* Port Selection  - RX1 */
	IDD_PORT_WPREG_RIC(punRicResinn->au8Byte[0],0u);		/* Resource selection - RX1*/
	IDD_PORT_WPREG_PPC(punEINTPcfgrn->u16Register,0x1400u);	/**/
	IDD_PORT_WPREG_GPIO(GPIO_DDCR3, (UINT32)(1u << 5u)); 		/* Data Direction Clear Register */

	// CAN Transceiver Initialize
	IDD_PORT_WPREG_PPC(punXcvrPcfgrn->u16Register,0xC020u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR3, (UINT32)(1u << 3u));
	IDD_PORT_WPREG_GPIO(GPIO_POSR3_POS3,0u);

    /*I2C Registers*/
	volatile un_ppc_pcfgrn_t* punI2cSclPcfgrn 	= &PPC.unPCFGR300;//Rx pin
	volatile un_ppc_pcfgrn_t* punI2cSdaPcfgrn   = &PPC.unPCFGR301;//Tx pin

	// Initialize I2C Pins
	IDD_PORT_WPREG_PPC(punI2cSclPcfgrn->u16Register,0x3024u);
	IDD_PORT_WPREG_GPIO(GPIO_DDSR3, (UINT32)(1u << 0u)); 		/* Data Direction Set Register */
	IDD_PORT_WPREG_PPC(punI2cSdaPcfgrn->u16Register,0x3024u);	/**/
	IDD_PORT_WPREG_GPIO(GPIO_DDSR3, (UINT32)(1u << 1u)); 		/* Data Direction Clear Register */

}

UINT8 FblApp_MemInit(void)
{
    UINT8 ret;
    MEMDRV_ENUM Memdrv_Count;
    UINT8 param[MAX_MEMDRV_IF] = {0,MEMDRV_HYPERFLASH0_ID,0};

//    ret = FblMemDrv_Init(MEMDRV_FLASH_ID, 0u);
//    if(ret == FBL_OK) {
//      ret = FblMemDrv_Init(MEMDRV_HYPERFLASH0_ID, MEMDRV_HYPERFLASH0_ID);
//    }

    for ( Memdrv_Count = MEMDRV_FLASH_ID ; Memdrv_Count < MAX_MEMDRV_IF ; Memdrv_Count++ )
    {
        ret = FblMemDrv_Init(Memdrv_Count, param[Memdrv_Count]);
        if (FBL_OK != ret )
        {
            break;
        }
        else
        {
            ;
        }
    }

    if(ret == FBL_OK)
    {
        ret = TRUE;
    }
    else
    {
        ret = FALSE;
    }
    return ret;


}

void FblApp_PreStartupInit(void)
{
    GRPSUB_HPBM_REMAP = 1UL;
    HYPERBUSI0_GPOR = 1UL;
}

UINT8 FblApp_MemDeInit(void)
{
    (void)FblMemDrv_DeInit(MEMDRV_FLASH_ID, 0u);

    return (UINT8)TRUE;
}

UINT8 FblApp_GetFblMode(void)
{
    UINT8 fblMode;

    UINT8 magicFlagCheck[4] = FBL_MAGICFLAG_START_VALUE;

    if((fblAppMagicFlag[0] == magicFlagCheck[0]) &&
        (fblAppMagicFlag[1] == magicFlagCheck[1]) &&
        (fblAppMagicFlag[2] == magicFlagCheck[2]) &&
        (fblAppMagicFlag[3] == magicFlagCheck[3]))
    {
        fblMode = FblMode_StartFromApp | FblMode_SendResponse;

        /* Clear Magic Flag */
        fblAppMagicFlag[0] = 0x00u;
        fblAppMagicFlag[1] = 0x00u;
        fblAppMagicFlag[2] = 0x00u;
        fblAppMagicFlag[3] = 0x00u;
    }
    else
    {
        /* Wait for 50ms to get tester present message */
		fblMode = FblMode_StartFromReset;

    }

    return fblMode;
}

void FblApp_ResetECU(void)
{
   SYSC0_PROTKEYR = FBL_SYSC_KEY_UNLOCK;
   SYSC_RSTCNTR_SWHRST = 0xA5u;
   while(1)
   {

   }
}

void  FblApp_SetResetReason(UINT8 reason)
{
	switch(reason)
	{
		case FblReset_POR:
		fblResetCauseMessage[1] = 0x07u;
		break;
		case FblReset_WDT:
		fblResetCauseMessage[1] = 0x02u;
		break;
		case FblReset_UDS:
		fblResetCauseMessage[1] = 0x04u;
		break;
		default:
		fblResetCauseMessage[1] = 0x08u;
		break;
	}	
}

void Can_BusTransceiverToNormal(void)
{
	
}

void FblApp_Memcpy(UINT8 *dst,UINT8 *src,UINT32 size)
{
    for(;size > 0u;size--)
    {
        *dst = *src;
        dst++;
        src++;
    }
}

void FblApp_Memset(UINT8 *dst,UINT8 src,UINT32 size)
{
    for(;size > 0u;size--)
    {
        *dst = src;
        dst++;
    }
}

void FblApp_JumpApp(void)
{

  appl_ptr = (void(*)(void))APP_START_ADDR;
  FblTimerDrv_Stop(FBL_TIMER_0);
  (*appl_ptr)();
}

/* ====================================================================================*/
/*                                                                                     */
/* Name:            udspbl_force_rcrrp                                                 */
/*                                                                                     */
/* Description:     Sends RCRRP and stores the FRT count in rcrrp.                     */
/*                                                                                     */
/* Inputs:          none                                                               */
/*                                                                                     */
/* Returns:         none                                                               */
/*                                                                                     */
/* ====================================================================================*/

static void udspbl_force_rcrrp (void)
{
    (void)udsdiag_sendrcrrp();
     rcrp_time = FRT01.unTCDT.u32Register;

}

/* ====================================================================================*/
/*                                                                                     */
/* Name:            udspbl_check_diag_response                                         */
/*                                                                                     */
/* Description:     Checks the RCRRP timeout and clears the transmit flag.             */
/*                                                                                     */
/* Inputs:          none                                                               */
/*                                                                                     */
/* Returns:         none                                                               */
/*                                                                                     */
/* ====================================================================================*/

void udspbl_check_diag_response (void)
{
    UINT32 temp_time;
    temp_time = FRT01.unTCDT.u32Register;
    if((temp_time - rcrp_time) >= 0x3270E00ul) //0x7270E00ul
    {
        FblCanDrv_Task();
        udspbl_force_rcrrp();
    }
}
/* ====================================================================================*/
/*                                                                                     */
/* Name:            pbl_check_diag_response                                         */
/*                                                                                     */
/* Description:     Checks the RCRRP timeout and clears the transmit flag.             */
/*                                                                                     */
/* Inputs:          none                                                               */
/*                                                                                     */
/* Returns:         none                                                               */
/*                                                                                     */
/* ====================================================================================*/

void pbl_check_diag_response (void)
{
    UINT32 temp_time;
    temp_time = FRT01.unTCDT.u32Register;
    if((temp_time - rcrp_time) >= 0x3270E00u) //0x7270E00u
    {
        FblCanDrv_Task();
        udspbl_force_rcrrp();
    }
}
void   FblCrypto_Crc64Iso(UINT64 *pCRC64, const UINT8 *pBuffer, UINT32 size)
{
}
