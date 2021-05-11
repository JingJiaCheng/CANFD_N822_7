/* ===========================================================================
 **
 **                     CONFIDENTIAL VISTEON CORPORATION
 **
 **  This is an unpublished work of authorship, which contains trade secrets,
 **  created in 2006.  Visteon Corporation owns all rights to this work and
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
 **  Name:           kwpdiag.c
 **
 **  Description:    KWP Diagnostics Layer
 **
 **  Organization:   Multiplex Core Technology
 **
 ** =========================================================================*/
/*****************************************************************************/
/* Include Files                                                             */
/*****************************************************************************/
#include <string.h>   					/* necessary for memcpy() */

#include "kwpdiag.h"
#include "kwpmgr.h"


/**************config**********************************/
#define KWPDIAG_P2_TIMECNT      (KWPDIAG_P2_TIME_INMSEC/KWPDIAG_CALLCYCLE_INMSEC)
#define KWPDIAG_S1_TIMECNT      (KWPDIAG_S1_TIME_INMSEC/KWPDIAG_CALLCYCLE_INMSEC)
#define KWPDIAG_RCRRPMAXTIMECNT ((KWPDIAG_RCRRPMAXTIME_INMSEC/KWPDIAG_CALLCYCLE_INMSEC) + KWPDIAG_P2_TIMECNT)

#define KWPDIAG_P3MAXTIMECNT    (KWPDIAG_P3MAXTIME_INMSEC/KWPDIAG_CALLCYCLE_INMSEC)
/***********end of config******************************/
kwpdiagu8 kwpdiag_currreq;
kwpdiagu8 kwpdiag_srv_pending;

/*Lets access this via */
kwpdiagu8 kwpdiag_currsess;
static kwpdiagu16 kwpdiag_p2timer;
static kwpdiagu16 kwpdiag_p3timer;
static kwpdiagu8 kwpdiag_skipsearch;
static KWPDIAG_bufferctrl_t kwpdiag_buffcntrl[KWPDIAG_NUMREQTYPE];
static kwpdiagu8  kwpdiag_bufferror[KWPDIAG_NUMREQTYPE];
static kwpdiagu16 kwpdiag_bufflen[KWPDIAG_NUMREQTYPE];
static kwpdiagu8 kwpdiag_primarybuffer[KWPDIAG_MAXPRIMARYBUFFLEN];
static kwpdiagu8 kwpdiag_secondarybuffer[KWPDIAG_MAXSECONDARYBUFFLEN];
static kwpdiagu8 kwpdiag_negresp[3];
static kwpdiagu32 kwpdiag_rplimiter;
static kwpdiagu8 kwpdiag_rcrpbuffer[3];
static kwpdiagu8 kwpdiag_rcrrpruning;
#if (KWPDIAG_RCRRP == KWPDIAG_ENABLE)
static void kwpdiag_stop_rplimiter(void);
#endif
/*****************************************************************************/
/* Private Macros                                                            */
/*****************************************************************************/
#define posthandler   (kwpdiag_srvinfotable[kwpdiag_buffcntrl[index].currentsrvidx].funchandler.pkwpdiag_posthandle)
#define mainhandler   (kwpdiag_srvinfotable[srv_index].funchandler.pkwpdiag_mainfunc)

#if (KWPDIAG_RCRRP != KWPDIAG_ENABLE)
#define STOPP2TIMER() 		(kwpdiag_p2timer=0u)
#else
#define STOPP2TIMERONLY() 	(kwpdiag_p2timer=0u)
#define STOPP2TIMER()		(kwpdiag_stop_rplimiter())
#endif

#define STOPP3TIMER() 		(kwpdiag_p3timer=0)
#define STARTP2TIMERONLY() 	(kwpdiag_p2timer=KWPDIAG_P2_TIMECNT)

#define STARTP3TIMER() 		(kwpdiag_p3timer=KWPDIAG_S1_TIMECNT)

#define GETP2TIMER() 		(kwpdiag_p2timer)
#define GETP3TIMER() 		(kwpdiag_p3timer)
#define DECP2TIMER() 		(kwpdiag_p2timer--)
#define DECP3TIMER() 		(kwpdiag_p3timer--)
#define INCP2TIMER() 		(kwpdiag_p2timer++)


