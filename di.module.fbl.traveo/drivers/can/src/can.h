/******************************************************************************
 * $Revision: 10511 $
 * $Date:: 2014-08-18 11:27:32 +0200#$
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
 ** \file canfd.h
 **
 ** Headerfile for CAN-FD functions
 **
 ** History:
 **   - 2014-06-02  0.01  ST  Initial version for Traveo
 *****************************************************************************/

#ifndef __CANFD_H__
#define __CANFD_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "can_bcan.cfg"
#include "can_canfdf.cfg"

#include "can_defs.h"
#include "pdl.h"
#include "s6j3200_CANFD.h"



/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 *****************************************************************************
 ** \defgroup CanFDGroup CAN with Flexible Data rate (CAN-FD)
 ** 
 ** \brief This section describes the interface for the CAN with Flexible Data rate.
 **
 ** Provided functions of CAN-FD module:
 ** - CanFD_Init() (Initialization of CAN-FD module)
 ** - CanFD_UpdateAndTransmitMsgBuffer() (Used to update the data in a message buffer and to transmit a message)
 *
 ** \brief How to use the CAN-FD module:
 ** First, to initialise a CAN-FD module, CanFD_Init() must be called. 
 ** Initialize the CAN-FD module with the configuration parameters, and start 
 ** the CAN-FD communication.
 ** The callback functions are optional, but recommended, otherwise there is no 
 ** report to the API in case of any error and transmission/reception. 
 **
 ** For transmitting CAN-FD messages the function CanFD_UpdateAndTransmitMsgBuffer()
 ** has to be used. 
 ** It is possible to set a callback function which will be notified whenever a
 ** message has been received. 
 **
 ** \description
 ** Specification of sample software is as follows:
 **   - Selectable CAN-FD mode or CAN mode.
 **   - CAN clock : 40MHz
 **   - CAN Bit rate : 500kHz
 **   - CAN-FD Bit rate : 5MHz (CAN-FD mode)
 **   - Standard ID filter : 0x10
 **                          store Rx buffer 0
 **   - Extended Message ID Filter : 0x10001
 **                          store Rx buffer 1
 **   - Tx/Rx Element Size : 8 byte (CAN mode)
 **     Tx/Rx Element Size : 64 byte (CAN-FD mode)
 **   - Tx/Rx FIFO : Not use
 **   - Interrupt : DRXE=1 (Message stored to Dedicated Rx Buffer)
 **                 (Inactive other)
 **
 ** Send data of ID:0x200 periodically in the main().
 ** Echoback by incrementing the ID of the Rx data received by
 ** the receiving interrupt.(CanFDIrqHandler() --- CanFDCallbackRx())
 ** 
 ** \note Following settings are not implemented.
 **         - Using Tx/warning/error interrupt
 **         - Using Tx/Rx FIFO
 **         - Variable ID Filter configuration
 **         - Variable Tx/Rx Element size configuration
 **         - Variable Message buffer size configuration
 **
 *****************************************************************************/
/*@{*/

/*****************************************************************************/
/* Global pre-processor symbols/macros ('define')                            */
/*****************************************************************************/

/* Size of Word data bytes in a receive or transmit operation (16word = 64byte) */
#define CANFD_MESSAGE_DATA_BUFFER_SIZE     16u

/* Address of Message RAM (CAN-FD 0) */
/* #define	CANFD1MSGRAM    (0xB4918000ul)*/ /*channel 1*/
///#define	CANFD1MSGRAM        (0xB4908000ul)
/* #define	CANFD1MSGRAM    (0xB06D8000ul)*/ /*channel 6 */

/* Size of Word data bytes in Message RAM */
#define	CANFD1MRWORDS   (4096u)


#define CAN0_TSEG1 (CAN0_NTSEG1)
#define CAN0_TSEG2 (CAN0_NTSEG2)

#define CAN1_TSEG1 (CAN1_PSEG1)
#define CAN1_TSEG2 (CAN1_PSEG2)
/*not used*/
#define CAN0_CLOCK_CFG_VAL (( (CAN0_SYSTEM_CLOCK_DIVIDE)  << (16) ) | 	\
                            ( (CAN0_TSEG1 - 1) << (8) ) | 	\
						    ( (CAN0_TSEG2 - 1)                << (4) ) | 	\
							( (CAN0_SJW - 1) ))

