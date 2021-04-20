#if !defined(CANNM_H)
#define CANNM_H

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
**  Name:           CanNm.h
**
**  Description:    CAN NM header file for function prototypes
**
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "Compiler.h"
# include "Platform_Types.h"
# include "Std_Types.h"
# include "Compiler_Cfg_Comm.h"
# include "CclStack_Types.h"
# include "CanSm_Defines.h"
# include "CanSm_Cfg.h"
# include "CanNm_Defines.h"
# include "CanNm_Cfg.h"

/* ===========================================================================
   TYPE DEFINITIONS
** =========================================================================*/
typedef unsigned  char     VNM_UINT8;
typedef unsigned  int      VNM_UINT16;
typedef unsigned  long     VNM_UINT32;
typedef signed    char     VNM_SINT8;
typedef signed    int      VNM_SINT16;
typedef signed    long     VNM_SINT32;
typedef unsigned  char     VNM_BOOL;
typedef unsigned  char     VNM_TMRTYPE;
typedef unsigned  long     VNM_MSGIDTYPE;

typedef struct vnm_pdu_type
{

   VNM_MSGIDTYPE  Msg_ID;
   VNM_UINT8      Data_Count;
   VNM_UINT8      Data[8];
}VNM_PDU;

typedef struct
{
  VNM_UINT32 value;
}vnm_sleep_ind_t;

typedef struct
{
  VNM_UINT32 value;
}vnm_rxnodes_t;

/* ===========================================================================
   MACRO DEFINITIONS
** =========================================================================*/
#define VNM_TRUE                (VNM_BOOL) 0x01
#define VNM_FALSE               (VNM_BOOL) 0x00
#define VNM_SUCCESS             VNM_TRUE
#define VNM_FAIL                VNM_FALSE
#define VNM_IN_SLEEP_STATE	    VNM_TRUE
#define VNM_IN_AWAKE_STATE	    VNM_FALSE
#define VNM_SLEEP_MODE			VNM_FALSE
#define VNM_AWAKE_MODE			VNM_TRUE

#define NM_STATUS_SUSPEND       (0x5A)
#define NM_STATUS_RESUME        (0xA5)

/* ===========================================================================
** E X T E R N   F U N C T I O N   P R O T O T Y P E S
** =========================================================================*/
extern void CanNm_Init( void );
extern Std_ReturnType CanNm_DisableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmChannelHandle );
extern Std_ReturnType CanNm_EnableCommunication( CONST( NetworkHandleType, AUTOMATIC ) nmChannelHandle );
extern Std_ReturnType CanNm_SetUserData(NetworkHandleType nmChannelHandle, const uint8* nmUserDataPtr);
extern Std_ReturnType CanNm_GetUserData(NetworkHandleType nmChannelHandle, uint8* nmUserDataPtr);
extern Std_ReturnType CanNm_GetState(NetworkHandleType nmChannelHandle, Nm_StateType* nmStatePtr, Nm_ModeType* nmModePtr);
extern void CanNm_RxIndication(uint8 CtrlId, PduIdType RxPduId,  CAN_RMD const * const pRmd );
extern void CanNm_TxConfirmation(uint8 CtrlId,  VAR( PduIdType, AUTOMATIC ) TxPduId );
extern void CanNm_StateTransition( NetworkHandleType nmChannelHandle, Nm_StateType nextNmState );
extern void CanNm_MainFunction( void );

/* ===========================================================================
** PRIVATE FUNCTION PROTOTYPES
** =========================================================================*/
VNM_BOOL VNM_PowerOnInit(void);
VNM_BOOL VNM_Start(void);
VNM_BOOL VNM_Stop(void);
VNM_BOOL VNM_SleepStatus(void);
void VNM_PeriodicTask(void);
void VNM_GotoMode(VNM_UINT8 mode);
void VNM_CB_MsgTxd(void);
void VNM_CB_BusOff(void);
void VNM_CB_MsgRcvd(CAN_RMD const * const pRmd);
void CanNmSetNmMode(VNM_UINT8 CtrlId, VNM_UINT8 Nm_Action);

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif    /* CANNM_H */
