/******************************************************************************
 * $Revision: 8549 $
 * $Date:: 2014-12-01 12:22:48 +0100#$
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
 ** \file pdl_user.h
 **
 ** User settings headerfile for Traveo Peripheral Driver Library.
 **
 ** History:
 **   - 2014-06-22  0.01  HS  Initial version for Traveo
 *****************************************************************************/

#ifndef __PDL_USER_H__
#define __PDL_USER_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/

#include "can_bcan.cfg"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 ******************************************************************************
 ** User Defines for PDL resource activation
 **
 ** Possible definitions are PDL_ON and PDL_OFF.
 **
 ******************************************************************************/

/******************************************************************************/
/* User Setting Include file                                                  */
/******************************************************************************/


/** HSSPI ******************************************************************/
#define PDL_PERIPHERAL_ENABLE_HSSPI0            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_GFXSPI            PDL_OFF

/** ADC12B *******************************************************************/
#define PDL_PERIPHERAL_ENABLE_ADC12B            PDL_OFF

/** WFLASH ******************************************************************/
#define PDL_PERIPHERAL_ENABLE_WFLASH            PDL_OFF

/** FRT **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_FRT0              PDL_ON
#define PDL_PERIPHERAL_ENABLE_FRT1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT5              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT6              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT7              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_FRT11             PDL_OFF

/** CPU **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_CPU               PDL_ON

/** MEM **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_MEM               PDL_ON

/** SysCtrl ******************************************************************/
#define PDL_PERIPHERAL_ENABLE_SYSCTRL           PDL_ON

/** PORT *********************************************************************/
#define PDL_PERIPHERAL_ENABLE_PORT              PDL_ON

/** HWDG *********************************************************************/
#define PDL_PERIPHERAL_ENABLE_HWDG              PDL_OFF

/** SWDG *********************************************************************/
#define PDL_PERIPHERAL_ENABLE_SWDG              PDL_OFF

/** UART *********************************************************************/
#define PDL_PERIPHERAL_ENABLE_UART0             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART1             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART2             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART3             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART4             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART8             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART9             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART10            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART11            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART12            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART16            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_UART17            PDL_OFF

/** LIN *********************************************************************/
#define PDL_PERIPHERAL_ENABLE_LIN0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN11             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN12             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN16             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_LIN17             PDL_OFF

/** I2C ******************************************************************/
#define PDL_PERIPHERAL_ENABLE_I2C0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C11             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C12             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C16             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_I2C17             PDL_OFF

/** CAN-FD **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_CANFD0            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_CANFD1            PDL_ON
#define PDL_PERIPHERAL_ENABLE_CANFD5            PDL_OFF
#define PDL_PERIPHERAL_ENABLE_CANFD6            PDL_OFF

/** PWM **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_PWM0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM5              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM6              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM7              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM11             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM12             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM13             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM14             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM15             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM16             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM17             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM18             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM19             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM20             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM21             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM22             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_PWM23             PDL_OFF

/** RLT **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_RLT0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT5              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT6              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT7              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT11             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT12             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT13             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT14             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT15             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT16             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT17             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT18             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT19             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT20             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT21             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT22             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_RLT23             PDL_OFF

/** ICU **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_ICU0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU5              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU6              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU7              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_ICU11             PDL_OFF

/** EIC **********************************************************************/
#define PDL_PERIPHERAL_ENABLE_EIC0              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC1              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC2              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC3              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC4              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC5              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC6              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC7              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC8              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC9              PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC10             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC11             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC12             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC13             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC14             PDL_OFF
#define PDL_PERIPHERAL_ENABLE_EIC15             PDL_OFF


/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/


/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/


/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/


/*****************************************************************************/
/* Global function prototypes                                                */
/*****************************************************************************/


#ifdef __cplusplus
}
#endif

#endif /* __PDL_USER_H__ */
