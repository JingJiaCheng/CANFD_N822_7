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

  Name:           Can_Il.c

  Description:    CAN Interaction Layer

                  Interaction Layer to Support Signal/Message Based Interface

  Organization:   Multiplex Subsystems

 =========================================================================*/
/* ===========================================================================
  I N C L U D E   F I L E S
 =========================================================================*/

#include "Can_defs.h"
#include "CanIl_Util.h"
#include "Can_CSec.h"
#include "CanIl_Util.h"
#include "CanIl.h"

#ifdef CANIL_IFSUPPORT
#include "CanDisp.h"
#endif

#define IL_UNUSED_VAR(X)  do { if(0 == (X)){} } while(0)

/* ===========================================================================
  P R I V A T E   F U N C T I O N   P R O T O T Y P E S
 =========================================================================*/

static void
CanIlSaveReceivedMessage( CAN_IL_RMD const * const pRmd, CAN_UINT16 const canFrameHandle, CAN_HWINST const hwInst );

static void
CanIlProcessReceiveFrame( CAN_UINT16 const canFrameHandle, CAN_HWINST const hwInst );

#ifdef CAN_IL_REQ_FRAME_SUPPORT

static void
CanIlProcessPendingReceiveRequest( CAN_IL_RX_FRAME const * const pcanRxFrame, CAN_HWINST const hwInst );

#endif

static void
CanIlInitTx( CAN_HWINST const hwInst);

static void
CanIlTxTaskService( CAN_HWINST const hwInst);

static void
CanIlInitTxFrameStatus( CAN_HWINST const hwInst);

static void
CanIlInitTxFrameData( CAN_HWINST const hwInst);

static void
CanIlInitRxFrameData( CAN_HWINST const hwInst, CAN_UINT16 canFrameHndl );

static void
CanIlInitRx( CAN_HWINST const hwInst);

static void
CanIlTxInitializationMsgs( CAN_HWINST const hwInst);

#ifdef CANIL_TX_TIMEOUT_SUPPORT

static void
CanIlInitTxPeriodicTimeouts( CAN_HWINST const hwInst);

#endif

static void
CanIlInitTxPeriodicMessageData( CAN_HWINST const hwInst);


void IC_0x510_RollingCounter_Checksum(CAN_UINT8 iHandle);

void IC_0x525_RollingCounter_Checksum(CAN_UINT8 iHandle);

extern CAN_UINT8 Can_Ch0_Il_Tx_Frame_Data[ Can_Ch0_Il_Tx_Num_Messages ][ CAN_MAX_DATA_LENGTH ];

/****************************************************************************
*
*
****************************************************************************/

static CAN_UINT8 const
CanIlBitWidthMasks[ CAN_GPNUM_9 ] =
{
    CAN_IL_0_BITS_WIDE,  /* 0 Bits Wide  */
    CAN_IL_1_BITS_WIDE,  /* 1 Bit  Wide  */
    CAN_IL_2_BITS_WIDE,  /* 2 Bits Wide  */
    CAN_IL_3_BITS_WIDE,  /* 3 Bits Wide  */
    CAN_IL_4_BITS_WIDE,  /* 4 Bits Wide  */
    CAN_IL_5_BITS_WIDE,  /* 5 Bits Wide  */
    CAN_IL_6_BITS_WIDE,  /* 6 Bits Wide  */
    CAN_IL_7_BITS_WIDE,  /* 7 Bits Wide  */
    CAN_IL_8_BITS_WIDE   /* 8 Bits Wide  */
};

/**************************************************************************/
/* CAN Channel0 Related variables and function prototypes *****************/
/**************************************************************************/
static CAN_UINT8  Can_Ch0_Il_Rx_DLC_Ptr[Can_Ch0_Il_Rx_Num_Messages];

#if (CAN_IL_NUM_OF_CHANNELS > 1)

static CAN_UINT8  Can_Ch1_Il_Rx_DLC_Ptr[Can_Ch1_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

static CAN_UINT8  Can_Ch2_Il_Rx_DLC_Ptr[Can_Ch2_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

static CAN_UINT8  Can_Ch3_Il_Rx_DLC_Ptr[Can_Ch3_Il_Rx_Num_Messages];

#endif


#ifdef CAN_IL_REQ_FRAME_SUPPORT

static CAN_UINT32 Can_Ch0_Il_Rx_Ident[Can_Ch0_Il_Rx_Num_Messages];

#if (CAN_IL_NUM_OF_CHANNELS > 1)

static CAN_UINT32 Can_Ch1_Il_Rx_Ident[Can_Ch1_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

static CAN_UINT32 Can_Ch2_Il_Rx_Ident[Can_Ch2_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

static CAN_UINT32 Can_Ch3_Il_Rx_Ident[Can_Ch3_Il_Rx_Num_Messages];

#endif

#endif


/****************************************************************************
 QAC_DEVIATION_MESSAGE_START 
****************************************************************************/
static CAN_IL_RX_FRAME const* pCan_Il_Rx_Frame[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_IL_RX_FRAME const*) Can_Ch0_Il_Rx_Frame_Table

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_IL_RX_FRAME const*) Can_Ch1_Il_Rx_Frame_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_IL_RX_FRAME const*) Can_Ch2_Il_Rx_Frame_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_IL_RX_FRAME const*) Can_Ch3_Il_Rx_Frame_Table

#endif
};

/****************************************************************************
*
*
****************************************************************************/
CAN_IL_TX_FRAME const* pCan_Il_Tx_Frame[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_IL_TX_FRAME const*) Can_Ch0_Il_Tx_Frame_Table

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_IL_TX_FRAME const*) Can_Ch1_Il_Tx_Frame_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_IL_TX_FRAME const*) Can_Ch2_Il_Tx_Frame_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_IL_TX_FRAME const*) Can_Ch3_Il_Tx_Frame_Table

#endif

};

/****************************************************************************
*
*
****************************************************************************/

static CAN_IL_SIGNAL const * pCan_Il_Tx_Signals[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_IL_SIGNAL const*) Can_Ch0_Il_Tx_Signals

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_IL_SIGNAL const*) Can_Ch1_Il_Tx_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_IL_SIGNAL const*) Can_Ch2_Il_Tx_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_IL_SIGNAL const*) Can_Ch3_Il_Tx_Signals

#endif

};

/****************************************************************************
*
*
****************************************************************************/

static const CAN_UINT16 Can_Il_Num_Of_Tx_Ids[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT16) Can_Ch0_Il_Tx_Num_Messages

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT16) Can_Ch1_Il_Tx_Num_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT16) Can_Ch2_Il_Tx_Num_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT16) Can_Ch3_Il_Tx_Num_Messages

#endif

};

/****************************************************************************
*
*
****************************************************************************/

static const CAN_UINT16 Can_Il_Num_Of_Tx_Signals[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT16) Can_Ch0_Il_Tx_Num_Signals

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT16) Can_Ch1_Il_Tx_Num_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT16) Can_Ch2_Il_Tx_Num_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT16) Can_Ch3_Il_Tx_Num_Signals

#endif

};

/****************************************************************************
*
*
****************************************************************************/

static const CAN_UINT16 Can_Il_Num_Of_Rx_Ids[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT16) Can_Ch0_Il_Rx_Num_Messages

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT16) Can_Ch1_Il_Rx_Num_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT16) Can_Ch2_Il_Rx_Num_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT16) Can_Ch3_Il_Rx_Num_Messages

#endif

};

/****************************************************************************
*
*
****************************************************************************/

static const CAN_UINT16 Can_Il_Num_Of_Rx_Signals[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT16) Can_Ch0_Il_Rx_Num_Signals

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT16) Can_Ch1_Il_Rx_Num_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT16) Can_Ch2_Il_Rx_Num_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT16) Can_Ch3_Il_Rx_Num_Signals

#endif

};

/****************************************************************************
*
*
****************************************************************************/

CAN_IL_TX_MESSAGE const * pCan_Il_Tx_Message[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_IL_TX_MESSAGE const *) Can_Ch0_Il_Tx_Messages

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_IL_TX_MESSAGE const *) Can_Ch1_Il_Tx_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_IL_TX_MESSAGE const *) Can_Ch2_Il_Tx_Messages

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_IL_TX_MESSAGE const *) Can_Ch3_Il_Tx_Messages

#endif

};


/****************************************************************************
*
*
****************************************************************************/

static CAN_IL_SIGNAL const * pCan_Il_Rx_Signals[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_IL_SIGNAL const*) Can_Ch0_Il_Rx_Signals

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_IL_SIGNAL const*) Can_Ch1_Il_Rx_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_IL_SIGNAL const*) Can_Ch2_Il_Rx_Signals

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_IL_SIGNAL const*) Can_Ch3_Il_Rx_Signals

#endif

};


/****************************************************************************
*
* Receive data pointer for can channel0 checksum calculation and Alive counter
*
****************************************************************************/
Can_Il_Rx_Data_Pointer const * pCan_Il_Receive_Ptr = 
{
	(Can_Il_Rx_Data_Pointer const*) Can_Ch0_Il_Receive_Ptr

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 ,  (Can_Il_Rx_Data_Pointer const*) Can_Ch1_Il_Receive_Ptr

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 ,  (Can_Il_Rx_Data_Pointer const*) Can_Ch2_Il_Receive_Ptr

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 ,  (Can_Il_Rx_Data_Pointer const*) Can_Ch3_Il_Receive_Ptr

#endif
};

/****************************************************************************
*
*
****************************************************************************/

static CAN_UINT8 * const pCan_Il_Rx_DLC[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT8 *) Can_Ch0_Il_Rx_DLC_Ptr

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT8 *) Can_Ch1_Il_Rx_DLC_Ptr

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT8 *) Can_Ch2_Il_Rx_DLC_Ptr

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT8 *) Can_Ch3_Il_Rx_DLC_Ptr

#endif

};

#ifdef CAN_IL_REQ_FRAME_SUPPORT
/****************************************************************************
*
*
****************************************************************************/

static CAN_UINT32 const * pCan_Il_Rx_Ident[CAN_IL_NUM_OF_CHANNELS] = 
{
   (CAN_UINT32 const *) Can_Ch0_Il_Rx_Ident

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 , (CAN_UINT32 const *) Can_Ch1_Il_Rx_Ident

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 , (CAN_UINT32 const *) Can_Ch2_Il_Rx_Ident

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 , (CAN_UINT32 const *) Can_Ch3_Il_Rx_Ident

#endif

};

#endif


/****************************************************************************
*
*
****************************************************************************/
static pTxPrecopyfn const * Can_Il_Tx_Precopy_Function_Table[CAN_IL_NUM_OF_CHANNELS] = 
{
       Can_Ch0_Il_Tx_Precopy_Function_Table

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 ,     Can_Ch1_Il_Tx_Precopy_Function_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

 ,     Can_Ch2_Il_Tx_Precopy_Function_Table

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

 ,     Can_Ch3_Il_Tx_Precopy_Function_Table

#endif

};


/****************************************************************************
*
*
****************************************************************************/
static CAN_UINT8 CanCh0MessageIndicationFlag[Can_Ch0_Il_Rx_Num_Messages];

#if (CAN_IL_NUM_OF_CHANNELS > 1)

static CAN_UINT8  CanCh1MessageIndicationFlag[Can_Ch1_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

static CAN_UINT8  CanCh2MessageIndicationFlag[Can_Ch2_Il_Rx_Num_Messages];

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

static CAN_UINT8  CanCh3MessageIndicationFlag[Can_Ch3_Il_Rx_Num_Messages];

#endif


/****************************************************************************
*
*
****************************************************************************/
static CAN_UINT8 * const pCanMsgIndFlag[CAN_IL_NUM_OF_CHANNELS] =
{

         CanCh0MessageIndicationFlag

#if (CAN_IL_NUM_OF_CHANNELS > 1)

       , CanCh1MessageIndicationFlag

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 2)

       , CanCh2MessageIndicationFlag

#endif

#if (CAN_IL_NUM_OF_CHANNELS > 3)

       , CanCh3MessageIndicationFlag

#endif

};


/****************************************************************************
*
*
****************************************************************************/

#define CAN_IL_TX_MAX_NUM_OF_MESSAGES      Can_Ch0_Il_Tx_Num_Messages

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 #if (CAN_IL_TX_MAX_NUM_OF_MESSAGES < Can_Ch1_Il_Tx_Num_Messages)
  #undef CAN_IL_TX_MAX_NUM_OF_MESSAGES
  #define CAN_IL_TX_MAX_NUM_OF_MESSAGES      Can_Ch1_Il_Tx_Num_Messages
 #endif

  #if (CAN_IL_NUM_OF_CHANNELS > 2)

   #if (CAN_IL_TX_MAX_NUM_OF_MESSAGES < Can_Ch2_Il_Tx_Num_Messages
    #undef CAN_IL_TX_MAX_NUM_OF_MESSAGES
    #define CAN_IL_TX_MAX_NUM_OF_MESSAGES      Can_Ch2_Il_Tx_Num_Message
   #endif

   #if (CAN_IL_NUM_OF_CHANNELS > 3)

     #if (CAN_IL_TX_MAX_NUM_OF_MESSAGES < Can_Ch3_Il_Tx_Num_Messages
	  #undef CAN_IL_TX_MAX_NUM_OF_MESSAGES
      #define CAN_IL_TX_MAX_NUM_OF_MESSAGES      Can_Ch3_Il_Tx_Num_Message
	 #endif

   #endif  /* CAN_IL_NUM_OF_CHANNELS > 3 */

 #endif  /* CAN_IL_NUM_OF_CHANNELS > 2 */

#endif  /* CAN_IL_NUM_OF_CHANNELS > 1 */


#define CAN_IL_RX_MAX_NUM_OF_MESSAGES      Can_Ch0_Il_Rx_Num_Messages

#if (CAN_IL_NUM_OF_CHANNELS > 1)

 #if (CAN_IL_RX_MAX_NUM_OF_MESSAGES < Can_Ch1_Il_Rx_Num_Messages)
  #undef CAN_IL_RX_MAX_NUM_OF_MESSAGES
  #define CAN_IL_RX_MAX_NUM_OF_MESSAGES      Can_Ch1_Il_Rx_Num_Messages
 #endif

  #if (CAN_IL_NUM_OF_CHANNELS > 2)

   #if (CAN_IL_RX_MAX_NUM_OF_MESSAGES < Can_Ch2_Il_Rx_Num_Messages
    #undef CAN_IL_RX_MAX_NUM_OF_MESSAGES
    #define CAN_IL_RX_MAX_NUM_OF_MESSAGES      Can_Ch2_Il_Rx_Num_Message
   #endif

   #if (CAN_IL_NUM_OF_CHANNELS > 3)

     #if (CAN_IL_RX_MAX_NUM_OF_MESSAGES < Can_Ch3_Il_Rx_Num_Messages
	  #undef CAN_IL_RX_MAX_NUM_OF_MESSAGES
      #define CAN_IL_RX_MAX_NUM_OF_MESSAGES      Can_Ch3_Il_Rx_Num_Message
	 #endif

   #endif  /* CAN_IL_NUM_OF_CHANNELS > 3 */

 #endif  /* CAN_IL_NUM_OF_CHANNELS > 2 */

#endif  /* CAN_IL_NUM_OF_CHANNELS > 1 */

/************************************************************************************/
static CAN_UINT8 Can_Il_Tx_Status[CAN_IL_NUM_OF_CHANNELS][CAN_IL_TX_MAX_NUM_OF_MESSAGES];
static CAN_UINT8 Can_Il_Rx_Status[CAN_IL_NUM_OF_CHANNELS][CAN_IL_RX_MAX_NUM_OF_MESSAGES];

/* ===========================================================================
  Interaction Layer Status Variables
 =========================================================================*/
static CAN_UINT8 Can_Il_Status[CAN_IL_NUM_OF_CHANNELS];

/* ===========================================================================
  P U B L I C   F U N C T I O N S
 =========================================================================*/
/* ===========================================================================

 Name:            CanIlInit

 Description:     Initialize the Interaction Layer

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlInit( CAN_HWINST const hwInst )
{
    CAN_UINT8 ChannelIndex = 0x0;

	CAN_UINT8 FuncExecSt = E_OK;
    
    if(CAN_IL_NUM_OF_CHANNELS < hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if(FuncExecSt != E_NOT_OK)
	{
	    if(CAN_IL_NUM_OF_CHANNELS == hwInst)
		{
		    ChannelIndex = 0;
		}
		else
		{
		    ChannelIndex = hwInst;
		}

	    /*if(0xFF != ChannelIndex)*/
		{
		    #if (CAN_IL_NUM_OF_CHANNELS > 1)
		    do
			{
			#endif

				/* Initialize Tx and Rx Data Structures */
		        CanIlInitTx( ChannelIndex );

		        CanIlInitRx( ChannelIndex );

		        /* Initialize the Interaction Layer Status */
		        CanIlSetIlMode( ChannelIndex, ILSTATUS, IL_STATUS_SUSPEND, 0, TRUE );

	        #if (CAN_IL_NUM_OF_CHANNELS > 1)

	            if(CAN_IL_NUM_OF_CHANNELS == hwInst) 
	            {
	                ChannelIndex++;
				}

			} while( (CAN_IL_NUM_OF_CHANNELS == hwInst) && (CAN_IL_NUM_OF_CHANNELS > ChannelIndex) );

            #endif

		}
	}

}


