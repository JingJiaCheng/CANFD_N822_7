#ifndef KWPDIAG_H
#define KWPDIAG_H

/* ===========================================================================

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

#include "kwpdiag_cfg.h"
#include "can_type.h"

typedef unsigned char kwpdiagu8;
typedef signed char kwpdiags8;
typedef unsigned short kwpdiagu16;
typedef unsigned long kwpdiagu32;
typedef enum
{
	KWPDIAG_PRIMARYREQ=0,
	KWPDIAG_SECONDARYREQ,
	KWPDIAG_NUMREQTYPE
} kwpdiag_reqtype;

void kwpdiag_postprocessing(kwpdiagu8 bufferindex,kwpdiagu8 respdata);
void kwpdiag_P2timeout(void);
void kwpdiag_P3timeout(void);
void kwpdiag_dispatcher(kwpdiagu8 bufferidx);

void kwpdiag_testerpresenthandler(kwpdiagu8 *pdiagdata,kwpdiagu16 diagrequestlength);
void kwpdiag_FuncNotSupported(void);

void kwpdiag_sendnegativeresponse(kwpdiagu8 sid,kwpdiagu8 errorcode);
kwpdiagu8 kwpdiag_sendrcrrp (void);

extern kwpdiagu8 kwpdiag_currreq;
extern kwpdiagu8 kwpdiag_currsess;
extern kwpdiagu8 const kwpdiag_numsrv;
extern kwpdiagu8 kwpdiag_srv_pending;


/* ===========================================================================
  P U B L I C   T Y P E   D E F I N I T I O N S
 =========================================================================*/

#define UPDATE_SESSION(a) (kwpdiag_currsess = (a))

#define KWPDIAG_ENABLE  					1u
#define KWPDIAG_DISABLE 					0u
#define KWPDIAG_TRUE  						1u
#define KWPDIAG_FALSE 						0u
#define KWPDIAG_SUCCESS  					KWPDIAG_TRUE
#define KWPDIAG_FAIL 						KWPDIAG_FALSE

#define KWPDIAG_INVALID 					0xFF
#define KWPDIAG_NOERROR 					0x00u
#define KWPDIAG_NOREQ 						0xFF
#define KWPDIAG_PROGSESS_ID 				0x85
#define KWPDIAG_DEFAULTSESS_ID 				0x81
#define KWPDIAG_PROGSESS_INDEX 				0
#define KWPDIAG_DEFAULTSESS_INDEX	 		1

#define KWPDIAG_SRVNOTSUPPORTEDINACTIVEDIAGMODE 0x22

#define KWPDIAG_NEGRESPLEN 					3
#define KWPDIAG_NEGRESPCODE  				0x7F
#define KWPDIAG_RCRRPRESPONSE 				0x78
#define KWPDIAG_NRCTRANSFERSUSPENDED 		0x71
#define KWPDIAG_NRCDWNLOADNOTACCEPTED 		0x40
#define KWPDIAG_NRCSRVNOTSUPPORTED 			0x11
#define KWPDIAG_NRCSUBFUNCNOTSUPPORTED 		0x12
#define KWPDIAG_NRCINVALIDFORMAT 			0x12
#define KWPDIAG_NRCREQOUTOFRANGE 			0x31
#define KWPDIAG_NRCNOTSUPPORTEDINACTIVESESS 0x80



#define KWPDIAG_NRCBUSYREPEATREQUEST 		0x21

#define KWPDIAG_SECACCESSDELAYACTIVE       ((kwpdiagu8)0xC3)
#define KWPDIAG_SECACCESSDELAYINACTIVE     ((kwpdiagu8)0x5A)
#define FUNC_REQ_SUPPORTED 	KWPDIAG_ENABLE


#define WRONG_KEY_ACC_INTERVAL			(1000 * 10) /* From msec to Seconds */
#define START_SECACC_DELAY_TIMER()		(SecureAccessTimer = WRONG_KEY_ACC_INTERVAL)
#define DEC_SECACC_DELAY()				(SecureAccessTimer--)
#define STOP_SECACC_DELAY()				(SecureAccessTimer = 0)
#define GET_SECACC_DELAY()				(SecureAccessTimer)

extern kwpdiagu16	SecureAccessTimer;


typedef void  (*kwpdiag_posthandler_t ) (void);
typedef void  (*kwpdiag_mainhandler_t ) (kwpdiagu8 *pdiagdata, kwpdiagu16 length);

