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

/* ===========================================================================

  Name:           udsdiag.c

  Description:    UDS Diagnostics Layer

  Organization:   Multiplex Core Technology

 =========================================================================*/

/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include "udsdiag.h"
#include "udsmgr.h"
#if (COMM_PROTOCOL == CAN_PROTOCOL)
#include "tp.h"
#include "tp_cfg.h"
#elif(COMM_PROTOCOL == LIN_PROTOCOL)
#include "tp_lin.h"
#include "tp_lin_cfg.h"
#else
#error "Invalid communication protocol(COMM_PROTOCOL) selected."
#endif

/**************config**********************************/
#define DIAG_P2_TIMECNT                (DIAG_P2_RESP_TIME_IN_MSEC/DIAG_CALLCYCLE_INMSEC)
#define DIAG_P2_SERVERSTARTIMECNT      (DIAG_P2_TIME_INMSEC/DIAG_CALLCYCLE_INMSEC)
#define DIAG_P2_SERVEREND_TIMECNT      (DIAG_RCRRPMAXTIME_INMSEC/DIAG_CALLCYCLE_INMSEC)
#define DIAG_S3_TIMECNT                (DIAG_S3_TIME_INMSEC/DIAG_CALLCYCLE_INMSEC)

#define DIAG_RCRRPMAXTIMECNT           (DIAG_RCRRPMAXTIME_INMSEC/DIAG_CALLCYCLE_INMSEC)

/***********end of config******************************/
udsdiagu8 udsdiag_currreq;
udsdiagu8 udsdiag_currreq_rcvd;

/*Lets access this via */
udsdiagu8 udsdiag_currsess;
static udsdiagu16 udsdiag_p2timer;
static udsdiagu16 udsdiag_s3timer;
static udsdiagu8 srv_index;
static UDSDIAG_bufferctrl_t udsdiag_buffcntrl[DIAG_NUMREQTYPE];
static udsdiagu8  udsdiag_bufferror[DIAG_NUMREQTYPE];
static udsdiagu16 udsdiag_bufflen[DIAG_NUMREQTYPE];
static udsdiagu8 udsdiag_primarybuffer[DIAG_MAXPRIMARYBUFFLEN];
static udsdiagu8 udsdiag_secondarybuffer[DIAG_MAXSECONDARYBUFFLEN];
static udsdiagu8 udsdiag_negresp[3];
udsdiagu8 udsdiag_programmingrequest;
static udsdiagu32 udsdiag_rplimiter;
static udsdiagu8 udsdiag_rcrpbuffer[3];
static udsdiagu8 udsdiag_rcrrpruning;
static udsdiagu8 rcrp_limit = DIAG_FALSE;
static udsdiagu16 udsdiag_p2serverstart;

/*****************************************************************************/
/* Private Macros                                                            */
/*****************************************************************************/
#define posthandler   (udsdiag_srvinfotable[udsdiag_buffcntrl[index].currentsrvidx].funchandler.pudsdiag_posthandle)
#define mainhandler   (udsdiag_srvinfotable[srv_index].funchandler.pudsdiag_mainfunc)


#define STOPP2TIMER()      (udsdiag_p2timer=0u)
#define STARTP2TIMERONLY() (udsdiag_p2timer=DIAG_P2_TIMECNT)

#define STOPS3TIMER()      (udsdiag_s3timer=0u)
#define STARTS3TIMER()     (udsdiag_s3timer=DIAG_S3_TIMECNT)

#define GETP2TIMER() (udsdiag_p2timer)
#define DECP2TIMER() (udsdiag_p2timer--)
#define INCP2TIMER() (udsdiag_p2timer++)

#define GETS3TIMER() (udsdiag_s3timer)
#define DECS3TIMER() (udsdiag_s3timer--)
#define INCS3TIMER() (udsdiag_s3timer++)

#if (DIAG_RCRRP == DIAG_ENABLE)
#define STARTRPLIMITER() (udsdiag_rplimiter=DIAG_P2_SERVEREND_TIMECNT)
#define DECRPLIMITER()   (udsdiag_rplimiter--)
#define GETRPLIMITER()   (udsdiag_rplimiter)
#define STOPRPLIMITER()  (udsdiag_rplimiter = 0u)