#if (KWPDIAG_RCRRP == KWPDIAG_ENABLE)
#define STARTRPLIMITER() 		(kwpdiag_rplimiter=KWPDIAG_RCRRPMAXTIMECNT)
#define DECRPLIMITER() 	 		(kwpdiag_rplimiter--)
#define STARTP2TIMERRCRRPMAX()  (kwpdiag_p2timer=KWPDIAG_P3MAXTIMECNT)
#define GETRPLIMITER() 			(kwpdiag_rplimiter)
#define STOPRPLIMITER()			(kwpdiag_rplimiter = 0u)
#else
#define STARTRPLIMITER()
#define DECRPLIMITER()
#define STARTP2TIMER() 			STARTP2TIMERONLY()
#define STARTP2TIMERRCRRPMAX()
#endif

kwpdiagu16	SecureAccessTimer;



/*****************************************************************************/
/* Private Variable Definitions                                              */
/*****************************************************************************/
static kwpdiagu8 * pkwpdiagbuffer[KWPDIAG_NUMREQTYPE] =
{
		&kwpdiag_primarybuffer[0],
		&kwpdiag_secondarybuffer[0]
};



KWPDIAG_serviceinfo_t  const kwpdiag_srvinfotable[] =
{
		KWPDIAG_SRV_INFO_TABLE_LIST
};

kwpdiagu8 const kwpdiag_numsrv = (kwpdiagu8)( (kwpdiagu32)(sizeof(kwpdiag_srvinfotable)) / (kwpdiagu32)(sizeof(KWPDIAG_serviceinfo_t)) );
/*****************************************************************************/
/* Functions                                                                 */
/*****************************************************************************/
#if (KWPDIAG_RCRRP == KWPDIAG_ENABLE)
static void STARTP2TIMER (void)
{
	STARTP2TIMERONLY();
	STARTRPLIMITER();
}
static void kwpdiag_stop_rplimiter(void)
{
	STOPP2TIMERONLY();
	STOPRPLIMITER();
}
#endif

