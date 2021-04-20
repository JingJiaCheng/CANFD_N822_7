/* ===========================================================================
**
**                     CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2014.  Visteon Corporation owns all rights to this work and
**  intends to maintain it in confidence to preserve its trade secret status.
**  Visteon Corporation reserves the right, under the copyright laws of the
**  United States or those of any other country that may have jurisdiction, to
**  protect this work as an unpublished work, in the event of an inadvertent
**  or deliberate unauthorized publication.  Visteon Corporation also reserves
**  its rights under all copyright laws to protect this work as a published
**  work, when appropriate.  Those having access to this work may not copy it,
**  use it, modify it or disclose the information contained in it without the
**  written authorization of Visteon Corporation.
**
** =========================================================================*/

/* ===========================================================================
**
**  Name:           CanNm.c
**  Description:    OSEK NM Implementation
**  Organization:   Vehicle Communications
**                  Visteon Corporation
**  =========================================================================*/

/* ===========================================================================
** I N C L U D E   F I L E S
** =========================================================================*/

# include "Can_defs.h"
# include "CanIl_Util.h"
# include "Can_CSec.h"
# include "CanCcl.h"
# include "CanSm.h"
# include "CanNm.h"
# include "CanNm_Par_Cfg.h"
# include "Can.h"
# include "Dem.h"

#include "Canil.h"

/*******************************************************************************
   TYPE DEFINITIONS
*******************************************************************************/
typedef void (*funcptr) (void);
typedef struct vnm_sts_type{
   VNM_UINT16    State             : 4;  /**/
   VNM_UINT16    ActiveRPassive    : 1;  /*ACTIVE              = 1;PASSIVE = 0*/
   VNM_UINT16    SleepInd          : 1;  /*SLEEP INDICATION    = 1            */
   VNM_UINT16    SleepAck          : 1;  /*SLEEP ACKNOWLEDGE   = 1;           */
   VNM_UINT16    RxMsgAvail        : 1;  /*AVAILABLE           = 1;           */
   VNM_UINT16    MsgTxd            : 1;  /*MESSAGE TRANSMITTED = 1;           */
   VNM_UINT16    LHMark            : 1;  /*LIMPHOME MARKED     = 1;           */
   VNM_UINT16    Run_Tmr1		   : 1;
   VNM_UINT16	 Run_Tmr2	  	   : 1;
   VNM_UINT16    Run_SleepTmr	   : 1;
   VNM_UINT16    TxMsgBufFull      : 1;
   VNM_UINT16    FirstMsgFlag      : 1;
   VNM_UINT16    Busoff            : 1;
}VNM_STS;

/* ===========================================================================
  F I L E   S C O P E   V A R I A B L E   D E C L A R A T I O N S
 =========================================================================*/
static CAN_UINT8 NmState[CAN_NM_NUMBER_OF_CHANNELS];
static CAN_UINT8 NmCtrlStatus[CAN_NM_NUMBER_OF_CHANNELS];
static VNM_UINT8 VNM_SI_Sent = 0; /*1: 0x1X has been sent by IC.*/

#if(CAN_NM_NUMBER_OF_BUSNM > 1)
static CAN_UINT8 NmBusNmState[CAN_NM_NUMBER_OF_CHANNELS][CAN_NM_NUMBER_OF_BUSNM];
#endif 

static VNM_UINT8     VNM_Rxcount = 0;
static VNM_UINT8     VNM_Txcount = 0;
static VNM_PDU       VNM_TxMsg;
static VNM_PDU       VNM_RxMsg;
static VNM_UINT16    VNM_Tmr1 = 0;
static VNM_UINT16    VNM_Tmr2 = 0;
static VNM_UINT16    VNM_TmrFirstCount = 0;
static VNM_UINT16    VNM_SleepTmr = 0;
static VNM_STS       VNM_status;
static VNM_UINT8     VNM_LogicalSuccessor = 0;
static VNM_BOOL vnm_sleep_ack = VNM_FALSE;
static CAN_TMD const vnm_resp_tmd =
{
    DATA_SIZE,                
    MESSAGE_ID,               
    &VNM_TxMsg.Data[ 0 ],   
    VNM_MSG_OPTION,                        
    VNM_MSG_HANDLE                         
};

extern boolean dtc_mature_state_2s;

/*******************************************************************************
   INTERNAL FUNCTION PROTOTYPES
*******************************************************************************/
static void       VNM_Wait4Sleep(void);
static void       VNM_PreSleepLH(void);
static void       VNM_LH_Chk4SA(void);
static void       VNM_MsgRcvd_InLH(void);
static void       VNM_Limphome(void);
static void       VNM_PreSleep(void);
static VNM_UINT8  VNM_AmISkipped(VNM_UINT8 sender, VNM_UINT8 receiver);
static void       VNM_UpdateLogSuccr(VNM_UINT8 sender);
static void       VNM_MsgRcvd(void);
static void       VNM_MsgTxd(void);
static void       VNM_Normal(void);
static void       VNM_Prepare_Msg(VNM_UINT8 msg_type);
static void       VNM_Reset(void);
static void       VNM_InitReset(void);
static void       VNM_Sleep(void);
static void       VNM_Off(void);
static void 	  VNM_Update_Node_data(VNM_UINT8 sender, VNM_UINT8 msg_type);
static void 	  VNM_Clear_Node_data(void);
static void       VNM_Check_B4_txn_SA(void);

static void VNM_DTC(void);
static void VNM_DTCSet(VNM_UINT8 u8Val);

static void VNM_DTCStore(void);
static void VNM_DTCClear(void);
static void VNM_ACK_TX_CONTROL(CAN_UINT8 RT_State);

/*******************************************************************************
   GLOBAL VARIABLES
*******************************************************************************/
extern boolean dem_all_block_read_finish_bool;
extern boolean dem_batt_state;
extern boolean dem_IGN_ON_5s;

CAN_UINT8 TxStopFlag = TRUE;
CAN_UINT8 FirstSendFlag = TRUE;
boolean NM_BusOffState = FALSE;

vnm_sleep_ind_t VNM_Rx_Msg_SI[4];
vnm_rxnodes_t VNM_Node_Avail[4];  

/* ===========================================================================
** M A C R O   D E F I N I T I O N S
** =========================================================================*/

#define NM_UNUSED_VAR(X)  do { if(0 == (X)){} } while(0)
#define VNM_IAMNOTSKIPPED		VNM_FALSE
#define VNM_IAMSKIPPED			VNM_TRUE

/* NM MESSAGE TYPES */
#define VNM_MSG_TYP_ALIVE     0x01
#define VNM_MSG_TYP_RING      0x02
#define VNM_MSG_TYP_LIMPHOME  0x04

#define VNM_RING_MSG_SI_SET	  0x12

#define VNM_SET_SLEEPACK_STATUS   	(vnm_sleep_ack = (VNM_BOOL)VNM_TRUE)
#define VNM_CLEAR_SLEEPACK_STATUS 	(vnm_sleep_ack = (VNM_BOOL)VNM_FALSE)
#define VNM_SLEEPACK_TRUE         	(vnm_sleep_ack == (VNM_BOOL)VNM_TRUE)

#define VNM_SET_SI_SENT   	(VNM_SI_Sent = (VNM_BOOL)VNM_TRUE)
#define VNM_CLEAR_SI_SENT 	(VNM_SI_Sent = (VNM_BOOL)VNM_FALSE)
#define VNM_SI_SENT         (VNM_SI_Sent == (VNM_BOOL)VNM_TRUE)

/* NM SLEEP STATUS */
#define VNM_SI_NRS            0x00
#define VNM_SI_RS             0x10
#define VNM_SI_SA             0x30
#define VNM_SI_SIBIT          0xF0
#define VNM_SA_BIT            0x20

/* NM STATES */
#define VNM_NO_OF_STATES      9

#define VNM_OFF_VALUE         0x00
#define VNM_ON_VALUE          0x01
#define VNM_NORMAL_VALUE      0x02
#define VNM_LIMPHOME_VALUE    0x03
#define VNM_PRESLEEP_VALUE    0x04
#define VNM_PRESLEEPLH_VALUE  0x05
#define VNM_WBS_VALUE         0x06
#define VNM_WBSLH_VALUE       0x07
#define VNM_BUSSLEEP_VALUE    0x08

#define VNM_SETOFF            (VNM_status.State    =  (VNM_UINT8)VNM_OFF_VALUE)
#define VNM_SETON             (VNM_status.State    =  (VNM_UINT8)VNM_ON_VALUE)
#define VNM_SETNORMAL         (VNM_status.State    =  (VNM_UINT8)VNM_NORMAL_VALUE)
#define VNM_SETLIMPHOME       (VNM_status.State    =  (VNM_UINT8)VNM_LIMPHOME_VALUE)
#define VNM_SETPRESLEEP       (VNM_status.State    =  (VNM_UINT8)VNM_PRESLEEP_VALUE)
#define VNM_SETPRESLEEPLH     (VNM_status.State    =  (VNM_UINT8)VNM_PRESLEEPLH_VALUE)
#define VNM_SETWBS            (VNM_status.State    =  (VNM_UINT8)VNM_WBS_VALUE)
#define VNM_SETWBSLH          (VNM_status.State    =  (VNM_UINT8)VNM_WBSLH_VALUE)
#define VNM_SETBUSSLEEP       (VNM_status.State    =  (VNM_UINT8)VNM_BUSSLEEP_VALUE)