/* ===========================================================================

 Name:            CanIlGetIlMode

 Description:     Set/Clear Interaction Layer Operation Mode

                  This function is intended to support suspension of
                  Interaction Layer operation in the BusOFF condition

 Inputs:          none

 Returns:         none

 =========================================================================*/
CAN_UINT8
CanIlGetIlMode( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 iHandle )
{

    CAN_UINT8 retState = SUCCESS;
    
    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		retState = IL_STATUS_ERROR;
		#endif
	}

    if(retState != IL_STATUS_ERROR)
    {
	    CanEnterCriticalSection();

		switch(iStatus)
		{

		    case ILSTATUS:
			    retState = Can_Il_Status[hwInst];
		    break;

	        case ILRXSTATUS:

			    if(Can_Il_Num_Of_Rx_Ids[hwInst] < iHandle)
				{
				    #ifdef CANUTIL_ENABLED
				    CanUtil_ReportError();
					#else
					retState = IL_STATUS_ERROR;
					#endif
				}
			    
			    if(retState != IL_STATUS_ERROR)
				{
			        retState = Can_Il_Rx_Status[hwInst][iHandle];
				}

		    break;

			case ILTXSTATUS:

			    if(Can_Il_Num_Of_Tx_Ids[hwInst] < iHandle)
				{
				    #ifdef CANUTIL_ENABLED
				    CanUtil_ReportError();
					#else
					retState = IL_STATUS_ERROR;
					#endif
				}

				if(retState != IL_STATUS_ERROR)
				{
			        retState = Can_Il_Tx_Status[hwInst][iHandle];
				}

		    break;

	        default:

			    #ifdef CANUTIL_ENABLED
		        CanUtil_ReportError();
			    #else
			    retState = IL_STATUS_ERROR;
			    #endif

		    break;

		}

	    CanExitCriticalSection();
	}

    return(retState);

}


/* ===========================================================================

 Name:            CanIlSetIlMode

 Description:     Set/Clear Interaction Layer Operation Mode

                  This function is intended to support suspension of
                  Interaction Layer operation in the BusOFF condition

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlSetIlMode( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 iState, CAN_UINT8 iHandle, CAN_UINT8 setMode )
{
	CAN_UINT8 FuncExecStatus = SUCCESS;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}

    if( (setMode != TRUE) && (setMode != FALSE) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}

    if(FuncExecStatus != FAILURE)
	{
	    CanEnterCriticalSection();
		
		switch(iStatus)
		{

		    case ILSTATUS:
			    CanIlSetIlStatus( hwInst, iState, setMode );
		    break;

	        case ILRXSTATUS:
			    CanIlSetRxStatus( hwInst, iHandle, setMode );
		    break;

			case ILTXSTATUS:
			    CanIlSetTxStatus( hwInst, iHandle, setMode );
		    break;

	        default:
			    #ifdef CANUTIL_ENABLED
		        CanUtil_ReportError();
			    #endif
		    break;

		}

	    CanExitCriticalSection();
	}

}


/* ===========================================================================

 Name:            CanIlSetIlStatus

 Description:     Set/Clear Interaction Layer Operation Status

                  This function is intended to support suspension of
                  Interaction Layer operation in the BusOFF condition

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlSetIlStatus( CAN_HWINST const hwInst, CAN_UINT8 iStatus, CAN_UINT8 setMode )
{
	CAN_UINT8 FuncExecStatus = SUCCESS;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}

	if( (setMode != TRUE) && (setMode != FALSE) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}
	
	if(FuncExecStatus != FAILURE)
	{
	    /* Set Interaction Layer Operation */
        CanIlUtilSetClearBits(&Can_Il_Status[hwInst], iStatus, setMode);
	}
}


/* ===========================================================================

 Name:            CanIlResume

 Description:     Resume Interaction Layer Operation

                  This function is intended to support resumption of
                  Interaction Layer operation when Network Management
                  recovers from a BusOFF condition.

                  This function causes all transmit periodic messages to
                  reset their timing, but the periodic transmit data is
                  left unchanged.

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlResume( CAN_HWINST const hwInst )
{
	CAN_UINT8 FuncExecStatus = SUCCESS;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}

	if(FuncExecStatus != FAILURE)
	{
	    CanEnterCriticalSection();

	    /* Initialize the Interaction Layer Status */
	    CanIlSetIlMode(hwInst, ILSTATUS, IL_STATUS_RESUME_ALL, 0, FALSE);

	    /* Initialize the Status of All Tx Frames */
	    CanIlInitTxFrameStatus( hwInst );

	    /* Set up for Transmission of Initialization Messages */
	    CanIlTxInitializationMsgs( hwInst );

	    CanExitCriticalSection();
	}
}


/* ===========================================================================

 Name:            CanIlTxTask

 Description:     Interaction Layer Periodic Transmit Task

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlTxTask( CAN_HWINST const hwInst )
{
    CAN_UINT8 FuncExecStatus = SUCCESS;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecStatus = FAILURE;
		#endif
	}
    
	if(FuncExecStatus != FAILURE)
	{
	    /* Check for Interaction Layer Task Suspended */
	    if (0 == (CanIlUtilTestBits(&Can_Il_Status[hwInst], (IL_STATUS_SUSPEND | IL_STATUS_TX_SUSPEND))))
	    {
	        /* Service the Interaction Layer Transmit Task */
	        CanIlTxTaskService(hwInst );
	    }
	}
}


/* ===========================================================================

 Name:            CanIlTxPutSignal

 Description:     Put Signal into Transmitted CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 ============================================================================*/
CAN_BOOLEAN
CanIlTxPutSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 const numBytes, CAN_HWINST const hwInst )
{
    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_IL_SIGNAL const * pcanTxSignalHdl;

    CAN_UINT16  frameHandle;

    CAN_BOOLEAN validSig = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		validSig = FALSE;
		#endif
	}

    if(NULL == pBuffer)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		validSig = FALSE;
		#endif
	}

    if(validSig != FALSE)
	{
	    if( ((CAN_UINT16) Can_Il_Num_Of_Tx_Signals[hwInst]) <= sigHandle )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			validSig = FALSE;
			#endif
		}

	    if(validSig != FALSE)
		{
		    pcanTxSignalHdl  = pCan_Il_Tx_Signals[hwInst];
		    pcanTxFrameHdl   = pCan_Il_Tx_Frame[hwInst];

		    CanEnterCriticalSection();

		    /* First Set the Signal Value */
		    validSig = CanIlTxSetSignal( sigHandle, pBuffer, numBytes, hwInst );

		    /* Check for Valid Signal Update */
		    if (TRUE == validSig)
		    {
		        /* Get the Frame in Which the Signal Resides... */
		        frameHandle = pcanTxSignalHdl[ sigHandle ].frmHandle;

		        /* Point to the Frame Attributes */
		        pcanTxFrame = &pcanTxFrameHdl[ frameHandle ];

		        /* Check for Event Based Transmission Enabled */
		        if (0 != (CanIlUtilTestBits( &pcanTxFrame->txAttributes, IL_TX_ATTR_EVENT)) )
		        {

		#ifdef CAN_IL_TX_BURST_MODE

		            if ( (0 == CanIlUtilTestBits(&(pcanTxFrame->txAttributes), IL_TX_ATTR_BURST)) ||
		                 (0 == CanIlUtilTestBits((pcanTxFrame->pTxStatus) ,IL_TX_STATUS_BURST_ACTIVE)) )
		            {
		                /* Set the Event Transmission Request Status Bit */
		                CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_EVENT_TX_PENDING, TRUE );
		            }

		#else

		            /* Set the Event Transmission Request Status Bit */
		            CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_EVENT_TX_PENDING, TRUE );

		#endif
		        }

		    } /* if (TRUE == validSig) */

			CanExitCriticalSection();
		}
	}

    /* Return Valid Signal Flag */
    return( validSig );
}

/* ===========================================================================

 Name:            CanIlTxSetSignal

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
CAN_BOOLEAN
CanIlTxSetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst)
{

    CAN_UINT8  sigBuffer[ CAN_MAX_DATA_LENGTH + 1 ] = {0};

    CAN_IL_SIGNAL const * pcanTxSignalDesc;

    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_SIGNAL const * pcanTxSignalHdl;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_UINT8 const * pFrom;

    CAN_UINT8 * pTo;

    CAN_UINT8 * pFrameData;

    CAN_UINT16  canFrameHandle;

    CAN_UINT8   msByteMask;

    CAN_UINT8   lsByteMaskComp;

    CAN_UINT8   msBitPos;

    CAN_UINT8   lsBitPos;

    CAN_UINT8   SignalLength;

    CAN_UINT8   nCopyBytes;

    CAN_UINT8   tempSigValue;

    CAN_UINT8   sigStartIndex;

    CAN_UINT8   tempSigByteValue;

    CAN_UINT8   iByte;

    CAN_BOOLEAN validSig = TRUE;

    CAN_UINT8   nSigBytes;

    CAN_UINT8   bitMask;

    CAN_UINT8   lsByteIndex;
    CAN_UINT8   msByteIndex;


    if(CAN_IL_NUM_OF_CHANNELS > hwInst)
    {
        /* Check that the Pointer to the Buffer is Not NULL */
        if(NULL != pBuffer)
        {
            /* Check that the Signal Handle is in Range */
            if( ((CAN_UINT16) Can_Il_Num_Of_Tx_Signals[hwInst]) > sigHandle )
            {
                #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
                if( (0 != numBytes) && (CAN_MAX_DATA_LENGTH >= numBytes) )
                {
                #else
                    IL_UNUSED_VAR(numBytes);
                #endif

                    pcanTxSignalHdl = pCan_Il_Tx_Signals[hwInst];

                    pcanTxFrameHdl  = pCan_Il_Tx_Frame[hwInst];
                    
                    /* Check that the Signal Handle is in Range and that the Pointer to the Buffer is Not NULL */
                    pcanTxSignalDesc = &pcanTxSignalHdl[sigHandle];

                    /* Get the Signal Descriptor for this Signal. Determine the CAN Frame Holding this Signal */
                    canFrameHandle = pcanTxSignalDesc->frmHandle;

                    /* Get the Pointer to the CAN Frame Attributes */
                    pcanTxFrame    = &pcanTxFrameHdl[ canFrameHandle ];

                    /* Get the Pointer to the CAN Frame Data */
                    pFrameData = pcanTxFrame->pTxData;

                    lsBitPos = pcanTxSignalDesc->lsBit;
                    msBitPos = pcanTxSignalDesc->msBit;
                    if (pcanTxSignalDesc->msByte != pcanTxSignalDesc->lsByte)
                    {
                        SignalLength = (8-lsBitPos) + 8*(pcanTxSignalDesc->lsByte-pcanTxSignalDesc->msByte-1) + (msBitPos+1);
                    }
                    else
                    {
                        SignalLength = msBitPos-lsBitPos+1;
                    }

                    #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
                        nSigBytes = numBytes;
                    #else
                        nSigBytes = pcanTxSignalHdl[sigHandle].nBytes;
                    #endif

                    lsByteIndex = pcanTxSignalDesc->lsByte;
                    msByteIndex = pcanTxSignalDesc->msByte;
                    
                    /* Check if the Signal is an Integral Number of Bytes and Aligned on a CAN Frame Boundary */
                    if( (0 == (CanIlUtilTestBits(&lsBitPos, 0x07))) &&  (0 == (SignalLength & 0x07)))
                    {
                        if(nSigBytes >= 1)
                        {
                            pFrom = &pBuffer[ 0 ];
                            pTo = &(pFrameData[ pcanTxSignalDesc->msByte ]);

                            #if (CANIL_BYTEENDIANNESS == LITTLE)
                                CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes);
                            #else
                                CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
                            #endif
                        }
                    }
                    else if ((0 == (CanIlUtilTestBits(&lsBitPos, 0x07))) &&  (0 != (SignalLength & 0x07)))
                    {
                        if(nSigBytes >= 1)
                        {
                            pFrom = &pBuffer[ 0 ];
                            pTo = &(pFrameData[ pcanTxSignalDesc->msByte + 1]);

                            #if (CANIL_BYTEENDIANNESS == LITTLE)
                                CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes - 1);
                            #else
                                CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
                            #endif
                        }
                        
                        
                        /*   Signal lsBit is aligned on a Data Frame byte boundary. In this
                           case all but the MSByte can be copied directly into the
                           transmit frame data; the MSByte needs to be properly masked. */
                         CanEnterCriticalSection();

                         msByteMask = CanIlBitWidthMasks[ pcanTxSignalDesc->msBit + 1 ];

                         tempSigByteValue = pBuffer[ nSigBytes - 1 ];

                         /* First Clear the Signal Bits in the MSByte... */
                         CanIlUtilSetClearBits( &pFrameData[ pcanTxSignalDesc->msByte ], msByteMask, FALSE );

                         tempSigByteValue &= msByteMask;

                         /* ...Then Update the Signal Bits in the MSByte */
                         pFrameData[ pcanTxSignalDesc->msByte ] |= tempSigByteValue;

                         CanExitCriticalSection();
                    }
                    /* Extensive Manipulation of the Transmitted Signal is Required */
                    else
                    {
                        if(pcanTxSignalDesc->msByte == pcanTxSignalDesc->lsByte)
                        {
                            CanEnterCriticalSection();

                            msByteMask = CanIlBitWidthMasks[ SignalLength ];

                            tempSigByteValue = pBuffer[ 0 ];

                            tempSigByteValue = (CAN_UINT8)((CAN_UINT16)tempSigByteValue << (pcanTxSignalDesc->lsBit));

                            msByteMask = msByteMask << (pcanTxSignalDesc->lsBit);

                            /* First Clear the Signal Bits in the MSByte... */
                            CanIlUtilSetClearBits( &pFrameData[ pcanTxSignalDesc->msByte ], msByteMask, FALSE );

                            tempSigByteValue &= msByteMask;

                            /* ...Then Update the Signal Bits in the MSByte */
                            pFrameData[ pcanTxSignalDesc->msByte ] |= tempSigByteValue;

                            CanExitCriticalSection();
                        }
                        else
                        {
                            
                            /* Shifting and Masking Will be Required to Put the Signal
                             Into the CAN Frame, so First Copy the Transmit Bytes into the
                             Working Buffer. First determine if the transmitted signal
                             spans more bytes than the actual number of signal bytes. */
                            nCopyBytes = (lsByteIndex - msByteIndex) + 1;

                            /* Left Shift All of the Bytes except for the LSByte, Get LSBits from the Next Byte */

                            /* Get the Bit Mask for this Width */
                            bitMask = CanIlBitWidthMasks[ 8 - lsBitPos ];
                            sigBuffer[ 0 ] = pBuffer[ 0 ] << lsBitPos;

                            if(nCopyBytes > 1)
                            {
                                for (iByte = 1; iByte < nCopyBytes; iByte++)
                                {
                                    /* Left Shift Each Byte, Based on lsBitIndex Value */
                                    sigBuffer[ iByte ] = (pBuffer[ iByte ] << lsBitPos);

                                    tempSigValue = pBuffer[ iByte - 1 ] & CAN_MASK8_COMPLEMENT( bitMask );

									tempSigValue = tempSigValue >> (8 - lsBitPos);
                                    
//                                    sigBuffer[ iByte ] &= CAN_MASK8_COMPLEMENT( bitMask );			//delete by sli34 

                                    sigBuffer[ iByte ] |= tempSigValue;
                                }

                                /* Now Process the LSByte */
                                sigBuffer[ nCopyBytes ] = pBuffer[ nCopyBytes - 1 ] & CAN_MASK8_COMPLEMENT( bitMask );

								sigBuffer[ nCopyBytes ] = sigBuffer[ nCopyBytes ] >> (8 - lsBitPos);
                            }



                            /* Determine the MSByte and LSByte (Complement) Mask Values */
                            msByteMask = CanIlBitWidthMasks[ msBitPos + 1 ];

                            lsByteMaskComp = CanIlBitWidthMasks[ lsBitPos ];

                            
                            /* Copy the inner data bytes to the transmit data buffer (Exclude MSByte and LSByte) */
                            pFrom = &sigBuffer[ 1 ];
                            pTo = &(pFrameData[ msByteIndex + 1 ]);

                            CanEnterCriticalSection();
                            
                            CanIlUtilCopyByteinReverse( pFrom, pTo, (nCopyBytes - CAN_GPNUM_2) );

                            sigStartIndex = 0;

                            
                            /* Update the MSByte and LSByte Signal Bits...First Clear the Signal Bits...*/

                            pFrameData[ lsByteIndex ] &= lsByteMaskComp;

                            pFrameData[ msByteIndex ] &= CAN_MASK8_COMPLEMENT(msByteMask);

                            /*...Then OR in the Actual Signal Data */
                            pFrameData[ lsByteIndex ] |= sigBuffer[ sigStartIndex ];

                            pFrameData[ msByteIndex ] |= sigBuffer[ nCopyBytes - 1 ];

                            CanExitCriticalSection();
                        }

                    } /* else */

                #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
                }
                #endif
            }
            else
            {
                #ifdef CANUTIL_ENABLED
                CanUtil_ReportError();
                #endif

                validSig = FALSE;
            }
        }
        else
        {
            #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
            #endif

            validSig = FALSE;
        }
    }
    else
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #endif

        validSig = FALSE;
    }

    /* Return Valid Signal Flag */
    return(validSig);
}