void kwpdiag_restarttimer(void)
{
	kwpbl_RestartTester();
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_init
 **
 ** Description:     Initialize the Diagnostics layer
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_init(void)
{
	kwpdiagu8 index;
	STOPP2TIMER();
	STOPP3TIMER();
	for(index=0; index<(kwpdiagu8)KWPDIAG_NUMREQTYPE; index++)
	{
		kwpdiag_buffcntrl[index].makeresponse=0;
		kwpdiag_buffcntrl[index].confirmation_rxed=0;
		kwpdiag_buffcntrl[index].tx_ready=0;
		kwpdiag_buffcntrl[index].bufferlocked=0;
		kwpdiag_buffcntrl[index].ind_flag=0;
		kwpdiag_buffcntrl[index].currentsrvidx=0;
		kwpdiag_bufferror[index]=KWPDIAG_NOERROR;
	}
	kwpdiag_currreq=KWPDIAG_NOREQ;
	kwpdiag_currsess=DEFAULTSESSION;
	kwpdiag_skipsearch=KWPDIAG_FALSE;
	kwpdiag_rcrrpruning=KWPDIAG_FALSE;
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_periodic
 **
 ** Description:     Periodic task for KWP Diag processing
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_periodic(void)
{
	kwpdiags8 index;
	kwpdiagu8 current_sess;
	kwpdiagu8 rcrp_limit = KWPDIAG_FALSE;
	/*kwpdiag_posthandler_t posthandler;*/
	kwpdiagu8 ret;


	for(index=0; index<(kwpdiags8)KWPDIAG_NUMREQTYPE; index++)
	{
		if(kwpdiag_buffcntrl[index].confirmation_rxed == KWPDIAG_TRUE)
		{

			kwpdiag_buffcntrl[index].confirmation_rxed = KWPDIAG_FALSE;

			/*posthandler = kwpdiag_srvinfotable[kwpdiag_buffcntrl[index].\
                          currentsrvidx].funchandler.pkwpdiag_posthandle;*/
			if(posthandler != NULL)
			{
				posthandler();
			}
		}
	}

	if(GET_SECACC_DELAY() != (kwpdiagu16) 0u)
	{
		DEC_SECACC_DELAY();
	}

	if(GETP3TIMER()!= (kwpdiagu16) 0)
	{
		DECP3TIMER();
		if(GETP3TIMER() == (kwpdiagu16)0u)
		{

			kwpdiag_P3timeout();
		}
		else
		{

		}
	}
	else
	{

	}
#if(KWPDIAG_RCRRP == KWPDIAG_ENABLE)

	if(GETRPLIMITER()!= (kwpdiagu16)0)
	{
		DECRPLIMITER();
		if(GETRPLIMITER() == 0u)
		{
			STOPP2TIMER();
			current_sess = kwpdiag_currsess;
			ApplDiagServiceTimeout();
			kwpdiag_init();/* Moved to ApplDiagServiceTimeout */
			/* added to avoid session change due to Init*/
			kwpdiag_currsess = current_sess;
			rcrp_limit=KWPDIAG_TRUE;
		}
		else
		{

		}
	}
	else
	{

	}
#endif
	if(rcrp_limit == KWPDIAG_FALSE)
	{
#if(KWPDIAG_RCRRP == KWPDIAG_ENABLE)

		if(GETP2TIMER() != (kwpdiagu16)0)
		{
			DECP2TIMER();
			if(GETP2TIMER() == (kwpdiagu16)0u)
			{

				kwpdiag_P2timeout();
			}
			else
			{

			}
		}
		else
		{

		}
#else

	if(GETP2TIMER() != (kwpdiagu16)0)
	{
		DECP2TIMER();
		if(!GETP2TIMER())
		{

			ApplDiagServiceTimeout();
		}
		else
		{

		}
	}
	else
	{

	}
#endif
for(index=(kwpdiags8)((kwpdiags8)KWPDIAG_NUMREQTYPE-1); index>=0; index--)
{
	if(kwpdiag_buffcntrl[index].ind_flag == KWPDIAG_TRUE)
	{
		STOPP3TIMER();

		kwpdiag_buffcntrl[index].ind_flag = KWPDIAG_FALSE;

		kwpdiag_dispatcher((kwpdiagu8)index);
	}
	else
	{
	}
}
if(kwpdiag_buffcntrl[kwpdiag_currreq].tx_ready == KWPDIAG_TRUE)
{
#if (VTP_NUM_CHANNEL_COUNT > 1)
	ret = KWPDIAG_TP_TRANSMIT(KWPDIAG_TPCHANNEL,
			pkwpdiagbuffer[kwpdiag_currreq],
			kwpdiag_bufflen[kwpdiag_currreq]);
#else
	ret = KWPDIAG_TP_TRANSMIT(pkwpdiagbuffer[kwpdiag_currreq], kwpdiag_bufflen[kwpdiag_currreq]);
#endif

	if(ret == KWPDIAG_SUCCESS)
	{

		kwpdiag_buffcntrl[kwpdiag_currreq].tx_ready = KWPDIAG_FALSE;

	}
	else
	{
	}
}
else
{
}
	}

}
/* ===========================================================================
 **
 ** Name:            kwpdiag_functionalgetbuffer
 **
 ** Description:     TP Interface to get the functional reception buffer.
 **
 ** Inputs:          datalength of the request
 **
 ** Returns:         pointer to the functional request buffer.
 **
 ** =========================================================================*/

/*TP Layer Interfaces*/
kwpdiagu8* kwpdiag_functionalgetbuffer (kwpdiagu16 dataLength)
{
	kwpdiagu8* pbuffer;

	kwpdiag_currreq = (kwpdiagu8)KWPDIAG_SECONDARYREQ;

	if((kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].bufferlocked == KWPDIAG_FALSE) &&\
			(kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].bufferlocked == KWPDIAG_FALSE))
	{
		if(dataLength > (kwpdiagu16)KWPDIAG_MAXSECONDARYBUFFLEN )
		{
#if (VTP_NUM_CHANNEL_COUNT > 1u)
			VTP_SetFC_Overflow(TP_DIAG_CHANNEL);
#else
			VTP_SetFC_Overflow();
#endif
			pbuffer= NULL;
		}
		else
		{
			kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].bufferlocked = KWPDIAG_TRUE;
			pbuffer=(pkwpdiagbuffer[KWPDIAG_SECONDARYREQ]);
		}
	}
	else
	{
		pbuffer= NULL;
	}
	return pbuffer;
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_physicalgetbuffer
 **
 ** Description:     TP Interface to get the Physical reception buffer.
 **
 ** Inputs:          datalength of the request
 **
 ** Returns:         pointer to the physical request buffer.
 **
 ** =========================================================================*/