/**********************************************************************/
/*           Buffer handling data structure                           */
/**********************************************************************/
typedef struct kwpdiagbuffcntrl
{
	/*Service ID index of the current request*/
	kwpdiagu8 currentsrvidx;
	/*Flag to start the response framing*/
	kwpdiagu8 makeresponse         :1;
	/*Flag to indicate the confirmation of response txed*/
	kwpdiagu8 confirmation_rxed    :1;
	/*Flag to start transmission, by calling TP*/
	kwpdiagu8 tx_ready             :1;
	/*Flag for buffer handling*/
	kwpdiagu8 bufferlocked         :1;
	/*Flag to indicate new request received */
	kwpdiagu8 ind_flag             :1;

} KWPDIAG_bufferctrl_t;
/**********************************************************************/
/*           Function handler for service                             */
/**********************************************************************/
typedef struct kwpdiagfunchndlr
{
	/*Pointer to the main function handler for the requested service*/
	kwpdiag_mainhandler_t   pkwpdiag_mainfunc;
	/*Pointer to the post handler to be called after confirmation of request transmission.*/
	kwpdiag_posthandler_t pkwpdiag_posthandle;
} KWPDIAG_funchandler_t;

/**********************************************************************/
/*           Service Information's data structure                     */
/**********************************************************************/

typedef struct kwpdiagsrvcinfo
{
	/*SID requests supported by the default session.*/
	kwpdiagu8 requestsid;
	/*SID to be sent with the positive response for a request*/
	kwpdiagu8 responsesid;
	/*This is to specify the sessions in which this SID is supported*/
	kwpdiagu8 sesssupp;

#if( (KWPDIAG_RESPONSE_ON_FUNC_REQ == KWPDIAG_ENABLE) && \
		(KWPDIAG_RESPONSE_ALL_ON_FUNC_REQ == KWPDIAG_DISABLE))
	/*Flag to be used in case of response enabled for functional request.*/
	kwpdiagu8 responsefuncreq;
#endif
#if(FUNC_REQ_SUPPORTED == KWPDIAG_ENABLE)
	kwpdiagu8 funcreq_supp;
#endif
	/*Function handlers for the services.*/
	KWPDIAG_funchandler_t funchandler;
} KWPDIAG_serviceinfo_t;



void kwpdiag_restarttimer(void);
void kwpbl_RestartTester(void );
void kwpdiag_init(void);
void kwpdiag_periodic(void);
void kwpdiag_setnegativeresponse(kwpdiagu8 bufferindex,kwpdiagu8 errorcode);
void kwpdiag_processingdone(kwpdiagu8 bufferindex,kwpdiagu16 reslen );
void kwpdiag_setpositiveresponse(kwpdiagu16 reslen,kwpdiagu8 const *buffer_ptr);
void kwpdiag_confirmation(kwpdiagu8 state);
void kwpdiag_txerrorind(kwpdiagu8 state);
void kwpdiag_physicalreqind(kwpdiagu16 dataLen);
void kwpdiag_rxerrorind(kwpdiagu8 state);
extern kwpdiagu8* kwpdiag_physicalgetbuffer(kwpdiagu16 dataLength);
void kwpdiag_reqind(kwpdiagu16 dataLength);
kwpdiagu8* kwpdiag_functionalgetbuffer (kwpdiagu16 dataLength);
void kwpdiag_functionalreqind(kwpdiagu16 dataLength);
void kwpbl_send_busyrepeat_request(void);
extern void ApplDiagSessionTimeout(void);


extern KWPDIAG_serviceinfo_t const kwpdiag_srvinfotable[];







/* End of file ============================================================ */

/*****************************************************************************
C L E A R C A S E    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date       By         Reason For Change
----------------------------------------------------------------------------
25-Feb-09
Clearcase Rev 1.0   ssaranya        Initial version.
26-Feb-09
Clearcase Rev 1.1   ssaranya        Peer Reveiw Changes.
02-Mar-09
Clearcase Rev 2.0   vkannan        Updated after creation of seperate files
                                   for application services configuration

26-Mar-09     3     vkannan      Updated with QAC fixes after using latest
                                   personality files from integration team.

03-Apr-09     3     vkannan      SMIS defects 19792

03-Apr-09     4     vkannan      Moved TP channel config to Application
                                specific Diag config file

17-Apr-09    5         vkannan     Peer Reveiw Changes of typedef changes in
                                   SMIS review 19792.
 ******************************************************************************/
#endif /* KWPDIAG_H */