#define STARTP2SERVERSTARTTIMER()  (udsdiag_p2serverstart = DIAG_P2_SERVERSTARTIMECNT)
#define DECP2SERVERSTARTTIMER()    (udsdiag_p2serverstart--)
#define GETP2SERVERSTARTTIMER()    (udsdiag_p2serverstart)
#define STOPP2SERVERSTARTTIMER()   (udsdiag_p2serverstart = 0u)

#else
#define STARTRPLIMITER()
#define DECRPLIMITER()
#define STARTP2TIMER() STARTP2TIMERONLY()
#define STOPRPLIMITER()
#endif


/*****************************************************************************/


/*****************************************************************************/
/* Private Variable Definitions                                              */
/*****************************************************************************/
static udsdiagu8 * const pudsdiagbuffer[DIAG_NUMREQTYPE]=
{
    &udsdiag_primarybuffer[0],
    &udsdiag_secondarybuffer[0]
};

udsdiagu8 const udsdiag_numsrv = DIAG_NUM_SERVICES;

UDSDIAG_serviceinfo_t const udsdiag_srvinfotable[DIAG_NUM_SERVICES] =
{
    DIAG_SRV_INFO_TABLE_LIST
};
/*****************************************************************************/
/* Functions                                                                 */
/*****************************************************************************/
#if (DIAG_RCRRP == DIAG_ENABLE)
static void STARTP2TIMER (void)
{
    STARTP2TIMERONLY();
}
#endif
/* ===========================================================================

 Name:            udsdiag_init

 Description:     Initialize the Diagnostics layer

 Inputs:          none

 Returns:         none

 =========================================================================*/
void udsdiag_init(void)
{
    udsdiagu8 index;
    STOPP2TIMER();
    STOPS3TIMER();
    for(index=0u;index<(udsdiagu8)DIAG_NUMREQTYPE;index++)
    {
        udsdiag_buffcntrl[index].makeresponse=0u;
        udsdiag_buffcntrl[index].confirmation_rxed=0u;
        udsdiag_buffcntrl[index].tx_ready=0u;
        udsdiag_buffcntrl[index].bufferlocked=0u;
        udsdiag_buffcntrl[index].ind_flag=0u;
        udsdiag_buffcntrl[index].currentsrvidx=DIAG_INVALID;
        udsdiag_bufferror[index]=DIAG_NOERROR;
    }

    udsdiag_currreq=DIAG_NOREQ;
    UPDATE_SESSION(SESSION_DEFAULT);
    udsdiag_programmingrequest=DIAG_FALSE;
    udsdiag_rcrrpruning=DIAG_FALSE;
}
/* ===========================================================================

 Name:            udsdiag_periodic

 Description:     Periodic task for UDS Diag processing

 Inputs:          none

 Returns:         none

 =========================================================================*/