#define VNM_OFF               (VNM_status.State    == (VNM_UINT8)VNM_OFF_VALUE)
#define VNM_ON                (VNM_status.State    != (VNM_UINT8)VNM_OFF_VALUE)
#define VNM_NORMAL            (VNM_status.State    == (VNM_UINT8)VNM_NORMAL_VALUE)
#define VNM_LIMPHOME          (VNM_status.State    == (VNM_UINT8)VNM_LIMPHOME_VALUE)
#define VNM_PRESLEEP          (VNM_status.State    == (VNM_UINT8)VNM_PRESLEEP_VALUE)
#define VNM_PRESLEEPLH        (VNM_status.State    == (VNM_UINT8)VNM_PRESLEEPLH_VALUE)
#define VNM_ANYPRESLEEP       ((VNM_status.State   == (VNM_UINT8)VNM_PRESLEEP_VALUE) ||\
                              (VNM_status.State    == (VNM_UINT8)VNM_PRESLEEPLH_VALUE))
#define VNM_WBS               (VNM_status.State    == (VNM_UINT8)VNM_WBS_VALUE)
#define VNM_WBSLH             (VNM_status.State    == (VNM_UINT8)VNM_WBSLH_VALUE)
#define VNM_ANYWBS            ((VNM_status.State   == (VNM_UINT8)VNM_WBS_VALUE) ||\
                              (VNM_status.State    == (VNM_UINT8)VNM_WBSLH_VALUE))
#define VNM_SLEEP             (VNM_status.State    == (VNM_UINT8)VNM_BUSSLEEP_VALUE)

/* NM STATUS*/
#define VNM_ACTIVE_VALUE         0x01
#define VNM_PASSIVE_VALUE        0x00
#define VNM_SLEEPIND_VALUE       0x01
#define VNM_NOSLEEPIND_VALUE     0x00
#define VNM_SLEEPACK_VALUE       0x01
#define VNM_SLEEPNOTACK_VALUE    0x00
#define VNM_RXMSGAVAIL_VALUE     0x01
#define VNM_RXMSGNOTAVAIL_VALUE  0x00
#define VNM_MSGTXD_VALUE         0x01
#define VNM_MSGNOTTXD_VALUE      0x00
#define VNM_LHMARKED_VALUE       0x01
#define VNM_LHNOTMARKED_VALUE    0x00
#define VNM_MSGBUFFULL_VALUE     0x01
#define VNM_MSGBUFEMPTY_VALUE    0x00
#define VNM_FIRSTMSG_VALUE       0x01
#define VNM_NOTFIRSTMSG_VALUE    0x00

#define VNM_ACTIVE               (VNM_status.ActiveRPassive    != (VNM_BOOL)VNM_PASSIVE_VALUE)
#define VNM_PASSIVE              (VNM_status.ActiveRPassive    != (VNM_BOOL)VNM_ACTIVE_VALUE)
#define VNM_SLEEPIND             (VNM_status.SleepInd          != (VNM_BOOL)VNM_NOSLEEPIND_VALUE)
#define VNM_SLEEPACK             (VNM_status.SleepAck          != (VNM_BOOL)VNM_SLEEPNOTACK_VALUE)
#define VNM_MSG_AVAILABLE		 (VNM_status.RxMsgAvail        != (VNM_BOOL)VNM_RXMSGNOTAVAIL_VALUE)
#define VNM_MSG_TXD              (VNM_status.MsgTxd            != (VNM_BOOL)VNM_MSGNOTTXD_VALUE)
#define VNM_LHMARKED             (VNM_status.LHMark            != (VNM_BOOL)VNM_LHNOTMARKED_VALUE)
#define VNM_MSGBUFFULL           (VNM_status.TxMsgBufFull      != (VNM_BOOL)VNM_MSGBUFEMPTY_VALUE)
#define VNM_FIRSTMSG             (VNM_status.FirstMsgFlag      != (VNM_BOOL)VNM_NOTFIRSTMSG_VALUE)
#define VNM_BUSOFF               (VNM_status.Busoff            != (VNM_BOOL)0)

#define VNM_SETACTIVE            (VNM_status.ActiveRPassive    =  (VNM_BOOL)VNM_ACTIVE_VALUE)
#define VNM_SETPASSIVE           (VNM_status.ActiveRPassive    =  (VNM_BOOL)VNM_PASSIVE_VALUE)
#define VNM_SETSLEEPIND          (VNM_status.SleepInd          =  (VNM_BOOL)VNM_SLEEPIND_VALUE)
#define VNM_CLEARSLEEPIND        (VNM_status.SleepInd          =  (VNM_BOOL)VNM_NOSLEEPIND_VALUE)
#define VNM_SETSLEEPACK          (VNM_status.SleepAck          =  (VNM_BOOL)VNM_SLEEPACK_VALUE)
#define VNM_CLEARSLEEPACK        (VNM_status.SleepAck          =  (VNM_BOOL)VNM_SLEEPNOTACK_VALUE)
#define VNM_SETRXMSG_AVAIL       (VNM_status.RxMsgAvail        =  (VNM_BOOL)VNM_RXMSGAVAIL_VALUE)
#define VNM_CLEARRXMSG_AVAIL     (VNM_status.RxMsgAvail        =  (VNM_BOOL)VNM_RXMSGNOTAVAIL_VALUE)
#define VNM_SETMSGTXD            (VNM_status.MsgTxd            =  (VNM_BOOL)VNM_MSGTXD_VALUE)
#define VNM_CLEARMSGTXD          (VNM_status.MsgTxd            =  (VNM_BOOL)VNM_MSGNOTTXD_VALUE)
#define VNM_SETLHMARK            (VNM_status.LHMark            =  (VNM_BOOL)VNM_LHMARKED_VALUE)
#define VNM_CLEARLHMARK          (VNM_status.LHMark            =  (VNM_BOOL)VNM_LHNOTMARKED_VALUE)
#define VNM_SET_MSGBUFFULL       (VNM_status.TxMsgBufFull      =  (VNM_BOOL)VNM_MSGBUFFULL_VALUE)
#define VNM_CLEAR_MSGBUFFULL     (VNM_status.TxMsgBufFull      =  (VNM_BOOL)VNM_MSGBUFEMPTY_VALUE)
#define VNM_SET_FIRSTMSGFLAG     (VNM_status.FirstMsgFlag      =  (VNM_BOOL)VNM_FIRSTMSG_VALUE)
#define VNM_CLEAR_FIRSTMSGFLAG   (VNM_status.FirstMsgFlag      =  (VNM_BOOL)VNM_NOTFIRSTMSG_VALUE)
#define VNM_SET_BUSOFF           (VNM_status.Busoff            =  (VNM_BOOL)1)
#define VNM_CLEAR_BUSOFF         (VNM_status.Busoff            =  (VNM_BOOL)0)

/* NM TIMERS */
#define VNM_SET_RINGTYP_TMR      {(VNM_Tmr1 = (VNM_UINT16)(VNM_RINGMSG_TTYP / VNM_PERIODICITY));VNM_status.Run_Tmr1 = 1u;}
#define VNM_RINGTTYP_TMR_XPIRED  (((VNM_UINT16)0 == VNM_Tmr1) && (VNM_status.Run_Tmr1 == 1u))
#define VNM_RINGTTYP_TMR_RUNNING (((VNM_UINT16)0 != VNM_Tmr1) && (VNM_status.Run_Tmr1 == 1u))
#define VNM_CANCEL_RINGTYP_TMR   {(VNM_Tmr1 = 0u);VNM_status.Run_Tmr1 = 0u;}

#define VNM_SET_RINGMAX_TMR      {(VNM_Tmr2 = (VNM_UINT16)(VNM_RINGMSG_TMAX / VNM_PERIODICITY));VNM_status.Run_Tmr2 = 1u;}
#define VNM_RINGTMAX_TMR_XPIRED  (((VNM_UINT16)0 == VNM_Tmr2) && (VNM_status.Run_Tmr2 == 1u))
#define VNM_CANCEL_RINGMAX_TMR	 {(VNM_Tmr2 = 0u);VNM_status.Run_Tmr2 = 0u;}

#define VNM_SET_SLEEP_TMR        {(VNM_SleepTmr = (VNM_UINT16)(VNM_SLEEP_TIME / VNM_PERIODICITY));VNM_status.Run_SleepTmr = 1u;}
#define VNM_SLEEP_TMR_XPIRED     (((VNM_UINT8)0 == VNM_SleepTmr) && ((VNM_UINT8)VNM_status.Run_SleepTmr == 1u))
#define VNM_CANCEL_SLEEP_TMR     {(VNM_SleepTmr = 0u);VNM_status.Run_SleepTmr = 0u;}
#define VNM_SET_SLEEPTMR_XPIRED  {(VNM_SleepTmr = 0u);VNM_status.Run_SleepTmr = 1u;}
#define VNM_SET_LIMPHOME_TMR     {(VNM_Tmr1 = (VNM_UINT16)(VNM_LHMSG_TERR / VNM_PERIODICITY));VNM_status.Run_Tmr1 = 1u;}
#define VNM_LHTERR_TMR_XPIRED    (((VNM_UINT16)0u == VNM_Tmr1) && (VNM_status.Run_Tmr1 == 1u))
#define VNM_CANCEL_LIMPHOME_TMR  {(VNM_Tmr1 = (VNM_UINT16)0u);VNM_status.Run_Tmr1 = 0u;}

