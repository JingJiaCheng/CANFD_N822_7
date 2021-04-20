#if !defined( CAN_DISP_DEFINES_H )
#define CAN_DISP_DEFINES_H

/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2007.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**   its rights under all copyright laws to protect this work as a published
**   work, when appropriate.  Those having access to this work may not copy it,
**   use it, modify it or disclose the information contained in it without the
**   written authorization of Visteon Corporation.
** 
**  =========================================================================*/

/* ===========================================================================
**
**  Name:           CanDisp_Defines.h
**
**  Description:    CAN Dispatcher typedefs and datatype definitions
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "Std_Types.h"
# include "Compiler.h"
# include "CclStack_Cfg.h"
# include "Can_GeneralTypes.h"
# include "CanDisp_GeneralTypes.h"
# include "can_defs.h"
# include "CanDisp_Cfg.h"
# include "EcuM_Types.h"

/* ===========================================================================
**  M A C R O   D E F I N I T I O N S
** =========================================================================*/

# define CanDisp_HwHandleType                   Can_HwHandleType

/* Search algorithm */
#define CANDISP_LINEAR                          1u
#define CANDISP_BINARY                          2u
#define CANDISP_DOUBLE_HASH                     3u

#define CAN_INVALID_HANDLE						(CAN_UINT8)0xFF

#define CAN_CHANNEL_ALL							CAN_NUMBER_OF_CHANNELS

#define TxQREADY								(CAN_UINT8)0
#define TxQEMPTY								(CAN_UINT8)1
#define TxQFULL									(CAN_UINT8)2
#define TxQERROR								(CAN_UINT8)0xFF

#define RxQREADY								(CAN_UINT8)0
#define RxQEMPTY								(CAN_UINT8)1
#define RxQFULL									(CAN_UINT8)2
#define RxQERROR								(CAN_UINT8)0xFF

#define CANB_OFFLINE                            (CAN_UINT8)0
#define CANB_RXOFFLINE                          (CAN_UINT8)0
#define CANB_TXOFFLINE                          (CAN_UINT8)0
#define CANB_RXONLINE                           (CAN_UINT8)1
#define CANB_TXONLINE                           (CAN_UINT8)2
#define CANB_ONLINE                             (CAN_UINT8)3


#ifdef CANDISP_EXTENDEDID_SUPPORT
typedef CAN_UINT32 	CanDisp_RxPduCanIdType;
#else
typedef CAN_UINT32 	CanDisp_RxPduCanIdType;
#endif


/**   \brief  type used in CanDisp_PCConfig */
typedef struct sCanDisp_PCConfigType
{
  CAN_UINT8 neverUsed;

} CanDisp_PCConfigType;


typedef CanDisp_PCConfigType CanDisp_ConfigType;


typedef struct sCanDisp_RxPduCanIdentType
{
     CanDisp_RxPduCanIdType CanId;
	 CAN_UINT8 FrameOption;

}CanDisp_RxPduCanIdentType;


typedef enum {
  CANDISP_NO_NOTIFICATION = 0u,
  CANDISP_TX_RX_NOTIFICATION
} CanDisp_NotifStatusType;


typedef enum {
  CANDISP_OFFLINE = 0u,
  CANDISP_RX_OFFLINE,
  CANDISP_RX_ONLINE,
  CANDISP_TX_OFFLINE,
  CANDISP_TX_ONLINE,
  CANDISP_ONLINE,
  CANDISP_TX_OFFLINE_ACTIVE,
#if (CANDISP_PN_WU_TX_PDU_FILTER == STD_ON)
  CANDISP_ONLINE_WAKF,
  CANDISP_TX_ONLINE_WAKF,
#endif
  CANDISP_NO_MODE_PDU_MODE_TYPE_END /* no PDU mode, is used to determine the size of CanDispState */
} CanDisp_PduModeType;


typedef enum {
  CANDISP_CS_UNINIT = 0u,
  CANDISP_CS_STOPPED,
  CANDISP_CS_STARTED,
  CANDISP_CS_SLEEP
} CanDisp_ControllerModeType;


