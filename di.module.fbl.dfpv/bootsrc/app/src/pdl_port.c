/******************************************************************************
 * $Revision: 309 $
 * $Date:: 2014-12-05 16:56:38 +0900#$
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
 ** \file port.c
 **
 ** A detailed description is available at
 ** @link PortGroup Port Module description @endlink
 **
 ** History:
 **   - 2014-05-16  0.01  HS  Initial version for Traveo
 **   - 2014-10-17  0.02  CEy Added functions to configure several port pins
 **                           and resource inputs, added GPIO Toggle function
 *****************************************************************************/

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "pdl_port.h"
#include "abstract.h"

/**
 *****************************************************************************
 ** \addtogroup PortGroup Port functions (PORT)
 **
 *****************************************************************************/
/*!@{ */

/*****************************************************************************/
/* Local pre-processor symbols/macros ('#define')                            */
/*****************************************************************************/
/*! Maximum chanel number of each port */
#define PORT_MAX_PORT_CHANNEL_COUNT     (32u)

/** Maximum number of supported ports, including possible gaps
 ** on certain derivates. */
#define MCU_MAX_PORT_COUNT                          7u

/** Maximum number of supported pins within a port, including possible gaps
 ** on certain derivates. */
#define MCU_MAX_PORT_PIN_COUNT                      32u


/**
 *****************************************************************************
 ** \brief Write protected register of PPC
 **
 ** \note This macro contains IRQ mask processing for protected sequence.
 **
 ** \param [in]  reg                Register access symbol.
 ** \param [in]  data               Write data.
 *****************************************************************************/
#define PORT_WPREG_PPC(reg, data)                               \
{                                                               \
    un_ppc_keycdr_t wk;                                         \
    uint32_t adr = (uint32_t)&(reg);                            \
    uint8_t size_key;                                           \
    wk.au16Halfword[0] = (uint16_t)(adr & ((uint32_t)0x7FFF));  \
    size_key = (uint8_t)((sizeof(reg) >> 1) << 4);              \
    IRQ_DISABLE_LOCAL();                                        \
    wk.au8Byte[3] = (uint8_t)(size_key | (0 << 6));             \
    PPC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (1 << 6));             \
    PPC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (2 << 6));             \
    PPC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (3 << 6));             \
    PPC_KEYCDR = wk.u32Register;                                \
    (reg) = (data);                                             \
    IRQ_RESTORE();                                              \
}

/**
 *****************************************************************************
 ** \brief Write protected register of GPIO
 **
 ** \note This macro contains IRQ mask processing for protected sequence.
 **
 ** \param [in]  reg                Register access symbol.
 ** \param [in]  data               Write data.
 *****************************************************************************/
#define PORT_WPREG_GPIO(reg, data)                              \
{                                                               \
    un_gpio_keycdr_t wk;                                        \
    uint32_t adr = (uint32_t)&(reg);                            \
    uint8_t size_key;                                           \
    wk.au16Halfword[0] = (uint16_t)(adr & ((uint32_t)0x7FFF));  \
    size_key = (uint8_t)((sizeof(reg) >> 1) << 4);              \
    IRQ_DISABLE_LOCAL();                                        \
    wk.au8Byte[3] = (uint8_t)(size_key | (0 << 6));             \
    GPIO_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (1 << 6));             \
    GPIO_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (2 << 6));             \
    GPIO_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (3 << 6));             \
    GPIO_KEYCDR = wk.u32Register;                               \
    (reg) = (data);                                             \
    IRQ_RESTORE();                                              \
}

/**
 *****************************************************************************
 ** \brief Write protected register of RIC
 **
 ** \note This macro contains IRQ mask processing for protected sequence.
 **
 ** \param [in]  reg                Register access symbol.
 ** \param [in]  data               Write data.
 *****************************************************************************/
#define PORT_WPREG_RIC(reg, data)                               \
{                                                               \
    un_ric_keycdr_t wk;                                         \
    uint32_t adr = (uint32_t)&(reg);                            \
    uint8_t size_key;                                           \
    wk.au16Halfword[0] = (uint16_t)(adr & ((uint32_t)0x7FFF));  \
    size_key = (uint8_t)((sizeof(reg) >> 1) << 4);              \
    IRQ_DISABLE_LOCAL();                                        \
    wk.au8Byte[3] = (uint8_t)(size_key | (0 << 6));             \
    RIC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (1 << 6));             \
    RIC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (2 << 6));             \
    RIC_KEYCDR = wk.u32Register;                                \
    wk.au8Byte[3] = (uint8_t)(size_key | (3 << 6));             \
    RIC_KEYCDR = wk.u32Register;                                \
    (reg) = (data);                                             \
    IRQ_RESTORE();                                              \
}