#define VNM_SET_SLEEP_L_TMR        {(VNM_SleepTmr = (VNM_UINT16)(VNM_SLEEP_TIME_L / VNM_PERIODICITY));VNM_status.Run_SleepTmr = 1u;}
#define VNM_SLEEP_L_TMR_XPIRED     (((VNM_UINT8)0 == VNM_SleepTmr) && ((VNM_UINT8)VNM_status.Run_SleepTmr == 1u))
#define VNM_CANCEL_SLEEP_L_TMR     {(VNM_SleepTmr = 0u);VNM_status.Run_SleepTmr = 0u;}
#define VNM_SET_SLEEP_L_TMR_XPIRED  {(VNM_SleepTmr = 0u);VNM_status.Run_SleepTmr = 1u;}

#define VNM_SET_TWBS_TMR         {(VNM_SleepTmr = (VNM_UINT16)(VNM_TWBS_TIME / VNM_PERIODICITY));VNM_status.Run_SleepTmr = 1u;}
#define VNM_TWBS_TMR_XPIRED      (((VNM_UINT16)0 == VNM_SleepTmr) && (VNM_status.Run_SleepTmr == 1u))
#define VNM_CANCEL_TWBS_TMR      {(VNM_SleepTmr = (VNM_UINT16)0);VNM_status.Run_SleepTmr = 0u;}

#define VNM_TMR1_RUNNING         (((VNM_UINT16)0 != VNM_Tmr1) && (VNM_status.Run_Tmr1 == 1u))
#define VNM_TMR2_RUNNING         (((VNM_UINT16)0 != VNM_Tmr2) && (VNM_status.Run_Tmr2 == 1u))
#define VNM_SLEEPTMR_RUNNING     (((VNM_UINT16)0 != VNM_SleepTmr) && (VNM_status.Run_SleepTmr == 1u))
#define VNM_FIRST_COUNT_RUNNING  ((VNM_UINT16)0 != VNM_TmrFirstCount)

#define VNM_CAN_TX_STATE	1
#define VNM_CAN_RX_STATE	2

#define LIMPHOME_DTC_CH0 (0u)

typedef struct sCanNm_DTCProc
{	
    CAN_UINT16 * const pRxDTCTimeoutCount;                 /* Receive Timeout Counter             */
    CAN_UINT8 *  const DTCStatus;                         /* Receive Timer Status               */
    CAN_UINT16 * const pRxDTCRecvrCount;                 /* Receive Timeout Counter             */
	
    CAN_UINT8 *  const DTCtimerStatus;                         /* Receive Timer Status               */
    CAN_UINT8 *  const DTCRecvrTimerStatus;                         /* Receive Timer Status               */
	
    CAN_UINT16   const DTCtimeOut;                         /* Receive Timeout Value               */
    CAN_UINT16   const DTCRecTmr;                         /* Receive Timeout Value               */
} CANNM_DTCPROC;
#define CANNM_PERIOD	10		/*10ms*/

#define CANNM_TIME_IN_TASK_TICS( tMs )           ((CAN_UINT16) (((tMs) /CANNM_PERIOD) ))

#define CANNM_RX_DTCTMRSTS_STOP           0x00
#define CANNM_RX_DTCTMRSTS_RUN           0x01
#define CANNM_DTC_CNT   0x01
#define CANNM_TIMOUT_DTC(DTCTmr, TMOUTTmr) ((DTCTmr) - (TMOUTTmr))

#define CANNM_SET_DTCRCV_TMR(DTC)     \
	{\
	(*(DTC->pRxDTCRecvrCount)) = ((CAN_UINT16)(CANNM_TIMOUT_DTC((((CANNM_DTCPROC *)DTC)->DTCRecTmr),((CAN_UINT16)0u)))); \
	(*(DTC->DTCRecvrTimerStatus)) = (CANNM_RX_DTCTMRSTS_RUN);}

#define CANNM_DTCRCV_TMR_XPIRED(DTC)  (((CAN_UINT16)0u == (*(((CANNM_DTCPROC *)DTC)->pRxDTCRecvrCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCRecvrTimerStatus)) == (CANNM_RX_DTCTMRSTS_RUN)))
#define CANNM_CANCEL_DTCRCV_TMR(DTC)	 {((*(((CANNM_DTCPROC *)DTC)->pRxDTCRecvrCount)) = (CAN_UINT16)0u);(*(((CANNM_DTCPROC *)DTC)->DTCRecvrTimerStatus)) = (CANNM_RX_DTCTMRSTS_STOP);}
#define CANNM_DTCRCV_TMR_RUNNING(DTC)         (((CAN_UINT16)0u != (*(((CANNM_DTCPROC *)DTC)->pRxDTCRecvrCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCRecvrTimerStatus)) == (CANNM_RX_DTCTMRSTS_RUN)))
#define CANNM_DTCRCV_TMR_NVSTART(DTC)         (((CAN_UINT16)0u == (*(((CANNM_DTCPROC *)DTC)->pRxDTCRecvrCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCRecvrTimerStatus)) == (CANNM_RX_DTCTMRSTS_STOP)))
#define CANNM_DTCRCV_TMR_GO(DTC)	  \
    if(CANNM_DTCRCV_TMR_RUNNING(((CANNM_DTCPROC *)DTC)) ) \
        {\
        (*(((CANNM_DTCPROC *)DTC)->pRxDTCRecvrCount))--;\
        }

#define CANNM_SET_DTC_TMR(DTC)     \
	{\
	(*(DTC->pRxDTCTimeoutCount)) = ((CAN_UINT16)(CANNM_TIMOUT_DTC((((CANNM_DTCPROC *)DTC)->DTCtimeOut),((CAN_UINT16)0u)))); \
	(*(DTC->DTCtimerStatus)) = (CANNM_RX_DTCTMRSTS_RUN);}
#define CANNM_DTC_TMR_XPIRED(DTC)  (((CAN_UINT16)0u == (*(((CANNM_DTCPROC *)DTC)->pRxDTCTimeoutCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCtimerStatus)) == (CANNM_RX_DTCTMRSTS_RUN)))
#define CANNM_CANCEL_DTC_TMR(DTC)	 {((*(((CANNM_DTCPROC *)DTC)->pRxDTCTimeoutCount)) = (CAN_UINT16)0u);(*(((CANNM_DTCPROC *)DTC)->DTCtimerStatus)) = (CANNM_RX_DTCTMRSTS_STOP);}
#define CANNM_DTC_TMR_RUNNING(DTC)         (((CAN_UINT16)0u != (*(((CANNM_DTCPROC *)DTC)->pRxDTCTimeoutCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCtimerStatus)) == (CANNM_RX_DTCTMRSTS_RUN)))
#define CANNM_DTC_TMR_NVSTART(DTC)         (((CAN_UINT16)0u == (*(((CANNM_DTCPROC *)DTC)->pRxDTCTimeoutCount))) && ((*(((CANNM_DTCPROC *)DTC)->DTCtimerStatus)) == (CANNM_RX_DTCTMRSTS_STOP)))
#define CANNM_DTC_TMR_GO(DTC)	  \
    if(CANNM_DTC_TMR_RUNNING(((CANNM_DTCPROC *)DTC)) ) \
        {\
        (*(((CANNM_DTCPROC *)DTC)->pRxDTCTimeoutCount))--;\
        }
typedef enum
{
	CANNM_DTCSTS_IDLE = 0, /*When NM init, or during busoff, or after 14 service, should be idle satus*/
	CANNM_DTCSTS_CLEARED,
	CANNM_DTCSTS_STORED,
	CANNM_Num_DTCSTS
} CANNM_DTCStatus_Macro;

#define CANNM_SET_IDLE(DTC)                        \
	{                                              \
		(*(DTC->DTCStatus)) = (CANNM_DTCSTS_IDLE); \
	}
#define CANNM_SET_CLEARED(DTC)     \
	{\
	(*(DTC->DTCStatus)) = (CANNM_DTCSTS_CLEARED);}

#define CANNM_SET_STORED(DTC)     \
	{\
	(*(DTC->DTCStatus)) = (CANNM_DTCSTS_STORED);}