void udsdiag_periodic(void)
{
  udsdiags8 index;
  udsdiagu8 current_sess;
  udsdiagu8 ret;
  udsdiagu8 ccr;
  udsdiagu8 rcrp_resp = DIAG_FALSE;

  for(index=0;index<(udsdiags8)DIAG_NUMREQTYPE;index++)
  {
    if(udsdiag_buffcntrl[index].confirmation_rxed == DIAG_TRUE)
    {
      ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
      udsdiag_buffcntrl[index].confirmation_rxed = DIAG_FALSE;
      DIAG_EXIT_CRITICAL_SECTION(ccr);
      if(posthandler != NULL)
      {
        posthandler();
      }
    }
  }

  /* S3 timer handling */
  ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
  if(GETS3TIMER() > (udsdiagu16) 0)
  {
      DECS3TIMER();
      if(GETS3TIMER() == 0x00u)
      {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
          udsdiag_S3timeout();
      }
      else
      {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
      }
  }
  else
  {
      DIAG_EXIT_CRITICAL_SECTION(ccr);
  }

    /* P2 timer handling */
#if(DIAG_RCRRP == DIAG_ENABLE)
  if(rcrp_limit == DIAG_TRUE)
  {
    ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
    if(GETRPLIMITER() > (udsdiagu16)0)
    {
      DECRPLIMITER();
      if(GETRPLIMITER() == 0x00u)
      {
        current_sess = GET_SESSION();

        udsdiag_init();

        udsdiag_currreq  = (udsdiagu8)DIAG_PRIMARYREQ;
        udsdiag_buffcntrl[DIAG_PRIMARYREQ].makeresponse = DIAG_TRUE;

        /*added to avoid session change due to Init*/
        UPDATE_SESSION(current_sess);
        DIAG_EXIT_CRITICAL_SECTION(ccr);

        /* udsdiag_buffcntrl[DIAG_PRIMARYREQ].tx_ready = DIAG_TRUE */
        ApplDiagServiceTimeout();

        rcrp_limit = DIAG_FALSE;
        rcrp_resp  = DIAG_TRUE;
      }
      else
      {
        if( GETP2SERVERSTARTTIMER() > ( udsdiagu16 )0 )
        {
          DECP2SERVERSTARTTIMER();
          if(GETP2SERVERSTARTTIMER() == 0x00u)
          {
            DIAG_EXIT_CRITICAL_SECTION(ccr);
            udsdiag_P2timeout();
          }
        }
        DIAG_EXIT_CRITICAL_SECTION(ccr);
      }
    }
    else
    {
      DIAG_EXIT_CRITICAL_SECTION(ccr);
    }
  }
  else
  {
  }
#endif
  if(rcrp_resp == DIAG_FALSE)
  {
    if(rcrp_limit == DIAG_FALSE)
    {
#if(DIAG_RCRRP == DIAG_ENABLE)
      ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
      if(GETP2TIMER() > (udsdiagu16)0)
      {
        DECP2TIMER();
        if(GETP2TIMER() == 0x00u)
        {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
          udsdiag_P2timeout();
        }
        else
        {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
        }
      }
      else
      {
        DIAG_EXIT_CRITICAL_SECTION(ccr);
      }
#else
      ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
      if(GETP2TIMER() > (udsdiagu16)0)
      {
        DECP2TIMER();
        if(GETP2TIMER() == 0x00u)
        {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
          ApplDiagServiceTimeout();
        }
        else
        {
          DIAG_EXIT_CRITICAL_SECTION(ccr);
        }
      }
      else
      {
        DIAG_EXIT_CRITICAL_SECTION(ccr);
      }
#endif
    }
    else
    {
    }

    for(index=((udsdiags8)DIAG_NUMREQTYPE-1);index>=0;index--)
    {
      if(udsdiag_buffcntrl[index].ind_flag == DIAG_TRUE)
      {
        STOPS3TIMER();
        ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
        udsdiag_buffcntrl[index].ind_flag = DIAG_FALSE;
        DIAG_EXIT_CRITICAL_SECTION(ccr);
        udsdiag_dispatcher((udsdiagu8)index);
      }
      else
      {
      }
    }
  }

  if(udsdiag_currreq != 0xFFu)
  {
    if(udsdiag_buffcntrl[DIAG_PRIMARYREQ].tx_ready == DIAG_TRUE)
    {
      ret = DIAG_TP_TRANSMIT(DIAG_TPCHANNEL,
      pudsdiagbuffer[DIAG_PRIMARYREQ],
      udsdiag_bufflen[DIAG_PRIMARYREQ]);

      if(ret == VTP_SUCCESS)
      {
        /* udsdiag_skipsearch=DIAG_FALSE; */
        ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
        udsdiag_buffcntrl[DIAG_PRIMARYREQ].tx_ready = DIAG_FALSE;
        udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked = DIAG_FALSE;
        DIAG_EXIT_CRITICAL_SECTION(ccr);
      }
      else
      {
      }
    }
    else if(udsdiag_buffcntrl[DIAG_SECONDARYREQ].tx_ready == DIAG_TRUE)
    {
      ret = DIAG_TP_TRANSMIT(DIAG_TPCHANNEL,
      pudsdiagbuffer[DIAG_SECONDARYREQ],
      udsdiag_bufflen[DIAG_SECONDARYREQ]);

      if(ret == VTP_SUCCESS)
      {
        /* udsdiag_skipsearch=DIAG_FALSE; */
        ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
        udsdiag_buffcntrl[DIAG_SECONDARYREQ].tx_ready = DIAG_FALSE;
        udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked = DIAG_FALSE;
        DIAG_EXIT_CRITICAL_SECTION(ccr);
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

/* ===========================================================================

 Name:            udsdiag_functionalgetbuffer

 Description:     TP Interface to get the functional reception buffer.

 Inputs:          datalength of the request

 Returns:         pointer to the functional request buffer.

 =========================================================================*/

/*TP Layer Interfaces*/
udsdiagu8* udsdiag_functionalgetbuffer (udsdiagu16 dataLength)
{
    udsdiagu8* pbuffer;

    if((udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked == DIAG_FALSE) &&\
       (udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked == DIAG_FALSE))
    {
        if(dataLength > (udsdiagu16)DIAG_MAXSECONDARYBUFFLEN )
        {
            #if (COMM_PROTOCOL == LIN_PROTOCOL)
            VTP_LIN_SetFC_Overflow();
            #else
            VTP_SetFC_Overflow();
            #endif
            pbuffer= NULL;
        }
        else
        {
            udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked = DIAG_TRUE;
            pbuffer=(pudsdiagbuffer[DIAG_SECONDARYREQ]);
        }
    }
    else
    {
        pbuffer= NULL;
    /* udsdiag_CheckBusyNRC(); */
    }
    return pbuffer;
}
/* ===========================================================================

 Name:            udsdiag_physicalgetbuffer

 Description:     TP Interface to get the Physical reception buffer.

 Inputs:          datalength of the request

 Returns:         pointer to the physical request buffer.

 =========================================================================*/
udsdiagu8* udsdiag_physicalgetbuffer(udsdiagu16 dataLength)
{

    udsdiagu8* pbuffer;

    if((udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked == DIAG_FALSE) &&\
       (udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked == DIAG_FALSE))
    {
        if(dataLength > (udsdiagu16)DIAG_MAXPRIMARYBUFFLEN )
        {
            #if (COMM_PROTOCOL == LIN_PROTOCOL)
            VTP_LIN_SetFC_Overflow();
            #else
            VTP_SetFC_Overflow();
            #endif
            pbuffer= NULL;
        }
        else
        {
            udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked = DIAG_TRUE;
            pbuffer=(pudsdiagbuffer[DIAG_PRIMARYREQ]);
        }
    }
    else
    {
        pbuffer= NULL;
    /* udsdiag_CheckBusyNRC(); */
    }
    return pbuffer;
}
/* ===========================================================================

 Name:            udsdiag_physicalreqind

 Description:     TP Interface to indicate Reception of physical message

 Inputs:          datalength of the request

 Returns:         none

 =========================================================================*/
void udsdiag_physicalreqind(udsdiagu16 dataLen)
{
    STARTP2TIMER();
    rcrp_limit=  DIAG_FALSE;
    udsdiag_bufferror[DIAG_PRIMARYREQ] = DIAG_NOERROR;
    udsdiag_bufflen[DIAG_PRIMARYREQ] = dataLen;
    udsdiag_buffcntrl[DIAG_PRIMARYREQ].ind_flag = DIAG_TRUE;
    udsdiag_buffcntrl[DIAG_PRIMARYREQ].makeresponse = DIAG_TRUE;
    udsdiag_currreq = (udsdiagu8)DIAG_PRIMARYREQ;
    udsdiag_currreq_rcvd = (udsdiagu8)DIAG_PRIMARYREQ;
    TpRxResetChannel(0);
}
/* ===========================================================================

 Name:            udsdiag_functionalreqind

 Description:     TP Interface to indicate Reception of functional message

 Inputs:          datalength of the request

 Returns:         none

 =========================================================================*/
void udsdiag_functionalreqind(udsdiagu16 dataLength)
{
    STARTP2TIMER();
    rcrp_limit=  DIAG_FALSE;
    udsdiag_bufferror[DIAG_SECONDARYREQ] = DIAG_NOERROR;
    udsdiag_bufflen[DIAG_SECONDARYREQ] = dataLength;
    udsdiag_buffcntrl[DIAG_SECONDARYREQ].ind_flag = DIAG_TRUE;
    udsdiag_buffcntrl[DIAG_SECONDARYREQ].makeresponse = DIAG_TRUE;
    udsdiag_currreq = (udsdiagu8)DIAG_SECONDARYREQ;
    udsdiag_currreq_rcvd = (udsdiagu8)DIAG_SECONDARYREQ;
    TpFuncResetChannel();
}
/* ===========================================================================

 Name:            udsdiag_confirmation

 Description:     TP Interface to confirm Message Transmission

 Inputs:

 Returns:         none

 =========================================================================*/
void udsdiag_confirmation(udsdiagu8 state)
{
    if(udsdiag_rcrrpruning == DIAG_TRUE)
    {
        udsdiag_rcrrpruning=DIAG_FALSE;
    }
    else
    {
        udsdiag_postprocessing(udsdiag_currreq,state);
    }
}
/* ===========================================================================

 Name:            udsdiag_txerrorind

 Description:     TP Interface to indicate Transmission Error

 Inputs:

 Returns:         none

 =========================================================================*/
void udsdiag_txerrorind(udsdiagu8 state)
{
    TpRxResetChannel(0);
    udsdiag_confirmation(state);
}

/* ===========================================================================

 Name:            udsdiag_rxerrorind

 Description:     TP Interface to indicate Reception Error

 Inputs:

 Returns:         none

 =========================================================================*/
void udsdiag_rxerrorind(udsdiagu8 state)
{
    udsdiagu8 ccr;

    TpRxResetChannel(0);
    STARTS3TIMER();
    ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
    udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked = DIAG_FALSE;
    udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked = DIAG_FALSE;
    DIAG_EXIT_CRITICAL_SECTION(ccr);
    TP_UDS_UTILITY(state);
}

/* ===========================================================================

 Name:            udsdiag_postprocessing

 Description:

 Inputs:

 Returns:         none

 =========================================================================*/

void udsdiag_postprocessing(udsdiagu8 bufferindex,udsdiagu8 respdata)
{
    udsdiagu8 ccr;
    if(udsdiag_bufferror[bufferindex] == DIAG_NOERROR)
    {
        if(respdata == VTP_SUCCESS)
        {
            udsdiag_buffcntrl[bufferindex].confirmation_rxed = DIAG_TRUE;
        }
        else
        {
        }
    }
    STARTS3TIMER();
    STOPP2TIMER();
    ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
    udsdiag_buffcntrl[bufferindex].bufferlocked = DIAG_FALSE;
    DIAG_EXIT_CRITICAL_SECTION(ccr);
}
/* ===========================================================================

 Name:            udsdiag_P2timeout

 Description:     P2 Timeout handling to send RCRRP

 Inputs:          none

 Returns:         none

 =========================================================================*/
void udsdiag_P2timeout(void)
{
  udsdiagu8 ret=0u;

  if(udsdiag_srvinfotable[srv_index].rcrrpsupp == DIAG_ENABLE)
  {

      ret = udsdiag_sendrcrrp();
      ApplRcrrpcallback();

  }
  else
  {
   udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked = DIAG_FALSE;
   udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked = DIAG_FALSE;
  }

  if ( ret != DIAG_TRUE)
  {
      udsdiag_rcrrpruning=DIAG_FALSE;
      INCP2TIMER();
  }
  else
  {
  }
}
/* ===========================================================================

 Name:            udsdiag_sendrcrrp

 Description:     send RCRRP

 Inputs:          none

 Returns:         none

 =========================================================================*/
udsdiagu8 udsdiag_sendrcrrp (void)
{

    udsdiagu8 ret ;

    udsdiag_rcrpbuffer[0] = DIAG_NEGRESPCODE;
    udsdiag_rcrpbuffer[1] = udsdiag_primarybuffer[0];
    udsdiag_rcrpbuffer[2] = DIAG_RCRRPRESPONSE;

    ret = DIAG_TP_TRANSMIT(DIAG_TPCHANNEL, udsdiag_rcrpbuffer, 3u);

    if(ret == VTP_SUCCESS )
    {
      udsdiag_rcrrpruning=DIAG_TRUE;
      if(rcrp_limit != DIAG_TRUE)
      {
          STARTRPLIMITER();
      }
      else
      {

      }
      rcrp_limit = DIAG_TRUE;
      STARTP2SERVERSTARTTIMER();
      STOPP2TIMER();
      ret = DIAG_TRUE;
    }
    else
    {
        ret = DIAG_FALSE;
    }
    return (ret);
}
/* ===========================================================================

 Name:            udsdiag_P3timeout

 Description:     Diag Session Time out Handling

 Inputs:          none

 Returns:         none

 =========================================================================*/
void udsdiag_S3timeout(void)
{
    STOPP2TIMER();
    if(GET_SESSION() != SESSION_DEFAULT)
    {
      ApplDiagSessionTimeout();   /* Included for giving session timeout to diag */
      UPDATE_SESSION(SESSION_DEFAULT);
    }
}
/* ===========================================================================

 Name:            udsdiag_dispatcher

 Description:     Diagnostic Processing

 Inputs:          Type of Message Buffer

 Returns:         none

 =========================================================================*/
void udsdiag_dispatcher(udsdiagu8 bufferidx)
{
  udsdiagu16 len;
  udsdiagu8 *msgptr;
  udsdiagu8 mindatalength;
  udsdiagu8 index ;
  udsdiagu8 temp_session;

  #if (DIAG_RESPONSE_ON_FUNC_REQ == DIAG_ENABLE)
  udsdiagu8 ccr;
  #endif
  mindatalength = DIAG_FALSE;
  srv_index=0xFFu;


  len=udsdiag_bufflen[bufferidx];
  msgptr=pudsdiagbuffer[bufferidx];

  if( len == (udsdiagu16)0)
  {
    udsdiag_bufferror[bufferidx]=DIAG_NRC_SRV_NOTSUPPORTED;
    udsdiag_buffcntrl[bufferidx].makeresponse=DIAG_FALSE;
    udsdiag_processingdone(bufferidx,VTP_SUCCESS);
  }
  else
  {


    for(index=0u;(index<udsdiag_numsrv);index++)
    {
      if(msgptr[0]==udsdiag_srvinfotable[index].requestsid)
      {


        /*SESSION CHECK for matching SID, subfunction*/
        if (udsdiag_srvinfotable[index].sesssupp == NOSESSIONCHECK)
        {
          if(udsdiag_srvinfotable[index].checkcondn == LENGTH_GREATER)
          {
            if((len) >= udsdiag_srvinfotable[index].mindatalength)
            {
              mindatalength = DIAG_TRUE;

            }

          }
          else if(udsdiag_srvinfotable[index].checkcondn == LENGTH_EQUAL)
          {
            if((len) == udsdiag_srvinfotable[index].mindatalength)
            {
              mindatalength = DIAG_TRUE;

            }

          }
          else
          {

          }

          if(mindatalength != DIAG_FALSE)
          {

            /*Lets not check the session supported for this case!*/
            udsdiag_buffcntrl[bufferidx].currentsrvidx=index;
            srv_index = index;
          }
          else
          {
            udsdiag_bufferror[bufferidx] = DIAG_NRC_INCORRECTLENGTH_INVALIDFORMAT;
          }


        }
        else
        {
          /*We need to match if the current session & the SID
          session supported are matching to proceed further!*/
            switch ( GET_SESSION() )          
            {
                case SESSION_DEFAULT :
                    temp_session = DEFAULTSESSION;
                    break;
                case SESSION_PROGRAMMNG :
                    temp_session = REPROGRAMMINGSESSION;
                    break;
                case SESSION_EXTENDED :
                    temp_session = EXTENDEDSESSION;
                    break;
                default:
                    temp_session = DEFAULTSESSION;
            }
          
          if ((temp_session & udsdiag_srvinfotable[index].sesssupp) != (udsdiagu8)FALSE)
          {
            if(udsdiag_srvinfotable[index].checkcondn == LENGTH_GREATER)
            {
              if((len) >= udsdiag_srvinfotable[index].mindatalength)
              {
                mindatalength = DIAG_TRUE;

              }

            }
            else if(udsdiag_srvinfotable[index].checkcondn == LENGTH_EQUAL)
            {
              if((len) == udsdiag_srvinfotable[index].mindatalength)
               {
                mindatalength = DIAG_TRUE;

               }

            }
            else
            {

            }

            if(mindatalength != DIAG_FALSE)
            {
              udsdiag_buffcntrl[bufferidx].currentsrvidx=index;
              srv_index = index;
            }
            else
            {
              udsdiag_bufferror[bufferidx] = DIAG_NRC_INCORRECTLENGTH_INVALIDFORMAT;
            }

          }
          else
          {
            /*The session supported doesnt match with Curr Sess*/
            /*Update the NRC accordingly.*/
            udsdiag_bufferror[bufferidx]=DIAG_NRC_SRV_NOTSUPPORTED_IN_ACTIVE_SESSION;
          }
        }

      }
      else
      {}
    }


    if(srv_index == 0xFFu )
    {
      if(udsdiag_currreq == (udsdiagu8)DIAG_PRIMARYREQ)
      {
        /*Update the negative response to the tester*/
        if(udsdiag_bufferror[bufferidx] == DIAG_NOERROR)
        {
        udsdiag_bufferror[bufferidx]=DIAG_NRC_SRV_NOTSUPPORTED;
        }

      }
      else if(udsdiag_currreq == (udsdiagu8)DIAG_SECONDARYREQ)
      {
        /*Update the negative response to the tester*/
        if(udsdiag_bufferror[bufferidx] == DIAG_NOERROR)
        {
        udsdiag_buffcntrl[DIAG_SECONDARYREQ].makeresponse = DIAG_FALSE;
        }

      }
      else
      {

      }
      udsdiag_processingdone(bufferidx,VTP_SUCCESS);
    }

    else
    {
      if(bufferidx == (udsdiagu8)DIAG_SECONDARYREQ)
      {
        #if (DIAG_RESPONSE_ON_FUNC_REQ == DIAG_ENABLE)
        if(DIAG_ENABLE == udsdiag_srvinfotable[srv_index].responsefuncreq)
        {
          if(udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked == DIAG_FALSE)
          {
            //(void)memcpy(pudsdiagbuffer[DIAG_PRIMARYREQ],pudsdiagbuffer[DIAG_SECONDARYREQ],len)
            MEMCPY(pudsdiagbuffer[DIAG_PRIMARYREQ],pudsdiagbuffer[DIAG_SECONDARYREQ],len);
            ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
            udsdiag_buffcntrl[DIAG_PRIMARYREQ].currentsrvidx=udsdiag_buffcntrl[DIAG_SECONDARYREQ].currentsrvidx;
            udsdiag_buffcntrl[DIAG_PRIMARYREQ].bufferlocked = DIAG_TRUE;
            udsdiag_buffcntrl[DIAG_SECONDARYREQ].bufferlocked = DIAG_FALSE;
            udsdiag_physicalreqind(len);
            udsdiag_currreq_rcvd = (udsdiagu8)DIAG_SECONDARYREQ;
            udsdiag_buffcntrl[DIAG_PRIMARYREQ].ind_flag = DIAG_FALSE;
            udsdiag_buffcntrl[DIAG_SECONDARYREQ].ind_flag = DIAG_FALSE;
            DIAG_EXIT_CRITICAL_SECTION(ccr);
          }
          else
          {
              /*to be identified*/
          }
        }
        else
        {

        }
        #endif
      }
      else
      {

      }
    }


    if (srv_index != 0xFFu)
    {
    mainhandler((msgptr+1u),(len-(udsdiagu16)1));

    }
    else
    {
    }
  }

}
/* ===========================================================================

 Name:            udsdiag_testerpresenthandler

 Description:     Tester Present handling

 Inputs:          Length of Diagnostic Message

 Returns:         none

 =========================================================================*/

void udsdiag_testerpresenthandler(udsdiagu8 *pdiagdata,udsdiagu16 diagrequestlength)
{
  udsdiagu8 Response_Suppression;

  if(diagrequestlength == (udsdiagu16)1)
  {

    if(LOW_VOLT_SHUTDOWN(0) != TRUE )
    {

      Response_Suppression = (pdiagdata[0] & (udsdiagu8)0x80) >> 7u;
      pdiagdata[0] = pdiagdata[0] & (~(udsdiagu8)0x80u);

      switch(pdiagdata[0])
      {
        case 0x00u:
        if((UINT8)FALSE != Response_Suppression)
        {
          udsdiag_buffcntrl[udsdiag_currreq].makeresponse = DIAG_FALSE;
        }
        else
        {
        }
        break;
        default:
        if(udsdiag_currreq_rcvd == (udsdiagu8)DIAG_PRIMARYREQ)
        {
          udsdiag_bufferror[udsdiag_currreq]=DIAG_NRC_SUBFUNC_NOTSUPPORTED;
        }
        else
        {
          udsdiag_buffcntrl[udsdiag_currreq].makeresponse = DIAG_FALSE;
        }
        break;
      }
    }
    else
    {
      /* During LVSD0 */
      udsdiag_bufferror[udsdiag_currreq]=NRC_CONDITIONS_NOT_CORRECT;


    }
  }
  else
  {
    udsdiag_bufferror[udsdiag_currreq]=DIAG_NRC_INCORRECTLENGTH_INVALIDFORMAT;
  }

  udsdiag_processingdone(udsdiag_currreq,1u);
}

/* ===========================================================================

 Name:            udsdiag_setnegativeresponse

 Description:     Handling of Error Code

 Inputs:          Error Code

 Returns:         none

 =========================================================================*/
void udsdiag_setnegativeresponse(udsdiagu8 bufferindex,udsdiagu8 errorcode)
{
    udsdiag_bufferror[bufferindex] = errorcode;
}

/* ===========================================================================

 Name:            udsdiag_setpositiveresponse

 Description:     Set buffer pointer

 Inputs:          buffer pointer

 Returns:         none

 =========================================================================*/

void udsdiag_setpositiveresponse(udsdiagu16 reslen,udsdiagu8  const * const buffer_ptr)
{
    udsdiagu8 *msgptr;
    udsdiagu16 cnt;
    msgptr=pudsdiagbuffer[DIAG_PRIMARYREQ];

    for(cnt=1u; cnt<=reslen; cnt++)
    {
      msgptr[cnt]= buffer_ptr[cnt-1u];
    }
}

/* ===========================================================================

 Name:            udsdiag_processingdone

 Description:     Response Processing

 Inputs:          Response Length

 Returns:         none

 =========================================================================*/
void udsdiag_processingdone(udsdiagu8 bufferindex,udsdiagu16 reslen )
{
    udsdiagu8 *msgptr;
    udsdiagu8 ccr;
    msgptr=pudsdiagbuffer[bufferindex];

    if(udsdiag_buffcntrl[bufferindex].makeresponse == DIAG_TRUE)
    {
        STOPP2TIMER();
        STOPRPLIMITER();
        ccr = (udsdiagu8) DIAG_ENTER_CRITICAL_SECTION();
        udsdiag_buffcntrl[bufferindex].tx_ready = 1u;
        DIAG_EXIT_CRITICAL_SECTION(ccr);
        if(udsdiag_bufferror[bufferindex] != DIAG_NOERROR)
        {
            msgptr[1]=msgptr[0];
            msgptr[0]=DIAG_NEGRESPCODE;
            msgptr[2]=udsdiag_bufferror[bufferindex];
            udsdiag_bufflen[bufferindex]=DIAG_NEGRESPLEN;
        }
        else
        {
            msgptr[0]=udsdiag_srvinfotable[udsdiag_buffcntrl[bufferindex].\
                          currentsrvidx].responsesid;
            udsdiag_bufflen[bufferindex]=reslen+1u;

        }
    }
    else
    {
        udsdiag_postprocessing(bufferindex,VTP_SUCCESS);
    }
}

/* ===========================================================================

 Name:            udsdiag_sendnegativeresponse

 Description:     Sending Negative Response

 Inputs:          SID,Error code

 Returns:         none

 =========================================================================*/

void udsdiag_sendnegativeresponse(udsdiagu8 sid,udsdiagu8 errorcode)
{
    udsdiag_negresp[0]=0x7fu;
    udsdiag_negresp[1]=sid;
    udsdiag_negresp[2]=errorcode;
    (void)DIAG_TP_TRANSMIT(DIAG_TPCHANNEL, udsdiag_negresp, 3u);
}

/* ===========================================================================

 Name:            udsdiag_sendnegativeresponse

 Description:     Sending Negative Response

 Inputs:          SID,Error code

 Returns:         none

 =========================================================================*/
void udsdiag_restarttimer(void)
{
    STARTS3TIMER();
    STOPP2TIMER();
}

/*****************************************************************************
C L E A R C A S E    R E V I S I O N     N O T E S
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
For each change to this file, be sure to record:
1.   Who made the change and when the change was made.
2.   Why the change was made and the intended result.

Date                     By              Reason For Change
---------------------------------------------------------------------------------------------
10-Jan-13
Clearcase Rev 1.0        ranantha        Initial version for UDS diagnostics

RTC   Rev1.1             gmuthu      Updated the Honda related UDS requirements
*********************************************************************************************/
/*---------------------------------------------------------------------------
Date              : 03-July-2014
CDSID             : mgoud
Traceability      : RTC STORY 170604 and Task 172320
Change Description: added header file
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date              : 30-Oct-2015
CDSID             : schand15
Traceability      : RTC 454053
Change Description: Coverity Warning fix - Fdiag.c and LIN to BCAN GW
-----------------------------------------------------------------------------*/

