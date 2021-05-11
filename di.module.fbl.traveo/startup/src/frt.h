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
 ** \file frt.h
 **
 ** Headerfile for Free Run Timer functions
 **
 ** History:
 ** - 2014-05-30  0.01  ST  First version
 *****************************************************************************/

#ifndef __FRT_H__
#define __FRT_H__


/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/


/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/


/**
 *****************************************************************************
 ** \defgroup FrtGroup Free Running Timer (FRT)
 **
 ** \brief This section describes the interface for the Free Running Timer.
 **
 ** Provided functions of FRT module:
 ** - Frt_Init() (Initialization of FRT module)
 ** - Frt_Start() (Set the CompareClearValue and to start a FRT)
 ** - Frt_Stop() (Stop a FRT)
 ** - Frt_GetCount() (Get a Timer data)
 **
 ** The FRT is a counter that starts at zero and goes up to a
 ** user defined value (aka. compare clear value). When the value is reached
 ** a compare clear interrupt is triggered. The counter can be operated in
 ** up-counting oder up/down-conting mode. Depending on that, the counter
 ** restarts counting from zero or goes down from compare clear value
 ** on a compare clear value. In up/down-counting mode the zereo detect
 ** interrupt is triggered when reaching zero.
 **
 ** A FRT can be operated bufferd or unbuffered. In buffered mode, compare clear
 ** values, that are set while the timer is running are stored in a compare
 ** clear buffer register (CPCLRB) and transferred to the main compare clear
 ** register (CPCLR) when zero is detected.
 **
 ** The FRT is closely coupled with the Input Capture Unit (ICU) and the
 ** Output Compare Unit (OCU) as this units use the FRT counter value for their
 ** operation. 
 **
 ** The typical sequence of using the FRT is to first initialize it by calling
 ** Frt_Init(). This sets up the timers operational parameters
 ** (see also #stc_frt_config_t).
 ** To start the timer Frt_Start() is used. The timer can be stopped at 
 ** anytime by calling Frt_Stop().
 **
 ** To get the count of FRT to call Frt_GetCount().
 **
 *****************************************************************************/
//@{

/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/


/**
 *****************************************************************************
 ** \brief Free Running Timer clock prescaler
 **
 ** Enumeration for prescaling primary clock
 *****************************************************************************/
typedef enum en_frt_clock_prescaler
{
    FrtDiv1     = 0x0u,  /*!< Count clock is not divided */
    FrtDiv2     = 0x1u,  /*!< Count clock is divide by 2 */
    FrtDiv4     = 0x2u,  /*!< Count clock is divide by 4 */
    FrtDiv8     = 0x3u,  /*!< Count clock is divide by 8 */
    FrtDiv16    = 0x4u,  /*!< Count clock is divide by 16 */
    FrtDiv32    = 0x5u,  /*!< Count clock is divide by 32 */
    FrtDiv64    = 0x6u,  /*!< Count clock is divide by 64 */
    FrtDiv128   = 0x7u,  /*!< Count clock is divide by 128 */
    FrtDiv256   = 0x8u,  /*!< Count clock is divide by 256 */
} en_frt_clock_prescaler_t;

/**
 *****************************************************************************
 ** \brief Free Running Timer Interrupt mask selection
 *****************************************************************************/
typedef enum en_frt_msi
{
    FrtCnt1     = 0x0u,  /*!< Generate an interrupt flag at the first match occurrence   */
    FrtCnt2     = 0x1u,  /*!< Generate an interrupt flag at the second match occurrence  */
    FrtCnt3     = 0x2u,  /*!< Generate an interrupt flag at the third match occurrence   */
    FrtCnt4     = 0x3u,  /*!< Generate an interrupt flag at the fourth match occurrence  */
    FrtCnt5     = 0x4u,  /*!< Generate an interrupt flag at the fifth match occurrence   */
    FrtCnt6     = 0x5u,  /*!< Generate an interrupt flag at the sixth match occurrence   */
    FrtCnt7     = 0x6u,  /*!< Generate an interrupt flag at the seventh match occurrence */
    FrtCnt8     = 0x7u,  /*!< Generate an interrupt flag at the eighth match occurrence  */
} en_frt_msi_t;


/**
 *****************************************************************************
 ** \brief Free Running Timer configuration
 **
 ** This struct holds the configuration parameters of a single FRT.
 *****************************************************************************/
typedef struct stc_frt_config
{
    /* Set interrupt mask selection */
    en_frt_msi_t              enInterruptMaskSelection;
    /* Enable buffer functionality */
    boolean_t                 bCompareClearBufferEnable;
    /* Enable up/down count mode */
    boolean_t                 bUpDownCountEnable;
    /* Set clock prescaler */
    en_frt_clock_prescaler_t  enPrescaler;
    /* Set interrupt mask mode2 */
    boolean_t                 bInterruptMaskMode2;
    /* Set Compare clear interrupt mask selection */
    en_frt_msi_t              enCompareClearInterruptMaskSelection;

    /* Callback for zero detect interrupts, can be NULL for synchronous operation */
    func_ptr_t                pfnZeroDetectCallback;
    /* Callback for compare clear interrupts, can be NULL for synchronous operation */
    func_ptr_t                pfnCompareClearCallback;

} stc_frt_config_t;


/**
 *****************************************************************************
 ** \brief Data type for holding internal data needed for FRT
 **
 ** This struct is used to store the interrupt callback functions for the FRT.
 *****************************************************************************/
typedef struct stc_frt_intern_data
{

    func_ptr_t  pfnZeroDetectCallback;   /*!< Called when timer reaches zero (in up-down count mode),  */
                                         /*!< can be NULL for synchronous operation without interrupt. */
    func_ptr_t  pfnCompareClearCallback; /*!< Called when timer reaches the compare value,             */
                                         /*!< can be NULL for synchronous operation without interrupt. */
} stc_frt_intern_data_t;


/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/

/*****************************************************************************
 * Global function prototypes
 *****************************************************************************/
extern en_result_t Frt_Init( volatile stc_frtn_t* pstcFrt,
                             const stc_frt_config_t* pstcConfig
                           ) ;
extern en_result_t Frt_Start( volatile stc_frtn_t* pstcFrt,
                              uint32_t u32CompareClearValue
                            ) ;
extern en_result_t Frt_Stop( volatile stc_frtn_t* pstcFrt ) ;
extern en_result_t Frt_GetCount( volatile stc_frtn_t* pstcFrt, uint32_t* data ) ;


//@}

#ifdef __cplusplus
}
#endif

#endif /* __RLT_H__ */
/*****************************************************************************/
/* EOF (not truncated)                                                       */
/*****************************************************************************/
