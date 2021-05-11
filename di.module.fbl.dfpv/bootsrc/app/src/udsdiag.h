#if !defined(DIAG_H)
#define DIAG_H

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
#include "udsdiag_cfg.h"

typedef unsigned char 	udsdiagu8;
typedef unsigned short 	udsdiagu16;
typedef unsigned long 	udsdiagu32;

typedef signed char 	udsdiags8;
typedef signed short    udsdiags16;


void udsdiag_postprocessing(udsdiagu8 bufferindex,udsdiagu8 respdata);
void udsdiag_P2timeout(void);
void udsdiag_S3timeout(void);
void udsdiag_dispatcher(udsdiagu8 bufferidx);

void udsdiag_testerpresenthandler(udsdiagu8 *pdiagdata,udsdiagu16 diagrequestlength);
void udsdiag_FuncNotSupported(udsdiagu8 *pdiagdata,udsdiagu16 diagrequestlength);

void udsdiag_sendnegativeresponse(udsdiagu8 sid,udsdiagu8 errorcode);
udsdiagu8 udsdiag_sendrcrrp (void);

void udsdiag_init(void);
void udsdiag_periodic(void);
void udsdiag_setnegativeresponse(udsdiagu8 bufferindex,udsdiagu8 errorcode);
void udsdiag_processingdone(udsdiagu8 bufferindex,udsdiagu16 reslen );
void udsdiag_setpositiveresponse(udsdiagu16 reslen,udsdiagu8 const* const buffer_ptr);
extern void udsdiag_restarttimer(void);

extern udsdiagu8 udsdiag_currreq;
extern udsdiagu8 udsdiag_currreq_rcvd;
extern udsdiagu8 udsdiag_currsess;
extern udsdiagu8 udsdiag_programmingrequest;
extern udsdiagu8 const udsdiag_numsrv;



/* ===========================================================================
    P U B L I C   T Y P E   D E F I N I T I O N S
   =========================================================================*/

#define UPDATE_SESSION(a) (udsdiag_currsess = (a))
#define GET_SESSION()       (udsdiag_currsess)       

#define DIAG_ENABLE  1u
#define DIAG_DISABLE 0u
#define DIAG_TRUE    1u
#define DIAG_FALSE   0u

#define DIAG_INVALID 0xFFu
#define DIAG_NOERROR 0x00u
#define DIAG_NOREQ   0xFFu



#define DIAG_NEGRESPLEN                                    3u

#define DIAG_NRC_SRV_NOTSUPPORTED                       0x11u
#define DIAG_NRC_SUBFUNC_NOTSUPPORTED                   0x12u
#define DIAG_NRC_INVALID_FORMAT							0x13u
#define DIAG_NRC_INCORRECTLENGTH_INVALIDFORMAT          0x13u
#define DIAG_RCRRPRESPONSE                              0x78u
#define DIAG_NEGRESPCODE                                0x7Fu
#define DIAG_NRC_SRV_NOTSUPPORTED_IN_ACTIVE_SESSION     0x7Fu



typedef void  (*udsdiag_posthandler_t ) (void);
typedef void  (*udsdiag_mainhandler_t ) (udsdiagu8*, udsdiagu16);

/**********************************************************************/
/*           Buffer handling data structure                           */
/**********************************************************************/
typedef struct udsdiagbuffcntrl
{
    /*Service ID index of the current request*/
    udsdiagu8 currentsrvidx;
    /*Flag to start the response framing*/
    udsdiagu8 makeresponse         :1;
    /*Flag to indicate the confirmation of response txed*/
    udsdiagu8 confirmation_rxed    :1;
    /*Flag to start transmission, by calling TP*/
    udsdiagu8 tx_ready             :1;
    /*Flag for buffer handling*/
    udsdiagu8 bufferlocked         :1;
    /*Flag to indicate new request received */
    udsdiagu8 ind_flag             :1;

}UDSDIAG_bufferctrl_t;
/**********************************************************************/
/*           Function handler for service                             */
/**********************************************************************/
typedef struct udsdiagfunchndlr
{		   /*Pointer to the main function handler for the requested service*/
    udsdiag_mainhandler_t   pudsdiag_mainfunc;
    /*Pointer to the post handler to be called after confirmation of request transmission.*/
    udsdiag_posthandler_t pudsdiag_posthandle;
}UDSDIAG_funchandler_t;

/**********************************************************************/
/*           Service Information's data structure                     */
/**********************************************************************/
typedef struct udsdiagsrvcinfo
{
  /*SID requests supported by the default session.*/
  udsdiagu8 requestsid;
  /*SID to be sent with the positive response for a request*/
  udsdiagu8 responsesid;
  /*This is to specify the sessions in which this SID is supported*/
  udsdiagu8 sesssupp;

  udsdiagu8 mindatalength;

  udsdiagu8 checkcondn;

  #if(DIAG_RESPONSE_ON_FUNC_REQ == DIAG_ENABLE)
   /*Flag to be used in case of response enabled for functional request.*/
   udsdiagu8 responsefuncreq;
  #endif

   udsdiagu8 rcrrpsupp;

  /*Function handlers for the services.*/
  UDSDIAG_funchandler_t funchandler;
}UDSDIAG_serviceinfo_t;



typedef enum
{
  DIAG_PRIMARYREQ=0,
  DIAG_SECONDARYREQ,
  DIAG_NUMREQTYPE
}udsdiag_reqtype;

extern void udsdiag_CheckBusyNRC(void );
extern UDSDIAG_serviceinfo_t const udsdiag_srvinfotable[];

#endif /* DIAG_H */

/* End of file ============================================================ */

/*****************************************************************************
C L E A R C A S E    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date          By          Reason For Change
----------------------------------------------------------------------------
10-Jan-2013   ranantha    UDS diagnostics base version
28-Nov-2013   gmuthu      UDS update for Honda requirements
******************************************************************************/
