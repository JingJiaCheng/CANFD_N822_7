/*****************************************************************************
*
*                            CONFIDENTIAL - Visteon
*
*   This is unpublished work, which is a trade secret, created in 2012.
*   Visteon owns all rights to this work and intends to maintain it in
*   confidence to preserve its trade secret status. Visteon reserves
*   the right to protect this work as an unpublished copyrighted work
*   in the event of an inadvertent or deliberate unauthorized publication.
*   Visteon also reserves its right under the copyright laws to protect
*   this work as a published work. Those having access to this work may
*   not copy it, use it, or disclose the information contained in it
*   without the written authorization of Visteon.
*
*                            Copyright 2013, Visteon
*
*****************************************************************************/
#ifndef UDSDIAG_CFG_H
#define UDSDIAG_CFG_H

/***************************************************************************
 *                        PROJECT INCLUDES
***************************************************************************/
#include "fbl_app_cfg.h"
#include "udsdiag_if.h"

/***************************************************************************
 *                        MACRO DEFINITIONS
***************************************************************************/
#define DIAG_TPCHANNEL                  0u

#define DIAG_MAXPRIMARYBUFFLEN          MAX_DATA_RESPONSE
#define DIAG_MAXSECONDARYBUFFLEN        MAX_DATA_RESPONSE

#define DIAG_P2_RESP_TIME_IN_MSEC       25u      /* First NRC78 message response time */
#define DIAG_P2_TIME_INMSEC             5000u    /* Time between NRC78 message    */
#define DIAG_S3_TIME_INMSEC             16000u    /* Session Time out response to request */
#define DIAG_RCRRPMAXTIME_INMSEC        400000u  /*60000u Maximum time for P2 timeout        */

#define Default_P2CAN_Server     		50u

#define DIAG_CALLCYCLE_INMSEC           2u
#define DIAG_NUM_SERVICES               12u
#define DIAG_RCRRP                      DIAG_ENABLE

#define DIAG_RESPONSE_ON_FUNC_REQ       DIAG_ENABLE
#define DIAG_RESPONSE_ALL_ON_FUNC_REQ   DIAG_DISABLE
#define FUNCTIONAL_NRC_SUPPRESS_REQUIRED

#define NOSESSIONCHECK                  0x00u
#define DEFAULTSESSION                  0x01u
#define REPROGRAMMINGSESSION            0x02u
#define EXTENDEDSESSION                 0x04u
#define ENGINEERINGSESSION              0x08u

#define EXT_ENG_SESSION                 EXTENDEDSESSION|ENGINEERINGSESSION 
#define REPRO_EXT_ENG_SESSION           REPROGRAMMINGSESSION|EXTENDEDSESSION|ENGINEERINGSESSION
#define DEF_EXT_ENG_SESSION             DEFAULTSESSION|EXTENDEDSESSION|ENGINEERINGSESSION  
#define REPRO_SESSION                   REPROGRAMMINGSESSION  

#define LENGTH_GREATER       0u
#define LENGTH_EQUAL         1u

extern void UdsMgr_DiagnosticSessionControlPostHandler(void);