kwpdiagu8* kwpdiag_physicalgetbuffer(kwpdiagu16 dataLength)
{

	kwpdiagu8* pbuffer;

	kwpdiag_currreq = (kwpdiagu8)KWPDIAG_PRIMARYREQ;

	if((kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].bufferlocked == KWPDIAG_FALSE) &&\
			(kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].bufferlocked == KWPDIAG_FALSE))
	{
		if(dataLength > (kwpdiagu16)KWPDIAG_MAXPRIMARYBUFFLEN )
		{
#if (VTP_NUM_CHANNEL_COUNT > 1u)
			VTP_SetFC_Overflow(TP_DIAG_CHANNEL);
#else
			VTP_SetFC_Overflow();
#endif

			pbuffer= NULL;
		}
		else
		{
			kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].bufferlocked = KWPDIAG_TRUE;
			pbuffer=(pkwpdiagbuffer[KWPDIAG_PRIMARYREQ]);

		}
	}
	else
	{
		pbuffer= NULL;
	}
	return pbuffer;
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_physicalreqind
 **
 ** Description:     TP Interface to indicate Reception of physical message
 **
 ** Inputs:          datalength of the request
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_physicalreqind(kwpdiagu16 dataLen)
{
	STARTP2TIMER();
	kwpdiag_bufferror[KWPDIAG_PRIMARYREQ] = KWPDIAG_NOERROR;
	kwpdiag_bufflen[KWPDIAG_PRIMARYREQ] = dataLen;
	kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].ind_flag = KWPDIAG_TRUE;
	kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].makeresponse = KWPDIAG_TRUE;
	kwpdiag_currreq = (kwpdiagu8)KWPDIAG_PRIMARYREQ;
#if (VTP_NUM_CHANNEL_COUNT > 1u)
	TpRxResetChannel(TP_DIAG_CHANNEL);
#else
	TpRxResetChannel();
#endif
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_functionalreqind
 **
 ** Description:     TP Interface to indicate Reception of functional message
 **
 ** Inputs:          datalength of the request
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_functionalreqind(kwpdiagu16 dataLength)
{
	kwpdiag_bufferror[KWPDIAG_SECONDARYREQ] = KWPDIAG_NOERROR;
	kwpdiag_bufflen[KWPDIAG_SECONDARYREQ] = dataLength;
	kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].ind_flag = KWPDIAG_TRUE;
	kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].makeresponse = KWPDIAG_TRUE;
	kwpdiag_currreq = (kwpdiagu8)KWPDIAG_SECONDARYREQ;
#if (VTP_NUM_CHANNEL_COUNT > 1u)
	TpFuncResetChannel(TP_DIAG_CHANNEL);
#else
	TpFuncResetChannel();
#endif
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_reqind
 **
 ** Description:     TP Interface to indicate Reception of functional message
 **
 ** Inputs:          datalength of the request
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_reqind(kwpdiagu16 dataLength)
{
	if(kwpdiag_currreq == (kwpdiagu8)KWPDIAG_PRIMARYREQ)
	{
		STARTP2TIMER();
		kwpdiag_bufferror[KWPDIAG_PRIMARYREQ] = KWPDIAG_NOERROR;
		kwpdiag_bufflen[KWPDIAG_PRIMARYREQ] = dataLength;
		kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].ind_flag = KWPDIAG_TRUE;
		kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].makeresponse = KWPDIAG_TRUE;
	}
	else if(kwpdiag_currreq == (kwpdiagu8)KWPDIAG_SECONDARYREQ)
	{
		kwpdiag_bufferror[KWPDIAG_SECONDARYREQ] = KWPDIAG_NOERROR;
		kwpdiag_bufflen[KWPDIAG_SECONDARYREQ] = dataLength;
		kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].ind_flag = KWPDIAG_TRUE;
#if (KWPDIAG_RESPONSE_ALL_ON_FUNC_REQ == KWPDIAG_ENABLE)
		kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].makeresponse = KWPDIAG_FALSE;
#else
		kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].makeresponse = KWPDIAG_TRUE;
#endif

	}
	else
	{
		/* Do Nothing*/
	}