/**
 *****************************************************************************
 ** \brief Write protected register of ADC
 **
 ** \note This macro contains IRQ mask processing for protected sequence.
 **
 ** \param [in]  reg                Register access symbol.
 ** \param [in]  data               Write data.
 *****************************************************************************/
#define PORT_WPREG_ADC(reg, data)                               \
{                                                               \
    un_ader_2_keycdr_t wk;                                      \
    uint32_t adr = (uint32_t)&(reg);                            \
    uint8_t size_key;                                           \
    wk.au16Halfword[0] = (uint16_t)(adr & ((uint32_t)0x7FFF));  \
    size_key = (uint8_t)((sizeof(reg) >> 1) << 4);              \
    IRQ_DISABLE_LOCAL();                                        \
    wk.au8Byte[3] = (uint8_t)(size_key | (0 << 6));             \
    ADER_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (1 << 6));             \
    ADER_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (2 << 6));             \
    ADER_KEYCDR = wk.u32Register;                               \
    wk.au8Byte[3] = (uint8_t)(size_key | (3 << 6));             \
    ADER_KEYCDR = wk.u32Register;                               \
    (reg) = (data);                                             \
    IRQ_RESTORE();                                              \
}

/*****************************************************************************/
/* Global variable definitions (declared in header file with 'extern')       */
/*****************************************************************************/

/*****************************************************************************/
/* Local type definitions ('typedef')                                        */
/*****************************************************************************/
/*! Define special Set/Clear structure to allow indexed access to special regs */
typedef struct stc_port_set_clear_group {
    un_gpio_posrn_t       unPOSR;
    un_gpio_pocrn_t       unPOCR;
    un_gpio_ddsrn_t       unDDSR;
    un_gpio_ddcrn_t       unDDCR;
} stc_port_set_clear_group_t;

/*! Define special Output structure to allow indexed access to special regs */
typedef struct stc_port_output_group
{
    un_gpio_podrn_t       unPODR;
    un_gpio_ddrn_t        unDDR;
} stc_port_output_group_t;

/*****************************************************************************/
/* Local function prototypes ('static')                                      */
/*****************************************************************************/

/*****************************************************************************/
/* Local variable definitions ('static')                                     */
/*****************************************************************************/

/*****************************************************************************/
/* Function implementation - global ('extern') and local ('static')          */
/*****************************************************************************/

/**
 *****************************************************************************
 ** \brief Set the configuration of a single port pin within given port
 **
 ** \pre Must be run after Port_SetResourceInput().
 **
 ** \param [in]  u8PortIndex       Index of port to set.(e.g. "0" of the P011)
 ** \param [in]  u8ChNumber        Channel number to operate on. (e.g."11" of the P011)
 ** \param [in]  pstcPinConfig     Pointer to a port pin configuration structure
 **
 ** \retval Ok                     Configuration applied to specified port pin.
 ** \retval ErrorInvalidParameter If one of the following conditions are met:
 **          - u8ChNumber out of range (0 .. PORT_MAX_PORT_CHANNEL_COUNT-1)
 **          - pstcPinConfig is a NULL pointer.
 *****************************************************************************/