#define CANNM_IS_CLEARED(DTC)    ((*(DTC->DTCStatus)) == ( CANNM_DTCSTS_CLEARED))
#define CANNM_IS_STORED(DTC)     ((*(DTC->DTCStatus)) == ( CANNM_DTCSTS_STORED))
#define CANNM_DTCSTS(DTC)     (*(DTC->DTCStatus))
#define CANNM_DTCSTS_ISVALID(DTC)     ((DTC->DTCStatus)!=NULL)
uint16 CANNM_DTCRecvrTimer_Count[ CANNM_DTC_CNT ];
uint16 CANNM_Rx_DTCTimeout_Count[ CANNM_DTC_CNT ];
uint8 CANNM_Rx_DTCRecvrStatus_Count[ CANNM_DTC_CNT ];
uint8 CANNM_Rx_DTCTimerStatus_Count[ CANNM_DTC_CNT ];
uint8 CANNM_Rx_DTCStatus[ CANNM_DTC_CNT ];
CANNM_DTCPROC const CANNM_DTC_Table[ CANNM_DTC_CNT ] =
{

		/* EMS_ENGINE_SPEED_AND_TORQUE */
		{
			&CANNM_Rx_DTCTimeout_Count[0], /* Pointer to the DTC Timeout Counter       */
			&CANNM_Rx_DTCStatus[0],
			&CANNM_DTCRecvrTimer_Count[0],
			&CANNM_Rx_DTCTimerStatus_Count[0],
			&CANNM_Rx_DTCRecvrStatus_Count[0],
			CANNM_TIME_IN_TASK_TICS(2000), /* DTC Timeout Count Value, 1800 ~ 2200 ms*/
			CANNM_TIME_IN_TASK_TICS(0)	   /* DTC Recover timer Count Value                  */
		},
};
#define VNM_DTCDELAYTMR_STOP           0x00
#define VNM_DTCDELAYTMR_RUN           0x01

uint16 u16VNM_DTCDelayTimeoutCount= 0x00;
uint8 u8VNM_DTCDelaytimerStatus = VNM_DTCDELAYTMR_STOP;
uint16 const u16VNM_DTCDelaytimeOut = CANNM_TIME_IN_TASK_TICS(100);
static VNM_UINT16 T_DiagStart_Initial = 0;

#define VNM_DTC_DELAY_TIMOUT(Tmr1, TTmr2) ((Tmr1) - (TTmr2))

#define VNM_DTC_SET_DELAY_TMR(DTC)     \
	{\
	u16VNM_DTCDelayTimeoutCount = ((uint16)(VNM_DTC_DELAY_TIMOUT(u16VNM_DTCDelaytimeOut,((uint16)0u)))); \
	u8VNM_DTCDelaytimerStatus = (VNM_DTCDELAYTMR_RUN);}

#define VNM_DTC_DELAY_TMR_XPIRED()  (((uint16)0u == u16VNM_DTCDelayTimeoutCount) && (u8VNM_DTCDelaytimerStatus == (VNM_DTCDELAYTMR_RUN)))
#define VNM_DTC_CANCEL_DELAY_TMR()	 {(u16VNM_DTCDelayTimeoutCount = (uint16)0u);u8VNM_DTCDelaytimerStatus = (VNM_DTCDELAYTMR_STOP);}
#define VNM_DTC_DELAY_TMR_RUNNING()         (((uint16)0u != u16VNM_DTCDelayTimeoutCount) && (u8VNM_DTCDelaytimerStatus == (VNM_DTCDELAYTMR_RUN)))
#define VNM_DTC_DELAY_TMR_NVSTART()         (((uint16)0u == u16VNM_DTCDelayTimeoutCount) && (u8VNM_DTCDelaytimerStatus == (VNM_DTCDELAYTMR_STOP)))
#define VNM_DTC_DELAY_TMR_GO()	  \
    if(VNM_DTC_DELAY_TMR_RUNNING() ) \
        {\
        u16VNM_DTCDelayTimeoutCount--;\
        }

CANNM_DTCPROC const *  ptrDTCProc = &CANNM_DTC_Table[0];

boolean fl_Dem_DcmDtcEnable = TRUE;

/* ===========================================================================
  GLOBAL FUNCTION DEFINITIONS
 ===========================================================================*/
void CanNm_Init( void )
{
    (void)VNM_PowerOnInit(); 
    NmState[MMCAN_CHANNEL] = NM_STATE_BUS_SLEEP; 
    NmCtrlStatus[MMCAN_CHANNEL] = 0x00;
    TxStopFlag = TRUE;
    FirstSendFlag = TRUE;    
	CANNM_SET_IDLE(ptrDTCProc);
	T_DiagStart_Initial = 0;
}


/***********************************************************************************************************************
 *  CanNm_MainFunction
 **********************************************************************************************************************/
void CanNm_MainFunction( void )
{
    VNM_PeriodicTask();
}

#if ( CANNM_CONTROL_ENABLED == STD_ON )
/***********************************************************************************************************************
 *  CanNm_EnableCommunication
 **********************************************************************************************************************/
/*! \brief      Enable NM message transmission control status
 *  \param[in]  nmChannelHandle             index of the network channel
 *  \return     E_OK - No error
 *              E_NOT_OK - Enabling of NM PDU transmission ability has failed
 *  \pre        NM is initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called from NM Interface
 **********************************************************************************************************************/
Std_ReturnType CanNm_EnableCommunication( const NetworkHandleType nmChannelHandle )
{
    VNM_GotoMode(VNM_AWAKE_MODE); // Move to SLEEP state
    return E_OK;
}


/***********************************************************************************************************************
 *  CanNm_DisableCommunication
 **********************************************************************************************************************/
/*! \brief      Disable NM message transmission control status
 *  \param[in]  nmChannelHandle             index of the network channel
 *  \return     E_OK - No error
 *              E_NOT_OK - Disabling of NM PDU transmission ability has failed
 *  \pre        NM is initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called from NM Interface
 **********************************************************************************************************************/
Std_ReturnType CanNm_DisableCommunication( const NetworkHandleType nmChannelHandle )
{
    VNM_GotoMode(VNM_SLEEP_MODE); // Move to SLEEP state
    return E_OK;
}
#endif


/***********************************************************************************************************************
 *  CanNm_RxIndication
 **********************************************************************************************************************/
/*! \brief      This function is called by the CAN Interface after a CAN L-PDU has been received
 *  \param[in]  RxPduId                 ID of CAN NM PDU that has been received
 *  \param[in]  PduInfoPtr              Pointer to a PduInfoType containing the received CAN NM SDU and its length
 *  \pre        NM is initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called from data link layer
 **********************************************************************************************************************/
void CanNm_RxIndication( uint8 CtrlId, PduIdType RxPduId, CAN_RMD const * const pRmd )
{
    VNM_CB_MsgRcvd(pRmd);
}

/***********************************************************************************************************************
 *  CanNm_TxConfirmation
 **********************************************************************************************************************/
/*! \brief      This function is called by the CAN Interface after a CAN L-PDU has been transmitted
 *  \param[in]  TxPduId                 ID of CAN NM PDU that has been transmitted
 *  \pre        NM is initialized
 *  \context    Function could be called from interrupt level or from task level
 *  \note       Called from data link layer
 **********************************************************************************************************************/
void CanNm_TxConfirmation( uint8 CtrlId, PduIdType TxPduId)
{
    NM_UNUSED_VAR(CtrlId);
    NM_UNUSED_VAR(TxPduId);
    
    VNM_CB_MsgTxd();
}


/***********************************************************************************************************************
 *  CanNm_StateTransition
 **********************************************************************************************************************/
/*! \brief      This function is called for the Nm state transition and in turn corresponding CAN network channel
 *  \pre        NM is initialized
 *  \context    Function could be called from interrupt level or from task level
 **********************************************************************************************************************/
void CanNm_StateTransition( NetworkHandleType nmChannelHandle, Nm_StateType nextNmState )
{
	CAN_UINT8 FuncExecSt = E_OK;

	if (CAN_NM_NUMBER_OF_CHANNELS <= nmChannelHandle)
	{
#ifdef CANUTIL_ENABLED
		CanUtil_ReportError();
#else
		FuncExecSt = E_NOT_OK;
#endif
	}

	if (FuncExecSt != E_NOT_OK)
	{
		if (NmState[nmChannelHandle] == NM_STATE_UNINIT)
		{
#ifdef CANUTIL_ENABLED
			CanUtil_ReportError();
#else
			FuncExecSt = E_NOT_OK;
#endif
		}

		if (FuncExecSt != E_NOT_OK)
		{
			switch (nextNmState)
			{
			case NM_STATE_BUS_SLEEP:
				Nm_BusSleepMode(nmChannelHandle);
				CanEnterCriticalSection();
				NmState[nmChannelHandle] = NM_STATE_BUS_SLEEP;
				CanExitCriticalSection();
				break;
			case NM_STATE_PREPARE_BUS_SLEEP:
				if (NmState[nmChannelHandle] == NM_STATE_NORMAL_OPERATION)
				{
					(void)CanNm_DisableCommunication(nmChannelHandle);
					Nm_PrepareBusSleepMode(nmChannelHandle);
					CanEnterCriticalSection();
					NmState[nmChannelHandle] = NM_STATE_PREPARE_BUS_SLEEP;
					CanExitCriticalSection();
				}
				break;
			case NM_STATE_NORMAL_OPERATION:
				if ((NmState[nmChannelHandle] >= NM_STATE_BUS_SLEEP) &&
					(NmState[nmChannelHandle] <= NM_STATE_READY_SLEEP))
				{
					CanEnterCriticalSection();
					NmState[nmChannelHandle] = NM_STATE_NORMAL_OPERATION;
					CanExitCriticalSection();
					Nm_NetworkMode(nmChannelHandle);
					(void)CanNm_EnableCommunication(nmChannelHandle);
				}
				break;
			default:
				break;
			}
		}
	}
}

