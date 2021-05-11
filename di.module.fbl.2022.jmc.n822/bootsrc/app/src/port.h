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
/** \file port.h
 **
 ** Sample program for port configurations.
 **
 ** History:
 **   - 2014-05-16  0.01  HS  Initial version for Traveo
 **   - 2014-10-17  0.23  CEy Added functions to configure several port pins
 **                           and resource inputs, added GPIO Toggle function
 *****************************************************************************/

#ifndef __PORT_H__
#define __PORT_H__

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
 ** \defgroup PortGroup Port functions (PORT)
 **
 ** \brief This section describes the interface for the Port functions.
 **
 ** Provided functions of Port module:
 **
 ** - Port_SetPinConfig()
 ** - Port_SelectInputPort()
 ** - Port_SelectInputSource()
 ** - Port_EnableInput()
 ** - Port_SetPortPinLevel()
 ** - Port_GetPortPinLevel()
 **
 ** Port_SetPinConfig() is used to set the configuration of a single port pin
 ** with parameter pstcPinConfig of type #stc_port_pin_config_t.
 ** Port_SelectInputPort() is used to select the input port of a function.
 ** \n e.g. select serial data input pin(SIN) from P411 or P420.\n
 ** Port_SelectInputSource() is used to select the input resource of a function.
 ** \n e.g. select a FRT ch that is input to OCU0.\n
 ** Port_EnableInput() is used to enable port inputs.
 ** Port_SetPortPinLevel() is used to set a port pin level.
 ** Port_GetPortPinLevel() is used to get a port pin level.
 **
 ** If application use this module, it has to use these APIs by combining.
 *****************************************************************************/
/*! @{ */

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/
/**
******************************************************************************
** \brief Port output function selection
**
** This enumeration lists all the possible output functions of a port.
**
** \note See Data sheet for Resource mapping.
******************************************************************************/
typedef enum en_port_output_resource_function
{
    PortOutputResourceGPIO = 0,
    PortOutputResourceB = 1,
    PortOutputResourceC = 2,
    PortOutputResourceD = 3,
    PortOutputResourceE = 4,
    PortOutputResourceF = 5,
    PortOutputResourceG = 6,
    PortOutputResourceH = 7
} en_port_output_resource_function_t;

/**
******************************************************************************
** \brief Port output drive selection
**
** This enumeration lists all the possible output drive strengths.
**
** \note The PortOutputDrive settings are related to the specific circuit
** type of the used MCU. PLs. refer to the datasheet to get information
** bout the availble options for the used port.
******************************************************************************/
typedef enum en_port_output_drive
{
    PortOutputDriveA = 0,
    PortOutputDriveB = 1,
    PortOutputDriveC = 2,
    PortOutputDriveD = 3
} en_port_output_drive_t;


/**
******************************************************************************
** \brief Port pull-up/down selection
**
** This enumeration lists all the possible pull-up/down for input mode
******************************************************************************/
typedef enum en_port_pull_resistor
{
    PortPullResistorNone = 0,
    PortPullResistorDown = 1,
    PortPullResistorUp = 2
} en_port_pull_resistor_t;

/**
******************************************************************************
** \brief Port Input Level selection
**
** This enumeration lists all the possible input levels for input mode
******************************************************************************/
typedef enum en_port_input_level
{
    PortInputLevelCmosA = 0,
    PortInputLevelAutomotive = 1,
    PortInputLevelTTL = 2,
    PortInputLevelCmosB = 3
} en_port_input_level_t;

/**
 *****************************************************************************
 ** \brief GPIO direction
 **
 ** Set pin to input or output
 *****************************************************************************/
typedef enum en_port_gpio_direction
{
    PortGpioInput  = 0,
    PortGpioOutput = 1
} en_port_gpio_direction_t;

/**
 *****************************************************************************
 ** \brief Port pin level
 **
 *****************************************************************************/
typedef enum en_port_gpio_level
{
    PortGpioLow = 0,
    PortGpioHigh = 1
} en_port_gpio_level_t;

/**
 *****************************************************************************
 ** \brief Port input source selection.(Corresponds to PORTSEL:Resource selection bit)
 **
 ** \note See Data sheet for Resource mapping.
 *****************************************************************************/