en_result_t Port_SetPinConfig(uint8_t u8PortIndex,
                              uint8_t u8ChNumber,
                              const stc_port_pin_config_t* pstcPinConfig)
{
    uint32_t u32PcfgrnIndex;
    uint32_t u32SetMask;
    en_result_t Ret = ErrorInvalidParameter;
    un_ppc_pcfgrn_t  unPortSetting = {0u};
    volatile stc_port_set_clear_group_t* pstcPortSetClrGrp =
            (volatile stc_port_set_clear_group_t*)&GPIO.unPOSR0;
    volatile un_ppc_pcfgrn_t* punPcfgrn = &PPC.unPCFGR000;

    /* Null check and Check for chanel number out of range */
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    if ( (pstcPinConfig != NULL) && (u8ChNumber < PORT_MAX_PORT_CHANNEL_COUNT) )
    {
        u32PcfgrnIndex = (uint32_t)((u8PortIndex * PORT_MAX_PORT_CHANNEL_COUNT) + u8ChNumber);

        unPortSetting.stcField.u3POF = pstcPinConfig->enOutputFunction;
        unPortSetting.stcField.u2ODR = pstcPinConfig->enOutputDrive;
        unPortSetting.stcField.u2PIL = pstcPinConfig->enInputLevel;
        unPortSetting.stcField.u1PIE =
                (uint16_t)((pstcPinConfig->bInputEnable == FALSE) ? 0 : 1);
        unPortSetting.stcField.u1NFE =
                (uint16_t)((pstcPinConfig->bNoiseFilterEnable == FALSE) ? 0 : 1);

        /* Set port pull up/down */
        if (pstcPinConfig->enPullResistor== (en_port_pull_resistor_t)PortPullResistorDown)
        {
            unPortSetting.stcField.u1PDE = (uint16_t)1;
            unPortSetting.stcField.u1PUE = (uint16_t)0;
        }
        else if (pstcPinConfig->enPullResistor== (en_port_pull_resistor_t)PortPullResistorUp)
        {
            unPortSetting.stcField.u1PDE = (uint16_t)0;
            unPortSetting.stcField.u1PUE = (uint16_t)1;
        }
        else
        {
            unPortSetting.stcField.u1PDE = (uint16_t)0;
            unPortSetting.stcField.u1PUE = (uint16_t)0;
        }

        /* Calculate corresponding bit position */
        // polyspace<RTE:OVFL> There is a check. Result cannot be bigger than MAX INT32.
        u32SetMask = (uint32_t)1 << u8ChNumber;

        /* Set Initial port output level */
        if (pstcPinConfig->enGpioInitOutputLevel == (en_port_gpio_level_t)PortGpioHigh)
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOSR.u32Register = u32SetMask;
        }
        else
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOCR.u32Register = u32SetMask;
        }

        /* Set port functions */
        PORT_WPREG_PPC(punPcfgrn[u32PcfgrnIndex], unPortSetting);

        /* Set port direction */
        if (pstcPinConfig->enGpioDirection == (en_port_gpio_direction_t)PortGpioOutput)
        {
            PORT_WPREG_GPIO(pstcPortSetClrGrp[u8PortIndex].unDDSR.u32Register, u32SetMask);
        }
        else
        {
            PORT_WPREG_GPIO(pstcPortSetClrGrp[u8PortIndex].unDDCR.u32Register, u32SetMask);
        }

        Ret = Ok;
    }

    return Ret;
}

/**
 *****************************************************************************
 ** \brief Select the input port configuration
 **
 ** \param [in]  punRicResinReg    Pointer of the Resource Input Setting Register (RIC_RESIN)
 ** \param [in]  enInputPort       see #en_port_input_port_t
 *****************************************************************************/
void Port_SelectInputPort(volatile un_ric_resinn_t* const punRicResinReg,
                          en_port_input_port_t enInputPort)
{
    // polyspace<RTE:NIVL> Some bits are not used in this register so write operation has no influence. No danger for uninitialized variables.
    PORT_WPREG_RIC(punRicResinReg->au8Byte[1], enInputPort);
}

/**
 *****************************************************************************
 ** \brief Select the input resource configuration
 **
 ** \param [in]  punRicResinReg    Pointer of the Resource Input Setting Register (RIC_RESIN)
 ** \param [in]  enInputSource       see #en_port_input_source_t
 *****************************************************************************/
void Port_SelectInputSource(volatile un_ric_resinn_t* const punRicResinReg,
                            en_port_input_source_t enInputSource)
{
    // polyspace<RTE:NIVL> Some bits are not used in this register so write operation has no influence. No danger for uninitialized variables.
    PORT_WPREG_RIC(punRicResinReg->au8Byte[0], enInputSource);
}

/**
 *****************************************************************************
 ** \brief Enable port input
 **
 ** \pre Must be run after all other port configurations are completed.
 *****************************************************************************/
void Port_EnableInput(void)
{
    // polyspace<RTE:NIVL> Some bits are not used in this register so write operation has no influence. No danger for uninitialized variables.
    PORT_WPREG_GPIO(GPIO_PORTEN, 0x00000001UL);
}