/* ===========================================================================

 Name:            CanIl_RxIndication

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Message Received

 Inputs:          none

 Returns:         none

 =========================================================================*/
void 
CanIl_RxIndication(CAN_HWINST /*const*/ hwInst, CAN_UINT16 const canFrameHandle, CAN_RMD const * const pRmd)
{
    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

#ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT

    CAN_BOOLEAN ValidMessage = CAN_FALSE;

#endif

   CAN_BOOLEAN FuncExecSt = TRUE;

   CAN_IL_RMD CanIlRmd;

   CAN_UINT8 ByteIndex = 0;

   CAN_UINT8 * pCanMsgInd = NULL;

   /*Special handle for physical ch1 IL RX msg.They are mapped to logical ch0 IL*/
   if(NULL == pRmd) /*Coverity 10339248*/
   {
	#ifdef CANUTIL_ENABLED
	   CanUtil_ReportError();
	#else
	   FuncExecSt = FALSE;
	#endif
	}
	else
	{
	}



	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    /*
     Check that the Pointer to the RMD is Not NULL
    */

	if(FuncExecSt != FALSE)
	{
		/* Check for Frame Handle in Range */
	    if( ((CAN_TMH) Can_Il_Num_Of_Rx_Ids[hwInst]) <= canFrameHandle )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}

	    if(FuncExecSt != FALSE)
		{
		    /* Get Frame Attributes */
		    pcanRxFrameHdl =  pCan_Il_Rx_Frame[hwInst];
		    
		    pcanRxFrame    = &pcanRxFrameHdl[canFrameHandle];

	        pCanMsgInd = pCanMsgIndFlag[hwInst];


		    /* Check for Interaction Layer Task Suspended */
		    if ( 0 == (CanIlUtilTestBits( &Can_Il_Status[hwInst], IL_STATUS_SUSPEND)) )
			{
					#ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT

		            ValidMessage = CanIlVerifyReceivedFrame( hwInst, pRmd, canFrameHandle );

					if( CAN_FALSE != ValidMessage )
					{
					#endif

	                    CanIlRmd.Size = pRmd->Size;

	                    CanIlRmd.Vector = pRmd->Vector; /*todo ?*/

	                    for(ByteIndex = 0; ByteIndex < CanIlRmd.Size; ByteIndex++)
						{
	                        CanIlRmd.Data[ByteIndex] = pRmd->Data[ByteIndex];
						}

					    /* Save the Received Data */
					    CanIlSaveReceivedMessage( &CanIlRmd,  canFrameHandle, hwInst );

	                    pCanMsgInd[canFrameHandle] = TRUE;

					    /* Set the Receive Pending Flag for this Frame */
					    /*CanIlSetIlMode(hwInst, ILRXSTATUS, IL_RX_STATUS_RX_PENDING, canFrameHandle, TRUE);*/

					    /* Check for Receive Timeout Monitoring Enabled */
		                if ( (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_TIMEOUT_MONITOR)) &&
		                     (0 != CanIlUtilTestBits(&Can_Il_Rx_Status[hwInst][canFrameHandle], IL_RX_STATUS_TIMEOUT_MONITOR )))
				        {
				            if( (pcanRxFrame->pRxTimeoutCount) != NULL )
					        {
			                    /* Initialize the Missing Message Timeout Counter */
			                    *(pcanRxFrame->pRxTimeoutCount) = pcanRxFrame->timeOut;
							}
				        }

				    #ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT
					}
					else
					{
					    CanIlHandleInvalidRxFrame();
					}
					#endif
		    }
		}
	}

}


#ifdef CAN_IL_REQ_FRAME_SUPPORT
/* ===========================================================================

 Name:            CanIlHookRequestReceive

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Request Frame Received (Request to Transmit)

 Inputs:          pRmd: Pointer to Receive Message Data Structure

                  srcAddress: Source Address (Already Extracted from CAN ID)

 Returns:         none

 =========================================================================*/
void
CanIlHookRequestReceive( CAN_IL_RMD const * const pRmd, CAN_HWINST const hwInst )
{
    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_IL_TMD const * pcanTxTmd;

    CAN_UINT32  canIdPfPdBytes;

    CAN_UINT16  iHandle;

    CAN_BOOLEAN matchFound;

    /* Initialize the Match Found Flag */
    matchFound = FALSE;

    CAN_BOOLEAN FuncExecSt = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}
    /*
     Check that the Pointer to the RMD is Not NULL
    */
    if(NULL == pRmd)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    pcanTxFrameHdl = pCan_Il_Tx_Frame[hwInst];

	    /*
	     Get the PF-PD Bytes...
	     (Data Bytes 0 and 1 of Received Message)
	    */
	    canIdPfPdBytes  =  (((CAN_UINT32) pRmd->Data[ 0 ]) << CAN_GPNUM_16);

	    canIdPfPdBytes |=  (((CAN_UINT32) pRmd->Data[ 1 ]) << CAN_GPNUM_8);

	    /*
	     Determine Receive Frame Type...
	     Presently Only Type 2 Interaction Layer Transmit Frames
	     Are Supported (5 MSBits of 1st PF MSByte all 1's)
	    */
	    if ( IL_FRAME_TYPE_MASK == (CanIlUtilTestBits(&canIdPfPdBytes, IL_FRAME_TYPE_MASK)) )
	    {
	        /* Initialize Handle */
	        iHandle = 0;

	        /* Search for 16 Bit PF Match in Transmit CAN ID's (Type 2) */
	        do
	        {
	            /* Get Pointer to Frame Attributes */
	            pcanTxFrame    = &pcanTxFrameHdl[iHandle];

	            /* Get Pointer to the Transmit Data Structure */
	            pcanTxTmd      = pcanTxFrame->pcanTmd;

	            /* Check 16 Bit PF Bytes of Type 2 Tx Frames */
	            if ((CanIlUtilTestBits(&pcanTxTmd->Identifier.I32, IL_PF_DA_MASK)) == canIdPfPdBytes)
	            {
	                /* Match Found */
	                matchFound = TRUE;

	                /* Check for Event Mode Enabled */
	                if ( (0 != (CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_EVENT))) )
	                {
	                    /* Set Event Transmit Pending Flag */
	                    CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_EVENT_TX_PENDING, TRUE );
	                }

	            }
	            else
	            {
	                /* Check the Next Transmit Frame */
	                iHandle++;
	            }

	        } while ((((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst]) > iHandle) && (FALSE == matchFound));

	    } /* Type 2 Frame Requested */
	}
}

#endif /* CAN_IL_REQ_FRAME_SUPPORT */

/* ===========================================================================

 Name:            CanIl_TxConfirmation

 Description:     Callback from Multi-Instance CAN Driver Indicating
                  Message Transmission Completed

                  This function is assumed to be called with interrupts
                  masked. This function is called from within a CAN
                  driver ISR. A flag is set here indicating that the
                  specified CAN frame has completed transmission that
                  results in a transmit complete notification to the
                  application as part of the Interaction Layer task
                  processing.

                  If the Transmit Message Handle is greater than
                  0x7FFF, it is assumed to be a transmitted request
                  frame for a receive message. In this case, 0x8000
                  must be subtracted from the transmit message
                  handle to get the handle of the corresponding
                  receive frame.

 Inputs:          hTxMsg: Transmit Message Handle

 Returns:         none

 =========================================================================*/
void
CanIl_TxConfirmation( CAN_HWINST const hwInst, CAN_TMH const hTxMsg )
{
    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

#ifdef CAN_IL_REQ_FRAME_SUPPORT

	CAN_UINT16 hRxMsg;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

#endif

    CAN_UINT8 FuncExecSt = TRUE;

#if defined(CAN_IL_TX_BURST_MODE)

    CAN_IL_TX_BURST_PERIODIC const * pcanTxBurstPeriodic;

#endif

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

	if(FuncExecSt != FALSE)
	{
		/* Check for a Valid Transmit Message Handle */
	    if( ((CAN_TMH) Can_Il_Num_Of_Tx_Ids[hwInst]) <= hTxMsg )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}

	    if(FuncExecSt != FALSE)
		{
	#ifdef CAN_IL_REQ_FRAME_SUPPORT

		    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

	#endif

		    pcanTxFrameHdl = pCan_Il_Tx_Frame[hwInst];

		    /* Get the Frame Attributes for this Message */
		    pcanTxFrame    = &pcanTxFrameHdl[ hTxMsg ];

		    /* Get the Pointer to the Periodic Attributes */
		    /*pcanTxPeriodic = pcanTxFrame->pcanPerAttr;*/

	        /* Get the Default (Normal Mode) Periodic Reset Value */
		    /*periodicResetValue = pcanTxPeriodic->period;*/

		    /* Check for Interaction Layer Task Suspended */
		    if ( 0 == (CanIlUtilTestBits(&Can_Il_Status[hwInst], (IL_STATUS_SUSPEND))) )
		    {
			    /* Check for Transmit Complete Notification Enabled */
			    if ( 0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_TXC_NOTIFY) )
			    {
					/*if ((0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_PERIODIC)) &&
					    (CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][hTxMsg], IL_TX_STATUS_PERIODIC) == IL_TX_STATUS_PERIODIC))
			        {
						*(pcanTxPeriodic->pTxPeriodicCount) = (periodicResetValue);
					}*/

					if ( 0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_EVENT) )
					{
						/* Reset the Delay Counter to the Minimum Transmit Delay */
						*(pcanTxFrame->pTxDelayCount) = pcanTxFrame->minDelay;
					}

			        /* Check for NULL Pointer */
			        if (NULL != pTxConfirmationFunc)
			        {
			            /* Call the Transmit Complete Callback Function */
			            pTxConfirmationFunc( hTxMsg );
			        }

		#if defined(CAN_IL_TX_BURST_MODE)

			        /* Get the Burst Periodic Attributes */
			        pcanTxBurstPeriodic = pcanTxFrame->pcanBurstAttr;

			        /* Check for Burst Mode Attribute for this Message */
			        if (0 != CanIlUtilTestBits(&(pcanTxFrame->txAttributes), IL_TX_ATTR_BURST))
			        {
			            /* Check for Burst Mode Transmissions Complete */
			            if (0 != CanIlUtilTestBits(((pcanTxFrame->pTxStatus)), IL_TX_STATUS_BURST_COMPLETE))
			            {
			                /* Get the Burst Periodic Attributes */
			                pcanTxBurstPeriodic = pcanTxFrame->pcanBurstAttr;

			                /* Check for NULL Pointer */
			                if (NULL != pTxConfirmationFunc)
			                {
			                    /* Call the Transmit Complete Callback Function */
			                    pTxConfirmationFunc( hTxMsg );
			                }

			                /* Clear Burst Transmit Complete Notification Status Bit */
			                CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_BURST_COMPLETE, FALSE );

			            } /*  if (0 != ((*(pcanTxFrame->pTxStatus)) & IL_TX_STATUS_BURST_COMPLETE)) */

			        } /* if (0 != ((pcanTxFrame->txAttributes) & IL_TX_ATTR_BURST)) */

		#endif

			    } /* if (0 != (pTxFrame->txAttributes & IL_TX_ATTR_TXC_NOTIFY)) */

			#ifdef CAN_IL_REQ_FRAME_SUPPORT

			    else
			    {
			        /* Assume Transmit Completion for Receive Request Frame... */
			        if (IL_RX_REQ_TX_MSG_HANDLE_OFFSET < hTxMsg)
			        {
			            /* Compute the Corresponding Receive Frame Handle */
			            hRxMsg = hTxMsg - IL_RX_REQ_TX_MSG_HANDLE_OFFSET;

			            /* Check for Receive Frame in Range */
			            if (((CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst]) > hRxMsg)
			            {
			                /* Get the Receive Frame Attributes for this Message */
			                pcanRxFrame   =  &pcanRxFrameHdl[hRxMsg];

			                /* Check for Receive Request Transmission Enabled */
			                if (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_RECEIVE_REQUEST))
			                {
			                    /* Clear Status Bit Indicating Wait Transmit Request Complete */
			                    CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_WAIT_RX_REQ_TXC, FALSE );

			                } /* if (0 != (pcanTxFrame->txAttributes & IL_TX_ATTR_TXC_NOTIFY)) */

			            } /* if (hRxMsg < Can_Il_Num_Of_Rx_Ids) */

			        } /* if (hTxMsg > IL_RX_REQ_TX_MSG_HANDLE_OFFSET) */

			    } /* else */

		   #endif /* CAN_IL_REQ_FRAME_SUPPORT */
		   }
	   }
   }
}

/* ===========================================================================

 Name:            CanIlRxTask

 Description:     Task to Process Received Messages in the Software Queue

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlRxTask( CAN_HWINST const hwInst )
{
    CAN_UINT16 iFrame;

#ifdef CAN_IL_REQ_FRAME_SUPPORT

	CAN_UINT8 ilrxReqOncedone = 0;
	CAN_UINT8 return_val;

#endif /* CAN_IL_REQ_FRAME_SUPPORT */

	CAN_UINT8 FuncExecSt = TRUE;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    /* Check for Interaction Layer Task Suspended */
	    if (0 == CanIlUtilTestBits(&Can_Il_Status[hwInst], IL_STATUS_SUSPEND))
	    {
	        for ( iFrame = 0; iFrame < ((CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst]); iFrame++ )
	        {
	            CanIlProcessReceiveFrame( iFrame, hwInst );
				
	        } /* for ( iFrame = 0; iFrame < IL_RX_NUM_MESSAGES; iFrame++ ) */

		   
		    #ifdef CAN_IL_REQ_FRAME_SUPPORT

			/* One request will be waiting for response at a time */
			for( iFrame =  ((CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst] ); (((ilrxReqOncedone & IL_RX_REQ_ISSUED) == 0) && (iFrame >((CAN_UINT16) 0))); iFrame--) 
			{ 			
				return_val = ( (CAN_UINT8)CanIlRxRequestMessage((iFrame - 1) , 1 , hwInst ));

				ilrxReqOncedone = (ilrxReqOncedone | ((CAN_UINT8)return_val));
			}
		    #endif /* CAN_IL_REQ_FRAME_SUPPORT */

	    } /* if (0 == (il_status & IL_STATUS_SUSPEND)) */
	}
}


/* ===========================================================================

 Name:            CanIlRxGetMessage

 Description:     Get all Container (Related) Signals in a Message

 Inputs:          msgHandle: Message Handle

                  pBuffer:   Pointer to Message Buffer

                  numBytes:  Total Number of Bytes in the Message

 Returns:         validMsg:  Indicates Success (TRUE) or Failure (FALSE)

 =========================================================================*/
CAN_BOOLEAN
CanIlRxGetMessage( CAN_UINT16 const msgHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 const numBytes, CAN_HWINST const hwInst )
{
    CAN_UINT16  sigHandle;

    CAN_UINT8   numBytesSignal;

    CAN_UINT8   numSignals;

    CAN_UINT8   index;

    CAN_UINT8   iBufIndex;

    CAN_IL_RX_FRAME const * pcanRxFrmeTbl;

    CAN_IL_SIGNAL const * pcanRxSignalHdl;

    CAN_BOOLEAN ValidMessage = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ValidMessage = FALSE;
		#endif
	}

	/*
     Check that the Pointer to the Buffer is Not NULL
    */
    if(NULL == pBuffer)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		ValidMessage = FALSE;
		#endif
	}

	if(ValidMessage != FALSE)
    {
		/*
	     Check that the Message Handle is in Range
	    */
	    if( ((CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst]) <= msgHandle )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			ValidMessage = FALSE;
			#endif
		}

		if(ValidMessage != FALSE)
	    {
		    pcanRxSignalHdl = pCan_Il_Rx_Signals[hwInst];

		    /* Check if Requested Number of Bytes Matches Signal Size */
		    /*if(pcanRxSignalHdl[msgHandle].nBytes != numBytes)
			{
			    #ifdef CANUTIL_ENABLED
			    CanUtil_ReportError();
				#else
				ValidMessage = FALSE;
				#endif
			}*/

		    /*if(ValidMessage != FALSE)
		    {*/
		    	pcanRxFrmeTbl =  pCan_Il_Rx_Frame[hwInst];

			    /* Get the Number of Signals in the Message */
			    numSignals = pcanRxFrmeTbl[msgHandle].nSignals;

			    /*
			     Requested Number of Bytes Matches the Message Descriptor
			     for the Total Number of Bytes in the Message, so...
			     Initialize the Buffer Copy Index
			    */
			    iBufIndex = 0;

			    /* Protect the Transfer in a Critical Section */
			    CanEnterCriticalSection();

			    for (index = 0; index < numSignals; index++)
			    {
			        /* Get the Next Signal Handle */
			        sigHandle = pcanRxFrmeTbl[msgHandle].SignalStartIndex + index;

			        /* Get the Number of Bytes in the Next Signal */
			        numBytesSignal  = (CAN_UINT8)(pcanRxSignalHdl[sigHandle].nBytes);
			        /*numBytesSignal = Can_Il_Rx_Signals[ sigHandle ].nBytes;*/

			        /* Get the Next Signal Bytes and Copy Them into the Buffer */
			        (void) CanIlRxGetSignal( sigHandle, &(pBuffer[ iBufIndex ]), numBytesSignal, hwInst );

			        /*
			         Increment the Buffer Index by the Number of Bytes in
			         the Last Signal Retrieved
			        */
			        iBufIndex += numBytesSignal;
			    }

			    CanExitCriticalSection();
			/*}*/
		}
	}

    /* Return Flag Indication Success or Failure */
    return(ValidMessage);
}