#define CAN1_CLOCK_CFG_VAL (( (CAN1_SYSTEM_CLOCK_DIVIDE)  << (16) ) | 	\
                            ( (CAN1_TSEG1 - 1) << (8) ) | 	\
						    ( (CAN1_TSEG2 - 1)                << (4) ) | 	\
							( (CAN1_SJW - 1) ))


#define CAN_RX_SHIFT18       (18u)
#define CANFD_BR_CONFIG      { CAN0_SYSTEM_CLOCK_DIVIDE, CAN0_TSEG1, CAN0_TSEG2, CAN0_SJW }


/*****************************************************************************/
/* Global type definitions ('typedef')                                       */
/*****************************************************************************/
typedef  volatile stc_mcg_canfdn_1_t*  pstc_canfd_type_t;

/**
 ******************************************************************************
 ** \brief CANFD Unit configuration structures
 ******************************************************************************/

/**
 *****************************************************************************
 ** \brief DLC-Word conversion
 *****************************************************************************/
static const uint16_t iDlcInWord[] = {
	2,			/*!<  8 bytes */
	3,			/*!< 12 bytes */
	4,			/*!< 16 bytes */
	5,			/*!< 20 bytes */
	6,			/*!< 24 bytes */
	8,			/*!< 32 bytes */
	12,			/*!< 48 bytes */
	16			/*!< 64 bytes */
};

/**
 ******************************************************************************
 ** \brief Redefinition of R0 register bitfields
 ******************************************************************************/
typedef struct stc_canfd_r0
{
    volatile uint32_t  ID         :29;
    volatile uint32_t  RTR        : 1;
    volatile uint32_t  XTD        : 1;
    volatile uint32_t  ESI        : 1;
} stc_canfd_r0_t;

/**
 ******************************************************************************
 ** \brief Redefinition of R1 register bitfields
 ******************************************************************************/
typedef struct stc_canfd_r1
{
    volatile uint32_t  RXTS       :16;
    volatile uint32_t  DLC        : 4;
    volatile uint32_t  BRS        : 1;
    volatile uint32_t  EDL        : 1;
             uint32_t  RESERVED1  : 2;
    volatile uint32_t  FIDX       : 7;
    volatile uint32_t  ANMF       : 1;
} stc_canfd_r1_t;

/**
 ******************************************************************************
 ** \brief Redefinition of Rx Buffer Register
 ******************************************************************************/
typedef struct stc_canfd_rx_buffer
{
    stc_canfd_r0_t  R0_f;
    stc_canfd_r1_t  R1_f;
    uint32_t        DATA_AREA_f[16];
} stc_canfd_rx_buffer_t;


/**
 ******************************************************************************
 ** \brief Redefinition of T0 register bitfields
 ******************************************************************************/
typedef struct stc_canfd_t0
{
    volatile uint32_t  ID         :29;
    volatile uint32_t  RTR        : 1;
    volatile uint32_t  XTD        : 1;
             uint32_t  RESERVED1  : 1;
} stc_canfd_t0_t;

/**
 ******************************************************************************
 ** \brief Redefinition of T1 register bitfields.Refer to Traveo Platform hardware manual chapter 6.3
 ******************************************************************************/
typedef struct stc_canfd_t1
{
             uint32_t  RESERVED1  :16;
    volatile uint32_t  DLC        : 4;
    volatile uint32_t  BRS        : 1;
    volatile uint32_t  FDF        : 1;
             uint32_t  RESERVED2  : 1;
    volatile uint32_t  EFC        : 1;
    volatile uint32_t  MM         : 8;
} stc_canfd_t1_t;

/**
 ******************************************************************************
 ** \brief Redefinition of Tx Buffer Register
 ******************************************************************************/
typedef struct stc_canfd_tx_buffer
{
    stc_canfd_t0_t  T0_f;
    stc_canfd_t1_t  T1_f;
    uint32_t        DATA_AREA_f[16];
} stc_canfd_tx_buffer_t;


/**
 ******************************************************************************
 ** \brief Redefinition of CANP_CTR register bitfields
 ******************************************************************************/