/**
 *****************************************************************************
 ** \brief Set single pin level within given port
 **
 ** \param [in]  u8PortIndex       Index of port to set.(e.g. "0" of the P011)
 ** \param [in]  u8ChNumber        Channel number to operate on. (e.g."11" of the P011)
 ** \param [in]  enLevel           Port level. see #en_port_gpio_level_t
 **
 ** \retval Ok                     Setting of the port level was successfully done.
 ** \retval ErrorInvalidParameter  If one of the following conditions are met:
 **          - u8ChNumber out of range (0 .. PORT_MAX_PORT_CHANNEL_COUNT-1)
 *****************************************************************************/
en_result_t Port_SetPortPinLevel(uint8_t u8PortIndex,
                                 uint8_t u8ChNumber,
                                 en_port_gpio_level_t enLevel)
{
    uint32_t u32SetMask;
    en_result_t Ret = ErrorInvalidParameter;
    volatile stc_port_set_clear_group_t* pstcPortSetClrGrp =
            (volatile stc_port_set_clear_group_t*)&GPIO.unPOSR0;

    // Check for channel number out of range
    if (u8ChNumber < PORT_MAX_PORT_CHANNEL_COUNT)
    {
        // polyspace<RTE:OVFL> There is a check. Result cannot be bigger than MAX INT32.
        u32SetMask = (uint32_t)1 << u8ChNumber;
        if (enLevel == (en_port_gpio_level_t)PortGpioHigh)
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOSR.u32Register = u32SetMask;
        }
        else
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOCR.u32Register = u32SetMask;
        }

        Ret = Ok;
    }

    return Ret;
}

/**
 *****************************************************************************
 ** \brief Get single pin level within given port
 **
 ** \param [in]  u8PortIndex       Index of port to set.(e.g. "0" of the P011)
 ** \param [in]  u8ChNumber        Channel number to operate on. (e.g."11" of the P011)
 ** \param [out]  enLevel          Port level. see #en_port_gpio_level_t
 **
 ** \retval Ok                     Getting of the port level was successfully done.
 ** \retval ErrorInvalidParameter  If one of the following conditions are met:
 **          - u8ChNumber out of range (0 .. PORT_MAX_PORT_CHANNEL_COUNT-1)
 **          - enLevel is a NULL pointer.
 *****************************************************************************/
en_result_t Port_GetPortPinLevel(uint8_t u8PortIndex,
                                 uint8_t u8ChNumber,
                                 en_port_gpio_level_t * enLevel)
{
    uint32_t u32SetMask;
    en_result_t Ret = ErrorInvalidParameter;
    volatile un_gpio_pidrn_t * unPidrn = &GPIO.unPIDR0;

    // Null check and ChNumber out of range
    // polyspace<RTE:UNR> Unreachable code from Polyspace point of view, however it is tested with VectorCast.
    if ( (enLevel != NULL) && (u8ChNumber < PORT_MAX_PORT_CHANNEL_COUNT) )
    {
        // polyspace<RTE:OVFL> There is a check. Result cannot be bigger than MAX INT32.
        u32SetMask = (uint32_t)1 << u8ChNumber;

        // polyspace<RTE:IDP> Should be protected by caller side.
        if ((unPidrn[u8PortIndex].u32Register & u32SetMask) != 0UL)
        {
            *enLevel = PortGpioHigh;
        }
        else
        {
            *enLevel = PortGpioLow;
        }

        Ret = Ok;
    }

    return Ret;
}


/**
 *****************************************************************************
 ** \brief Toggles single pin level within given port
 **
 ** \param [in]  u8PortIndex       Index of port to set.(e.g. "0" of the P011)
 ** \param [in]  u8ChNumber        Channel number to operate on. (e.g."11" of the P011)
 **
 ** \retval Ok                     Toggling the port level was successfully done.
 ** \retval ErrorInvalidParameter  If one of the following conditions are met:
 **          - u8ChNumber out of range (0 .. PORT_MAX_PORT_CHANNEL_COUNT-1)
 *****************************************************************************/
en_result_t Port_TogglePortPin(uint8_t u8PortIndex,
                               uint8_t u8ChNumber)
{
    en_port_gpio_level_t enLevel;
    uint32_t u32SetMask;
    en_result_t Ret = ErrorInvalidParameter;
    volatile stc_port_set_clear_group_t* pstcPortSetClrGrp =
            (volatile stc_port_set_clear_group_t*)&GPIO.unPOSR0;

    // Check for channel number out of range
    if (u8ChNumber < PORT_MAX_PORT_CHANNEL_COUNT)
    {
        // Get actual level for requested pin
        (void)Port_GetPortPinLevel( u8PortIndex, u8ChNumber, &enLevel ) ;

        // polyspace<RTE:OVFL> There is a check. Result cannot be bigger than MAX INT32.
        u32SetMask = (uint32_t)1 << u8ChNumber;
        if (enLevel == (en_port_gpio_level_t)PortGpioLow)
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOSR.u32Register = u32SetMask;
        }
        else
        {
            // polyspace<RTE:IDP> Should be protected by caller side.
            pstcPortSetClrGrp[u8PortIndex].unPOCR.u32Register = u32SetMask;
        }

        Ret = Ok;
    }
    
    return Ret;
}