/*****************************************************************************/
/* Private Constant Definitions                                              */
/*****************************************************************************/
/*							requestsid, responsesid, sesssupp,	                mindatalength,  checkcondn, 		responsefuncreq, rcrrpsupp,			pudsdiag_mainfunc,							pudsdiag_posthandle			*/
#define DIAG_SRV_INFO_TABLE_LIST  																																																\
{/*1.Diagnostic Session */	0x10u,	0x50u,	NOSESSIONCHECK,		                2u,				LENGTH_GREATER,	DIAG_ENABLE,	DIAG_ENABLE,	{	&UdsMgr_DiagnosticSessionControlHandler,	UdsMgr_DiagnosticSessionControlPostHandler}},  \
{/*2.ECU Reset 			*/	0x11u,	0x51u,	NOSESSIONCHECK,		                2u, 			LENGTH_EQUAL,	DIAG_ENABLE,	DIAG_ENABLE,	{	&UdsMgr_EcuResetHandler,					&UdsMgr_EcuResetPostHandler}},      			\
{/*3.Security Access	*/	0x27u,	0x67u,	REPROGRAMMINGSESSION,	            2u,				LENGTH_GREATER,	DIAG_ENABLE,	DIAG_ENABLE, 	{	&UdsMgr_SecurityAccessHandler,				NULL}},      									\
{/*4.Routine Control 	*/	0x31u,	0x71u,	NOSESSIONCHECK,		                4u,				LENGTH_GREATER,	DIAG_ENABLE,	DIAG_ENABLE,	{	&UdsMgr_RoutineControlHandler,				NULL}},    			\
{/*5.Download Request 	*/	0x34u,	0x74u,	REPROGRAMMINGSESSION,		        11u,			LENGTH_EQUAL,	DIAG_ENABLE, 	DIAG_ENABLE, 	{	&UdsMgr_RequestDownloadHandler,				NULL}},      									\
{/*6.Transfer Data 		*/	0x36u,	0x76u, 	REPROGRAMMINGSESSION,		        1u, 			LENGTH_GREATER,	DIAG_ENABLE,	DIAG_ENABLE, 	{	&UdsMgr_TransferDataHandler,				NULL}},      									\
{/*7.Transfer Exit 		*/	0x37u,	0x77u, 	REPROGRAMMINGSESSION,		        1u, 			LENGTH_EQUAL,	DIAG_ENABLE,  	DIAG_ENABLE, 	{	&UdsMgr_TransferExitHandler,				NULL}},      									\
{/*8.Tester Present 	*/	0x3Eu,	0x7Eu,	NOSESSIONCHECK,		                2u,				LENGTH_EQUAL,	DIAG_ENABLE,	DIAG_ENABLE, 	{	&UdsMgr_TesterPresentHandler,				NULL}},      									\
{/*9.DTC handle			*/	0x85u,	0xC5u, 	EXTENDEDSESSION,		            2u, 			LENGTH_EQUAL,	DIAG_ENABLE,	DIAG_ENABLE, 	{	&UdsMgr_Control_DTC_setting,				NULL}},      									\
{/*10.Communication  	*/  0x28u,  0x68u,  EXTENDEDSESSION,	                3u, 			LENGTH_EQUAL,	DIAG_ENABLE,	DIAG_ENABLE, 	{	&UdsMgr_Communication_Control,				NULL}},											\
{/*11.DID READ          */  0x22u,  0x62u,  (DEFAULTSESSION|EXTENDEDSESSION),   3u,             LENGTH_EQUAL,   DIAG_ENABLE,    DIAG_ENABLE,    {   &UdsMgr_ReadDataByIdentifier,               NULL}},                                         \
{/*12.DID WRITE         */  0x2Eu,  0x6Eu,  REPROGRAMMINGSESSION,               3u,             LENGTH_GREATER, DIAG_ENABLE,    DIAG_ENABLE,    {   &UdsMgr_WriteDataByIdentifier,              NULL}}                                         \

#define FUNCTIONAL_NRC_SUPPRESS_LIST  \
 0x00u, 0x11u, 0x12u, 0x31u

#define TP_UDS_UTILITY( x )          do { if(0u == (x)){} } while(0)

#define DIAG_ENTER_CRITICAL_SECTION()		0u
#define DIAG_EXIT_CRITICAL_SECTION(ccr)	   	TP_UDS_UTILITY(ccr)


#define DIAG_TP_TRANSMIT(channel,ptr,len) VTP_Transmit(ptr,len)
#define TpFuncResetChannel()              VTP_Init()
#define TpRxResetChannel(channel)         VTP_Init()


#define LOW_VOLT_SHUTDOWN(x)		 FALSE

#endif /* UDSDIAG_CFG_H */

/*****************************************************************************
*   for each change to this file, be sure to record:                         *
*      1.  who made the change and when the change was made                  *
*      2.  why the change was made and the intended result                   *
*   Following block needs to be repeated for each change                     *
******************************************************************************
*   Note: In the traceability column we need to trace back to the Design Doc.*
*   For the initial version it is traced to the Design Document section.     *
*   For further changes it shall trace to the source of the change which may *
*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  *
*   other reason                                                             *
*****************************************************************************/
/*****************************************************************************
Date              : 28/11/2013
By                : gmuthu
Traceability      : Honda Diagnostics implementation
Change Description: Initial version.
*****************************************************************************/
/*---------------------------------------------------------------------------
Date              : 03-July-2014
CDSID             : mgoud
Traceability      : RTC STORY 170604 and Task 172320
Change Description: added the timed task and round robin
-----------------------------------------------------------------------------*/
/****************************************************************************
Date              : 28/Aug/2015
By                : cvenkata
Traceability      : RTC 357331
Change Description: DMR & DMW updated.
*****************************************************************************/
