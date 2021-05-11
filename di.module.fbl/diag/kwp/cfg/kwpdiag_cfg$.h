#ifndef KWPDIAG_CFG_H
#define KWPDIAG_CFG_H
/* =========================================================================

                     CONFIDENTIAL VISTEON CORPORATION

  This is an unpublished work of authorship, which contains trade secrets,
  created in 2006.  Visteon Corporation owns all rights to this work and
  intends to maintain it in confidence to preserve its trade secret status.
  Visteon Corporation reserves the right, under the copyright laws of the
  United States or those of any other country that may have jurisdiction, to
  protect this work as an unpublished work, in the event of an inadvertent
  or deliberate unauthorized publication.  Visteon Corporation also reserves
  its rights under all copyright laws to protect this work as a published
  work, when appropriate.  Those having access to this work may not copy it,
  use it, modify it or disclose the information contained in it without the
  written authorization of Visteon Corporation.

 =========================================================================*/
#define KWPDIAG_TPCHANNEL 				0
/* Buffer Configuration */
#define KWPDIAG_MAXPRIMARYBUFFLEN   		512
#define KWPDIAG_MAXSECONDARYBUFFLEN 		20
/* KWP Timings */
#define KWPDIAG_P2_TIME_INMSEC      		20     /* Time between Req to Resp */
#define KWPDIAG_S1_TIME_INMSEC      		5000   /* Session Timer - Resp to Req */
#define KWPDIAG_RCRRPMAXTIME_INMSEC 		65000  /* Max Time for RCRRP's-This has to be 10s as per MMC spec */

/* #define KWPDIAG_P3MAXTIME_INMSEC    		2500 */   /* Time between consecutive RCRRP's */

/* Changes done to keep the DTS8 tool alive since the re-flash timeout is detected by the tool */
#define KWPDIAG_P3MAXTIME_INMSEC    		1500   /* Time between consecutive RCRRP's */

#define KWPDIAG_CALLCYCLE_INMSEC    		1
#define KWPDIAG_NUM_SERVICES        		15
#define KWPDIAG_RCRRP 						KWPDIAG_ENABLE


#define KWPDIAG_RESPONSE_ON_FUNC_REQ      	KWPDIAG_DISABLE
#define KWPDIAG_RESPONSE_ALL_ON_FUNC_REQ  	KWPDIAG_ENABLE
/* Session IDs */
#define NOSESSIONCHECK 						0x00
#define DEFAULTSESSION 						0x01
#define REPROGRAMMINGSESSION 				0x02
#define EXTENDEDSESSION 					0x04
#define SUPPLIERSESSION 					0x60
#define EXTENDEDSUBFUNC_92 					0x92
#define DEFAULTSUBFUNC_81 					0x81
#define REPROGSUBFUNC_85					0x85
#define SUPPLIERSUBFUNC_60 					0x60
#define EXTENDEDSUBFUNC_03 					0x03
#define EXTENDEDSUBFUNC_10 					0x10
#define DEFAULTSUBFUNC_01 					0x01
#define DEFAULTSUBFUNC_02					0x02
#define DEFAULTSUBFUNC_05					0x05
#define FUNCRQ_SUPP							0x01
#define FUNCRQ_NOTSUPP						0x00
#define TP_DIAG_CHANNEL		 				0
#define DEF_EXT_SESSION             		(DEFAULTSESSION|EXTENDEDSESSION)

#define DIAG_HW_CHANNEL  					HSCAN
#define KWP_DIAG_SDS_LEN 					1
#define KWPDIAG_ECU_RESET_REQ_LEN 			1
#define KWPDIAG_ECU_RESET_RESP_LEN			1

/* NRC Function codes */
#define KWPDIAG_NEGRESPLEN        			3
#define KWPDIAG_NEGRESPCODE       			0x7F
#define KWPDIAG_NRCTRANSFERABORTED   	 	0x72
#define KWPDIAG_NRCWRITINGERROR       		0x10
#define KWPDIAG_NRCSRVNOTSUPPORTED    		0x11
#define KWPDIAG_NRCSUBFUNCNOTSUPPORTED  	0x12
#define KWPDIAG_NRCREQOUTOFRANGE    		0x31
#define KWPDIAG_NRCCONDITIONSNOTCORRECT 	0x22
#define KWPDIAG_NRCROUTINENOTCOMPLETE   	0x23
#define KWPDIAG_NRCBUSYREPEATREQUEST    	0x21
#define KWPDIAG_NRCSECURITYDENIED       	0x33
#define KWPDIAG_INVALID_KEY           		0x35
#define KWPDIAG_EXCEED_NO_OF_ATTEMPTS		0x36
#define KWPDIAG_RQD_TIMEDELAY_NOT_EXPIRED	0x37