#ifdef CAN_IL_REQ_FRAME_SUPPORT
/* ===========================================================================

 Name:            CanIlRxRequestMessage

 Description:     Issue Network Request for Received Message

 Inputs:          msgHandle: Message Handle

                  nRequests: Total Number of Requests

 Returns:         validReq:  Indicates Success (TRUE) or Failure (FALSE)

 =========================================================================*/
CAN_UINT8
CanIlRxRequestMessage(CAN_UINT16 const msgHandle, CAN_UINT8 const nRequests, CAN_HWINST const hwInst )
{
    CAN_IL_RX_FRAME const * pcanRxFrame;

	CAN_IL_RX_FRAME_REQUEST const * pcanRxFrameReq;

    CAN_UINT8 validReq = TRUE;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		validReq = FALSE;
		#endif
	}

	/*
     Check that the Message Handle is in Range
    */
    if( ((CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst]) <= msgHandle )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		validReq = FALSE;
		#endif
	}

    if(validReq != FALSE)
	{
	    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

	    /* Get Pointer to Received Frame Attributes */
	    pcanRxFrame    = &pcanRxFrameHdl[msgHandle];

	    /*
	     Check for Receive Request Enabled AND
	     Requests Not Currently Active
	    */
	    if ((0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_RECEIVE_REQUEST)) &&
	        (0 != CanIlUtilTestBits((pcanRxFrame->pRxStatus), IL_RX_STATUS_RX_REQ_ACTIVE)))
	    {
			/*validReq = (validReq | IL_RX_REQ_ISSUED);*/
			validReq = VALID_RX_REQ_ISSUED;

	        /* Get Pointer to Receive Frame Request Attributes */
	        pcanRxFrameReq = pcanRxFrame->pcanRxRequest;
			
	        /* Initialize Number of Receive Request Transmissions */
			/* Check if the request is already issued*/
			if( CanIlUtilTestBits((pcanRxFrameReq->pReqStatus), IL_RX_REQ_ISSUED) == 0 )
			{
				*(pcanRxFrameReq->pNumReqs) = nRequests;

				/* Set Receive Request Start and Active Status Bits */
				CanIlUtilSetClearBits( pcanRxFrame->pRxStatus,
									  (IL_RX_STATUS_RX_REQ_ACTIVE |
									   IL_RX_STATUS_REQ_TX_START ), TRUE);

				CanIlUtilSetClearBits( (pcanRxFrameReq->pReqStatus),IL_RX_REQ_ISSUED, TRUE);
			}
		
	    }
	}

    return(validReq);
}
#endif /* CAN_IL_REQ_FRAME_SUPPORT */


/* ===========================================================================

 Name:            CanIlRxGetSignal

 Description:     Extract Signal from Received CAN Frame

 Inputs:          sigHandle:  Signal Handle

 Returns:         validSig: Signal Value Valid Flag

 =========================================================================*/
CAN_BOOLEAN
CanIlRxGetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst )
{

    CAN_UINT8  sigBuffer[ CAN_MAX_DATA_LENGTH ];

    CAN_IL_SIGNAL const * pcanRxSignalDesc;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_UINT8 const * pFrom;

    CAN_UINT8  * pTo;

    CAN_UINT8  * pFrameData;

    CAN_UINT16  canFrameHandle;

    CAN_UINT8   numBits;

    CAN_UINT8   bitMask;

    CAN_UINT8   msByteIndex;

    CAN_UINT8   lsByteIndex;

    CAN_UINT8   msBitIndex;

    CAN_UINT8   lsBitIndex;

    CAN_UINT8   nCopyBytes;

    CAN_UINT8   tempSigValue;

    CAN_UINT8   sigStartIndex;

    CAN_UINT8   iByte;

    CAN_IL_SIGNAL const * pcanRxSignalHdl;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_BOOLEAN validSig = TRUE;

    CAN_UINT8   nSigBytes;


    if(CAN_IL_NUM_OF_CHANNELS > hwInst)
    {
        if(NULL != pBuffer)
        {
        #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT

         if( (0 != numBytes) || (CAN_MAX_DATA_LENGTH >= numBytes) )
         {

        #else

         IL_UNUSED_VAR(numBytes);

        #endif

            if((CAN_UINT16) Can_Il_Num_Of_Rx_Signals[hwInst] > sigHandle)
            {

                pcanRxSignalHdl = pCan_Il_Rx_Signals[hwInst];

                /* Get the Signal Descriptor for this Signal */
                pcanRxSignalDesc = &pcanRxSignalHdl[sigHandle];
                /* pcanRxSignalDesc = &can_il_rx_signals[ sigHandle ];                                */

                nSigBytes = pcanRxSignalDesc->nBytes;

                // pcanRxSignalHdl  = pCan_Il_Rx_Signals[hwInst];

                pcanRxFrameHdl   = pCan_Il_Rx_Frame[hwInst];

                /* Determine the CAN Frame Holding this Signal */
                canFrameHandle = pcanRxSignalDesc->frmHandle;

                /* Get the Pointer to the Receive Frame Attributes */
                
                pcanRxFrame    = &pcanRxFrameHdl[canFrameHandle];

                /* Get the Pointer to the Receive Data */
                pFrameData     = pcanRxFrame->pRxData;

                /* Get the Signal MSByte, LSByte, MSBit, LSBit Indices */
                msByteIndex    = pcanRxSignalDesc->msByte;

                lsByteIndex    = pcanRxSignalDesc->lsByte;

                msBitIndex     = pcanRxSignalDesc->msBit;

                lsBitIndex     = pcanRxSignalDesc->lsBit;

                /* Check if the Signal is an Integral Number of Bytes and Aligned on a CAN Frame Boundary */
                if ((CAN_GPNUM_0 == lsBitIndex) && (((CAN_UINT8) CAN_GPNUM_7) == msBitIndex))
                {
                    /*
                     The received signal is an Integral Number of Bytes, and is
                     aligned on a CAN Frame Byte Boundary. In this case, no
                     shifting or masking of bits and bytes is required, and the
                     right adjusted signal bytes may be copied from the CAN
                     data frame directly. This transfer needs to be protected
                     in a critical section.
                    */
                    pFrom = &(pFrameData[ msByteIndex ]);
                    pTo   = &pBuffer[ 0 ];

                    #if (CANIL_BYTEENDIANNESS == LITTLE)
                        CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes);
                    #else
                        CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
                    #endif

                } /* if ((0 == lsBitIndex) && (((CAN_UINT8) CAN_GPNUM_7) == msBitIndex)) */
                /* Check if the Signal lsBit is Aligned on a CAN Frame Boundary */
                else if (CAN_GPNUM_0 == lsBitIndex)
				{
                    /*
                     Signal lsBit is aligned on a Data Frame byte boundary. In this
                     case all but the MSByte can be copied directly into the
                     receive data buffer; the MSByte can be copied but extraneous
                     bits will need to be masked off after the copy.
                    */
				    pFrom = &(pFrameData[ msByteIndex ]);
                    pTo = &pBuffer[ 0 ];

                    CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes );

                    /* Determine the MSByte Bit Mask from the msBitIndex */
                    numBits = msBitIndex + 1;

                    bitMask = CanIlBitWidthMasks[ numBits ];

                    #if (CANIL_BYTEENDIANNESS == BIG)
                        /* Mask the MSByte */
                        pBuffer[ 0 ] &= bitMask;
                    #else
                        pBuffer[ nSigBytes - 1 ] &= bitMask;
                    #endif
                }  /*  else if (0 == lsBitIndex) */
                /* Extensive Shifting and Masking of the Received Signal is Required. */
                else
                {
                    /*
                     Determine Number of Bytes to Copy into Working Buffer
                    */
                    nCopyBytes = (lsByteIndex - msByteIndex) + 1;
                    pFrom = &(pFrameData[ msByteIndex ]);
                    pTo = &sigBuffer[ 0 ];

                    CanIlUtilCopyByteinReverse( pFrom, pTo, nCopyBytes );

                    /* Determine Bit Mask According to the lsBitIndex */
                    bitMask = CanIlBitWidthMasks[ lsBitIndex ];

                    #if (CANIL_BYTEENDIANNESS == BIG)

                    /* Bit Shifting is Required to Right Adjust the Signal */
                    for (iByte = nCopyBytes - 1; iByte > 0; iByte--)
                    {
                        /* Right Adjust the Next Byte */
                        sigBuffer[ iByte ] = sigBuffer[ iByte ] >> lsBitIndex;

                        /*
                         Get the Byte MSBits from the Next MSByte,
                         Mask the Required Number of Bits
                        */
                        tempSigValue = (sigBuffer[ iByte - 1 ]) & bitMask;

                        /* Left Shift the MSBits... */
                        tempSigValue = tempSigValue << (CAN_GPNUM_8 - lsBitIndex);

                        /* ...and Combine Them with the LSBits */
                        sigBuffer[ iByte ] |= tempSigValue;

                    } /* for... */

                    /* Right Adjust the Most Significant Byte */
                    sigBuffer[ 0 ] = sigBuffer[ 0 ] >> lsBitIndex;

                    #else
                    
                    /* Bit Shifting is Required to Right Adjust the Signal */
                    for (iByte = 0; iByte < (nCopyBytes - 1); iByte++) /*Coverity fix:426018*/
                    {
                        /* Right Adjust the Next Byte */
                        sigBuffer[ iByte ] = sigBuffer[ iByte ] >> lsBitIndex;

                        /*
                         Get the Byte MSBits from the Next MSByte,
                         Mask the Required Number of Bits
                        */
                        tempSigValue = (sigBuffer[ iByte + 1 ]) & CanIlBitWidthMasks[ lsBitIndex ];

                        /* Left Shift the MSBits... */
                        tempSigValue = tempSigValue << (8 - lsBitIndex);

                        /* ...and Combine Them with the LSBits */
						sigBuffer[ iByte ] &= CAN_MASK8_COMPLEMENT((0xFFu)<< (8 - lsBitIndex));//clear the unreleated bits,.in fact, during the RSH, the unreleated bits will automatically be 0.@chengjia
                        
                        /* ...and Combine Them with the LSBits */
                        sigBuffer[ iByte ] |= tempSigValue;

                    } /* for... */

                    /* Right Adjust the Most Significant Byte */
                    sigBuffer[ nCopyBytes - 1 ] = sigBuffer[ nCopyBytes - 1 ] >> lsBitIndex;

                    #endif

                    /*
                     Compute the Number of bits in the Signal that were
                     originally outside a byte boundary...
                    */
                    if(msByteIndex != lsByteIndex)
                    {
                        numBits = (CAN_GPNUM_8 - lsBitIndex) + (msBitIndex + 1);
                    }
                    else
                    {
                        numBits = msBitIndex - lsBitIndex + 1;
                    }
                    
                    /* Determine Number of MSByte Bits That Need to be Masked */
                    if (CAN_GPNUM_8 < numBits)
                    {
                          /* MSByte in Byte 0 of Working Buffer */
                          sigStartIndex = nSigBytes - 1;

                          /* Adjust Number of Bits to Mask */
                          numBits -= CAN_GPNUM_8;

                    }
                    else
                    {
                          /* MSByte in Byte 1 of Working Buffer */
                          sigStartIndex = (nSigBytes - 1);
                    }

                    /* Determine MSByte Bit Mask According to Number of Bits */
                    bitMask = CanIlBitWidthMasks[ numBits ];

                    /* Mask the Most Significant Byte  */
                    sigBuffer[ sigStartIndex ] &= bitMask;

                    pFrom = &sigBuffer[ 0 ];//the begining index of sigBuffer should be 0, not sigStartIndex. @chengjia

                    pTo   = &pBuffer[ 0 ];

                    CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes ); //should not be reverse. @chengjia

                } /* else */
            }
        #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
        }
        else
        {
            #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
            #endif

            validSig = FALSE;
        }
        #endif

        }
        else
        {
            #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
            #endif


	 validSig = FALSE;
        }
    }
    else
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #endif

        validSig = FALSE;
    }

    /* Return Valid Signal Flag */
    return( validSig );
}


/* ===========================================================================

 Name:            CanIlSetRxStatus

 Description:     Enable/Disable Receive Message Timeouts

                  This function also resets the receive timeout counters.

 Inputs:          none

 Returns:         none

 =========================================================================*/
void
CanIlSetRxStatus( CAN_HWINST const hwInst, CAN_UINT16 iHandle, CAN_BOOLEAN rxState )
{
    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

	CAN_UINT16 canFrameHdl;

	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if( (FALSE != rxState) && (TRUE != rxState) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    if(Can_Il_Num_Of_Rx_Ids[hwInst] < iHandle)
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}

		if(FuncExecSt != FALSE)
		{
		    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

		    if(Can_Il_Num_Of_Rx_Ids[hwInst] != iHandle)
			{
			    canFrameHdl = iHandle;
			}
			else
			{
			    canFrameHdl = 0;

			    if(FALSE != rxState)
				{
			        /* Clear the Disable Receive Timeout Status Bit */
		            /*CanIlSetIlMode(hwInst, ILSTATUS, IL_STATUS_RX_TIMEOUT_DISABLE, 0, FALSE);*/
					CanIlSetIlStatus( hwInst, IL_STATUS_RX_TIMEOUT_DISABLE, FALSE);
				}
				else
				{
				    /* Clear the Disable Receive Timeout Status Bit */
		            /*CanIlSetIlMode(hwInst, ILSTATUS, IL_STATUS_RX_TIMEOUT_DISABLE, 0, TRUE);*/
					CanIlSetIlStatus( hwInst, IL_STATUS_RX_TIMEOUT_DISABLE, TRUE);
				}
			}

		    /* Reset the Receive Timeout Counters */
			do
			{
			    /* Get Pointer to Received Frame Attributes */

		        /* Check for Receive Timeout Monitoring Enabled */
		        if (0 != CanIlUtilTestBits(&(pcanRxFrameHdl[canFrameHdl].rxAttributes), IL_RX_ATTR_TIMEOUT_MONITOR))
		        {

		            if( (pcanRxFrameHdl[canFrameHdl].pRxTimeoutCount) != NULL )
					{
			            if( TRUE == rxState )
						{
			                /* Initialize the Missing Message Timeout Counter */
			                *(pcanRxFrameHdl[canFrameHdl].pRxTimeoutCount) = pcanRxFrameHdl[canFrameHdl].timeOut;
						}
						else
						{
						    /* Initialize the Missing Message Timeout Counter */
			                *(pcanRxFrameHdl[canFrameHdl].pRxTimeoutCount) = 0;
						}
					}

					CanIlUtilSetClearBits(&Can_Il_Rx_Status[hwInst][canFrameHdl], IL_RX_STATUS_TIMEOUT_MONITOR, rxState);
		        }

			    canFrameHdl++;

			} while( (Can_Il_Num_Of_Rx_Ids[hwInst] == iHandle) && (canFrameHdl < Can_Il_Num_Of_Rx_Ids[hwInst]) );
		}
	}

}

/* ===========================================================================
  P R I V A T E   F U N C T I O N S
 =========================================================================*/
/* ===========================================================================

 Name:            CanIlTxTaskService

 Description:     Service the Interaction Layer Periodic Transmit Task

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlTxTaskService( CAN_HWINST const hwInst )
{

    CAN_TMH iHandle;

    CAN_BOOLEAN txNow;

    CAN_IL_TMD const * pTxTmd;      /* source buffer */

    CAN_IL_TX_FRAME const * pcanTxFrame ;

    CAN_IL_TX_PERIODIC const * pcanTxPeriodic = NULL;

#ifdef CAN_IL_PERIODIC_RESTART_AFTER_EVENT

    CAN_UINT16  periodicResetValue = 0;

#endif

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

	CAN_UINT8 isPeriodic;


#ifdef CANIL_IFSUPPORT

    PduInfoType TxPduInfoPtr;

#endif

#ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT

    CAN_BOOLEAN ValidationStatus;

#endif

    CAN_UINT8 FuncExecSt = TRUE;


#if defined(CAN_IL_TX_BURST_MODE)

    CAN_IL_TX_BURST_PERIODIC const * pcanTxBurstPeriodic;

