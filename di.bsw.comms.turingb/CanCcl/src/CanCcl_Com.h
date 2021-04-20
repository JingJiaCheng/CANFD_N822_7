#if !defined(CANCCL_COM_H)
# define CANCCL_COM_H

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
**  Name:           CanCcl_Com.h
**
**  Description:    CAN CCL to ASR COM layer mapping macros for typedefs and
**                    functions
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

typedef uint16 Com_SignalGroupIdType;

/* Handle IDs active in all predefined variants (the application has not to take the active variant into account) */
#define ComConf_ComIPduGroup_TuringECU_oCAN_Rx_fcef2243               CanCclConf_IPduGroup_TuringECU_CAN_Rx
#define ComConf_ComIPduGroup_TuringECU_oCAN_Tx_fcef2243               CanCclConf_IPduGroup_TuringECU_CAN_Tx

#define COM_MAIN_FUNCTION_ROUTE_SIGNALS_API                           CCL_MAIN_FUNCTION_ROUTE_SIGNALS_API
#define Com_Config_Ptr                                                Ccl_Config_Ptr

#define Ccl_Init                                                      Com_Init
#define Ccl_InitMemory												  Com_InitMemory 
#define Ccl_DeInit													  Com_DeInit 
#define Com_IpduGroupControl                                          Ccl_IpduGroupControl
#define Ccl_ReceptionDMControl                                        Com_ReceptionDMControl
#define Ccl_GetStatus                                                 Com_GetStatus
#define Ccl_ClearIpduGroupVector                                      Com_ClearIpduGroupVector
#define Com_SetIpduGroup                                              Ccl_SetIpduGroup                                       
#define Ccl_SendDynSignal                                             Com_SendDynSignal
#define Ccl_SendSignal                                                Com_SendSignal
#define Ccl_ReceiveDynSignal                                          Com_ReceiveDynSignal
#define Ccl_ReceiveSignal                                             Com_ReceiveSignal
#define Ccl_UpdateShadowSignal                                        Com_UpdateShadowSignal
#define Ccl_SendSignalGroup                                           Com_SendSignalGroup
#define Ccl_SendSignalGroupArray                                      Com_SendSignalGroupArray
#define Ccl_ReceiveSignalGroup                                        Com_ReceiveSignalGroup
#define Ccl_ReceiveShadowSignal                                       Com_ReceiveShadowSignal
#define Ccl_InvalidateSignal                                          Com_InvalidateSignal
#define Ccl_InvalidateSignalGroup                                     Com_InvalidateSignalGroup
#define Ccl_TriggerIPDUSend                                           Com_TriggerIPDUSend
#define Ccl_TriggerIPDUSendWithMetaData                               Com_TriggerIPDUSendWithMetaData
#define Ccl_SwitchIpduTxMode                                          Com_SwitchIpduTxMode
#define Ccl_TriggerTransmit                                           Com_TriggerTransmit
#define Ccl_StartOfReception                                          Com_StartOfReception
#define Ccl_CopyRxData                                                Com_CopyRxData
#define Ccl_CopyTxData                                                Com_CopyTxData
#define Ccl_MainFunction                                              Com_MainFunction
#define Com_IpduGroupVector                                           Ccl_IpduGroupVector

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANCCL_COM_H */



