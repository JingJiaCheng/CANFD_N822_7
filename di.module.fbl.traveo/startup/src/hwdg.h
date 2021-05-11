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
/*****************************************************************************/
/** \file hwdg.h
 **
 ** Sample program for hardware watchdog timer.
 **
 ** History:
 **   - 2014-05-16  0.01  HS  Initial version for Traveo
 *****************************************************************************/

#ifndef __HWDG_H__
#define __HWDG_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "base_types.h"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C" {
#endif

/**
 *****************************************************************************
 ** \defgroup HwdgGroup Hardware watchdog (HWDG)
 **
 ** \brief This section describes the interface for the Hardware Watchdog.
 **
 ** Provided functions of Hwdg module:
 **
 ** - Hwdg_Init()
 ** - Hwdg_GetResetCause()
 ** - Hwdg_Clear()
 ** - Hwdg_GetCounterValue()
 **
 ** Hwdg_Init() is used to initialize Hwdg with parameter pstcConfig of type #stc_hwdg_config_t.
 ** This function can be used only once after a reset.
 ** Hwdg_GetResetCause() is used to get Hwdg reset cause. Must be use before
 ** calling Hwdg_Init().
 ** Hwdg_Clear() is used to clear watchdog counter.
 ** Hwdg_GetCounterValue() is used to current watchdog counter.
 **
 ** If application use this module, it has to use these APIs by combining.
 **
 *****************************************************************************/
/*! @{ */


/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/
typedef struct stc_hwdg_config
{
    /*! Callback to get prior warning notification in case of WDG error */
    func_ptr_t              pfnPreWarnCallback;
    /*! Callback to get NMI notification in case of WDG error */
    func_ptr_t              pfnNmiCallback;
} stc_hwdg_config_t;

/**
 *****************************************************************************
 ** \brief HWDG reset cause
 *****************************************************************************/
typedef struct stc_hwdg_reset_cause
{
    /*! HWDG counter was triggered while HWDG was still unlocked */
    boolean_t bHwdgTriggerWhileUnlocked;
    /*! SWDG counter was triggered before lower limit was reached */
    boolean_t bHwdgTriggerTooEarly;
    /*! SWDG counter reached upper limit */
    boolean_t bHwdgNotTriggered;
    /*! The trigger functions were called in the wrong order */
    boolean_t bHwdgTriggerSequenceViolated;
    /*! The key value for trigger 0 or 1 was wrong */
    boolean_t bHwdgWrongTriggerValue;
} stc_hwdg_reset_cause_t;

/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
en_result_t Hwdg_Init(const stc_hwdg_config_t *pstcConfig);
en_result_t Hwdg_GetResetCause(stc_hwdg_reset_cause_t* pstcResetCause);
en_result_t Hwdg_Clear(uint8_t u8TrgVal0, uint8_t u8TrgVal1);
uint32_t Hwdg_GetCounterValue(void);

/*! @} */
#ifdef __cplusplus
}
#endif

#endif /* __HWDG_H__ */