typedef struct stc_canfd_canp_ctr
{
    volatile uint32_t CANPRE     : 6;
             uint32_t RESERVED1  : 2;
    volatile uint32_t CPCKS      : 1;
             uint32_t RESERVED2  :23;
} stc_canfd_canp_ctr_t;

/**
 ******************************************************************************
 ** \brief Redefinition of CANP_STR register bitfields
 ******************************************************************************/
typedef struct stc_canfd_canp_str
{
    volatile uint32_t BUSY       : 1;
    volatile uint32_t SCKM       : 2;
             uint32_t RESERVED1  :29;
} stc_canfd_canp_str_t;

/**
 ******************************************************************************
 ** \brief Redefinition of CAN PRESCALER registers
 ******************************************************************************/
typedef struct stc_canprescaler
{
    stc_canfd_canp_ctr_t   CTR_f;
    stc_canfd_canp_str_t   STR_f;
} stc_canprescaler_t;


/**
 ******************************************************************************
 ** \brief Redefinition of Message ID Filter register
 ******************************************************************************/
typedef struct stc_id_filter
{
    volatile uint32_t SFID2      :11;
             uint32_t RESERVED4  : 5;
    volatile uint32_t SFID1      :11;
    volatile uint32_t SFEC       : 3;
    volatile uint32_t SFT        : 2;
} stc_id_filter_t;


/**
 ******************************************************************************
 ** \brief Redefinition of F0 register bitfields
 ******************************************************************************/
typedef struct stc_canfd_f0
{
    volatile uint32_t EFID1      :29;
    volatile uint32_t EFEC       : 3;
} stc_canfd_f0_t;

/**
 ******************************************************************************
 ** \brief Redefinition of F1 register bitfields
 ******************************************************************************/
typedef struct stc_canfd_f1
{
    volatile uint32_t EFID2      :29;
             uint32_t RESERVED1  : 1;
    volatile uint32_t EFT        : 2;
} stc_canfd_f1_t;

/**
 ******************************************************************************
 ** \brief Redefinition of Extended Message ID Filter register
 ******************************************************************************/
typedef struct stc_extid_filter
{
    stc_canfd_f0_t  F0_f;
    stc_canfd_f1_t  F1_f;
} stc_extid_filter_t;


/**
 *****************************************************************************
 ** \brief CAN-FD bitrate.
 ** 
 ** This structure is used to set the bitrate register.
 *****************************************************************************/
typedef struct stc_canfd_bitrate
{
    uint16_t  u16Prescaler;    /*!< Baud Rate Prescaler */
    uint8_t   u8TimeSegment1;  /*!< Time segment before sample point */
    uint8_t   u8TimeSegment2;  /*!< Time segment after sample point */
    uint8_t   u8SyncJumpWidth; /*!< Synchronization Jump Width */
} stc_canfd_bitrate_t;


/**
 *****************************************************************************
 ** \brief CAN-FD message identifier
 ** 
 ** This structure is used to set the CAN-FD message identifier for transmit and 
 ** receive operations. 
 *****************************************************************************/
typedef struct stc_canfd_msg_id
{
    uint32_t u32Identifier;     /*!< 11- or 29-bit identifier. The valid bit length depends on bExtended. */
    boolean_t bExtended;        /*!< TRUE: 29-bit identifier,  FALSE: 11-bit identifier. */
} stc_canfd_msg_id_t;


/**
 *****************************************************************************
 ** \brief CAN-FD message data.
 ** 
 ** Data structure for transmit and receive operations
 *****************************************************************************/
typedef struct stc_canfd_msg_data
{
    uint32_t au32Data[CANFD_MESSAGE_DATA_BUFFER_SIZE];  /*!< Data of CAN-FD message. */
    uint8_t u8DataLengthCode;  /*!< Number of valid bytes in au8Data and DLC of CAN-FD message. */
} stc_canfd_msg_data_t;



/**
 *****************************************************************************
 ** \brief CAN-FD status.
 ** 
 ** These state values represent the current CAN-FD state, and are used in the 
 ** CAN-FD status changed callback function (canfd_status_chg_func_ptr_t).
 *****************************************************************************/