#if (VTP_NUM_CHANNEL_COUNT > 1u)
	TpRxResetChannel(TP_DIAG_CHANNEL);
#else
	TpRxResetChannel();
#endif
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_confirmation
 **
 ** Description:     TP Interface to confirm Message Transmission
 **
 ** Inputs:
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_confirmation(kwpdiagu8 state)
{
	if((kwpdiagu8)VTP_NOTOK == state)
	{
		kwpdiag_postprocessing(kwpdiag_currreq,state);
	}
	else
	{
		if(kwpdiag_rcrrpruning == KWPDIAG_TRUE)
		{
			kwpdiag_rcrrpruning=KWPDIAG_FALSE;
		}
		else
		{
			kwpdiag_postprocessing(kwpdiag_currreq,state);
		}
	}
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_txerrorind
 **
 ** Description:     TP Interface to indicate Transmission Error
 **
 ** Inputs:
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_txerrorind(kwpdiagu8 state)
{
#if (VTP_NUM_CHANNEL_COUNT > 1u)
	TpRxResetChannel(TP_DIAG_CHANNEL);
#else
	TpRxResetChannel();
#endif

	kwpdiag_confirmation(state);
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_rxerrorind
 **
 ** Description:     TP Interface to indicate Reception Error
 **
 ** Inputs:
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_rxerrorind(kwpdiagu8 state)
{


#if (VTP_NUM_CHANNEL_COUNT > 1)
	TpRxResetChannel(TP_DIAG_CHANNEL);
#else
	TpRxResetChannel();
#endif
	STARTP3TIMER();

	kwpdiag_buffcntrl[kwpdiag_currreq].bufferlocked = KWPDIAG_FALSE;


	/*
    state = KWPDIAG_FALSE;
    if(state == VTP_ERROR)
    {
        if(kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].currentsrvidx != 0xFF)
        {
            STARTP3TIMER();
            sid = kwpdiag_srvinfotable[kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].\
                              currentsrvidx].requestsid;
            kwpdiag_sendnegativeresponse(sid,KWPDIAG_NRCTRANSFERABORTED);
        }
    }
    else
    {
    }*/
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_postprocessing
 **
 ** Description:
 **
 ** Inputs:
 **
 ** Returns:         none
 **
 ** =========================================================================*/

void kwpdiag_postprocessing(kwpdiagu8 bufferindex,kwpdiagu8 respdata)
{

	if(kwpdiag_bufferror[bufferindex] == KWPDIAG_NOERROR)
	{
		if(respdata == KWPDIAG_SUCCESS)
		{
			kwpdiag_buffcntrl[bufferindex].confirmation_rxed = KWPDIAG_TRUE;
		}
		else
		{
		}
	}
	STARTP3TIMER();
	if((bufferindex == (UINT8)KWPDIAG_PRIMARYREQ) || (bufferindex == (UINT8)KWPDIAG_SECONDARYREQ))
	{
		STOPP2TIMER();
	}

	kwpdiag_buffcntrl[bufferindex].bufferlocked = KWPDIAG_FALSE;

}
/* ===========================================================================
 **
 ** Name:            kwpdiag_P2timeout
 **
 ** Description:     P2 Timeout handling to send RCRRP
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_P2timeout(void)
{
	kwpdiagu8 ret;
	ret = kwpdiag_sendrcrrp();
	if ( ret != KWPDIAG_TRUE)
	{
		kwpdiag_rcrrpruning=KWPDIAG_FALSE;
		INCP2TIMER();
	}
	else
	{
	}
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_sendrcrrp
 **
 ** Description:     send RCRRP
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
kwpdiagu8 kwpdiag_sendrcrrp (void)
{

	kwpdiagu8 ret = KWPDIAG_FALSE;
	kwpdiag_rcrpbuffer[0]=KWPDIAG_NEGRESPCODE;
	kwpdiag_rcrpbuffer[1]=kwpdiag_primarybuffer[0];
	kwpdiag_rcrpbuffer[2]=KWPDIAG_RCRRPRESPONSE;
#if (VTP_NUM_CHANNEL_COUNT > 1)
	ret = KWPDIAG_TP_TRANSMIT(KWPDIAG_TPCHANNEL, kwpdiag_rcrpbuffer, 3u);
#else
	ret = KWPDIAG_TP_TRANSMIT(kwpdiag_rcrpbuffer, 3u);
#endif
	if(ret == KWPDIAG_SUCCESS )
	{
		kwpdiag_rcrrpruning=KWPDIAG_TRUE;
		STARTP2TIMERRCRRPMAX();
		ret = KWPDIAG_TRUE;
	}
	else
	{
		ret = KWPDIAG_FALSE;
	}
	return (ret);
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_P3timeout
 **
 ** Description:     Diag Session Time out Handling
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_P3timeout(void)
{
	STOPP2TIMER();
	if(kwpdiag_currsess != DEFAULTSESSION)
	{
		ApplDiagSessionTimeout();   /* Included for giving session timeout to diag */
		UPDATE_SESSION(SESSION_DEFAULT);
	}
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_dispatcher
 **
 ** Description:     Diagnostic Processing
 **
 ** Inputs:          Type of Message Buffer
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_dispatcher(kwpdiagu8 bufferidx)
{
	kwpdiagu16 len;
	kwpdiagu8 *msgptr;
	kwpdiagu8 index = 0u;
	kwpdiagu8 match = KWPDIAG_FALSE;
	static kwpdiagu8 srv_index=0xFF;

	len=kwpdiag_bufflen[bufferidx];
	msgptr=pkwpdiagbuffer[bufferidx];

	if( len == (kwpdiagu16)0)
	{
		kwpdiag_bufferror[bufferidx]=KWPDIAG_NRCSRVNOTSUPPORTED;
		kwpdiag_buffcntrl[bufferidx].makeresponse=KWPDIAG_FALSE;
		kwpdiag_processingdone(bufferidx,KWPDIAG_SUCCESS);
	}
	else
	{
		if(kwpdiag_skipsearch == KWPDIAG_FALSE)
		{
			for(index=0u; ( (kwpdiagu8)((index<kwpdiag_numsrv) && (match == KWPDIAG_FALSE)) == (kwpdiagu8)(KWPDIAG_TRUE) ); index++)
			{
				if(msgptr[0]==kwpdiag_srvinfotable[index].requestsid)
				{
					match = KWPDIAG_TRUE;
					if((bufferidx==(kwpdiagu8)KWPDIAG_PRIMARYREQ)||((bufferidx==(kwpdiagu8)KWPDIAG_SECONDARYREQ)&&(kwpdiag_srvinfotable[index].funcreq_supp==FUNCRQ_SUPP)))
					{
						if (match != (UINT8)KWPDIAG_FALSE)
						{
							/*SESSION CHECK for matching SID, subfunction*/
							if (kwpdiag_srvinfotable[index].sesssupp == NOSESSIONCHECK)
							{
								/*Lets not check the session supported for this case!*/
								if((msgptr[0]==0x10u)&&(msgptr[1]==0x85u)&&(bufferidx==(kwpdiagu8)KWPDIAG_SECONDARYREQ))
								{
									srv_index=0xFFu;
								}
								else
								{
									kwpdiag_buffcntrl[bufferidx].currentsrvidx=index;
									srv_index = index;
								}
							}
							else
							{
								/*We need to match if the current session & the SID
                                 session supported are matching to proceed further!*/
								if ((kwpdiag_currsess &
										kwpdiag_srvinfotable[index].sesssupp) != (UINT8)KWPDIAG_FALSE)
								{
									kwpdiag_buffcntrl[bufferidx].currentsrvidx=index;
									srv_index = index;
								}
								else
								{
									/*The session supported doesnt match with Curr Sess*/
									/*Update the NRC accordingly.*/
									kwpdiag_bufferror[bufferidx]=KWPDIAG_NRCNOTSUPPORTEDINACTIVESESS;
								}
							}
						}
						else
						{
							/*Either the SID or the SUBFUNCTION Didnt match!*/
						}
					}
				}
				else
				{}
			}
			if(srv_index == 0xFFu)
			{
				if(kwpdiag_bufferror[bufferidx] == (kwpdiagu8)KWPDIAG_NOERROR)
				{
					kwpdiag_bufferror[bufferidx]=KWPDIAG_NRCSRVNOTSUPPORTED;
				}
				kwpdiag_processingdone(bufferidx,0);
			}
			else
			{
				if(bufferidx == (kwpdiagu8)KWPDIAG_SECONDARYREQ)
				{
#if (KWPDIAG_RESPONSE_ON_FUNC_REQ == KWPDIAG_ENABLE)
#if (KWPDIAG_RESPONSE_ALL_ON_FUNC_REQ == KWPDIAG_DISABLE)
					if(KWPDIAG_ENABLE == kwpdiag_srvinfotable[kwpdiag_buffcntrl[bufferidx].currentsrvidx].responsefuncreq)
#endif
					{
						if(kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].bufferlocked == KWPDIAG_FALSE)
						{
							(void)memcpy(pkwpdiagbuffer[KWPDIAG_PRIMARYREQ],
									pkwpdiagbuffer[KWPDIAG_SECONDARYREQ],
									len);

							kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].currentsrvidx=kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].currentsrvidx;
							kwpdiag_buffcntrl[KWPDIAG_PRIMARYREQ].bufferlocked = KWPDIAG_TRUE;
							kwpdiag_buffcntrl[KWPDIAG_SECONDARYREQ].bufferlocked = KWPDIAG_FALSE;
							kwpdiag_physicalreqind(len);

							kwpdiag_skipsearch=KWPDIAG_TRUE;
						}
						else
						{
							/*to be identified*/
						}
					}
#endif
				}
			}
		}
		else
		{
			kwpdiag_skipsearch=KWPDIAG_FALSE;
		}
		if (srv_index != 0xFFu)
		{
			/*mainhandler = *(kwpdiag_srvinfotable[srv_index].funchandler.pkwpdiag_mainfunc);*/
			mainhandler((msgptr+1),(len-(kwpdiagu16)1));
			srv_index=0xFFu;
		}
		else
		{
		}
	}
}
/* ===========================================================================
 **
 ** Name:            kwpdiag_testerpresenthandler
 **
 ** Description:     Tester Present handling
 **
 ** Inputs:          Length of Diagnostic Message
 **
 ** Returns:         none
 **
 ** =========================================================================*/