typedef enum en_port_input_port
{
    PortInputPortA = 0,
    PortInputPortB = 1,
    PortInputPortC = 2,
    PortInputPortD = 3,
    PortInputPortE = 4,
    PortInputPortF = 5,
    PortInputPortG = 6,
    PortInputPortH = 7,
    PortInputPortI = 8,
    PortInputPortJ = 9,
    PortInputPortK = 10,
    PortInputPortL = 11,
    PortInputPortM = 12,
    PortInputPortN = 13,
    PortInputPortO = 14,
    PortInputPortP = 15
} en_port_input_port_t;


/**
 *****************************************************************************
 ** \brief Port input Resource selection.(Corresponds to RESSEL: Resource selection bit)
 **
 ** \note See Data sheet for Resource mapping.
 *****************************************************************************/
typedef enum en_port_input_source
{
    PortInputSourceA = 0,
    PortInputSourceB = 1,
    PortInputSourceC = 2,
    PortInputSourceD = 3,
    PortInputSourceE = 4,
    PortInputSourceF = 5,
    PortInputSourceG = 6,
    PortInputSourceH = 7,
    PortInputSourceI = 8,
    PortInputSourceJ = 9,
    PortInputSourceK = 10,
    PortInputSourceL = 11,
    PortInputSourceM = 12,
    PortInputSourceN = 13,
    PortInputSourceO = 14,
    PortInputSourceP = 15
} en_port_input_source_t;

/**
******************************************************************************
** \brief Port Pin Configuration.
**
** This struct is used to configure a port pin .
******************************************************************************/
typedef struct stc_port_pin_config
{
    en_port_output_resource_function_t enOutputFunction;
    en_port_output_drive_t enOutputDrive;
    en_port_pull_resistor_t enPullResistor;
    en_port_input_level_t enInputLevel;
    boolean_t bInputEnable;
    boolean_t bNoiseFilterEnable;
    en_port_gpio_direction_t enGpioDirection;
    en_port_gpio_level_t enGpioInitOutputLevel;
} stc_port_pin_config_t;


/**
******************************************************************************
** \brief Port Pin Configuration for a collection of ports which are identified
**        by their port and pin number
******************************************************************************/
typedef struct stc_port_pin_set
{
    uint8_t                u8PortIndex;
    uint8_t                u8PinNumber;
    stc_port_pin_config_t  stcPortPinConfig;
} stc_port_pin_set_t;

/**
******************************************************************************
** \brief Resource Input Configuration for a collection of input signals
******************************************************************************/
typedef struct stc_input_resource_set
{
    volatile un_ric_resinn_t*  punRicResinReg;
    en_port_input_port_t       enInputPort;
    en_port_input_source_t     enInputSource;
} stc_input_resource_set_t;

/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
en_result_t Port_SetPinConfig(uint8_t u8PortIndex,
                              uint8_t u8PinNumber,
                              const stc_port_pin_config_t* pstcPinConfig);
void Port_SelectInputPort(volatile un_ric_resinn_t*  punRicResinReg,
                          en_port_input_port_t enInputPort);
void Port_SelectInputSource(volatile un_ric_resinn_t*  punRicResinReg,
                            en_port_input_source_t enInputSource);
void Port_EnableInput(void);
en_result_t Port_SetPortPinLevel(uint8_t u8PortIndex,
                                 uint8_t u8PinNumber,
                                 en_port_gpio_level_t enLevel);
en_result_t Port_GetPortPinLevel(uint8_t u8PortIndex,
                                 uint8_t u8PinNumber,
                                 en_port_gpio_level_t * enLevel);
en_result_t Port_TogglePortPin(uint8_t u8PortIndex,
                               uint8_t u8ChNumber);                                 
en_result_t Port_ConfigurePortPins(const stc_port_pin_set_t astcPortPins[], uint32_t u32Count);
en_result_t Port_ConfigureInputResources(const stc_input_resource_set_t astcInputResources[], uint32_t u32Count);


/*! @} */
#ifdef __cplusplus
}
#endif

#endif /* __PORT_H__ */