typedef enum {
  CANDISP_RxBasicCANMailbox = 0u,
  CANDISP_RxFullCANMailbox,
  CANDISP_TxBasicCANMailbox,
  CANDISP_TxFullCANMailbox,
  CANDISP_UnusedCANMailbox
} CanDisp_MailBoxTypeType;


typedef enum 
{
  CANDISP_WAKEUPREQUEST_NONE = 0u,
  CANDISP_WAKEUPREQUEST_CAN  = 1u,
  CANDISP_WAKEUPREQUEST_TRCV = 2u
} CanDisp_WakeUpTargetType;


# include "CanDisp_If.h"

/**   \brief  type used in CanDisp_ControllerOfWakeUpConfig */
typedef CAN_UINT8 CanDisp_ControllerOfWakeUpConfigType;

typedef PduIdType CanDisp_TxBCStartIndexOfControllerConfigType;

typedef PduIdType CanDisp_TxBCStopIndexOfControllerConfigType;

/**   \brief  type used in CanDisp_WakeUpTargetAddressOfWakeUpConfig */
typedef CAN_UINT8 CanDisp_WakeUpTargetAddressConfigType;

typedef struct sCanDisp_ControllerConfigType
{
  CanDisp_TxBCStartIndexOfControllerConfigType TxBCStartIndexOfControllerConfig;  /**< Tx-BasicCAN start index */
  CanDisp_TxBCStopIndexOfControllerConfigType TxBCStopIndexOfControllerConfig;    /**< Tx-BasicCAN stop index */
} CanDisp_ControllerConfigType;

/**   \brief  type used in CanDisp_WakeUpConfig */
typedef struct sCanDisp_WakeUpConfigType
{
  EcuM_WakeupSourceType WakeUpSourceOfWakeUpConfig;  /**< Wake-up source identifier */
  CanDisp_ControllerOfWakeUpConfigType ControllerOfWakeUpConfig;  /**< CAN controller handle ID */
  CanDisp_WakeUpTargetAddressConfigType WakeUpTargetAddressConfig;  /**< Logical handle ID of target (CAN controller / transceiver) */
  CanDisp_WakeUpTargetType WakeUpTargetModuleConfig;  /**< Target for wake-up source: CAN controller / transceiver */
} CanDisp_WakeUpConfigType;

typedef P2FUNC(void, CANDISP_APPL_MSG_CODE, CanDisp_SimpleRxIndicationFctType) (CAN_HWINST const hwInst, CAN_UINT16 const canFrameHandle, CAN_RMD const * const pRmd);

typedef P2FUNC(void, CANDISP_APPL_MSG_CODE, CanDisp_TxConfirmationFctType) ( CAN_HWINST const hwInst, CAN_TMH const hTxMsg );

typedef union {
  CanDisp_SimpleRxIndicationFctType  eSimpleRxIndicationType;
} CanDisp_RxIndicationFctType;

typedef enum {
  CanDisp_SimpleRxIndicationLayout = 0u,
  CanDisp_AdvancedRxIndicationLayout,
  CanDisp_NmOsekRxIndicationLayout
} CanDisp_RxIndicationLayoutType;

typedef struct sCanDisp_RxIndicationFctListType
{
  CanDisp_RxIndicationFctType RxIndicationFctOfRxIndicationFctList;        /**< Rx indication function. */
  CanDisp_RxIndicationLayoutType RxIndicationLayoutOfRxIndicationFctList;  /**< Layout of Rx indication function. */
} CanDisp_RxIndicationFctListType;

typedef CAN_UINT8 CanDisp_DlcOfRxPduConfigType;

typedef CAN_UINT8 CanDisp_RxIndicationOfRxPduConfigType;

typedef PduIdType CanDisp_UpperPduIdOfRxPduConfigType;