#endif


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

	if(FuncExecSt != FALSE)
	{
	    pcanTxFrameHdl     = pCan_Il_Tx_Frame[hwInst];

	    for (iHandle = 0; iHandle < ((CAN_TMH) Can_Il_Num_Of_Tx_Ids[hwInst]); iHandle++)
	    {
	        txNow = FALSE;
	        pcanTxFrame    = &pcanTxFrameHdl[iHandle];

			isPeriodic = TRUE;

	        /* If the Delay Count is Greater than Zero,*/
	        /* Decrement the Delay Count for the Current Frame... */

	        if (0u != (*(pcanTxFrame->pTxDelayCount)))
	        {
	            (*(pcanTxFrame->pTxDelayCount))--;

	            /* Check for Transmit Delay Counter Counted Down to Zero */
	            if (0u == *(pcanTxFrame->pTxDelayCount))
	            {
	                /* Check for Any Pending Transmission (Event or Periodic) */
	                if (((0 != CanIlUtilTestBits((pcanTxFrame->pTxStatus), IL_TX_STATUS_EVENT_TX_PENDING)) &&
	                   (CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][iHandle], IL_TX_STATUS_EVENT) == IL_TX_STATUS_EVENT)) ||
	                   (0 != CanIlUtilTestBits((pcanTxFrame->pTxStatus), IL_TX_STATUS_PERIODIC_TX_PENDING)))
	                {
	                    /* Transmit Immediately */
  					    txNow = TRUE;
                        isPeriodic = FALSE; /* Coverity warning fix */
	                }  /* Pending Event or Periodic Transmission */

	            } /* if (0 == (*(pTxFrame->pTxDelayCount)) */

	        } /* if (0u != (*(pTxFrame->pTxDelayCount))) */

	        else
	        {
	            /*
	             The Delay Count is Zero...
	             Check here for any event transmit request that was issued
	             after the delay count had expired, which implies that
	             the transmit request must be immediately serviced.
	             Also check for initialization transmit requests
	            */

	            /* Check for Any Pending Transmission (Event, Periodic or Initialization) */
	            if ((0 != CanIlUtilTestBits((pcanTxFrame->pTxStatus), IL_TX_STATUS_EVENT_TX_PENDING)) &&
	                (CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][iHandle], IL_TX_STATUS_EVENT) == IL_TX_STATUS_EVENT))
	            {
	                /* Transmit Immediately */
	                txNow = TRUE;
  				    isPeriodic = FALSE; /* Coverity warning fix */
	            }
	        } /* else */

	        /* Check for Periodic Frame Transmission... */
	        if ((0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_PERIODIC)) && 
	           (CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][iHandle], IL_TX_STATUS_PERIODIC) == IL_TX_STATUS_PERIODIC))
	        {
	            /* Get the Pointer to the Periodic Attributes */
	            pcanTxPeriodic = pcanTxFrame->pcanPerAttr;

	#ifdef CAN_IL_PERIODIC_RESTART_AFTER_EVENT
	            /* Get the Default (Normal Mode) Periodic Reset Value */
	            periodicResetValue = pcanTxPeriodic->period;
	#endif

	            /* Check for Non-Zero Periodic Count */
	            if (0u != (*(pcanTxPeriodic->pTxPeriodicCount)))
	            {
	                /* Decrement the Periodic Count */
	                (*(pcanTxPeriodic->pTxPeriodicCount))--;
	            }

	            /* Check for Down Count to Zero */
	            if (0u == *(pcanTxPeriodic->pTxPeriodicCount))
	            {
	                /* Check Minimum Transmit Delay Count */
	                if (0u == *(pcanTxFrame->pTxDelayCount))
	                {
	                    /* Transmit Immediately */
	                    txNow = TRUE;
	                } /* if (0 == *(pTxFrame->pTxDelayCount)) */

	                else
	                {
	                    /* Defer Transmission of Periodic Message by Just Setting Pending Bit */
	                    CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_PERIODIC_TX_PENDING, TRUE );
	                } /* else */

	            } /* if (0 == *(pTxPeriodic->pTxPeriodicCount)) */

	#if defined(CAN_IL_TX_BURST_MODE)

	            /*
	             Check for Burst Mode Featured Enabled...
	            */
	            if (0 != ((pcanTxFrame->txAttributes) & IL_TX_ATTR_BURST))
	            {

	                /* Get the Burst Periodic Attributes */
	                pcanTxBurstPeriodic = pcanTxFrame->pcanBurstAttr;

	                /* Check for Burst Mode Active */
	                if (0 != ((*(pcanTxFrame->pTxStatus)) & IL_TX_STATUS_BURST_ACTIVE))
	                {
	                    /* Wait for Burst Mode Transmission to be Scheduled */
	                    if (FALSE != txNow)
	                    {
	                        /* Decrement the Burst Counter */
	                        (*(pcanTxBurstPeriodic->pBurstCount))--;

	                        /* Check for All Burst Frames Transmitted */
	                        if (0 == *(pcanTxBurstPeriodic->pBurstCount))
	                        {
	                            /* Disable the Burst Mode */
	                            CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_BURST_ACTIVE, FALSE );

	                            /* Set Status Bit Indicating Last Burst Mode Transmit Sent */
	                            CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_BURST_COMPLETE, TRUE );

	                        } /* if (0 == *(pTxBurstPeriodic->pBurstCount)) */
	                        else
	                        {
	#ifdef CAN_IL_PERIODIC_RESTART_AFTER_EVENT
	                            /* Get the Burst Mode Periodic Counter Reset Value */
	                            periodicResetValue = pcanTxBurstPeriodic->burstPeriod;
	#endif

	                        } /* else */

	                    } /* if (FALSE != txNow) */

	                } /* if (0 != ((*(pcanTxFrame->pTxStatus)) & IL_TX_STATUS_BURST_ACTIVE)) */

	            } /* if Burst Mode Enabled and Active */

	#endif

	#ifdef CAN_IL_PERIODIC_RESTART_AFTER_EVENT

	            /*
	             Check if this frame is to be transmitted this Transmit Task Cycle...
	             Honda requires the next transmitted message after an event based
	             transmission wait the full period
	            */
	            if (FALSE != txNow)
	            {
	                /* Reset the Periodic Counter Value */
	                *( pcanTxPeriodic->pTxPeriodicCount) = periodicResetValue;
	            }

	#endif

	        } /* if (0 != (pTxFrame->txAttributes & IL_TX_ATTR_PERIODIC)) */

			if(TxStopFlag == TRUE)
			{
				txNow = FALSE;
			}
			else 
			{
			}
			
            /* Check for Immediate Transmission */
            if (FALSE != txNow)
            {
                /* Transmit the Pending or Scheduled Message Now... */
                pTxTmd = pcanTxFrame->pcanTmd;

                #ifdef CANIL_IFSUPPORT

                TxPduInfoPtr.SduLength = pTxTmd->Size;
                TxPduInfoPtr.SduDataPtr = (CAN_UINT8 *)pTxTmd->pData;

                if( NULL != Can_Il_Tx_Precopy_Function_Table[hwInst][iHandle] )
                {
                   Can_Il_Tx_Precopy_Function_Table[hwInst][iHandle](iHandle);
                }
						
                (void) CanIf_Transmit( hwInst, pTxTmd->MsgHandle, &TxPduInfoPtr );

                #else

                (void) CanTransmit( CANH_MV_SWQ, pTxTmd, hwInst );
            
                #endif

                if ((0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_PERIODIC)) && 
                (CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][iHandle], IL_TX_STATUS_PERIODIC) == IL_TX_STATUS_PERIODIC))
                {
                    /* Reset the Periodic Counter */
                    *(pcanTxPeriodic->pTxPeriodicCount) = pcanTxPeriodic->period;
                }
                
                /* Clear Any Pending Delayed Transmit Requests */
                CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, ( IL_TX_STATUS_PERIODIC_TX_PENDING | IL_TX_STATUS_EVENT_TX_PENDING), FALSE);

                /* Reset the Delay Counter to the Minimum Transmit Delay */
                *(pcanTxFrame->pTxDelayCount) = pcanTxFrame->minDelay;

            } /* if (FALSE != txNow) */
	    }
    }
}


/* ===========================================================================

 Name:            CanIlInitTx

 Description:     Initialize the Transmit Variables

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitTx( CAN_HWINST const hwInst )
{
    CAN_UINT8 FuncExecSt = TRUE;
    
    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    /* Initialize the Status of All Tx Frames */
	    CanIlInitTxFrameStatus(hwInst);

	    /* Initialize All Tx Frame Data */
	    CanIlInitTxFrameData(hwInst);

	    /* Initialize Data for Transmitted Periodic Messages */
	    CanIlInitTxPeriodicMessageData( hwInst );

	#ifdef CAN_IL_MESSAGE_VALIDATION_SUPPORT

	    CanIl_FrValidation_Init( hwInst );

	#endif

	}
}


/* ===========================================================================

 Name:            CanIlInitTxFrameStatus

 Description:     Initialize the Transmit Frame Status and the Transmit Delay
                  Count for All Tx Frames

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitTxFrameStatus( CAN_HWINST const hwInst )
{
    CAN_UINT16  iHandle;

    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

	CAN_UINT8 FuncExecSt = TRUE;

	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    pcanTxFrameHdl = pCan_Il_Tx_Frame[hwInst];

	    /* Initialize Frame Status and Delay Count for All Tx Frames */
	    for (iHandle = 0; iHandle < ((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst]); iHandle++)
	    {
	        /* Get Pointer to Frame Attributes */
	        pcanTxFrame = &pcanTxFrameHdl[iHandle];
	        /* pcanTxFrame = &Can_Il_Tx_Frame_Table[ iHandle ]; */

	        /* Clear the Frame Status */
	        *(pcanTxFrame->pTxStatus) = 0;

	        /* Initialize the Delay Counter to Zero */
	        *(pcanTxFrame->pTxDelayCount) = 0;

	        /* Clear IL Tx Status Flag */
	        CanIlSetIlMode(hwInst, ILTXSTATUS, IL_TX_ALL_STATUS, iHandle, FALSE );

	    } /* for (iHandle = 0; iHandle < CAN_IL_TX_NUM_IDS; iHandle++) */
    }

}

/* ===========================================================================

 Name:            CanIlInitTxFrameData

 Description:     Initialize the Transmit Frame Data for All Tx Frames

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitTxFrameData( CAN_HWINST const hwInst )
{
    CAN_UINT8 * pFrameData;

    CAN_UINT16  iHandle;

    CAN_UINT8   iByte;

    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    pcanTxFrameHdl = pCan_Il_Tx_Frame[hwInst];

	    /* Zero the Data for All Transmit Frames */
	    for (iHandle = 0; iHandle < ((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] ); iHandle++)
	    {
	        /* Get Pointer to Frame Attributes */
	        /* pcanTxFrame = &Can_Il_Tx_Frame_Table[ iHandle ]; */
	        pcanTxFrame    = &pcanTxFrameHdl[iHandle];

	        /* Get Pointer to Frame Data */
	        pFrameData = pcanTxFrame->pTxData;

	        /* Clear the Transmit Frame Data */
	        for (iByte = 0; iByte < CAN_MAX_DATA_LENGTH; iByte++)
	        {
	            pFrameData[ iByte ] = 0;

	        } /* for (iByte = 0; iByte < CAN_MAX_DATA_LENGTH; iByte++) */

	    }  /* for (iHandle = 0; iHandle < CAN_IL_TX_NUM_IDS; iHandle++) */
	}

}


/* ===========================================================================

 Name:            CanIlInitRxFrameData

 Description:     Initialize the Receive Frame Data after timeout

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitRxFrameData( CAN_HWINST const hwInst, CAN_UINT16 canFrameHndl )
{
    CAN_UINT8 * pFrameData;

    CAN_UINT8   iByte;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
    {
	    if(Can_Il_Num_Of_Rx_Ids[hwInst] <= canFrameHndl)
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}


	    if(FuncExecSt != FALSE)
		{
		    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

		    /* Get Pointer to Frame Attributes */
		    /* pcanRxFrame = &Can_Il_Rx_Frame_Table[ canFrameHndl ]; */
		    pcanRxFrame    = &pcanRxFrameHdl[canFrameHndl];

		    /* Get Pointer to Frame Data */
		    pFrameData = pcanRxFrame->pRxData;

		    /* Clear the Transmit Frame Data */
		    for (iByte = 0; iByte < CAN_MAX_DATA_LENGTH; iByte++)
		    {
		        pFrameData[ iByte ] = 0;

		    } /* for (iByte = 0; iByte < CAN_MAX_DATA_LENGTH; iByte++) */
		}
	}

}


/* ===========================================================================

 Name:            CanIlTxInitializationMsgs

 Description:     Sets Up Transmission of Initialization Messages

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlTxInitializationMsgs( CAN_HWINST const hwInst )
{
    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_UINT16 iHandle;

	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{    
		pcanTxFrameHdl = pCan_Il_Tx_Frame[hwInst];

	    /* Initialize Transmit Frame Data, Status Variables */
	    for (iHandle = 0; iHandle < ((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] ); iHandle++)
	    {
	        /* Get Pointer to Frame Attributes */
	        /* pcanTxFrame = &Ccan_Il_Tx_Frame_Table[ iHandle ]; */
	        pcanTxFrame    = &pcanTxFrameHdl[iHandle];
	       
	        /* Check for Initialization Frame */
	        if (0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_INIT))
	        {
	            /* Set Initialization Frame Status Flag */
	            CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_INIT, TRUE );

	        } /* if (0 != (pcanTxFrame->txAttributes & IL_TX_ATTR_INIT)) */

	    } /* for (iHandle = 0; iHandle < IL_TX_NUM_IDS; iHandle++) */

	}
}

//---------------------------------------------------------------------------------------------------------------------
/// @brief  Initiate all tx signals in tx data buffer to invalid value according to CAN Matrix..
///
/// @return  NONE.
//---------------------------------------------------------------------------------------------------------------------
//0x581
extern uint16	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Year;
extern uint8	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Month;
extern uint8	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Date;
extern uint8	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Hour;
extern uint8	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Minute;
extern uint8	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Second;
//0x525
extern uint16	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AFC;
extern uint16	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_DTE;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmOrNot;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmStatus;
extern uint16	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_Volumn;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_VolumnQF;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_ManRgen_D_Rq;
//0x510
extern uint32	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_OdometerMasterValue;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_AirbagTelltaleBehavior;
extern uint16	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_VehSpd_HMI;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_QDashACCFail;
//extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_DISFail;
//0x392
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_Fuel_level;
extern uint8	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_AverageSpeed;
extern uint16	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_ChangOilDistance;
//0x386
//extern uint8	Rte_AdasChime_ppSR_CANMSG_IC_0x386_ComOut_IC_BSDSoundSts;


void Rte_Init_Output_Signals( void )
{
	//Initiate RTE variables with invalid value/
	//0x581 //invalid value not defined in can matrix, using 0xFF as invalid value.
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Year   = 0xFFFFU;
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Month  = 0xFFU;
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Date   = 0xFFU;
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Hour   = 0xFFU;
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Minute = 0xFFU;
	Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Second = 0xFFU;
	//0x525
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AFC                 = 0x01FFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_DTE                 = 0x0FFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmOrNot          = 0xFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmStatus         = 0xFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_Volumn   = 0x1FFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_VolumnQF = 0x0U;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_ManRgen_D_Rq        = 0xFFU;
	//0x510
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_OdometerMasterValue    = 0x00FFFFFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_AirbagTelltaleBehavior = 0x07U;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_VehSpd_HMI             = 0x01FFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_QDashACCFail           = 0xFFU;
//	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_DISFail                = 0xFFU;
	//0x392
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_Fuel_level       = 0x7FU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_AverageSpeed     = 0xFFU;
	Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_ChangOilDistance = 0x7FFFU;
	//0x386
//	Rte_AdasChime_ppSR_CANMSG_IC_0x386_ComOut_IC_BSDSoundSts = 0xFFU;

	//Update tx data buffer with invalid signal value/
	//0x581
	(void)Com_SendSignal( ComConf_ComSignal_IC_Year_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Year));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Month_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Month));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Date_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Date));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Hour_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Hour));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Minute_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Minute));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Second_afccb5cc, (void*)(&Rte_ClockMdl_ppSR_CANMSG_IC_time_0x581_ComOut_IC_Second));
	//0x525
	(void)Com_SendSignal( ComConf_ComSignal_IC_AFC_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AFC)); 
	(void)Com_SendSignal( ComConf_ComSignal_IC_DTE_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_DTE));
	(void)Com_SendSignal( ComConf_ComSignal_IC_AlarmOrNot_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmOrNot));
	(void)Com_SendSignal( ComConf_ComSignal_IC_AlarmStatus_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_AlarmStatus));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Fuel_Level_Volumn_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_Volumn));
	(void)Com_SendSignal( ComConf_ComSignal_IC_Fuel_Level_VolumnQF_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_Fuel_Level_VolumnQF));
	(void)Com_SendSignal( ComConf_ComSignal_IC_ManRgen_D_Rq_8eb97ddb, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x525_ComOut_IC_ManRgen_D_Rq));
	//0x510
	(void)Com_SendSignal( ComConf_ComSignal_IC_OdometerMasterValue_ffd44f7a, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_OdometerMasterValue));
//	(void)Com_SendSignal( ComConf_ComSignal_IC_AirbagTelltaleBehavior_ffd44f7a, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_AirbagTelltaleBehavior));
	(void)Com_SendSignal( ComConf_ComSignal_IC_VehSpd_HMI_ffd44f7a, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_VehSpd_HMI)); 
	(void)Com_SendSignal( ComConf_ComSignal_IC_QDashACCFail_ffd44f7a, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_QDashACCFail));
