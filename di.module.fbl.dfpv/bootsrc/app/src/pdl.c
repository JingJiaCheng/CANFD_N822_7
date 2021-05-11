/******************************************************************************
 * $Revision: 8463 $
 * $Date:: 2014-10-24 13:22:47 +0200#$
 *****************************************************************************/
/* __DISCLAIMER_START__                                                      */
/******************************************************************************
* Copyright (C) 2014 Spansion LLC. All Rights Reserved.
*
* This software is owned and published by: 
* Spansion LLC, 915 DeGuigne Dr. Sunnyvale, CA  94088-3453 ("Spansion").
*
* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND 
* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
*
* This software contains source code for use with Spansion 
* components. This software is licensed by Spansion to be adapted only 
* for use in systems utilizing Spansion components. Spansion shall not be 
* responsible for misuse or illegal use of this software for devices not 
* supported herein.  Spansion is providing this software "AS IS" and will 
* not be responsible for issues arising from incorrect user implementation 
* of the software.  
*
* SPANSION MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS), 
* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING, 
* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED 
* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED 
* WARRANTY OF NONINFRINGEMENT.  
* SPANSION SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT, 
* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT 
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, 
* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR 
* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT, 
* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA, 
* SAVINGS OR PROFITS, 
* EVEN IF SPANSION HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. 
* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED 
* FROM, THE SOFTWARE.  
*
* This software may be replicated in part or whole for the licensed use, 
* with the restriction that this Disclaimer and Copyright notice must be 
* included with each copy of this software, whether used in part or whole, 
* at all times.
******************************************************************************/
/* __DISCLAIMER_END__                                                        */
/*****************************************************************************
 ** \file pdl.c
 **
 ** PDL Functions
 **
 ** History:
 **   - 2014-06-22  0.01  HS  Initial version for Traveo
 **   - 2014-06-22  0.01  SWi Pdl_WaitLoopHook() changed
 **   - 2014-09-16  0.22  CEy Slight change in Pdl_WaitLoopHook()
 *****************************************************************************/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "pdl.h"
#include "abstract.h"

/**
 *****************************************************************************
 ** \defgroup PDLGroup Functions implemented by the user (PDL)
 **
 ** \brief This section describes the functions that are implemented
 **        by the user.
 **
 ** Provided functions of PDL module:
 **
 ** - PDL_WAIT_LOOP_HOOK()
 **
 ** PDL_WAIT_LOOP_HOOK() is a hook function.
 ** It is called when wait for a long time in driver functions.
 ** Place code for triggering Watchdog counters there, if needed.
 ******************************************************************************/
/*!@{ */

/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/

/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/

/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 *****************************************************************************
 ** \brief Hook function, which is called in polling loops
 **
 ** This functionality has to be mirrored in ramcode.c, if RAM code is used!
 *****************************************************************************/
void Pdl_WaitLoopHook( void )
{
    // Satisfy compiler regarding "order of volatile accesses" warning in if-statement
    uint32_t u32CurrentLowerLimit = HWDG_RUNLLC; 
    
    // Clear hardware watchdog if lower limit of window has been exceeded
    if (HWDG_CNT > u32CurrentLowerLimit)
    {
        IRQ_DISABLE_LOCAL();
        HWDG_TRG0 = HWDG_TRG0CFG;
        HWDG_TRG1 = HWDG_TRG1CFG;
        IRQ_RESTORE();
    }
}

/*! @} */

/******************************************************************************/
/* EOF (not truncated)                                                        */
/******************************************************************************/
