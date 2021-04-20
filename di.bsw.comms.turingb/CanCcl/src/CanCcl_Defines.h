#if !defined( CCL_DEFINES_H )
#define CCL_DEFINES_H

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
**  Name:           CanCcl_Defines.h
**
**  Description:    Visteon CAN CCL typedef and datatype definitions
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
# include "CclStack_Types.h"
# include "can_defs.h"


#define FAILURE                                             (CAN_UINT8)0x00
#define SUCCESS                                             (CAN_UINT8)0x01


#define CCL_NO_CBKRXACK                                      0xFFFF//255
#define CCL_NO_CBKRXTOUT                                     0xFFFF//255
#define CCL_NO_CBKRXINV                                      0xFFFF//255

#define Ccl_Config_Ptr                                       NULL_PTR

/** API service called with wrong parameter */
# define CCL_E_PARAM                                         0x01U
/** Error code if any other API service is called before COM was initialized with Com_Init() */
# define CCL_E_UNINIT                                        0x02U
/** API service called with a NULL pointer. */
# define CCL_E_PARAM_POINTER                                 0x03U
/** the service is currently not available e.g. the corresponding I-PDU group is stopped */
# define CCL_SERVICE_NOT_AVAILABLE                           0x80U
/** a timeout has occurred */
# define CCL_BUSY                                            0x81U


/**   \brief  type used in Ccl_PCConfig */
typedef struct sCcl_PCConfigType
{
  CAN_UINT8 neverUsed;  /**< dummy entry for the config structure in the configuration variant precompile which is not used by the code. */
} Ccl_PCConfigType;

typedef Ccl_PCConfigType Ccl_ConfigType;

/** CCL PDU group object identifier. */
typedef CAN_UINT16 Ccl_IpduGroupIdType;

/** CCL signal object identifier. */
typedef CAN_UINT16 Ccl_SignalIdType;

/** CCL signal group object identifier. */
typedef CAN_UINT16 Ccl_SignalGroupIdType;

typedef CAN_UINT8 Ccl_PduGrpVectorType;

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/
/** This is a status value returned by the API service Com_GetStatus(). */
typedef enum
{
  CCL_UNINIT = 0x00,  /**< The CCL module is not initialized or not usable. */
  CCL_INIT = 0x01     /**< The CCL Module is initialized and usable. */
} Ccl_StatusType;

typedef enum
{
  SIG_NOSENDTYPE = 0x00,
  SIG_ONCHANGE   = 0x01,
  SIG_ONWRITE    = 0x02,
  SIG_ONREQUEST  = 0x03
} Ccl_SigSendTypeType;

typedef CAN_UINT8 Ccl_ControllerIdOfMessageType;
typedef CAN_UINT32 Ccl_InitValueofSignalType;

typedef struct sCcl_TxSigInfoType
{
  Ccl_ControllerIdOfMessageType ControllerIdOfMessage;            /**< Controller Id of the transmitted message. */
  Ccl_InitValueofSignalType InitValue;                            /**< Init Value of the transmit signal. */
  Ccl_SigSendTypeType SendTypeOfTxSignal;					  /**< Send type of the signal transmitted >**/  

} Ccl_TxSigInfoType;


typedef CAN_UINT8 Ccl_ApplTypeOfRxAccessInfoType;

/* Ccl_RxAccessInfo */
typedef struct sCcl_RxAccessInfoType
{
  Ccl_ControllerIdOfMessageType ControllerIdOfMessage;            /**< Controller Id of the received message. */
} Ccl_RxAccessInfoType;


/* Ccl_RxAccessInfoIdxOfDefRxSigInfo */
typedef CAN_UINT8 Ccl_RxAccessInfoIdxOfDefRxSigInfoType;

/* Ccl_RxTOutInfoIdxOfDefRxSigInfo */
typedef CAN_UINT8 Ccl_RxTOutInfoIdxOfDefRxSigInfoType;

/* Ccl_RxTOutInfoUsedOfDefRxSigInfo */
typedef CAN_BOOLEAN Ccl_RxTOutInfoUsedOfDefRxSigInfoType;

/* Ccl_ValidDlcOfDefRxSigInfo */
typedef CAN_UINT8 Ccl_ValidDlcOfDefRxSigInfoType;

/* Ccl_PduGrpVectorStartIdxOfTxPduGrpInfoType */
typedef CAN_UINT8 Ccl_PduGrpVectorStartIdxOfTxPduGrpInfoType;

/* Ccl_TxPduGrpInfo */
typedef struct sCcl_TxPduGrpInfoType
{
  Ccl_PduGrpVectorStartIdxOfTxPduGrpInfoType PduGrpVectorStartIdxOfTxPduGrpInfo;  /**< the start index of the 0:n relation pointing to Ccl_PduGrpVector */

} Ccl_TxPduGrpInfoType;


/* Ccl_PduGrpVectorStartIdxOfRxPduGrpInfo */
typedef CAN_UINT8 Ccl_PduGrpVectorStartIdxOfRxPduGrpInfoType;

/* Ccl_RxPduGrpInfo */
typedef struct sCcl_RxPduGrpInfoType
{
  Ccl_PduGrpVectorStartIdxOfRxPduGrpInfoType PduGrpVectorStartIdxOfRxPduGrpInfo;  /**< the start index of the 0:n relation pointing to Ccl_PduGrpVector */

} Ccl_RxPduGrpInfoType;


/* Ccl_RxDefPduBufferUsedOfDefRxPduInfo */
typedef CAN_BOOLEAN Ccl_RxDefPduBufferUsedOfDefRxPduInfoType;

/* Ccl_DefRxPduInfo */
typedef struct sCcl_DefRxPduInfoType
{
  Ccl_RxDefPduBufferUsedOfDefRxPduInfoType RxDefPduBufferUsedOfDefRxPduInfo;  /**< TRUE, if the 0:n relation has 1 relation pointing to ilRxBuffer */

} Ccl_DefRxPduInfoType;

/* Ccl_MessageContentInfo */
typedef struct sCcl_MessageContentInfoType
{
  CAN_UINT16 SignalHandleStartIndexOfPduInfo;
  CAN_UINT8  SignalCountOfPduInfo;

}Ccl_MessageContentInfo;


/* Ccl_InvalidSignalInfo */
typedef struct sCcl_InvalidSignalInfoType
{
  CAN_BOOLEAN SignalInvalidDefined;
  CAN_UINT8  SignalvalidDefined;

}Ccl_InvalidSignalInfo;


/* Ccl_RxNotifFuncInfo */
typedef struct sCcl_RxNotifFuncInfoType
{
  CAN_UINT16 RxAckIndexInComCbkInfo;
  CAN_UINT16 RxTOutIndexInComCbkInfo;
  CAN_UINT16 RxInvIndexInComCbkInfo;

} Ccl_RxNotifFuncInfo;

/**********************************************************************************************************************
  CCL callback Function pointer types
**********************************************************************************************************************/
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkTxTOutType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkTxErrType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkInvType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkTxAckDefType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkTxAckImType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkRxTOutType) (void);
typedef P2FUNC(void, CCL_APPL_CODE, CclCbkRxAckType) (void);

typedef P2FUNC(boolean, CCL_APPL_CODE, CclTxPduCalloutType) (PduIdType PduId, P2VAR(PduInfoType, AUTOMATIC, CCL_APPL_CODE) PduInfoPtr);
typedef P2FUNC(boolean, CCL_APPL_CODE, CclRxPduCalloutType) (PduIdType PduId, P2CONST(PduInfoType, AUTOMATIC, CCL_APPL_CODE) PduInfoPtr);

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CCL_DEFINES_H */

