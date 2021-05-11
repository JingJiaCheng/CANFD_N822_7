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
/** \file sysctrl.h
 **
 ** Headerfile for System Controller
 **
 ** History:
 **   - 2014-06-04  0.01  HS  Initial version for Traveo
 **   - 2014-07-02  0.02  HS  Delete definitions not referred
 *****************************************************************************/

#ifndef __SYSCTRL_H__
#define __SYSCTRL_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/


/* C binding of definitions if building with C++ compiler                    */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 *****************************************************************************
 ** \defgroup SyscGroup System Controller (SYSCTRL)
 **
 ** \brief This section describes the interface for the System Controller.
 **
 ** Provided functions of SYSCTRL module:
 **
 **  - SysCtrl_GetSourceClockFrequencyHz()
 **  - SysCtrl_GetDistributedClockFrequencyHz()
 **  - SysCtrl_CalculatePllFrequency()
 **
 ** These functions are used to get clock frequencies.
 **
 ** \note This module is allowed PDL internal use only.
 **
 *****************************************************************************/
/** @{ */

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/
                                        
/*****************************************************************************
 * Global type definitions
 *****************************************************************************/

/**
 *****************************************************************************
 ** \brief System Controller Prescaler 2
 *****************************************************************************/
typedef enum en_sys_ctrl_clock_prescaler_type_b
{
    SysCtrlPrescalerTypeBDiv2     = 0x1,
    SysCtrlPrescalerTypeBDiv4     = 0x2,
    SysCtrlPrescalerTypeBDiv6     = 0x3,
    SysCtrlPrescalerTypeBDiv8     = 0x4,
    SysCtrlPrescalerTypeBDiv10    = 0x5,
    SysCtrlPrescalerTypeBDiv12    = 0x6,
    SysCtrlPrescalerTypeBDiv14    = 0x7,
    SysCtrlPrescalerTypeBDiv16    = 0x8,
    SysCtrlPrescalerTypeBDiv18    = 0x9,
    SysCtrlPrescalerTypeBDiv20    = 0xA,
    SysCtrlPrescalerTypeBDiv22    = 0xB,
    SysCtrlPrescalerTypeBDiv24    = 0xC,
    SysCtrlPrescalerTypeBDiv26    = 0xD,
    SysCtrlPrescalerTypeBDiv28    = 0xE,
    SysCtrlPrescalerTypeBDiv30    = 0xF
} en_sys_ctrl_clock_prescaler_type_b_t;

/**
 *****************************************************************************
 ** \brief Possible clocks for clock distribution
 *****************************************************************************/
typedef enum en_sys_ctrl_clock_source
{
    SysCtrlClockSourceRcClock       = 0,
    SysCtrlClockSourceSlowRcClock   = 1,
    SysCtrlClockSourceMainClock     = 2,
    SysCtrlClockSourceSubClock      = 3,
    SysCtrlClockSourceMainPll0Clock = 4,
    SysCtrlClockSourceSscgPll0Clock = 5,
    SysCtrlClockSourceTiedLow       = 7,
} en_sys_ctrl_clock_source_t;

/**
 *****************************************************************************
 ** \brief Possible clocks for clock output and frequency determination
 *****************************************************************************/
typedef enum en_sys_ctrl_source_clock
{
    SysCtrlSourceClockSlowRcClock   = 0,
    SysCtrlSourceClockRcClock       = 1,
    SysCtrlSourceClockSubClock      = 2,
    SysCtrlSourceClockMainClock     = 3,
    SysCtrlSourceClockMainPll0Clock = 4,
    SysCtrlSourceClockMainPll1Clock = 5,
    SysCtrlSourceClockMainPll2Clock = 6,
    SysCtrlSourceClockMainPll3Clock = 7,
    SysCtrlSourceClockSscgPll0Clock = 8,
    SysCtrlSourceClockSscgPll1Clock = 9,
    SysCtrlSourceClockSscgPll2Clock = 10,
    SysCtrlSourceClockSscgPll3Clock = 11
} en_sys_ctrl_source_clock_t;

/**
 *****************************************************************************
 ** \brief Possible clocks for clock output and frequency determination
 *****************************************************************************/
typedef enum en_sys_ctrl_pll_input_clk
{
    SysCtrlPllInputClkMain   = 0,
    SysCtrlPllInputClkRc     = 1,
} en_sys_ctrl_pll_input_clk_t;

/**
 *****************************************************************************
 ** \brief Distributed clock types (internal clocks derived from a source clock)
 *****************************************************************************/
typedef enum en_sys_ctrl_distributed_clock
{
    SysCtrlDistributedClockLCP0A
} en_sys_ctrl_distributed_clock_t;


/**
 *****************************************************************************
 ** \brief PLL settings configuration for RUN/PSS profile and PLL frequency calculation
 *****************************************************************************/
typedef struct stc_sys_ctrl_pll_settings
{
    en_sys_ctrl_pll_input_clk_t             enInputClk; /*!< Input clock selection */
    en_sys_ctrl_clock_prescaler_type_b_t    enDivL;     /*!< Input clock divider (max. SysCtrlPrescalerTypeBDiv6) */
    en_sys_ctrl_clock_prescaler_type_b_t    enDivM;     /*!< VCO output clock divider */
    uint8_t                                 u8DivN;     /*!< Feedback divider N value (see SYSCTRL_{pll}_DIVN_MIN/MAX for limitations of corresponding PLL) */
} stc_sys_ctrl_pll_settings_t;


/*****************************************************************************
 * Global function prototypes
 *****************************************************************************/
extern uint32_t    SysCtrl_GetSourceClockFrequencyHz(en_sys_ctrl_source_clock_t enSourceClockId);
extern uint32_t    SysCtrl_GetDistributedClockFrequencyHz(en_sys_ctrl_distributed_clock_t enDistributedClockId);
extern uint32_t    SysCtrl_CalculatePllFrequency(const stc_sys_ctrl_pll_settings_t* pstcPllSettings,
                                                 boolean_t bCalculateVcoFrequency);


/** @} */


#ifdef __cplusplus
}
#endif

#endif /* __SYSCTRL_H__ */
