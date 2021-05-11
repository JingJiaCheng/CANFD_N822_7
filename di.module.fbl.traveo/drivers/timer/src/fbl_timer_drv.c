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

  							Name   : fbl_timer.c

  					Description	   : Fbl Timer Implementation

  					Organization   : Multiplex Core Technology

==============================================================================*/


/*******************************************************************************
================================================================================
 								FileInclusions                                 
================================================================================
*******************************************************************************/

#include "fbl_timer_drv.h"



/*******************************************************************************
================================================================================
 								Global variables                               
================================================================================
*******************************************************************************/




/*******************************************************************************
================================================================================
								Local Prototypes                               
================================================================================
*******************************************************************************/

static void fbl_start_timer (volatile stc_frtn_t * FRT_REG_ptr, UINT32 fl_comp_clr_val_U32);
static void fbl_stop_timer (volatile stc_frtn_t * FRT_REG_ptr);
static void fbl_init_timer (volatile stc_frtn_t * FRT_ptr);



/*******************************************************************************/
/* 		Function Name     : FblTimerInit							     	   */
/*		Description       : Initialize the timer for a 1ms-cycle         	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/

void FblTimerInit( void )
{
    fbl_init_timer(&FRT00);
	fbl_start_timer(&FRT00, TCNT_COUNTS_PER_ONE_MILLI_SEC);
	FblFRT_Init(); /* Initialize the Free Running Timer */
}

/*******************************************************************************/
/* 		Function Name     : FblTimerStop							     	   */
/*		Description       : This service stops timer and disables timer    	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/

void FblTimerStop(void)
{
	fbl_stop_timer(&FRT00);	
}




/*******************************************************************************/
/* 		Function Name     : fbl_init_timer								   */
/*		Description       : Initializes the Timer.                        	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/

static void fbl_init_timer (volatile stc_frtn_t * FRT_ptr)
{
    /* Shadow data to avoid RMW and speed up HW access */
    un_frtn_tccs_t     unTCCS     = { 0u } ;
    un_frtn_teccs_t    unTECCS    = { 0u } ;
    
    /* Stop FRT before configuration */
    FRT_ptr->unTCCSS.stcField.u1STOPS = 1u ;
    PDL_WRITE_REG_SYNC(FRT_ptr->unTCCSC.stcField.u1IRQZFC, 1u);
    PDL_WRITE_REG_SYNC(FRT_ptr->unTCCSC.stcField.u1ICLRC, 1u);
    
    /* Clear timer */
    /* Since the timer is now stopped the FRTn_TCCS_SCLR bit will not work. */
    /* We have to write to the FRTn_TCDT register instead. */
    FRT_ptr->unTCDT.u32Register = 0x00000000ul ;    
    
    /* FRT configuration */

    /* Setup Compare Clear Buffer Enable */
    unTCCS.stcField.u1BFE   = 1u;

    /* Setup Count Mode of FRT */
    unTCCS.stcField.u1MODE = 0u;

    /* Setup interrupt mask selection */
    unTCCS.stcField.u3MSI   = 0u;

    /* Setup clock settings */
    unTCCS.stcField.u4CLK   = FrtDiv1;

    /* Stop is the default mode */
    unTCCS.stcField.u1STOP = 1u ;

    /* Setup interrupt mask mode2 */
    unTECCS.stcField.u1MODE2 = 0u;

    /* Set Compare clear interrupt mask selection */
    unTECCS.stcField.u3MSI   = 0u;


    /* Now write shadow data to real HW */
    FRT_ptr->unTECCS.u32Register    = unTECCS.u32Register ;
    FRT_ptr->unTCCS.u32Register     = unTCCS.u32Register ;
    

}

/*******************************************************************************/
/* 		Function Name     : FblFRT_Init										   */
/*		Description       : Initializes the Timer as FRT.                  	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/
void FblFRT_Init( void )
{
    /* Shadow data to avoid RMW and speed up HW access */
    un_frtn_tccs_t     unTCCS     = { 0u } ;
    un_frtn_teccs_t    unTECCS    = { 0u } ;

    FRT01.unTCCSS.stcField.u1STOPS = 1u ;
    PDL_WRITE_REG_SYNC(FRT01.unTCCSC.stcField.u1IRQZFC, 1u);
    PDL_WRITE_REG_SYNC(FRT01.unTCCSC.stcField.u1ICLRC, 1u);

	FRT01.unTCDT.u32Register = 0x00000000ul ;    
    
    /* FRT configuration */

    /* Setup Count Mode of FRT */
    unTCCS.stcField.u1MODE = 0u;

    /* Setup interrupt mask selection */
    unTCCS.stcField.u3MSI   = 0u;

    /* Setup clock settings */
    unTCCS.stcField.u4CLK   = FrtDiv1;

    /* Stop is the default mode */
    unTCCS.stcField.u1STOP = 1u ;

    /* Setup interrupt mask mode2 */
    unTECCS.stcField.u1MODE2 = 0u;

    /* Set Compare clear interrupt mask selection */
    unTECCS.stcField.u3MSI   = 0u;


    /* Now write shadow data to real HW */
    FRT01.unTECCS.u32Register    = unTECCS.u32Register ;
    FRT01.unTCCS.u32Register     = unTCCS.u32Register ;

 	FRT01.unTCCSC.stcField.u1STOPC = 1u ;

    if (0u != FRT01.unTCCS.stcField.u3MSI)
    {
        FRT01.unTCCS.stcField.u3MSI = 0u;
    }


}

/*******************************************************************************/
/* 		Function Name     : f_apps_start_timer								   */
/*		Description       : Starts the timer.                             	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/
static void fbl_start_timer (volatile stc_frtn_t * FRT_REG_ptr, UINT32 fl_comp_clr_val_U32)
{

    /* Stop FRT (set stop bit) */
    FRT_REG_ptr->unTCCSS.stcField.u1STOPS = 1u ;

    /* Clear timer */
    FRT_REG_ptr->unTCDT.u32Register = 0x00000000ul;

    /* Set compare clear value */
    FRT_REG_ptr->unCPCLRB.u32Register = fl_comp_clr_val_U32;

    /* Clear "zero detect" and "compare clear" flags */
    PDL_WRITE_REG_SYNC(FRT_REG_ptr->unTCCSC.stcField.u1IRQZFC, 1u);
    PDL_WRITE_REG_SYNC(FRT_REG_ptr->unTCCSC.stcField.u1ICLRC, 1u);

    /* Start counting (clear stop bit) */
    FRT_REG_ptr->unTCCSC.stcField.u1STOPC = 1u ;

    if (0u != FRT_REG_ptr->unTCCS.stcField.u3MSI)
    {
        FRT_REG_ptr->unTCCS.stcField.u3MSI = 0u;
    }
}

/*******************************************************************************/
/* 		Function Name     : f_apps_stop_timer								   */
/*		Description       : This service stops timer and disables timer 	   */
/*		Invocation        : Reset											   */
/*		Parameters        : None											   */
/*		Return Value      : None.											   */
/*		Critical Section  : none											   */
/*******************************************************************************/
static void fbl_stop_timer (volatile stc_frtn_t * FRT_REG_ptr)
{
    if (0u == FRT_REG_ptr->unTCCS.stcField.u3MSI)
    {
        FRT_REG_ptr->unTCCS.stcField.u3MSI = 0x07u;
    }
    FRT_REG_ptr->unTCCSS.stcField.u1ICRES = 0x00u;
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