//	(void)Com_SendSignal( ComConf_ComSignal_IC_DISFail_ffd44f7a, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x510_ComOut_IC_DISFail));
	//0x392
	(void)Com_SendSignal( ComConf_ComSignal_IC_Fuel_level_54ac807f, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_Fuel_level));
	(void)Com_SendSignal( ComConf_ComSignal_IC_AverageSpeed_54ac807f, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_AverageSpeed));
	(void)Com_SendSignal( ComConf_ComSignal_IC_ChangOilDistance_54ac807f, (void*)(&Rte_ComVnimMdl_rpSR_CANMSG_IC_0x387_ComOut_IC_ChangOilDistance));
	//0x386
//	(void)Com_SendSignal( ComConf_ComSignal_IC_BSDSoundSts_980680e1, (void*)(&Rte_AdasChime_ppSR_CANMSG_IC_0x386_ComOut_IC_BSDSoundSts));
}


/* ===========================================================================

 Name:            CanIlInitTxPeriodicMessageData

 Description:     Initialize the Message Data for Periodic Transmit Messages

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitTxPeriodicMessageData( CAN_HWINST const hwInst )
{
#if 0
    CAN_IL_TX_MESSAGE const * pcanMsgDesc;

    CAN_UINT8 const * pInitData;

    CAN_UINT16  iHandle;

    CAN_UINT8   numBytes;

    CAN_IL_TX_MESSAGE const * pcanTxMsgHdl;
#endif
	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
#if 0
		pcanTxMsgHdl = pCan_Il_Tx_Message[hwInst];

	    /* Set Transmit Message Data Initialization Values */
	    for ( iHandle = 0; iHandle < ((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst]); iHandle++ )
	    {
	        /* Get Pointer to the Message Descriptor */
	        pcanMsgDesc  = &pcanTxMsgHdl[iHandle];
	        /* pcanMsgDesc = &Can_Il_Tx_Messages[ iHandle ]; */

	        /* Get Number of Bytes in Message */
	        numBytes = pcanMsgDesc->nBytes;

	        /* Get a Pointer to the Initialization Data */
	        pInitData = pcanMsgDesc->pInitValues;

	        /* Check for NULL Initialization Data Pointer */
	        if (NULL != pInitData)
	        {
	            /* Initialize the Transmit Values */
	            (void) CanIlTxPutSetMessage( iHandle, pInitData, numBytes, FALSE, hwInst );
	        }

	    } /* for ( iHandle = 0; iHandle < CAN_IL_TX_NUM_MESSAGES; iHandle++ ) */
#endif
		Rte_Init_Output_Signals();
	}

}

/* ===========================================================================

 Name:            CanIlInitRx

 Description:     Initialize the Receive Variables

 Inputs:          none

 Returns:         none

 =========================================================================*/
static void
CanIlInitRx( CAN_HWINST const hwInst)
{
    CAN_UINT8 * pFrameData;

    CAN_UINT16 iHandle;

    CAN_UINT8 iByte;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_UINT8 * pCanMsgInd;

#ifdef CAN_IL_REQ_FRAME_SUPPORT

    CAN_IL_RX_FRAME_REQUEST const * pcanRxFrameReq;

#endif

	CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    if(FuncExecSt != FALSE)
	{
	    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

        pCanMsgInd = pCanMsgIndFlag[hwInst];

	    /* Initialize Receive Frame Data, Status Variables */
	    for (iHandle = 0; iHandle < Can_Il_Num_Of_Rx_Ids[hwInst] ; iHandle++)
	    {
	        pCanMsgInd[iHandle] = 0;

	        /* Get Pointer to Received Frame Attributes */
	        pcanRxFrame   =  &pcanRxFrameHdl[iHandle];


	        /* Get the Pointer to the Received Frame Data */
	        pFrameData    = pcanRxFrame->pRxData;


	        /* Clear the Receive Frame Data */
	        for (iByte = 0; iByte < CAN_MAX_DATA_LENGTH; iByte++)
	        {
	            pFrameData[ iByte ] = 0;
	        }

	        /* Clear the Status Byte */
	        CanIlUtilSetClearBits((pcanRxFrame->pRxStatus), STATUS_CLEAR_ALL, FALSE);

	        /* Clear IL Rx Status Flag */
	        CanIlSetIlMode( hwInst, ILRXSTATUS, IL_RX_ALL_STATUS, iHandle, FALSE );

	        /* Check for Receive Timeout Monitoring Enabled */
	        if (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_TIMEOUT_MONITOR))
	        {
	            if( (pcanRxFrame->pRxTimeoutCount) != NULL )
				{
	                /* Initialize the Missing Message Timeout Couner */
	                *(pcanRxFrame->pRxTimeoutCount) = pcanRxFrame->timeOut;
				}
	        }

#ifdef CAN_IL_REQ_FRAME_SUPPORT

	        /* Check for Receive Request Enabled */
	        if (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_RECEIVE_REQUEST))
	        {

	            /* Get Pointer to Receive Frame Request Attributes */
	            pcanRxFrameReq = pcanRxFrame->pcanRxRequest;

	            /* Initialize Number of Receive Request Transmissions */
	            *(pcanRxFrameReq->pNumReqs) = pcanRxFrameReq->nInitReqs;

	        }
#endif

	    } /* for (iHandle = 0; iHandle < CAN_IL_RX_NUM_FRAMES; iHandle++) */
	}

}

/* ===========================================================================

 Name:            CanIlSaveReceivedMessage

 Description:     Save Single Received Message for Subsequent Processing

 Inputs:          pRmd: Pointer to Received Message Data Structure

 Returns:         none

 =========================================================================*/
static void
CanIlSaveReceivedMessage( CAN_IL_RMD const * const pRmd, CAN_UINT16 const canFrameHandle, CAN_HWINST const hwInst )
{
    /*CAN_UINT8 * pRxDataPtr;*/

	CAN_UINT8 * pRxDLCPtr;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    /*Can_Il_Rx_Data_Pointer const * pCan_Il_Rx_DataPtr;*/

	CAN_UINT8 FuncExecSt = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

    /*
     Check that the Buffer pointer is not NULL
    */
    if( NULL == pRmd )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

	if(FuncExecSt != FALSE)
	{
		/*
	     Check that the Message Handle is in Range
	    */
	    if( (CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst] <= canFrameHandle )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}

	    if(FuncExecSt != FALSE)
		{
		    /*pCan_Il_Rx_DataPtr = &pCan_Il_Receive_Ptr[hwInst];
		    pRxDataPtr         = pCan_Il_Rx_DataPtr[canFrameHandle].CanRxDataPtr;*/

	       
		      
		    /* Get Pointer to Received Frame Attributes */
		    pcanRxFrameHdl =  pCan_Il_Rx_Frame[hwInst];

		    pcanRxFrame    =  &pcanRxFrameHdl[canFrameHandle];

		    /*
		     Check that DLC of the Received Frame Satisfies the Minimum
		     CAN Frame Size Requirement
		    */
		    if (pRmd->Size >= pcanRxFrame->minDlc)
		    {
		        pRxDLCPtr = pCan_Il_Rx_DLC[hwInst];
		        
		        /* Copy the Received Data into the Data Frame */
		        /*CanIlUtilCopyBytesAtomic( pRmd->Data, pRxDataPtr, CAN_MAX_DATA_LENGTH );*/

		        CanIlCopyToReceiveBuffer( canFrameHandle, pRmd->Data, hwInst);

		        pRxDLCPtr[canFrameHandle]  = pcanRxFrame->minDlc;
		    }
		}
	}
}


/* ===========================================================================

 Name:            CanIlProcessReceiveFrame

 Description:     Process a Single Received Frame

                  Processes Each Receive Frame as Part of the Periodic
                  Receive Task

 Inputs:          pRmd: Pointer to Received Message Data Structure

 Returns:         none

 =========================================================================*/
static void
CanIlProcessReceiveFrame( CAN_UINT16 const canFrameHandle, CAN_HWINST const hwInst )
{
    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_UINT8 * pCanMsgInd;

	CAN_UINT8 FuncExecSt = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

	if(FuncExecSt != FALSE)
	{
		/*
	     Check that the Message Handle is in Range
	    */
	    if( (CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst] <= canFrameHandle )
		{
		    #ifdef CANUTIL_ENABLED
		    CanUtil_ReportError();
			#else
			FuncExecSt = FALSE;
			#endif
		}

	    if(FuncExecSt != FALSE)
		{
		    /* Get Frame Attributes */
		    pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

		    pcanRxFrame    = &pcanRxFrameHdl[canFrameHandle];

	        pCanMsgInd     = pCanMsgIndFlag[hwInst];


		    if( FALSE != pCanMsgInd[canFrameHandle] )
			{
			    #ifdef CAN_IL_REQ_FRAME_SUPPORT

			    /* Check for Receive Request Enabled and Active */
			    if ((0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_RECEIVE_REQUEST)) &&
			        (0 != CanIlUtilTestBits((pcanRxFrame->pRxStatus), IL_RX_STATUS_RX_REQ_ACTIVE)))
			    {

			        /* Clear the Receive Request Active Status Bit */
					if( CanIlUtilTestBits( &(*(pcanRxFrame->pcanRxRequest)->pReqStatus), IL_RX_REQ_ISSUED) != 0 )
					{
					    /* If already requested by METER then accept the response message and close the Loop*/
						CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_RX_REQ_ACTIVE, FALSE );
						CanIlUtilSetClearBits(((pcanRxFrame->pcanRxRequest)->pReqStatus),IL_RX_REQ_ISSUED, FALSE);
					}

			        CanIlProcessPendingReceiveRequest( pcanRxFrame, hwInst );
			    }

				#endif


	            /* Check for NULL Pointer */
			    if (pRxIndicationFunc != NULL)
				{
		    	    /* Call the Receive Frame Notification Function */
			        pRxIndicationFunc( canFrameHandle );
				}

	            CanEnterCriticalSection();
	            
	            pCanMsgInd[canFrameHandle] = FALSE;

	            CanExitCriticalSection();
			}
		    
		    
		    /*
		     Check if Receive Timeouts are Enabled and
		     Timeout Monitoring is Enabled for this Received Frame
		    */
		    if ( (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_TIMEOUT_MONITOR)) &&
		         (0 != CanIlUtilTestBits(&Can_Il_Rx_Status[hwInst][canFrameHandle], IL_RX_STATUS_TIMEOUT_MONITOR )))
		    {
		        if( (pcanRxFrame->pRxTimeoutCount) != NULL )
		        {
			        /* New Frame not Received, Check Rx Timeout Count */
			        if ( 0u != (*(pcanRxFrame->pRxTimeoutCount)))
			        {
			            /* Decrement the Count */
			            (*(pcanRxFrame->pRxTimeoutCount))--;

			            /* Check for Timeout... */
			            if(0u == (*(pcanRxFrame->pRxTimeoutCount)))
			            {
			                /* Call the Receive Timeout Callback Function */
			                pRxToutIndicationFunc( canFrameHandle );

	                        CanEnterCriticalSection();

	                        CanIlInitRxFrameData( hwInst, canFrameHandle );
	                        
	                        pCanMsgInd[canFrameHandle] = FALSE;

	                        CanExitCriticalSection();

			            } /* if (0 == (*(pcanRxFrame->pRxTimeoutCount))) */

			        } /*  if ( 0u != (*(pcanRxFrame->pRxTimeoutCount))) */
		        }		

		    } /* if (0 != (pcanRxFrame->rxAttributes & IL_RX_ATTR_TIMEOUT_MONITOR)) */
		}
	}

}


#ifdef CAN_IL_REQ_FRAME_SUPPORT
/* ===========================================================================

 Name:            CanIlProcessPendingReceiveRequest

 Description:     Process Pending, Active Receive Request

 Inputs:          pRxFrame: Pointer to Receive Frame Issuing the Request

 Returns:         none

 =========================================================================*/
static void
CanIlProcessPendingReceiveRequest( CAN_IL_RX_FRAME const * const pcanRxFrame, CAN_HWINST const hwInst )
{
    CAN_IL_RX_FRAME_REQUEST const * pcanRxFrameReq;

    CAN_IL_TMD const * pcanRxReqTmd;

#ifdef CANIL_IFSUPPORT

    PduInfoType const * RxPduInfoPtr;

#endif

	static CAN_IL_TMD  requestMsgDes;

	CAN_BOOLEAN reqRequired;

    CAN_BOOLEAN txNow;

	CAN_UINT8 FuncExecSt = TRUE;


	if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}

	/*
     Check that the Message buffer is not NULL
    */
    if( NULL == pcanRxFrame )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = FALSE;
		#endif
	}
    
    if(FuncExecSt != FALSE)
	{
	    /* Initialize Transmit Now Flag */
	    txNow = FALSE;

	    /* Get the Pointer to the Receive Request Attributes */
	    pcanRxFrameReq  = pcanRxFrame->pcanRxRequest;

		/* Only for those messages for which request issued flag is set process them and send it out*/
		if(CanIlUtilTestBits((pcanRxFrameReq->pReqStatus), IL_RX_REQ_ISSUED) == IL_RX_REQ_ISSUED)
		{
			/* Check for Request Start */
			if (0 != CanIlUtilTestBits((pcanRxFrame->pRxStatus), IL_RX_STATUS_REQ_TX_START))
			{
				/* Clear the Request Start Status Bit */
				CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_REQ_TX_START, FALSE );

				/* Set the Transmit Now Flag */
				txNow = TRUE;
			}
			else
			{
				/* Check for All Requests Issued */
				if (0 == (*(pcanRxFrameReq->pNumReqs)))
				{
					/* Check if Waiting for Receive Request Transmit to Complete */
					if (0 == CanIlUtilTestBits((pcanRxFrame->pRxStatus), IL_RX_STATUS_WAIT_RX_REQ_TXC))
					{
						
						/* All Receive Requests Sent, Clear Active Status */
						
						CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_RX_REQ_ACTIVE, FALSE );
						
						CanIlUtilSetClearBits(pcanRxFrameReq->pReqStatus,IL_RX_REQ_ISSUED, FALSE);
						

					}  /* if (0 == (*(pRxFrame->pRxStatus) &  CAN_IL_RX_STATUS_WAIT_RX_REQ_TXC)) */


				}  /* if (0 == (*(pRxFrameReq->pNumReqs))) */

				else
				{
					/*
					 Request Attempts Remaining,
					 Decrement the Transmit Request Timer
					*/
					if ( 0u < (*(pcanRxFrameReq->pReqTimer)) )
					{
						(*(pcanRxFrameReq->pReqTimer))--;

						/* Check for Request Timeout */
						if (0u == (*(pcanRxFrameReq->pReqTimer)))
						{
							/* Set the Transmit Now Flag */
							txNow = TRUE;
						}

					} /* if (0 < (*(pcanRxFrameReq->pReqTimer))) */

				} /* else (Request Attempts Remaining */

			}  /* else (Not a Start Request Transmit) */

			/* Check for Immediate Request Transmit */
			if (TRUE == txNow)
			{
				/* Initialize Receive Request Timeout */
				*(pcanRxFrameReq->pReqTimer) = IL_RX_REQUEST_TIMEOUT_TICS;

				/* Set the Waiting for Transmit Complete Bit */
				CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_WAIT_RX_REQ_TXC, FALSE );

				/* Get the Pointer to the Transmit Data Structure */
				pcanRxReqTmd = pcanRxFrameReq->pTmd;

				/* Decrement the Transmit Number of Requests Counter */
				if (0 != (*(pcanRxFrameReq->pNumReqs)))
				{
					(*(pcanRxFrameReq->pNumReqs))--;
				}

				/* Issue Transmit Request to the Software Queue */
				reqRequired = (*pcanRxFrameReq->pPreProcessing)(pcanRxReqTmd , &requestMsgDes);

				if (reqRequired != FALSE)
				{
					#ifdef CANIL_IFSUPPORT

					 RxPduInfoPtr->SduDataPtr = requestMsgDes.pData;

					 RxPduInfoPtr->SduLength = requestMsgDes.Size;

					 (void) CanIf_Transmit( hwInst, requestMsgDes.MsgHandle, RxPduInfoPtr );

					#else

	                 (void) CanTransmit( CANH_MV_SWQ, &requestMsgDes, hwInst );
					
					#endif
				}
				else
				{
					/* If request Not required then clear the request issued flag*/
					CanIlUtilSetClearBits(pcanRxFrameReq->pReqStatus,IL_RX_REQ_ISSUED, FALSE);

					CanIlUtilSetClearBits( pcanRxFrame->pRxStatus, IL_RX_STATUS_RX_REQ_ACTIVE, FALSE );
				}
				

			} /* if (TRUE == txNow) */
		}
	}

}


/* ===========================================================================

 Name:            CanIlInspectPendingReceiveRequest

 Description:     Inspect pending Receive Request

 Inputs:          Can frame handle and CAN instance number

 Returns:         

 =========================================================================*/
CAN_UINT8
CanIlInspectPendingReceiveRequest( CAN_UINT16 const canFrameHandle, CAN_HWINST const hwInst )
{
    CAN_UINT8 reqCount = 0;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME_REQUEST const * pcanRxFrameReq;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		reqCount = 0xFF;
		#endif
	}

	/*
     Check that the Message Handle is in Range
    */
    if( (CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst] <= canFrameHandle )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		reqCount = 0xFF;
		#endif
	}

	if(0xFF != reqCount)
	{
		/* Get Frame Attributes */
		pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

		pcanRxFrame   =  &pcanRxFrameHdl[canFrameHandle];

		if (NULL != pcanRxFrame)
		{
		    /* Get the Pointer to the Receive Request Attributes */
		    pcanRxFrameReq = pcanRxFrame->pcanRxRequest;

		    reqCount = (*(pcanRxFrameReq->pNumReqs));
		}

	}

    return(reqCount);

}
#endif /* CAN_IL_REQ_FRAME_SUPPORT */