/**
 *****************************************************************************
 ** \brief Set Port Pin configuration
 **
 ** This function sets the configuration for each port pin in the array
 **
 ** \pre Must be in privileged mode
 **
 ** \param [in]  astcPortPins[]     Struct with the individual settings
 **                                 for each Port Pin
 **
 ** \param [in]  u32Count           dimension of the astcPortPins[]
 *
 ** \retval Ok                      Set of Pin enable bits was successful
 ** \retval ErrorAccessRights If following conditions is met:
 **             - API is not in privileged mode.
 ** \retval ErrorInvalidParameter If one of the following conditions are met:
 **             - astcPortPins == NULL
 **             - u32Count == 0
 *****************************************************************************/
en_result_t Port_ConfigurePortPins(const stc_port_pin_set_t astcPortPins[], uint32_t u32Count)
{
    uint32_t u32Index = 0UL;
    en_result_t Ret = ErrorInvalidParameter;

    // Null check and check number of port pins to configure
    if ( (astcPortPins != NULL) && (u32Count != 0UL) )
    {
        // Walk through port pin list to configure  pins
        for (u32Index = 0UL; u32Index < u32Count; u32Index++)
        {
            // If port number is in valid range
            // polyspace<RTE:IDP> Should be protected by caller side.
            if (astcPortPins[u32Index].u8PortIndex < MCU_MAX_PORT_COUNT)
            {
                // If pin number is in valid range
                if (astcPortPins[u32Index].u8PinNumber < MCU_MAX_PORT_PIN_COUNT)
                {
                    uint8_t u8Port = astcPortPins[u32Index].u8PortIndex;
                    uint8_t u8Pin  = astcPortPins[u32Index].u8PinNumber;
                    const stc_port_pin_set_t* pstcPortPinSet = &astcPortPins[u32Index];

                    // Set port pin configuration
                    (void)Port_SetPinConfig(u8Port, u8Pin, &pstcPortPinSet->stcPortPinConfig);
                }
            }
        }

        Ret = Ok;
    }

    return Ret;
} // Port_ConfigurePortPins


/**
 *****************************************************************************
 ** \brief Set Port Pin input matrix and special input signals
 **
 ** \param [in]  astcInputResources[]    Struct with the pointer to
 **                                 RICFG.un???.stcField register and the
 **                                 Parameters to set the input matrix
 **
 ** \param [in]  u32Count           size of the astcResources[]
 **
 ** \retval Ok                      Set of Pin enable bits was successful
 **
 ** \retval ErrorInvalidParameter If one of the following conditions are met:
 **             - astcInputResources == NULL
 **             - u32Count = 0
 *****************************************************************************/
en_result_t Port_ConfigureInputResources(const stc_input_resource_set_t astcInputResources[], uint32_t u32Count)
{
    uint32_t u32Index = 0UL;
    en_result_t Ret = ErrorInvalidParameter;
    
    // Null check and check number of port pins to configure
    if ( (astcInputResources != NULL) && (u32Count != 0UL) )
    {
        // Walk through resources list
        for (u32Index = 0UL; u32Index < u32Count; u32Index++)
        {
            // Create parameters
            // polyspace<RTE:IDP> Should be protected by caller side.
            volatile un_ric_resinn_t* punRicResinReg = astcInputResources[u32Index].punRicResinReg;
            en_port_input_port_t      enInputPort   = astcInputResources[u32Index].enInputPort;
            en_port_input_source_t    enInputSource = astcInputResources[u32Index].enInputSource;

            // Set configuration register
            Port_SelectInputPort  (punRicResinReg, enInputPort);
            Port_SelectInputSource(punRicResinReg, enInputSource);
        }
    
        // Enable all now configured input ports
        Port_EnableInput();

        Ret = Ok;
    }
    
    return Ret;
}


/*! @} */

/*****************************************************************************/
/* EOF (not truncated)                                                       */
/*****************************************************************************/