/* ===========================================================================
  PRIVATE FUNCTION DEFINITIONS
 ===========================================================================*/
/*******************************************************************************
** FUNCTION NAME  :  VNM_PowerOnInit
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  Status -> SUCCESS or FAIL
*******************************************************************************/
VNM_BOOL   VNM_PowerOnInit(void)
{
    /* Clear Transmit and Receive pending counters */
    VNM_Rxcount                = 0;
    VNM_Txcount                = 0;
    /* Cancel all Timers and Start Startup Sleep Delay Timer*/
    VNM_CANCEL_RINGMAX_TMR;
    VNM_CANCEL_LIMPHOME_TMR;
    VNM_SET_SLEEP_TMR;
    /* Set NM State to NM_OFF */
    VNM_SETOFF;
    /* Clear all status flags and set NM_ACTIVE*/
    VNM_SETACTIVE;
    VNM_CLEARSLEEPIND;
    VNM_CLEARSLEEPACK;
    VNM_CLEARRXMSG_AVAIL;
    VNM_CLEARMSGTXD;
    VNM_CLEARLHMARK;

    VNM_CLEAR_BUSOFF;
    (void)VNM_Start();
	VNM_CLEAR_SLEEPACK_STATUS;
	VNM_Clear_Node_data();

	VNM_CLEAR_SI_SENT;
	
    return((VNM_UINT8)VNM_SUCCESS);
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_PeriodicTask
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VNM_PeriodicTask(void)
{
	CAN_TMD const * pTxTmd;
	PduInfoType TxPduInfoPtr;

	/*NM States*/
	static const funcptr VNM_States[9] = { VNM_Off,          VNM_InitReset,    \
											VNM_Normal,       VNM_Limphome,     \
											VNM_PreSleep,     VNM_PreSleepLH,   \
											VNM_Wait4Sleep,   VNM_Wait4Sleep,   \
											VNM_Sleep };
	pTxTmd = &vnm_resp_tmd;

	/*Check and Run Timer1*/
	if (VNM_TMR1_RUNNING)
	{
		VNM_Tmr1--;
	}
	else
	{
	}

	/*Check and Run Timer2*/
	if (VNM_TMR2_RUNNING)
	{
		VNM_Tmr2--;
	}
	else
	{
	}

	if (VNM_SLEEPTMR_RUNNING)
	{
		VNM_SleepTmr--;
	}
	else
	{
	}

	if (VNM_FIRST_COUNT_RUNNING)
	{
		VNM_TmrFirstCount++;
		if (VNM_TmrFirstCount > 7)
		{
			TxStopFlag = FALSE;
			FirstSendFlag = FALSE;
			VNM_TmrFirstCount = 0;
		}
		else
		{
			;
		}
	}
	else
	{
		;
	}

	/*Check and Run NM State machine*/

	if ((VNM_UINT8)VNM_NO_OF_STATES > VNM_status.State)
	{
		VNM_States[VNM_status.State]();
	}
	else
	{
		(void)VNM_PowerOnInit();
	}

	VNM_ACK_TX_CONTROL(VNM_CAN_TX_STATE);

	VNM_DTC();

	/*Check and transmit if message buffer is full*/
	if (VNM_MSGBUFFULL)
	{
		TxPduInfoPtr.SduLength = pTxTmd->Size;
		TxPduInfoPtr.SduDataPtr = (CAN_UINT8 *)pTxTmd->pData;

		if (NmCtrlStatus[MMCAN_CHANNEL] != NM_STATUS_SUSPEND)
		{
			if ((FALSE != FirstSendFlag) && (0 == VNM_TmrFirstCount))
			{
				VNM_TmrFirstCount = 1;
			}
			else
			{
			}

			if (0 == CanIf_Transmit(MMCAN_CHANNEL, pTxTmd->MsgHandle, &TxPduInfoPtr))
			{
				VNM_CLEAR_MSGBUFFULL;
			}
			else
			{
			}
		}
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_Start
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  Status -> SUCCESS or FAIL
*******************************************************************************/
VNM_BOOL VNM_Start(void)
{
	VNM_BOOL retstatus;
	if (VNM_OFF)
	{
		retstatus = VNM_SUCCESS;
		VNM_SETON;
		VNM_SET_FIRSTMSGFLAG;
	}
	else
	{
		retstatus = VNM_FAIL;
	}
	return (retstatus);
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Stop
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  Status -> SUCCESS or FAIL
*******************************************************************************/
VNM_BOOL VNM_Stop(void)
{
	VNM_BOOL retstatus;
	VNM_SETOFF;
	retstatus = VNM_SUCCESS;
	return (retstatus);
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_GotoMode
** DESCRIPTION    :
** INPUT          :  Mode -> SLEEP or AWAKE
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VNM_GotoMode(VNM_UINT8 mode)
{
	if (VNM_SLEEP_MODE == mode)
	{
		VNM_SETSLEEPIND;
	}
	else if (VNM_AWAKE_MODE == mode)
	{
		VNM_CLEARSLEEPIND;
		VNM_CLEARSLEEPACK;
	}
	else
	{
	}
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_SleepStatus
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  Status -> SLEEP or AWAKE
*******************************************************************************/
VNM_BOOL VNM_SleepStatus(void)
{
	VNM_BOOL retstatus;
	if (VNM_SLEEP)
	{
		retstatus = VNM_IN_SLEEP_STATE;
	}
	else
	{
		retstatus = VNM_IN_AWAKE_STATE;
	}
	return (retstatus);
}
/*******************************************************************************
   DLL CALLBACK FUNCTIONS
*******************************************************************************/

/*******************************************************************************
** FUNCTION NAME  :  VNM_CB_MsgRcvd
** DESCRIPTION    :
** INPUT          :  Receive Message Pointer
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VNM_CB_MsgRcvd(CAN_RMD const * const pRmd)
{
	VNM_UINT8 sender = 0;
	VNM_UINT8 msg_type = 0;

	if ((VNM_UINT8)2 < (pRmd->Size))
	{
		VNM_RxMsg.Msg_ID = pRmd->Identifier.I32;
		VNM_RxMsg.Data[0] = pRmd->Data[0];
		VNM_RxMsg.Data[1] = pRmd->Data[1];
		VNM_RxMsg.Data[2] = pRmd->Data[2];

		VNM_SETRXMSG_AVAIL;

		sender = (VNM_UINT8)((VNM_RxMsg.Msg_ID & 0x7FF) - (VNM_MSGIDTYPE)VNM_CAN_BASE_ID);
		msg_type = (VNM_RxMsg.Data[1] & VNM_RING_MSG_SI_SET);

		if ((msg_type & VNM_MSG_TYP_RING) == VNM_MSG_TYP_RING)
		{
			VNM_Update_Node_data(sender, msg_type);
		}
	}
	else
	{
	}

	VNM_ACK_TX_CONTROL(VNM_CAN_RX_STATE);
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_CB_MsgTxd
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VNM_CB_MsgTxd(void)
{
	VNM_SETMSGTXD;

	if ((VNM_UINT8)VNM_SI_RS == (VNM_TxMsg.Data[1] & VNM_SI_RS)) /*sleep indication has been sent*/
	{
		VNM_SET_SI_SENT;
	}
	else
	{
		VNM_CLEAR_SI_SENT;
	}

	if ((VNM_UINT8)VNM_MSG_TYP_LIMPHOME == (VNM_TxMsg.Data[1] & VNM_MSG_TYP_LIMPHOME))
	{
		VNM_SETLHMARK;
	}
	else
	{
		/* code */
	}
	
	/*tx succeed, busoff recovered*/
	NM_BusOffState = FALSE;
	VNM_CLEAR_BUSOFF;
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_CB_BusOff
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
void VNM_CB_BusOff(void)
{
#if 0
	CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP);
	VNM_SET_BUSOFF;
	if(VNM_NORMAL || VNM_PRESLEEP)
	{
		VNM_SETLIMPHOME;
		VNM_CANCEL_RINGMAX_TMR;
		VNM_SET_LIMPHOME_TMR;
		VNM_SET_SLEEP_L_TMR;
	}
	else
	{
	}
#endif
	VNM_SETLIMPHOME;
	VNM_SET_BUSOFF;
}
/*******************************************************************************
   PRIVATE FUNCTIONS
*******************************************************************************/

/*******************************************************************************
** FUNCTION NAME  :  VNM_Off
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Off(void)
{}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Sleep
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Sleep(void)
{
	if (VNM_SLEEPIND)
	{
	}
	else
	{
		VNM_GotoMode(VNM_AWAKE_MODE);
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);

		VNM_InitReset();
		VNM_SET_FIRSTMSGFLAG;
		VNM_SET_SLEEP_TMR;
	}
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_InitReset
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_InitReset(void)
{
    VNM_Rxcount = 0;
    VNM_Txcount = 0;
    VNM_CLEARRXMSG_AVAIL;
    VNM_CLEARMSGTXD;
    VNM_CLEARLHMARK;
    VNM_CLEARSLEEPACK;
	VNM_CLEAR_SLEEPACK_STATUS;
	VNM_CLEAR_SI_SENT;
	// DllEnblMsgs();
    VNM_Reset();
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Reset
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Reset(void)
{
	VNM_Rxcount++;
	VNM_LogicalSuccessor = (VNM_UINT8)VNM_OWN_ADDR;

	if (VNM_ACTIVE)
	{
		if (TRUE == FirstSendFlag) /*first msg not sent*/
		{
			TxStopFlag = TRUE;
		}
		else
		{
			TxStopFlag = FALSE;
		}
		VNM_Clear_Node_data();
		VNM_Prepare_Msg((VNM_UINT8)VNM_MSG_TYP_ALIVE);
		VNM_Txcount++;
	}
	else
	{
	}
	if (((VNM_UINT8)VNM_RXCNT_LIMIT >= VNM_Rxcount) && ((VNM_UINT8)VNM_TXCNT_LIMIT >= VNM_Txcount))
	{
		VNM_CANCEL_RINGMAX_TMR;
		VNM_SET_RINGTYP_TMR;
		VNM_SETNORMAL;
		VNM_SET_SLEEP_TMR;
		VNM_Prepare_Msg((VNM_UINT8)VNM_MSG_TYP_ALIVE);
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);
	}
	else
	{
		VNM_CANCEL_RINGMAX_TMR;
		VNM_SET_LIMPHOME_TMR;
		VNM_SETLIMPHOME;
		VNM_SET_SLEEP_L_TMR;
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_Prepare_Msg
** DESCRIPTION    :
** INPUT          :  Message Type -> ALIVE,RING,LIMPHOME
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Prepare_Msg(VNM_UINT8 msg_type)
{
	VNM_TxMsg.Msg_ID = (VNM_MSGIDTYPE)(VNM_CAN_BASE_ID + VNM_OWN_ADDR);
	VNM_TxMsg.Data_Count = (VNM_UINT8)VNM_MSG_SIZE;
	VNM_TxMsg.Data[1] = msg_type;
	VNM_TxMsg.Data[0] = VNM_LogicalSuccessor;

	if ((VNM_SLEEPIND) && (VNM_SLEEP_TMR_XPIRED)) /*tSleepRequestMin_N and tSleepRequestMin_L use the same timer VNM_SleepTmr & flag Run_SleepTmr, in Normal it's tSleepRequestMin_N, in LimpHome it's tSleepRequestMin_L*/
	{
		if ((VNM_SLEEPACK && ((VNM_UINT8)VNM_MSG_TYP_ALIVE != msg_type)) || (VNM_SLEEPACK_TRUE && VNM_SLEEPIND && VNM_SI_SENT)) /*TG2_TC6_SC2:VNM_SLEEPACK is set in VNM_MsgTxd, if VNM_CLEARMSGTXD and a SI received, VNM_SLEEPACK will be set in next VNM_MsgTxd, before next VNM_MsgTxd a SI is sent other than SA*/
		{
			VNM_TxMsg.Data[1] = VNM_TxMsg.Data[1] | ((VNM_UINT8)VNM_SI_SA);
		}
		else
		{
			VNM_TxMsg.Data[1] = VNM_TxMsg.Data[1] | ((VNM_UINT8)VNM_SI_RS);
		}
	}
	else
	{
		VNM_TxMsg.Data[1] = VNM_TxMsg.Data[1] | ((VNM_UINT8)VNM_SI_NRS);
	}
	VNM_TxMsg.Data[3] = (VNM_UINT8)VNM_PAD_BYTE;
	VNM_TxMsg.Data[4] = (VNM_UINT8)VNM_PAD_BYTE;
	VNM_TxMsg.Data[5] = (VNM_UINT8)VNM_PAD_BYTE;
	VNM_TxMsg.Data[6] = (VNM_UINT8)VNM_PAD_BYTE;
	VNM_TxMsg.Data[7] = (VNM_UINT8)VNM_PAD_BYTE;

	VNM_SET_MSGBUFFULL;
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_Normal
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Normal(void)
{
	if (VNM_MSG_TXD)
	{
		VNM_MsgTxd();
	}
	else if (VNM_MSG_AVAILABLE)
	{
		VNM_MsgRcvd();													/*new msg available, then handle new msg*/
		if ((VNM_UINT8)VNM_SI_SA == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT)) /*if ACK*/
		{
			if ((VNM_SLEEPIND) && (VNM_SLEEP_TMR_XPIRED))
			{
				// DllDsblMsgs();
				ComM_Nm_txStopNormal(MMCAN_CHANNEL);							  /*stop all msgs*/
				CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP); // ->PREPARE_SLEEP
				VNM_CANCEL_RINGTYP_TMR;
				VNM_CANCEL_RINGMAX_TMR;
				VNM_SET_TWBS_TMR;
				VNM_SETWBS;
			}
			else
			{
			}
		}
		else
		{
		}
	}
	else if (VNM_RINGTTYP_TMR_XPIRED)
	{
		VNM_CANCEL_RINGTYP_TMR;
		VNM_SET_RINGMAX_TMR;
		if (VNM_ACTIVE)
		{
			VNM_Prepare_Msg(VNM_MSG_TYP_RING);
			VNM_Txcount++;

			if (VNM_RxMsg.Data[0] == (VNM_UINT8)VNM_OWN_ADDR)
			{
				if (((VNM_UINT8)VNM_SI_RS == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT)) && (VNM_SLEEPACK_TRUE) && (VNM_SLEEPIND && VNM_SI_SENT) && (VNM_SLEEP_TMR_XPIRED)) /*if IC SI and all other SI flag set*/
				{
					VNM_SETPRESLEEP;
				}
			}
		}
		else
		{
		}
		if ((VNM_UINT8)VNM_TXCNT_LIMIT < VNM_Txcount)
		{
			VNM_SETLIMPHOME;
			VNM_CANCEL_RINGMAX_TMR;
			VNM_SET_LIMPHOME_TMR;
			VNM_SET_SLEEP_L_TMR;
		}
		else
		{
		}
	}
	else if (VNM_RINGTMAX_TMR_XPIRED)
	{
		//VNM_SET_SLEEP_TMR;
		VNM_Reset();
	}
	else if ((VNM_SLEEPIND) && (VNM_SLEEP_TMR_XPIRED) && (VNM_PASSIVE))
	{
		VNM_SETPRESLEEP;
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_MsgTxd
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_MsgTxd(void)
{
	VNM_Txcount = 0;
	VNM_CLEARMSGTXD;
	if (VNM_FIRSTMSG)
	{
		VNM_SET_SLEEP_TMR;
		VNM_CLEAR_FIRSTMSGFLAG;
	}
	else
	{
	}

	/*if((VNM_UINT8)VNM_MSG_TYP_RING == VNM_TxMsg.Data[1])*/
	if ((VNM_UINT8)VNM_MSG_TYP_RING == ((VNM_TxMsg.Data[1]) & VNM_MSG_TYP_RING))
	{
		VNM_SET_RINGMAX_TMR;
		VNM_CANCEL_RINGTYP_TMR;
		if (VNM_RxMsg.Data[0] == (VNM_UINT8)VNM_OWN_ADDR)
		{
			if (((VNM_UINT8)VNM_RING_MSG_SI_SET == (VNM_RxMsg.Data[1] & VNM_RING_MSG_SI_SET)) && (VNM_SLEEPIND && VNM_SI_SENT) && (VNM_SLEEPACK_TRUE))
			{
				VNM_SETSLEEPACK;
				// VNM_SETPRESLEEP;
				// ComM_Nm_txStopNormal(MMCAN_CHANNEL);
				// VNM_Prepare_Msg(VNM_MSG_TYP_RING);
			}
			else
			{
			}
		}
		else
		{
		}
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_MsgRcvd
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_MsgRcvd(void)
{
	VNM_UINT8 sender, receiver, msg_type;

	sender = (VNM_UINT8)((VNM_RxMsg.Msg_ID & 0x7FF) - (VNM_MSGIDTYPE)VNM_CAN_BASE_ID);
	receiver = VNM_RxMsg.Data[0];
	msg_type = VNM_RxMsg.Data[1] & 0x0F;

	VNM_CLEARRXMSG_AVAIL;
	VNM_Rxcount = 0;

	if ((VNM_UINT8)VNM_MSG_TYP_RING == msg_type)
	{
#if 0
		if(sender == receiver)
		{
			if(!(VNM_RINGTTYP_TMR_RUNNING || VNM_RINGTTYP_TMR_XPIRED))
			{
			VNM_SET_RINGMAX_TMR;
			}
			else
			{
			VNM_SET_RINGTYP_TMR;
			}
		}
		else
#endif
		{
			VNM_CANCEL_RINGTYP_TMR;
			VNM_CANCEL_RINGMAX_TMR;

			VNM_UpdateLogSuccr(sender);

			if ((VNM_UINT8)VNM_OWN_ADDR == receiver)
			{
				VNM_SET_RINGTYP_TMR;
				VNM_Check_B4_txn_SA();
			}
			else
			{
				VNM_SET_RINGMAX_TMR;

				if (VNM_IAMSKIPPED == VNM_AmISkipped(sender, receiver))
				{
					//VNM_LogicalSuccessor = VNM_OWN_ADDR; /*TG2_TC2_SC1:when skipped, an Alive msg should be sent to the original successor, other than it's own address, requirement from JMC.*/
					VNM_Prepare_Msg((VNM_UINT8)VNM_MSG_TYP_ALIVE);
				}
				else
				{
				}
			}
		}
	}
	else if ((VNM_UINT8)VNM_MSG_TYP_ALIVE == msg_type)
	{
		VNM_UpdateLogSuccr(sender);
	}
	else if ((VNM_UINT8)VNM_MSG_TYP_LIMPHOME == msg_type)
	{
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_UpdateLogSuccr
** DESCRIPTION    :
** INPUT          :  sender of the last received NM message
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_UpdateLogSuccr(VNM_UINT8 sender)
{
    if((VNM_UINT8)VNM_OWN_ADDR == VNM_LogicalSuccessor)
    {
        VNM_LogicalSuccessor = sender;
    }
    else if(VNM_LogicalSuccessor < (VNM_UINT8)VNM_OWN_ADDR)
    {
        if(sender < VNM_LogicalSuccessor)
        {
            VNM_LogicalSuccessor = sender;
        }
        else if(sender > (VNM_UINT8)VNM_OWN_ADDR)
        {
            VNM_LogicalSuccessor = sender;
        }
        else
        {
		}
    }
    else if(sender < VNM_LogicalSuccessor)
    {
        if(sender > (VNM_UINT8)VNM_OWN_ADDR)
        {
            VNM_LogicalSuccessor = sender;
        }
        else
        {
        }
    }
    else
    {
    }
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_AmISkipped
** DESCRIPTION    :
** INPUT          :  sender and receiver of the last NM message
** OUTPUT         :
** RETURN         :  status -> IAMSKIPPED or IAMNOTSKIPPED
*******************************************************************************/
static VNM_UINT8 VNM_AmISkipped(VNM_UINT8 sender,VNM_UINT8 receiver)
{
	VNM_UINT8 ret_status;
	ret_status = VNM_IAMNOTSKIPPED;

	if (receiver < (VNM_UINT8)VNM_OWN_ADDR)
	{
		if (sender < receiver)
		{
			/* Do Nothing*/
		}
		else if (sender < (VNM_UINT8)VNM_OWN_ADDR)
		{
			ret_status = VNM_IAMSKIPPED;
		}
		else
		{
			/* Do Nothing*/
		}
	}
	else if (sender < receiver)
	{
		if (sender < (VNM_UINT8)VNM_OWN_ADDR)
		{
			ret_status = VNM_IAMSKIPPED;
		}
		else
		{
			/* Do Nothing*/
		}
	}
	else
	{
		ret_status = VNM_IAMSKIPPED;
	}

	return (ret_status);
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_PreSleep
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_PreSleep(void)
{
	if (VNM_MSG_TXD || VNM_RINGTMAX_TMR_XPIRED)
	{
		// DllDsblMsgs();
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP); // ->PREPARE_SLEEP
		VNM_CANCEL_RINGTYP_TMR;
		VNM_CANCEL_RINGMAX_TMR;
		VNM_SET_TWBS_TMR;
		VNM_SETWBS;
	}
	else if (VNM_MSG_AVAILABLE)
	{
		VNM_MsgRcvd();
		if ((VNM_UINT8)VNM_SI_RS != (VNM_RxMsg.Data[1] & VNM_SI_SIBIT))
		{
			if ((VNM_UINT8)VNM_SI_SA == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT))
			{
				// DllDsblMsgs();
				ComM_Nm_txStopNormal(MMCAN_CHANNEL);
				CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP); // ->PREPARE_SLEEP
				VNM_CANCEL_RINGTYP_TMR;
				VNM_CANCEL_RINGMAX_TMR;
				VNM_SET_TWBS_TMR;
				VNM_SETWBS;
			}
			else
			{
				VNM_SETNORMAL;
				VNM_CLEARSLEEPACK;
			}
		}
		else
		{
		}
	}
	else if (VNM_RINGTTYP_TMR_XPIRED)
	{
		VNM_CANCEL_RINGTYP_TMR;
		if (VNM_ACTIVE)
		{
			VNM_Prepare_Msg(VNM_MSG_TYP_RING);
		}
		else
		{
		}
	}
	else if (!VNM_SLEEPIND)
	{
		VNM_SETNORMAL;
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_Limphome
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Limphome(void)
{
	if (VNM_BUSOFF)
	{
		/* Try to send limphome immediately. Tx will fail due to CanStress disturbance. CAN controller will enter busoff state.*/
		VNM_Prepare_Msg(VNM_MSG_TYP_LIMPHOME);
		VNM_SET_LIMPHOME_TMR;
	}
	else if (VNM_MSG_AVAILABLE)
	{
		VNM_CLEARRXMSG_AVAIL;
		VNM_MsgRcvd_InLH();
	}
	else if (VNM_MSG_TXD)
	{
		VNM_CLEARMSGTXD;
		if ((VNM_UINT8)VNM_MSG_TYP_LIMPHOME == (VNM_TxMsg.Data[1] & VNM_MSG_TYP_LIMPHOME))
		{
			//VNM_SETLHMARK;

			if ((VNM_UINT8)0X14 == (VNM_TxMsg.Data[1] & (VNM_UINT8)0X14)) /*TG0_TC3_SC1:Stop IL msg immediately when NM 0x14 sent, requirement from JMC.*/
			{
				TxStopFlag = TRUE;
			}
			else
			{
				TxStopFlag = FALSE; /*0x14 -> 0x04, resume IL msg*/
			}
		}
		else
		{
		}
	}
	else if (VNM_LHTERR_TMR_XPIRED)
	{
		VNM_SET_LIMPHOME_TMR;

#if 0
      if(VNM_BUSOFF)
      {
		VNM_GotoMode(VNM_AWAKE_MODE);
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);
        
        VNM_CLEAR_BUSOFF;
      }
#endif

		//CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);
		if (VNM_ACTIVE)
		{
			VNM_Prepare_Msg(VNM_MSG_TYP_LIMPHOME);
		}
		else
		{
		}
		if ((VNM_SLEEPIND) && (VNM_SLEEP_L_TMR_XPIRED))
		{
			VNM_SET_RINGMAX_TMR;
			VNM_SETPRESLEEPLH;

			TxStopFlag = TRUE; /*TG0_TC3_SC1*/
		}
		else
		{
			TxStopFlag = FALSE; /*TG0_TC3_SC1*/
		}
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_MsgRcvd_InLH
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_MsgRcvd_InLH(void)
{
	if (VNM_ACTIVE)
	{
		if (VNM_LHMARKED) //limphome msg sent
		{
			if (VNM_SLEEPIND) //limphome sleep condition meet, 0x14 not sent yet.
			{
				VNM_LH_Chk4SA();
			}
			else
			{
				VNM_SET_SLEEP_TMR;
				VNM_InitReset();
			}
		}
		else
		{
			VNM_LH_Chk4SA();
		}
	}
	else
	{
		if (VNM_SLEEPIND)
		{
			VNM_LH_Chk4SA();
		}
		else
		{
			VNM_SET_SLEEP_TMR;
			VNM_InitReset();
		}
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_LH_Chk4SA
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_LH_Chk4SA(void)
{
	if ((VNM_UINT8)VNM_SI_SA == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT))
	{
		// DllDsblMsgs();
		ComM_Nm_txStopNormal(MMCAN_CHANNEL);
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP);

		VNM_SET_TWBS_TMR;
		VNM_SETWBSLH;
	}
	else if (VNM_LHMARKED) /*once entered Limphome state, even a !ACK msg received, must wait for first Limphome msg to be sent, then InitReset*/
	{
		VNM_SET_SLEEP_TMR;
		VNM_InitReset();
	}
	else
	{
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_PreSleepLH
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_PreSleepLH(void)
{
	if (VNM_MSG_AVAILABLE && ((VNM_UINT8)VNM_SI_NRS == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT)))
	{
		VNM_SETLIMPHOME;

		//VNM_SET_SLEEP_L_TMR; /*pre sleep limphome to limphome, no need to restart the timer*/
	}
	else if (!VNM_SLEEPIND) /*TG4_TC3_SC3, send 0x04*/
	{
		VNM_Prepare_Msg(VNM_MSG_TYP_LIMPHOME);
		VNM_SETLIMPHOME;
		VNM_SET_LIMPHOME_TMR;
	}
	else if (VNM_RINGTMAX_TMR_XPIRED)
	{
		// DllDsblMsgs();
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_PREPARE_BUS_SLEEP);
		VNM_CANCEL_RINGMAX_TMR;
		VNM_SET_TWBS_TMR;
		VNM_SETWBSLH;
	}
	else
	{
		/*Do Nothing */
	}
}
/*******************************************************************************
** FUNCTION NAME  :  VNM_Wait4Sleep
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Wait4Sleep(void)
{
	if (VNM_TWBS_TMR_XPIRED)
	{
		VNM_CANCEL_TWBS_TMR;
		VNM_SETBUSSLEEP;
		CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_BUS_SLEEP);
	}
	else if (((VNM_MSG_AVAILABLE) && ((VNM_UINT8)VNM_SI_NRS == (VNM_RxMsg.Data[1] & VNM_SI_SIBIT))) || (!VNM_SLEEPIND))
	{
		VNM_SET_SLEEPTMR_XPIRED;

		if (VNM_WBS == (VNM_UINT8)VNM_TRUE) /*normal -> wait bus sleep*/
		{
			CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);
			VNM_SETON;
		}
		else /*limphome -> wait bus sleep*/
		{
			VNM_SETLIMPHOME;
			VNM_SET_SLEEP_L_TMR;
			//VNM_CLEARRXMSG_AVAIL;/*Avoid triggerring msg available in VNM_Limphome*/
			VNM_Prepare_Msg(VNM_MSG_TYP_LIMPHOME); /*TG3_TC4_SC1:VNM_WBSLH interrupted by 0x0? or IGN ON,  send 0x?4; JMC EEA2.0 chapter 4.4.3 send Alive is only  for VNM_WBS*/

			CanNm_StateTransition(MMCAN_CHANNEL, NM_STATE_NORMAL_OPERATION);
		}
	}
	else
	{
		/* Do Nothing*/
	}
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Update_Node_data
** DESCRIPTION    :
** INPUT          :  sender, message type
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Update_Node_data(VNM_UINT8 sender, VNM_UINT8 msg_type)
{
	VNM_UINT8 byte;
	VNM_UINT8 bit;
  //VNM_UINT32 SleepInd;

	byte = (VNM_UINT8)(sender / 32u);
	bit  = (VNM_UINT8) (sender % 32u);

	VNM_Rx_Msg_SI[byte].value   &= (VNM_UINT32)(~(1u << (VNM_UINT32)bit));

  VNM_Rx_Msg_SI[byte].value   |= (VNM_UINT32)((msg_type & VNM_SI_RS) >> 4) << bit;
    /* Check set the corresponding bit if the node has indicated ready to sleep */
  // SleepInd = (VNM_UINT32)(((VNM_UINT32)msg_type == (VNM_UINT32)VNM_SI_RS) ? ((VNM_UINT32)VNM_TRUE <<(VNM_UINT32) bit): (VNM_UINT32)VNM_FALSE);
  // VNM_Rx_Msg_SI[byte].value   |= SleepInd;
    
	VNM_Node_Avail[byte].value  |= (VNM_UINT32)(VNM_TRUE << (VNM_UINT32)bit);
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Clear_Node_data
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Clear_Node_data(void)
{
	VNM_UINT8 loop;
	
	for(loop = 0;loop < 4u;loop++)
	{
		VNM_Rx_Msg_SI[loop].value   = (VNM_UINT32)VNM_FALSE;
		VNM_Node_Avail[loop].value  = (VNM_UINT32)VNM_FALSE;
	}
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_Check_B4_txn_SA
** DESCRIPTION    :
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_Check_B4_txn_SA(void)
{
	VNM_UINT8 loop;
	VNM_SET_SLEEPACK_STATUS; /*all NM nodes are ready to sleep, SI flag are set.*/

	for(loop = 0;loop < 4u;loop++)
	{
		if ( ((VNM_Rx_Msg_SI[loop].value) & (VNM_Node_Avail[loop].value)) != (VNM_Node_Avail[loop].value)) /*any NM node SI cleared, then clear vnm_sleep_ack.*/
		{
			VNM_CLEAR_SLEEPACK_STATUS;
		}
		else
		{
		}
	}
}

void CanNmSetNmMode(VNM_UINT8 CtrlId, VNM_UINT8 Nm_Action)
{
    switch (Nm_Action)
    {
        case NM_STATUS_SUSPEND:
            NmCtrlStatus[CtrlId] = NM_STATUS_SUSPEND;
            break;
        case NM_STATUS_RESUME:
            NmCtrlStatus[CtrlId] = NM_STATUS_RESUME;
            break;
        default:
            break;
    }
}

static void VNM_ACK_TX_CONTROL(CAN_UINT8 RT_State)
{
	if (RT_State == VNM_CAN_RX_STATE)
	{
		if ((VNM_RxMsg.Data[1] & VNM_MSG_TYP_RING) == VNM_MSG_TYP_RING)
		{
			if ((VNM_RxMsg.Data[1] & VNM_SI_SA) == VNM_SI_SA)
			{
				TxStopFlag = TRUE;
			}
			else
			{
				//TxStopFlag = FALSE;
			}
		}
		else
		{
		}

		if (((VNM_RxMsg.Data[1] & VNM_SI_RS) != VNM_SI_RS) && (FALSE == FirstSendFlag)) /*if 0x0?, resume IL tx, but do nothing during tApp*/
		{
			TxStopFlag = FALSE;
		}
	}
	else if (RT_State == VNM_CAN_TX_STATE)
	{
		if ((VNM_TxMsg.Data[1] & VNM_MSG_TYP_RING) == VNM_MSG_TYP_RING)
		{
			if ((VNM_TxMsg.Data[1] & VNM_SI_SA) == VNM_SI_SA)
			{
				TxStopFlag = TRUE;
			}
			else
			{
				//TxStopFlag = FALSE;
			}
		}
		else
		{
		}
	}
	else
	{
	}
}

/*******************************************************************************
** FUNCTION NAME  :  VNM_DTC
** DESCRIPTION    :  Limphome DTC process.
** INPUT          :  None
** OUTPUT         :
** RETURN         :  None
*******************************************************************************/
static void VNM_DTC(void)
{
	static VNM_UINT8 NM_State = (VNM_UINT8)VNM_OFF_VALUE; /*Current NM state*/

	NM_State = (VNM_UINT8)VNM_status.State;

	ptrDTCProc = &CANNM_DTC_Table[LIMPHOME_DTC_CH0];

	CANNM_DTC_TMR_GO(ptrDTCProc);
	CANNM_DTCRCV_TMR_GO(ptrDTCProc);
	VNM_DTC_DELAY_TMR_GO();

	if ((FALSE == NM_BusOffState) && (TRUE == fl_Dem_DcmDtcEnable))
	{
		if (VNM_LIMPHOME_VALUE == NM_State)
		{
			if (CANNM_DTC_TMR_NVSTART(ptrDTCProc))
			{
				CANNM_SET_DTC_TMR(ptrDTCProc);
			}
			else if (CANNM_DTC_TMR_XPIRED(ptrDTCProc))
			{
				CANNM_SET_STORED(ptrDTCProc);
			}
			else
			{
			}
		}
		else
		{
			CANNM_SET_CLEARED(ptrDTCProc);
			CANNM_CANCEL_DTC_TMR(ptrDTCProc);
		}

		//within T[DiagStart_Initial] (3000ms), disable limphome dtc timer./
		if (T_DiagStart_Initial < CANNM_TIME_IN_TASK_TICS(VNM_DIAGSTART_TIME))
		{
			T_DiagStart_Initial++;
			CANNM_SET_IDLE(ptrDTCProc);
			CANNM_CANCEL_DTC_TMR(ptrDTCProc);
		}
		else
		{
		}

		if ((CANNM_DTCSTS_ISVALID(ptrDTCProc)) 
		&& ((VNM_DTC_DELAY_TMR_XPIRED()) || (VNM_DTC_DELAY_TMR_NVSTART())) //handle every 100 ms./
		&& (dtc_mature_state_2s == TRUE)) //once uds clear all dtc service occured, disable dtc setting within 2s./
		{
			switch (CANNM_DTCSTS(ptrDTCProc))
			{
			case CANNM_DTCSTS_CLEARED:
				VNM_DTCClear();
				break;
			case CANNM_DTCSTS_STORED:
				VNM_DTCStore();
				break;
			default:
				break;
			}
		}
		else
		{
		}
	}
	else
	{
		CANNM_CANCEL_DTC_TMR(ptrDTCProc);
		CANNM_SET_IDLE(ptrDTCProc);
	}

	/*100ms loop timer*/
	if ((VNM_DTC_DELAY_TMR_XPIRED()) || (VNM_DTC_DELAY_TMR_NVSTART()))
	{
		VNM_DTC_SET_DELAY_TMR();
	}
	else
	{
	}
}

static void VNM_DTCSet(VNM_UINT8 u8Val)
{
	Dem_SetEventStatus(CAN_LIMP_HOME_DTC,u8Val);
}
static void VNM_DTCStore(void)
{
	if(dem_all_block_read_finish_bool==TRUE)
	{
		VNM_DTCSet(DEM_EVENT_STATUS_PREFAILED);
	}
}
static void VNM_DTCClear(void)
{
	if(dem_all_block_read_finish_bool==TRUE)
	{
		VNM_DTCSet(DEM_EVENT_STATUS_PREPASSED);
	}
}
/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