typedef enum en_canfd_status
{
    CanFDNoError    = 0,   /*!< No error pending. */
    CanFDStuffError = 1,   /*!< More than 5 equal bits in a sequence have occurred in a part of a received message. */
    CanFDFormError  = 2,   /*!< A fixed format part of a received frame has the wrong format. */
    CanFDAckError   = 3,   /*!< The message this CAN-FD Core transmitted was not acknowledged by another node. */
    CanFDBit1Error  = 4,   /*!< While trying to send a recessive bit (1) a dominant level (0) was sampled. */
    CanFDBit0Error  = 5,   /*!< While trying to send a dominant bit (0) a recessive level (1) was sampled. */
    CanFDCRCError   = 6    /*!< The CRC checksum was incorrect. */
} en_canfd_status_t;


/**
 *****************************************************************************
 ** \brief CAN-FD error.
 ** 
 ** These error values are used to report any CAN-FD related error to the API via
 ** the CAN-FD error callback function (canfd_error_func_ptr_t).
 *****************************************************************************/
typedef enum en_canfd_error
{
    CanFDBusOff        = 0,    /*!< The CAN-FD module is in busoff state. */
    CanFDWarning       = 1     /*!< At least one error counter has reached error warning. */
} en_canfd_error_t;


/**
 *****************************************************************************
 ** \brief CAN-FD message.
 ** 
 ** This structure stores a CAN-FD message, including the identifier, data 
 ** and data length code (DLC).
 *****************************************************************************/
typedef struct stc_canfd_msg
{
    stc_canfd_msg_id_t    stcIdentifier;  /*!< 11- or 29-bit identifier (ID) */
    stc_canfd_msg_data_t  stcData;        /*!< Data and DLC */
} stc_canfd_msg_t;


/**
 *****************************************************************************
 ** \brief Message transmission complete callback function (canfd_tx_msg_func_ptr_t).
 **
 ** Signals a successful completed transmission.
 *****************************************************************************/
typedef void (*canfd_tx_msg_func_ptr_t)( void );


/**
 *****************************************************************************
 ** \brief Message reception callback function (canfd_rx_msg_func_ptr_t).
 **
 ** Signals that CAN-FD has received a new message.
 *****************************************************************************/
typedef void (*canfd_rx_msg_func_ptr_t)(uint8_t u8MsgBuf, 
                                      stc_canfd_msg_t* stcCanFDmsg
                                      );


/**
 *****************************************************************************
 ** \brief Status changed callback function (canfd_status_chg_func_ptr_t).
 **
 ** Any status change will be reported to the API (see #en_canfd_status_t for 
 ** possible status change codes).
 *****************************************************************************/
typedef void (*canfd_status_chg_func_ptr_t)(en_canfd_status_t enCanFDStatus);


/**
 *****************************************************************************
 ** \brief Error callback function (canfd_error_func_ptr_t).
 **
 ** Any error will be reported to the API (see #en_canfd_error_t for 
 ** possible error codes).
 *****************************************************************************/
typedef void (*canfd_error_func_ptr_t)(en_canfd_error_t enCanFDError);


/**
 *****************************************************************************
 ** \brief CAN-FD configuration.
 ** 
 ** Is used to set the bitrate and select CAN mode or CAN-FD mode.
 ** Optionally Callbacks notification can be set.  
 *****************************************************************************/
typedef struct stc_canfd_config
{
/* These variable are not needed */

    canfd_tx_msg_func_ptr_t       pfnTxCallback;      /*!< Callback function for transmit completed, can be NULL. */
    canfd_rx_msg_func_ptr_t       pfnRxCallback;      /*!< Callback function for receive completed, can be NULL. */
    canfd_status_chg_func_ptr_t   pfnStatusCallback;  /*!< Callback function for CAN status changes, can be NULL. */
    canfd_error_func_ptr_t        pfnErrorCallback;   /*!< Callback function for CAN related errors, can be NULL. */




    boolean_t                     bCanFDMode;         /*!< TRUE: CAN-FD mode, FALSE: CAN mode. */
    stc_canfd_bitrate_t           stcBitrate;         /*!< CAN bitrate setting.  */
    stc_canfd_bitrate_t           stcFastBitrate;     /*!< CAN Fast bitrate setting.  */

} stc_canfd_config_t;