/* ===========================================================================

 Name:            CanIlTxPutSetMessage

 Description:     Private Function to Handle Both Put and Set Message
                  Functions

 Inputs:          msgHandle: Message Handle

                  pBuffer:   Pointer to Message Buffer

                  numBytes:  Total Number of Bytes in the Message

                  txMsg:     Transmit the Message (versus just set the values)

 Returns:         validMsg:  Indicates Success (TRUE) or Failure (FALSE)

 =========================================================================*/
CAN_BOOLEAN
CanIlTxPutSetMessage( CAN_UINT16 const msgHandle, CAN_UINT8 const * const pBuffer, CAN_UINT8 const numBytes, CAN_BOOLEAN const txMsg, CAN_HWINST const hwInst )
{
    CAN_UINT8   numBytesSignal;

    CAN_UINT8   numSignals;

    CAN_UINT16   index;

    CAN_UINT8   iBufIndex;

    CAN_IL_SIGNAL     const * pcanTxSigHdl;

#ifdef CAN_IL_TX_WITH_DLC0_SUPPORT

    CAN_IL_TX_FRAME   const * pcanTxFrame;

    CAN_IL_TX_FRAME   const * pcanTxFrameHdl;

#endif

    CAN_IL_TX_MESSAGE const * pcanMsgDesc;

    CAN_IL_TX_MESSAGE const * pcanTxMsgHdl;

    CAN_BOOLEAN ValidMessage = TRUE;

	static CAN_UINT16 SignalIndex = 0;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        ValidMessage = FALSE;
        #endif
    }

    /*
     Check that the Pointer to the Buffer is Not NULL
    */
    if( NULL == pBuffer )
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        ValidMessage = FALSE;
        #endif
    }

    if(ValidMessage != FALSE)
    {
        /*
         Check that the Message Handle is in Range
        */
        if( (CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] <= msgHandle )
        {
            #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
            #else
            ValidMessage = FALSE;
            #endif
        }

        if(ValidMessage != FALSE)
        {
            pcanTxMsgHdl    = pCan_Il_Tx_Message[hwInst];


            #ifndef CAN_IL_TX_WITH_DLC0_SUPPORT

            /* Check if Requested Number of Bytes Matches Signal Size */
            if(pcanTxMsgHdl[msgHandle].nBytes != numBytes)
            {
                #ifdef CANUTIL_ENABLED
                CanUtil_ReportError();
                #else
                ValidMessage = FALSE;
                #endif
            }
            
            if(ValidMessage != FALSE)
            {
            #endif

                pcanTxSigHdl     = pCan_Il_Tx_Signals[hwInst];

            #ifdef CAN_IL_TX_WITH_DLC0_SUPPORT

                pcanTxFrameHdl   = pCan_Il_Tx_Frame[hwInst];

            #endif

                /* Get the Message Descriptor for the Specified Message */
                pcanMsgDesc      = &pcanTxMsgHdl[msgHandle];
                /* pcanMsgDesc = &Can_Il_Tx_Messages[ msgHandle ]; */

                /* Get the Number of Signals in the Message */
                numSignals       = pcanMsgDesc->nSignals;

                #ifdef CAN_IL_TX_WITH_DLC0_SUPPORT
                /*
                 Check the Number of Bytes Parameter Against the Message
                 Descriptor Specified Number of Bytes to Make Sure they Match
                */
                if (pcanMsgDesc->nBytes == numBytes)
                #endif
                {
                    /*
                     Total Number of Bytes Specified Matches...
                     Initialize the Buffer Copy Index
                    */
                    iBufIndex = 0;

                    /* Protect the Transfer in a Critical Section */
                    CanEnterCriticalSection();

                    for (index = 0; index < numSignals; index++)
                    {
                        /* Get the Number of Bytes in the Next Signal */
                        numBytesSignal = (CAN_UINT8)(pcanTxSigHdl[SignalIndex].nBytes);
                        /* numBytesSignal = can_il_tx_signals[ sigHandle ].nBytes; */

                        /* Either Just Set or Set and Put the Signal */
                        if (TRUE == txMsg)
                        {
                            (void)CanIlTxPutSignal( index, &(pBuffer[ iBufIndex ]), numBytesSignal, hwInst );
                        }
                        else
                        {
                            (void)CanIlTxSetSignal( SignalIndex, &(pBuffer[ iBufIndex ]), numBytesSignal, hwInst );
                        }
						SignalIndex++;
                        /*
                         Advance the Data Buffer Index Based on the Number of Bytes
                         that were Just Loaded into the Transmit Data Buffer
                        */
                        iBufIndex += numBytesSignal;
                    }

                    CanExitCriticalSection();
                }

            #ifdef CAN_IL_TX_WITH_DLC0_SUPPORT

                else if ( (((CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] ) > msgHandle) && (0 == numBytes) )   /* To transmit the Event with DLC 0 */
                {
                    /* Protect the Transfer in a Critical Section */
                    CanEnterCriticalSection();

                    /* Point to the Frame Attributes */
                    pcanTxFrame = &pcanTxFrameHdl[ msgHandle ];

                    /* Check for Event Based Transmission Enabled */
                    if (0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_EVENT))
                    {
                        /* Set the Event Transmission Request Status Bit */
                        CanIlUtilSetClearBits( pcanTxFrame->pTxStatus, IL_TX_STATUS_EVENT_TX_PENDING, TRUE );
                    }

                    CanExitCriticalSection();
                }
                #endif

            #ifndef CAN_IL_TX_WITH_DLC0_SUPPORT
            }
            #endif
        }
    }

    /* Return Flag Indication Success or Failure */
    return(ValidMessage);

}


/* ===========================================================================

 Name:            CanIlRxPutSignal

 Description:     Set Signal Value in the Specified Transmit CAN Frame

 Inputs:          sigHandle: Signal Handle

                  sigValue:  Signal Byte Value

 Returns:         validSig:  Flag Indicating Transmit Signal Success

 =========================================================================*/
void CanIlRxPutSignal( CAN_UINT16 const sigHandle, CAN_UINT8 const *pBuffer, CAN_UINT8 numBytes, CAN_HWINST const hwInst)
{
    CAN_UINT8  sigBuffer[ CAN_MAX_DATA_LENGTH + 1 ];

    CAN_IL_SIGNAL const * pcanRxSignalDesc;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_SIGNAL const * pcanRxSignalHdl;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;
    CAN_UINT8 const * pFrom;

    CAN_UINT8 * pTo;

    CAN_UINT8 * pFrameData;

    CAN_UINT16  canFrameHandle;

    CAN_UINT8   msByteMask;

    CAN_UINT8   lsByteMaskComp;

    CAN_UINT8   msBitPos;

    CAN_UINT8   lsBitPos;

    CAN_UINT8   SignalLength;

    CAN_UINT8   nCopyBytes;

    CAN_UINT8   tempSigValue;

    CAN_UINT8   sigStartIndex;

    CAN_UINT8   tempSigByteValue;

    CAN_UINT8   iByte;

    CAN_BOOLEAN validSig = TRUE;

    CAN_UINT8   nSigBytes;

    CAN_UINT8   bitMask;

    CAN_UINT8   lsByteIndex;
    CAN_UINT8   msByteIndex;

    
    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        validSig = FALSE;
        #endif
    }

    /*
     Check that the Pointer to the Buffer is Not NULL
    */
    if( NULL == pBuffer )
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        validSig = FALSE;
        #endif
    }

    if(validSig != FALSE)
	{
	    /* Check that the Signal Handle is in Range */
	    if( (CAN_UINT16) Can_Il_Num_Of_Rx_Signals[hwInst] <= sigHandle )
	    {
	        #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #else
	        validSig = FALSE;
	        #endif
	    }

	    if(validSig != FALSE)
	    {
	    
            #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
            if( (0 != numBytes) && (CAN_MAX_DATA_LENGTH >= numBytes) )
            {
            #else
            IL_UNUSED_VAR(numBytes);
            #endif
	    
            pcanRxSignalHdl  = pCan_Il_Rx_Signals[hwInst];

            pcanRxFrameHdl  = pCan_Il_Rx_Frame[hwInst];
            
            /* Check that the Signal Handle is in Range and that the Pointer to the Buffer is Not NULL */
            pcanRxSignalDesc = &pcanRxSignalHdl[sigHandle];

            /* Get the Signal Descriptor for this Signal. Determine the CAN Frame Holding this Signal */
            canFrameHandle = pcanRxSignalDesc->frmHandle;

            /* Get the Pointer to the CAN Frame Attributes */
            pcanRxFrame    = &pcanRxFrameHdl[ canFrameHandle ];

            /* Get the Pointer to the CAN Frame Data */
            pFrameData = pcanRxFrame->pRxData;

            lsBitPos = pcanRxSignalDesc->lsBit;
            msBitPos = pcanRxSignalDesc->msBit;
            if (pcanRxSignalDesc->msByte != pcanRxSignalDesc->lsByte)
            {
                SignalLength = (8-lsBitPos) + 8*(pcanRxSignalDesc->lsByte-pcanRxSignalDesc->msByte-1) + (msBitPos+1);
            }
            else
            {
                SignalLength = msBitPos-lsBitPos+1;
            }

            #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
                nSigBytes = numBytes;
            #else
                nSigBytes = pcanRxSignalHdl[sigHandle].nBytes;
            #endif

			lsByteIndex = pcanRxSignalDesc->lsByte;
			msByteIndex = pcanRxSignalDesc->msByte;
            
            /* Check if the Signal is an Integral Number of Bytes and Aligned on a CAN Frame Boundary */
            if( (0 == (CanIlUtilTestBits(&lsBitPos, 0x07))) &&  (0 == (SignalLength & 0x07)))
            {
                if(nSigBytes >= 1)
                {
				    pFrom = &pBuffer[ 0 ];
                    pTo = &(pFrameData[ pcanRxSignalDesc->msByte ]);

                    #if (CANIL_BYTEENDIANNESS == LITTLE)
                        CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes);
                    #else
                        CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
                    #endif
                }
            }
            else if ((0 == (CanIlUtilTestBits(&lsBitPos, 0x07))) &&  (0 != (SignalLength & 0x07)))
            {
                if(nSigBytes >= 1)
                {
				    pFrom = &pBuffer[ 0 ];
                    pTo = &(pFrameData[ pcanRxSignalDesc->msByte + 1]);

                    #if (CANIL_BYTEENDIANNESS == LITTLE)
                        CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes - 1);
                    #else
                        CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
                    #endif
                }
                
                
                /*   Signal lsBit is aligned on a Data Frame byte boundary. In this
                   case all but the MSByte can be copied directly into the
                   transmit frame data; the MSByte needs to be properly masked. */
                 CanEnterCriticalSection();

                 msByteMask = CanIlBitWidthMasks[ pcanRxSignalDesc->msBit + 1 ];

                 tempSigByteValue = pBuffer[ nSigBytes - 1 ];

                 /* First Clear the Signal Bits in the MSByte... */
                 CanIlUtilSetClearBits( &pFrameData[ pcanRxSignalDesc->msByte ], msByteMask, FALSE );

                 tempSigByteValue &= msByteMask;

                 /* ...Then Update the Signal Bits in the MSByte */
                 pFrameData[ pcanRxSignalDesc->msByte ] |= tempSigByteValue;

                 CanExitCriticalSection();
            }
            /* Extensive Manipulation of the Transmitted Signal is Required */
            else
            {
                if(pcanRxSignalDesc->msByte == pcanRxSignalDesc->lsByte)
                {
                    CanEnterCriticalSection();

                    msByteMask = CanIlBitWidthMasks[ SignalLength ];

                    tempSigByteValue = pBuffer[ 0 ];

                    tempSigByteValue = (CAN_UINT8)((CAN_UINT16)tempSigByteValue << (pcanRxSignalDesc->lsBit));

                    msByteMask = msByteMask << (pcanRxSignalDesc->lsBit);

                    /* First Clear the Signal Bits in the MSByte... */
                    CanIlUtilSetClearBits( &pFrameData[ pcanRxSignalDesc->msByte ], msByteMask, FALSE );

                    tempSigByteValue &= msByteMask;

                    /* ...Then Update the Signal Bits in the MSByte */
                    pFrameData[ pcanRxSignalDesc->msByte ] |= tempSigByteValue;

                    CanExitCriticalSection();
                }
                else
                {
                    
                    /* Shifting and Masking Will be Required to Put the Signal
                     Into the CAN Frame, so First Copy the Transmit Bytes into the
                     Working Buffer. First determine if the transmitted signal
                     spans more bytes than the actual number of signal bytes. */
					nCopyBytes = (lsByteIndex - msByteIndex) + 1;

                    /* Left Shift All of the Bytes except for the LSByte, Get LSBits from the Next Byte */

					/* Get the Bit Mask for this Width */
                    bitMask = CanIlBitWidthMasks[ 8 - lsBitPos ];
                    sigBuffer[ 0 ] = pBuffer[ 0 ] << lsBitPos;
            
                    if(nCopyBytes > 1)
			
                    for (iByte = 1; iByte < nCopyBytes; iByte++)
                    {
                        /* Left Shift Each Byte, Based on lsBitIndex Value */
                        sigBuffer[ iByte ] = (pBuffer[ iByte ] << lsBitPos);
                    
                        tempSigValue = pBuffer[ iByte - 1 ] & CAN_MASK8_COMPLEMENT( bitMask );
                    
                        tempSigValue = tempSigValue >> (lsBitPos);
                        
                        sigBuffer[ iByte ] &= CAN_MASK8_COMPLEMENT( bitMask );
                    
                        sigBuffer[ iByte ] |= tempSigValue;
                    }
                    
                    /* Now Process the LSByte */
                    sigBuffer[ nCopyBytes ] = pBuffer[ nCopyBytes - 1 ] & CAN_MASK8_COMPLEMENT( bitMask );
                    
                    sigBuffer[ nCopyBytes ] = sigBuffer[ nCopyBytes ] >> (lsBitPos);
            
                    /* Determine the MSByte and LSByte (Complement) Mask Values */
                    msByteMask = CanIlBitWidthMasks[ msBitPos + 1 ];
            
                    lsByteMaskComp = CanIlBitWidthMasks[ lsBitPos ];
            
                    
                    /* Copy the inner data bytes to the transmit data buffer (Exclude MSByte and LSByte) */
                    pFrom = &sigBuffer[ 1 ];
                    pTo = &(pFrameData[ msByteIndex + 1 ]);
            
                    CanEnterCriticalSection();
                    
                    CanIlUtilCopyByteinReverse( pFrom, pTo, (nCopyBytes - CAN_GPNUM_2) );
            
                    sigStartIndex = 0;
            
                    
                    /* Update the MSByte and LSByte Signal Bits...First Clear the Signal Bits...*/
            
                    pFrameData[ lsByteIndex ] &= lsByteMaskComp;
            
                    pFrameData[ msByteIndex ] &= CAN_MASK8_COMPLEMENT(msByteMask);
            
                    /*...Then OR in the Actual Signal Data */
                    pFrameData[ lsByteIndex ] |= sigBuffer[ sigStartIndex ];
            
                    pFrameData[ msByteIndex ] |= sigBuffer[ nCopyBytes - 1 ];
            
                    CanExitCriticalSection();
                } /* else */
            } /* else */
            
            #ifdef CAN_IL_DYNAMIC_LEN_SUPPORT
            }
            #endif
        }
	}
}