void kwpdiag_testerpresenthandler(kwpdiagu8 *pdiagdata,kwpdiagu16 diagrequestlength)
{
	if(diagrequestlength == (kwpdiagu16)1)
	{
		switch(pdiagdata[0])
		{
		case 0x01: /* MMC Response Required */
			kwpdiag_processingdone(kwpdiag_currreq,0u);
			break;
		case 0x02: /* MMC No Response Required */
			kwpdiag_postprocessing(kwpdiag_currreq,KWPDIAG_SUCCESS);
			break;
		default:
			kwpdiag_bufferror[kwpdiag_currreq]=KWPDIAG_NRCSUBFUNCNOTSUPPORTED;
			kwpdiag_processingdone(kwpdiag_currreq,0u);
			break;
		}
	}
	else
	{
		kwpdiag_bufferror[kwpdiag_currreq]=KWPDIAG_NRCSUBFUNCNOTSUPPORTED;
		kwpdiag_processingdone(kwpdiag_currreq,0u);
	}
	/*kwpdiag_processingdone(kwpdiag_currreq,0);*/
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_setnegativeresponse
 **
 ** Description:     Handling of Error Code
 **
 ** Inputs:          Error Code
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_setnegativeresponse(kwpdiagu8 bufferindex,kwpdiagu8 errorcode)
{
	kwpdiag_bufferror[bufferindex] = errorcode;
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_setpositiveresponse
 **
 ** Description:     Set buffer pointer
 **
 ** Inputs:          buffer pointer
 **
 ** Returns:         none
 **
 ** =========================================================================*/

void kwpdiag_setpositiveresponse(kwpdiagu16 reslen,kwpdiagu8 const *buffer_ptr)
{
	kwpdiagu8 *msgptr;
	kwpdiagu16 cnt;
	msgptr=pkwpdiagbuffer[kwpdiag_currreq];

	for(cnt=1; cnt<=reslen; cnt++)
	{
		msgptr[cnt]= buffer_ptr[cnt-1u];
	}
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_processingdone
 **
 ** Description:     Response Processing
 **
 ** Inputs:          Response Length
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpdiag_processingdone(kwpdiagu8 bufferindex,kwpdiagu16 reslen )
{
	kwpdiagu8 *msgptr;

	msgptr=pkwpdiagbuffer[bufferindex];
	if(kwpdiag_buffcntrl[bufferindex].makeresponse == KWPDIAG_TRUE)
	{
		STOPP2TIMER();
		kwpdiag_rcrrpruning=KWPDIAG_FALSE;

		kwpdiag_buffcntrl[bufferindex].tx_ready = 1u;

		if(kwpdiag_bufferror[bufferindex] != KWPDIAG_NOERROR)
		{
			msgptr[1]=msgptr[0];
			msgptr[0]=KWPDIAG_NEGRESPCODE;
			msgptr[2]=kwpdiag_bufferror[bufferindex];
			kwpdiag_bufflen[bufferindex]=KWPDIAG_NEGRESPLEN;
		}
		else
		{
			msgptr[0]=kwpdiag_srvinfotable[kwpdiag_buffcntrl[bufferindex].\
										   currentsrvidx].responsesid;
			kwpdiag_bufflen[bufferindex]=(reslen+1u);

		}
		kwpdiag_buffcntrl[bufferindex].bufferlocked = KWPDIAG_FALSE;
	}
	else
	{
		kwpdiag_postprocessing(bufferindex,KWPDIAG_SUCCESS);
	}
}

/* ===========================================================================
 **
 ** Name:            kwpdiag_stopp3timer
 **
 ** Description:     Stop the P3 Timer
 **
 ** Inputs:          Channel
 **
 ** Returns:         none
 **
 ** =========================================================================*/

/*void kwpdiag_stopp3timer(kwpdiagu8 channel)
{
    STOPP3TIMER();
}*/
/* ===========================================================================
 **
 ** Name:            kwpdiag_sendnegativeresponse
 **
 ** Description:     Sending Negative Response
 **
 ** Inputs:          SID,Error code
 **
 ** Returns:         none
 **
 ** =========================================================================*/

void kwpdiag_sendnegativeresponse(kwpdiagu8 sid,kwpdiagu8 errorcode)
{
	kwpdiag_negresp[0]=KWPDIAG_NEGRESPCODE;
	kwpdiag_negresp[1]=sid;
	kwpdiag_negresp[2]=errorcode;
#if (VTP_NUM_CHANNEL_COUNT > 1)
	(void)KWPDIAG_TP_TRANSMIT(KWPDIAG_TPCHANNEL, kwpdiag_negresp, 3u);
#else
	(void)KWPDIAG_TP_TRANSMIT(kwpdiag_negresp, 3u);
#endif

}

/* ===========================================================================
 **
 ** Name:            kwpdiag_FuncNotSupported
 **
 ** Description:     Sending Negative Response
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/

void kwpdiag_FuncNotSupported(void)
{
	kwpdiag_bufferror[kwpdiag_currreq]=KWPDIAG_SRVNOTSUPPORTEDINACTIVEDIAGMODE;
	kwpdiag_processingdone(kwpdiag_currreq,0u);
}

/* ===========================================================================
 **
 ** Name:            kwpbl_send_busyrepeat_request
 **
 ** Description:     To Send Busy Repeat NRC based on application P2 Timeout
 **
 ** Inputs:          none
 **
 ** Returns:         none
 **
 ** =========================================================================*/
void kwpbl_send_busyrepeat_request(void)
{
	UINT8  routinebuff[8];
	routinebuff[0]=KWPDIAG_NEGRESPCODE; 		/* 7F */
	routinebuff[1]=kwpdiag_primarybuffer[0];
	routinebuff[2]=KWPDIAG_NRCBUSYREPEATREQUEST;	/* 21 */
	kwpdiag_srv_pending= FALSE;
	(void)KWPDIAG_TP_TRANSMIT(routinebuff, 3u);//Return value is not checked

}

void kwpbl_RestartTester(void )
{
	STARTP3TIMER();
}



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

04-Apr-09     4     vkannan      Updated with QAC fixes and removed unwanted
                                    TP channel parameter used by Diag.

17-Apr-09    5      vkannan     Peer Reveiw Changes of typedef changes in
                                   SMIS review 19792.

22-Apr-09   6       vkannan       1. To FIX QAC Level 2 warning 3211
                                 "The global identifier '%s' is defined but not used."
                                 2. Update the services list based on the
                                 Mahindra Diag spec after     Grand meeting
 ******************************************************************************/