typedef struct sCanDisp_RxPduConfigType
{
  CanDisp_UpperPduIdOfRxPduConfigType UpperPduIdOfRxPduConfig;      /**< PDU ID defined by upper layer. */
  CanDisp_DlcOfRxPduConfigType DlcOfRxPduConfig;                    /**< Data length code. */
  CanDisp_RxIndicationOfRxPduConfigType RxIndicationOfRxPduConfig;  /**< Rx indication function. */
} CanDisp_RxPduConfigType;


typedef CAN_UINT8 CanDisp_ControllerOfMailBoxConfigType;

typedef PduIdType CanDisp_PduIdFirstOfMailBoxConfigType;

typedef PduIdType CanDisp_PduIdLastOfMailBoxConfigType;

typedef struct sCanDisp_MailBoxConfigType
{
  CanDisp_PduIdFirstOfMailBoxConfigType PduIdFirstOfMailBoxConfig;  /**< "First" PDU mapped to mailbox. */
  CanDisp_PduIdLastOfMailBoxConfigType PduIdLastOfMailBoxConfig;    /**< "Last" PDU mapped to mailbox. */
  CanDisp_ControllerOfMailBoxConfigType ControllerOfMailBoxConfig;  /**< Handle ID of controller. */
  CanDisp_MailBoxTypeType MailBoxTypeOfMailBoxConfig;               /**< Type of mailbox: Rx-/Tx- BasicCAN/FullCAN/unused. */
} CanDisp_MailBoxConfigType;

typedef CAN_UINT16 CanDisp_RxPduMaskType;

typedef PduIdType CanDisp_TxPduQueueIndexType;

typedef PduIdType CanDisp_TxQueuePadBitsType;

typedef CAN_UINT8 CanDisp_TxQueueStartIndexType;

/* typedef boolean CanDisp_CancelResultType; */
typedef CAN_BOOLEAN CanDisp_CancelResultType;

#ifdef CANDISP_EXTENDEDID_SUPPORT
typedef CAN_UINT32 CanDisp_CanIdOfTxPduConfigType;
#else
typedef CAN_UINT16 CanDisp_CanIdOfTxPduConfigType;
#endif

typedef CAN_UINT8 CanDisp_OptionOfTxPduConfigType;

typedef CAN_UINT8 CanDisp_ControllerOfTxPduConfigType;

typedef CAN_UINT8 CanDisp_DlcOfTxPduConfigType;

/* typedef void (*CanDisp_SimpleRxIndicationFctType)(PduIdType CanRxPduId, const uint8 *CanSduPtr); */
typedef CAN_UINT8 CanDisp_TxConfirmationOfTxPduConfigType;

typedef PduIdType CanDisp_UpperLayerTxPduIdOfTxPduConfigType;

typedef struct sCanDisp_TxPduConfigType
{
  CanDisp_HwHandleType HthOfTxPduConfig;                                      /**< Hardware transmit handle. */
  CanDisp_CanIdOfTxPduConfigType CanIdOfTxPduConfig;                          /**< CAN identifier (16bit / 32bit). */
  CanDisp_OptionOfTxPduConfigType CanOptionOfTxPduConfig;                     /**< CAN option (Standard / Extended). */
  CanDisp_UpperLayerTxPduIdOfTxPduConfigType UpperLayerTxPduIdOfTxPduConfig;  /**< Upper layer handle ID (8bit / 16bit). */
  CanDisp_ControllerOfTxPduConfigType ControllerOfTxPduConfig;                /**< Controller. */
  CanDisp_DlcOfTxPduConfigType DlcOfTxPduConfig;                              /**< Data length code. */
  CanDisp_TxConfirmationOfTxPduConfigType TxConfirmationOfTxPduConfig;        /**< Tx confirmation function. */
} CanDisp_TxPduConfigType;

typedef struct sCanQPtrStruct
{
  CAN_UINT8 CanQueueFrontIndex;

  CAN_UINT8 CanQueueRearIndex;

} CanQPtrStruct;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CAN_DISP_DEFINES_H */