#define KWPDIAG_INVALID           			0xFF
#define KWPDIAG_NOERROR           			0x00
#define KWPDIAG_NOREQ             			0xFF
#define KWPDIAG_ASSEMBLY_LINE_SESS_ID     	0xC0
#define KWPDIAG_PROG_SESS_MASK        		0x01
#define KWPDIAG_ASSEMBLY_LINE_SESS_MASK     0x02
#define KWPDIAG_DEFAULT_SESS_MASK       	0x04
#define GET_DIAG_SESSION() 					kwpdiag_currsess
#define KWPDIAG_WITH_RESPONSE               0x01
#define KWPDIAG_WITHOUT_RESPONSE            0x02
/* Serivice Identifiers */
#define KWP_DIAG_START_SESSION_ID			0x10
#define KWP_DIAG_POS_RESPONSE_ADD_VALUE	0x40


/*****************************************************************************/
/* Private Constant Definitions                                              */
/*****************************************************************************/

#define KWPDIAG_SRV_INFO_TABLE_LIST                                                                               \
{0x10, 0x50,  (NOSESSIONCHECK),FUNCRQ_SUPP,      															{&fbl_diag_StartDiagnosticSession, NULL}},\
{0x11, 0x51,  (EXTENDEDSESSION | REPROGRAMMINGSESSION),FUNCRQ_NOTSUPP,										{&fbl_diag_EcuReset, NULL}},\
{0x14, 0x54,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP,   															{&fbl_service_not_supported, NULL}},\
{0x17, 0x57,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP, 										  						{&fbl_service_not_supported, NULL}},\
{0x18, 0x58,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP,   															{&fbl_service_not_supported, NULL}},\
{0x1A, 0x5A,  (DEFAULTSESSION | EXTENDEDSESSION | REPROGRAMMINGSESSION),FUNCRQ_NOTSUPP,						{&fbl_diag_ReadECUIdentification, NULL}},\
{0x21, 0x61,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP,                   											{&fbl_diag_ReadDataByLocalId, NULL}},\
{0x27, 0x67,  (EXTENDEDSESSION | DEFAULTSESSION | REPROGRAMMINGSESSION | SUPPLIERSESSION),FUNCRQ_NOTSUPP,   {&fbl_diag_SecurityAccess, NULL}},\
{0x28, 0x68,  (EXTENDEDSESSION),FUNCRQ_SUPP,   																{&fbl_diag_Disable_Normal_Tx, NULL}},\
{0x29, 0x69,  (EXTENDEDSESSION),FUNCRQ_SUPP, 																{&fbl_diag_Enable_Normal_Tx, NULL}},\
{0x30, 0x70,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP, 																{&fbl_service_not_supported, NULL}},\
{0x31, 0x71,  (EXTENDEDSESSION | REPROGRAMMINGSESSION),FUNCRQ_NOTSUPP ,   									{&fbl_diag_RoutineControl, NULL}},\
{0x32, 0x72,  (NOSESSIONCHECK),FUNCRQ_NOTSUPP, 																{&fbl_service_not_supported, NULL}},\
{0x34, 0x74,  (REPROGRAMMINGSESSION), FUNCRQ_NOTSUPP,            											{&fbl_diag_DiagRequestDownLoad, NULL}},  /*Request Download*/ \
{0x36, 0x76,  (REPROGRAMMINGSESSION), FUNCRQ_NOTSUPP,            											{&fbl_diag_DiagTransferDownLoad, NULL}},  /*Transfer data*/  \
{0x37, 0x77,  (REPROGRAMMINGSESSION), FUNCRQ_NOTSUPP,            											{&fbl_diag_DiagTransferExit, NULL}},  /*Transfer data exit*/ \
{0x3B, 0x7B,  (REPROGRAMMINGSESSION),FUNCRQ_NOTSUPP ,														{&fbl_diag_WriteDatabyLID, NULL}},\
{0x3E, 0x7E,  (NOSESSIONCHECK),	FUNCRQ_SUPP ,																{&kwpdiag_testerpresenthandler,NULL}},\
{0x85, 0xC5,  (EXTENDEDSESSION | REPROGRAMMINGSESSION),	FUNCRQ_SUPP ,										{&fbl_diag_Control_DTC_setting, NULL}},\



#define KWPDIAG_ENTER_CRITICAL_SECTION() CAN_ENTER_CRITICAL_SECTION(DIAG_HW_CHANNEL)
#define KWPDIAG_EXIT_CRITICAL_SECTION()  CAN_EXIT_CRITICAL_SECTION(DIAG_HW_CHANNEL)



#if (VTP_NUM_CHANNEL_COUNT > 1)
#define KWPDIAG_TP_TRANSMIT(channel,ptr,len) VTP_Transmit(channel,ptr,len)
#define TpFuncResetChannel(channel) VTP_Channel_Init(channel)
#define TpRxResetChannel(channel) VTP_Channel_Init(channel)
#else
#define KWPDIAG_TP_TRANSMIT(ptr,len) VTP_Transmit(ptr,len)
#define TpFuncResetChannel() VTP_Init()
#define TpRxResetChannel() VTP_Init()
#endif
/* End of file ============================================================ */
#endif /* KWPDIAG_CFG_H */