void
CanIlSetTxStatus ( CAN_HWINST const hwInst, CAN_UINT16 iHandle, CAN_BOOLEAN txState )
{
    CAN_IL_TX_FRAME    const * pcanTxFrame;

    CAN_IL_TX_FRAME    const * pcanTxFrameHdl;

    CAN_IL_TX_PERIODIC const * pcanTxPeriodic;

    CAN_UINT16 canFrameHndl;

#if defined(CAN_IL_TX_BURST_MODE)

    CAN_IL_TX_BURST_PERIODIC const * pcanTxBurstPeriodic;

#endif

    CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if( (txState != TRUE) && (txState != FALSE) )
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if(FuncExecSt != FALSE)
    {
        if( (CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] < iHandle )
        {
            #ifdef CANUTIL_ENABLED
            CanUtil_ReportError();
            #else
            FuncExecSt = FALSE;
            #endif
        }

        if(FuncExecSt != FALSE)
        {
            pcanTxFrameHdl     = pCan_Il_Tx_Frame[hwInst];

            if(Can_Il_Num_Of_Tx_Ids[hwInst] != iHandle)
            {
                canFrameHndl = iHandle;
            }
            else
            {
                canFrameHndl = 0;
            }

            do
            {
                pcanTxFrame        = &pcanTxFrameHdl[canFrameHndl];

                /* Check for Periodic Frame Transmission... */
                if (0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_PERIODIC))
                {

                    if (0 == CanIlUtilTestBits(&Can_Il_Tx_Status[hwInst][canFrameHndl], IL_TX_STATUS_PERIODIC))
                    {
                        if(TRUE == txState)
                        {
                               /* Get Pointer to Periodic Frame Attributes */
                            pcanTxPeriodic = pcanTxFrame->pcanPerAttr;
                            
                            /* Initialize the Periodic Counter to the Initial Offset Value */
                            *(pcanTxPeriodic->pTxPeriodicCount) = pcanTxPeriodic->offset;
                        }
                    }

                    CanIlUtilSetClearBits(&Can_Il_Tx_Status[hwInst][canFrameHndl], IL_TX_STATUS_PERIODIC, txState);

                }

                /* Check for Event Frame Transmission... */
                if (0 != CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_EVENT))
                {
                       /* Initialize the Delay Counter to Zero */
                    *(pcanTxFrame->pTxDelayCount) = pcanTxFrame->minDelay;

                    CanIlUtilSetClearBits(&Can_Il_Tx_Status[hwInst][canFrameHndl], IL_TX_STATUS_EVENT, txState);
                }

            #if defined(CAN_IL_TX_BURST_MODE)

                /* Check for Burst Mode Allowed for this Frame */
                if ( 0 != (CanIlUtilTestBits(&pcanTxFrame->txAttributes, IL_TX_ATTR_BURST)) )
                {
                    /*
                     Set Status Bits Indicating Burst Mode Active AND
                     that there is a Transmit Request Event Pending
                    */
                    CanIlUtilSetClearBits( pcanTxFrame->pTxStatus,
                                          ( IL_TX_STATUS_BURST_ACTIVE |
                                            IL_TX_STATUS_EVENT_TX_PENDING ), txState );

                    /* Get the Burst Attributes Pointer */
                    pcanTxBurstPeriodic = pcanTxFrame->pcanBurstAttr;

                    /* Initialize the Burst Counter */
                    if(TRUE == txState)
                    {
                        *(pcanTxBurstPeriodic->pBurstCount) = pcanTxBurstPeriodic->nBurstFrames;
                    }
                    else
                    {
                        *(pcanTxBurstPeriodic->pBurstCount) = 0;
                    }

                }  /* (0 != (pTxFrame->txAttributes & IL_TX_ATTR_BURST)) */

            #endif

                canFrameHndl++;

            } while( (Can_Il_Num_Of_Tx_Ids[hwInst] == iHandle) && (canFrameHndl < Can_Il_Num_Of_Tx_Ids[hwInst]) );
        }
    }

}


CAN_BOOLEAN
CanIlTxGetSignal( CAN_UINT16 const sigHandle, CAN_UINT8 * const pBuffer, CAN_UINT8 * numBytes, CAN_HWINST const hwInst )
{
    CAN_UINT8  sigBuffer[ CAN_MAX_DATA_LENGTH ];

    CAN_IL_SIGNAL const * pcanTxSignalDesc;

    CAN_IL_TX_FRAME const * pcanTxFrame;

    CAN_UINT8 const * pFrom;

    CAN_UINT8  * pTo;

    CAN_UINT8  * pFrameData;

    CAN_UINT16  canFrameHandle;

    CAN_UINT8   numBits;

    CAN_UINT8   bitMask;

    CAN_UINT8   msByteIndex;

    CAN_UINT8   lsByteIndex;

    CAN_UINT8   msBitIndex;

    CAN_UINT8   lsBitIndex;

    CAN_UINT8   nCopyBytes;

    CAN_UINT8   tempSigValue;

    CAN_UINT8   sigStartIndex;

    CAN_UINT8   iByte;

    CAN_IL_SIGNAL const * pcanTxSignalHdl;

    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_BOOLEAN validSig = TRUE;

    CAN_UINT8   nSigBytes;

    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        validSig = FALSE;
        #endif
    }

    /*
     Check that the Pointer to the Buffer is Not NULL
    */
    if( NULL == pBuffer )
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        validSig = FALSE;
        #endif
    }

    if(validSig != FALSE)
	{

        pcanTxSignalHdl  = pCan_Il_Tx_Signals[hwInst];

        /* Get the Signal Descriptor for this Signal */        
        pcanTxSignalDesc = &pcanTxSignalHdl[sigHandle];
        /* pcanTxSignalDesc = &Can_Il_Tx_Signals[ sigHandle ];                                */

        nSigBytes = pcanTxSignalDesc->nBytes;

        //pcanTxSignalHdl  = pCan_Il_Tx_Signals[hwInst];
        pcanTxFrameHdl   = pCan_Il_Tx_Frame[hwInst];
        /* Determine the CAN Frame Holding this Signal or simply can message handle */
        canFrameHandle = pcanTxSignalDesc->frmHandle;

        /* Get the Pointer to the Receive Frame Attributes */            
        pcanTxFrame    = &pcanTxFrameHdl[canFrameHandle];

        /* Get the Pointer to the Receive Data */
        pFrameData = pcanTxFrame->pTxData;

        /* Get the Signal MSByte, LSByte, MSBit, LSBit Indices */
        msByteIndex = pcanTxSignalDesc->msByte;

        lsByteIndex = pcanTxSignalDesc->lsByte;

        msBitIndex = pcanTxSignalDesc->msBit;

        lsBitIndex = pcanTxSignalDesc->lsBit;

            /* Check if the Signal is an Integral Number of Bytes and Aligned on a CAN Frame Boundary */
        if ((CAN_GPNUM_0 == lsBitIndex) && (((CAN_UINT8) CAN_GPNUM_7) == msBitIndex))
        {
            /*
             The received signal is an Integral Number of Bytes, and is
             aligned on a CAN Frame Byte Boundary. In this case, no
             shifting or masking of bits and bytes is required, and the
             right adjusted signal bytes may be copied from the CAN
             data frame directly. This transfer needs to be protected
             in a critical section.
            */
            pFrom = &(pFrameData[ msByteIndex ]);
            pTo   = &pBuffer[ 0 ];

            #if (CANIL_BYTEENDIANNESS == LITTLE)
                CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes);
            #else
                CanIlUtilCopyBytesAtomic( pFrom, pTo, nSigBytes );
            #endif

        } /* if ((0 == lsBitIndex) && (((CAN_UINT8) CAN_GPNUM_7) == msBitIndex)) */
        /* Check if the Signal lsBit is Aligned on a CAN Frame Boundary */
        else if (CAN_GPNUM_0 == lsBitIndex)
        {
            /*
             Signal lsBit is aligned on a Data Frame byte boundary. In this
             case all but the MSByte can be copied directly into the
             receive data buffer; the MSByte can be copied but extraneous
             bits will need to be masked off after the copy.
            */
            pFrom = &(pFrameData[ msByteIndex ]);
            pTo = &pBuffer[ 0 ];

            CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes );

            /* Determine the MSByte Bit Mask from the msBitIndex */
            numBits = msBitIndex + 1;

            bitMask = CanIlBitWidthMasks[ numBits ];

            #if (CANIL_BYTEENDIANNESS == BIG)
                /* Mask the MSByte */
                pBuffer[ 0 ] &= bitMask;
            #else
                pBuffer[ nSigBytes - 1 ] &= bitMask;
            #endif
        }  /*  else if (0 == lsBitIndex) */
        /* Extensive Shifting and Masking of the Received Signal is Required. */
        else
        {
            /*
             Determine Number of Bytes to Copy into Working Buffer
            */
            nCopyBytes = (lsByteIndex - msByteIndex) + 1;
            pFrom = &(pFrameData[ msByteIndex ]);
            pTo = &sigBuffer[ 0 ];

            CanIlUtilCopyByteinReverse( pFrom, pTo, nCopyBytes );

            /* Determine Bit Mask According to the lsBitIndex */
            bitMask = CanIlBitWidthMasks[ lsBitIndex ];

            #if (CANIL_BYTEENDIANNESS == BIG)

            /* Bit Shifting is Required to Right Adjust the Signal */
            for (iByte = nCopyBytes - 1; iByte > 0; iByte--)
            {
                /* Right Adjust the Next Byte */
                sigBuffer[ iByte ] = sigBuffer[ iByte ] >> lsBitIndex;

                /*
                 Get the Byte MSBits from the Next MSByte,
                 Mask the Required Number of Bits
                */
                tempSigValue = (sigBuffer[ iByte - 1 ]) & bitMask;

                /* Left Shift the MSBits... */
                tempSigValue = tempSigValue << (CAN_GPNUM_8 - lsBitIndex);

                /* ...and Combine Them with the LSBits */
                sigBuffer[ iByte ] |= tempSigValue;

            } /* for... */

            /* Right Adjust the Most Significant Byte */
            sigBuffer[ 0 ] = sigBuffer[ 0 ] >> lsBitIndex;

            #else
            
            /* Bit Shifting is Required to Right Adjust the Signal */
            for (iByte = 0; iByte < (nCopyBytes - 1); iByte++) /*Coverity fix:426007*/
            {
                /* Right Adjust the Next Byte */
                sigBuffer[ iByte ] = sigBuffer[ iByte ] >> lsBitIndex;

                /*
                 Get the Byte MSBits from the Next MSByte,
                 Mask the Required Number of Bits
                */
                tempSigValue = (sigBuffer[ iByte + 1 ]) & CanIlBitWidthMasks[ lsBitIndex ];

                /* Left Shift the MSBits... */
                tempSigValue = tempSigValue << (8 - lsBitIndex);

                /* ...and Combine Them with the LSBits */
                sigBuffer[ iByte ] &= CAN_MASK8_COMPLEMENT(CanIlBitWidthMasks[ msBitIndex + 1 ] << (8 - lsBitIndex));
                
                /* ...and Combine Them with the LSBits */
                sigBuffer[ iByte ] |= tempSigValue;

            } /* for... */

            /* Right Adjust the Most Significant Byte */
            sigBuffer[ nCopyBytes - 1 ] = sigBuffer[ nCopyBytes - 1 ] >> lsBitIndex;

            #endif

            /*
             Compute the Number of bits in the Signal that were
             originally outside a byte boundary...
            */
            if(msByteIndex != lsByteIndex)
            {
                numBits = (CAN_GPNUM_8 - lsBitIndex) + (msBitIndex + 1);
            }
            else
            {
                numBits = msBitIndex - lsBitIndex + 1;
            }
            
            /* Determine Number of MSByte Bits That Need to be Masked */
            if (CAN_GPNUM_8 < numBits)
            {
                /* MSByte in Byte 0 of Working Buffer */
                sigStartIndex = nSigBytes;

                /* Adjust Number of Bits to Mask */
                numBits -= CAN_GPNUM_8;

            }
            else
            {
                /* MSByte in Byte 1 of Working Buffer */
                sigStartIndex = (nSigBytes - 1);
            }

            /* Determine MSByte Bit Mask According to Number of Bits */
            bitMask = CanIlBitWidthMasks[ numBits ];

            /* Mask the Most Significant Byte  */
            sigBuffer[ sigStartIndex ] &= bitMask;

            pFrom = &sigBuffer[ sigStartIndex ];

            pTo   = &pBuffer[ 0 ];

            CanIlUtilCopyByteinReverse( pFrom, pTo, nSigBytes ); 
            
            *numBytes = nSigBytes; // Send the info to caller
        } /* else */
	}

    /* Return Valid Signal Flag */
    return( validSig );
}


void CanIlCopyToReceiveBuffer(CAN_UINT8 canFrameHdl, CAN_UINT8 const * const fl_local_buff_ptr,CAN_UINT8 hwInst)
{
    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if(NULL == fl_local_buff_ptr)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if(FuncExecSt != FALSE)
    {
	    if( (CAN_UINT16) Can_Il_Num_Of_Rx_Ids[hwInst] <= canFrameHdl )
	    {
	        #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #else
	        FuncExecSt = FALSE;
	        #endif
	    }

	    if(FuncExecSt != FALSE)
	    {
	        pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

	        CanIlUtilCopyBytesAtomic(&fl_local_buff_ptr[0],&pcanRxFrameHdl[canFrameHdl].pRxData[0] ,CAN_MAX_DATA_LENGTH);
	    }
	}

}


void CanIlCopyToTransmitBuffer(CAN_UINT8 canFrameHdl, CAN_UINT8 const * const fl_local_buff_ptr,CAN_UINT8 hwInst)
{
    CAN_IL_TX_FRAME const * pcanTxFrameHdl;

    CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if(NULL == fl_local_buff_ptr)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

	if(FuncExecSt != FALSE)
    {
	    if( (CAN_UINT16) Can_Il_Num_Of_Tx_Ids[hwInst] <= canFrameHdl )
	    {
	        #ifdef CANUTIL_ENABLED
	        CanUtil_ReportError();
	        #else
	        FuncExecSt = FALSE;
	        #endif
	    }

	    if(FuncExecSt != FALSE)
	    {
	        pcanTxFrameHdl   =  pCan_Il_Tx_Frame[hwInst];

	        CanIlUtilCopyBytesAtomic(&fl_local_buff_ptr[0],&pcanTxFrameHdl[canFrameHdl].pTxData[0] ,CAN_MAX_DATA_LENGTH);
	    }
	}
}


#ifdef CAN_IL_REQ_FRAME_SUPPORT

void CanIlInitRequestFrames( CAN_HWINST const hwInst)
{
    CAN_UINT8 iHandle = 0;

    CAN_IL_RX_FRAME const * pcanRxFrameHdl;

    CAN_IL_RX_FRAME const * pcanRxFrame;

    CAN_IL_RX_FRAME_REQUEST const * pcanRxFrameReq;

    CAN_UINT8 FuncExecSt = TRUE;


    if(CAN_IL_NUM_OF_CHANNELS <= hwInst)
    {
        #ifdef CANUTIL_ENABLED
        CanUtil_ReportError();
        #else
        FuncExecSt = FALSE;
        #endif
    }

    if(FuncExecSt != FALSE)
    {
        pcanRxFrameHdl = pCan_Il_Rx_Frame[hwInst];

        /* Initialize Receive Frame Data, Status Variables */
        for (iHandle = 0; iHandle < Can_Il_Num_Of_Rx_Ids[hwInst] ; iHandle++)
        {
            /* Get Pointer to Received Frame Attributes */
            pcanRxFrame   =  &pcanRxFrameHdl[iHandle];

            /* Check for Receive Request Enabled */
            if (0 != CanIlUtilTestBits(&pcanRxFrame->rxAttributes, IL_RX_ATTR_RECEIVE_REQUEST))
            {
                /* Get Pointer to Receive Frame Request Attributes */
                pcanRxFrameReq = pcanRxFrame->pcanRxRequest;

                /* Initialize Number of Receive Request Transmissions */
                *(pcanRxFrameReq->pNumReqs)=0;
                *(pcanRxFrameReq->pReqStatus)=0;

                /* Set Receive Request Start and Active Status Bits */
                CanIlUtilSetClearBits( pcanRxFrame->pRxStatus,
                                      (IL_RX_STATUS_RX_REQ_ACTIVE), TRUE);
            }

        } /* for (iHandle = 0; iHandle < CAN_IL_RX_NUM_FRAMES; iHandle++) */

    }
}
#endif

void IC_0x510_RollingCounter_Checksum(CAN_UINT8 iHandle)
{
	static CAN_UINT8 can_msg_IC_0x510_rolling_counter = 0;	
	CAN_UINT8        Checksum                         = 0; 
	CAN_UINT8        MsgDataIndex                     = 0;

	if (Can_Ch0_Il_Tx_Msg_IC_0x510_TMH == iHandle)
	{
		(void)Com_SendSignal(CanCclTxHndlCh0_IC_Rolling_counter_0x510_1296, &can_msg_IC_0x510_rolling_counter);

		can_msg_IC_0x510_rolling_counter++;
		if (16 == can_msg_IC_0x510_rolling_counter)
		{
			can_msg_IC_0x510_rolling_counter = 0;
		}
		else
		{
		}

		for (MsgDataIndex = 0; MsgDataIndex < 7; MsgDataIndex++)
		{
			Checksum = (Checksum ^ Can_Ch0_Il_Tx_Frame_Data[iHandle][MsgDataIndex]);
		}
		(void)Com_SendSignal(CanCclTxHndlCh0_IC_Checksum_0x510_1296, &Checksum);
	}
	else
	{
	}
}

void IC_0x525_RollingCounter_Checksum(CAN_UINT8 iHandle)
{
	static CAN_UINT8 can_msg_IC_0x525_rolling_counter = 0;	
	CAN_UINT8        Checksum                         = 0; 
	CAN_UINT8        MsgDataIndex                     = 0;

	if (Can_Ch0_Il_Tx_Msg_IC_0x525_TMH == iHandle)
	{
		(void)Com_SendSignal(CanCclTxHndlCh0_IC_Rolling_counter_0x525_1317, &can_msg_IC_0x525_rolling_counter);

		can_msg_IC_0x525_rolling_counter++;
		if (16 == can_msg_IC_0x525_rolling_counter)
		{
			can_msg_IC_0x525_rolling_counter = 0;
		}
		else
		{
		}

		for (MsgDataIndex = 0; MsgDataIndex < 7; MsgDataIndex++)
		{
			Checksum = (Checksum ^ Can_Ch0_Il_Tx_Frame_Data[iHandle][MsgDataIndex]);
		}
		(void)Com_SendSignal(CanCclTxHndlCh0_IC_Checksum_0x525_1317, &Checksum);
	}
	else
	{
	}
}


/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/