/**
 *****************************************************************************
 ** \brief CAN-FD interrupt pointer structure
 **
 ** Holds some pointers to callback functions and buffer
 *****************************************************************************/
typedef struct stc_canfd_interrupt_handling
{
    canfd_tx_msg_func_ptr_t pfnCanFDTxInterruptFunction; /*!< pointer to transmit interrupt callback */
    canfd_rx_msg_func_ptr_t pfnCanFDRxInterruptFunction; /*!< pointer to receive interrupt callback */
} stc_canfd_interrupt_handling_t;

/**
 *****************************************************************************
 ** \brief CAN-FD notification pointer structure
 **
 ** Holds some pointers to callback functions for status and error notification
 *****************************************************************************/
typedef struct stc_canfd_notification
{
    canfd_status_chg_func_ptr_t pfnCanFDStatusInterruptFunction ; /*!< pointer to status interrupt callback */
    canfd_error_func_ptr_t      pfnCanFDErrorInterruptFunction ;  /*!< pointer to error interrupt callback */
} stc_canfd_notification_t;

/**
 *****************************************************************************
 ** \brief CAN-FD internal data structure
 **
 ** Pointer to callback function interrupt handler
 *****************************************************************************/
typedef struct stc_canfd_intern_data
{
    stc_canfd_interrupt_handling_t stcCanFDInterruptHandling;
    stc_canfd_notification_t       stcCanFDNotificationCb;
} stc_canfd_intern_data_t;


/* Enumeration to define an index for each enabled CAN-FD instance */
typedef enum en_canfd_instance_index
{
    #if (PDL_PERIPHERAL_ENABLE_CANFD1 == PDL_ON)
    CanFDInstanceIndexCanFD1,
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD0 == PDL_ON)
    CanFDInstanceIndexCanFD0,
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD5 == PDL_ON)
    CanFDInstanceIndexCanFD5,
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD6 == PDL_ON)
    CanFDInstanceIndexCanFD6,
    #endif
    CanFDInstanceIndexMax
} en_canfd_instance_index_t;
    
/* CAN-FD instance data type */
typedef struct stc_canfd_instance_data
{
    pstc_canfd_type_t pstcInstance; /* pointer to registers of an instance */
} stc_canfd_instance_data_t;


/*****************************************************************************/
/* Global variable declarations ('extern', definition in C source)           */
/*****************************************************************************/
/** Macro to return the number of enabled CAN-FD instances */
#define CANFD_INSTANCE_COUNT (uint32_t)(sizeof(m_astcCanFDInstanceDataLut) / sizeof(m_astcCanFDInstanceDataLut[0]))

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
extern en_result_t Can_Init( CAN_HWINST const hwinst );
extern uint8_t Can_UpdateAndTransmitMsgBuffer( 
                                          volatile stc_mcg_canfdn_1_t* pstcCanFD, 
                                          uint8_t u8MsgBuf, 
                                          stc_canfd_msg_t* pstcMsg 
                                          ) ;
extern en_result_t Can_PrescalerInit( volatile stc_canp_t* pstcCanp, 
                                      uint8_t u8CanPrescaler, 
                                      boolean_t bSelectMainClock
                                       ) ;

CAN_UINT8 CanHwRxBufferIntStatusReq( CAN_HWINST const hwInst);
void CanHwRxBufferIntStatusClr(CAN_UINT8 mailbox, CAN_HWINST const hwInst);
void CanHwTxBufferIntStatusClr(CAN_UINT8 mailbox, CAN_HWINST const hwInst);
CAN_RC CanHwTransmit(CAN_HMV const hMv, CAN_TMD const * const pTmd, CAN_HWINST const hwInst);
CAN_RC CanHwTxIsPending(CAN_HMV const hMv, CAN_HWINST const hwInst);
CAN_RC CanHwReceive(CAN_HMV const hMv, CAN_RMD * const pRmd, CAN_HWINST const hwInst);
CAN_RC CanHwGetBusOFFStatus(CAN_HWINST const hwInst);
/*@}*/

#ifdef __cplusplus
}
#endif

#endif /* __CANFD_H__ */
/*****************************************************************************/
/* EOF (not truncated)                                                       */
/*****************************************************************************/
