/* ===========================================================================
**
**                       CONFIDENTIAL VISTEON CORPORATION
**
**  This is an unpublished work of authorship, which contains trade secrets,
**  created in 2009.  Visteon Corporation owns all rights to this work and
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

  							Name   : fbl_can.c

  					Description	   : Fbl Can Implementation

  					Organization   : Multiplex Core Technology

==============================================================================*/


/*******************************************************************************
================================================================================
 								FileInclusions                                 
================================================================================
*******************************************************************************/
#include "system.h"
#include "can.h"

/*****************************************************************************/
/* 								Local Prototypes                             */
/*****************************************************************************/
static uint32_t* calcRxBufAdrs(volatile stc_mcg_canfdn_1_t* pstcCanFD,
                                    uint8_t u8MsgBuf);
static uint32_t* calcTxBufAdrs(volatile stc_mcg_canfdn_1_t* pstcCanFD,
                                    uint8_t u8MsgBuf);
static CAN_RC CanHwEnterInitMode(CAN_HWINST const hwInst);
static CAN_RC CanHwExitInitMode(CAN_HWINST const hwInst);

/*******************************************************************************
================================================================================
 								Global variables                               
================================================================================
*******************************************************************************/

/* Look-up table for all enabled CAN-FD instances and their internal data */
static stc_canfd_instance_data_t m_astcCanFDInstanceDataLut[] =
{
    #if (PDL_PERIPHERAL_ENABLE_CANFD0 == PDL_ON)
    { 
        &CPG_CANFD0                /* pstcInstance */
    },
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD1 == PDL_ON)
    { 
        &CPG_CANFD1/*MCG_CANFD1_1*/    /* pstcInstance */
    },
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD6 == PDL_ON)
    { 
        &MCG_CANFD1_1                /* pstcInstance */
    },
    #endif
    #if (PDL_PERIPHERAL_ENABLE_CANFD5 == PDL_ON)
    { 
        &MCG_CANFD0_1                /* pstcInstance */
    },
    #endif
};

/* Message Buffer Filter ID for All 64 Mailboxes	*/
static uint32_t CAN0MBFIDREGCfg[64] = {
        CAN0_MSGBUF0_FID,  CAN0_MSGBUF1_FID,  CAN0_MSGBUF2_FID,  CAN0_MSGBUF3_FID,
        CAN0_MSGBUF4_FID,  CAN0_MSGBUF5_FID,  CAN0_MSGBUF6_FID,  CAN0_MSGBUF7_FID,
        CAN0_MSGBUF8_FID,  CAN0_MSGBUF9_FID,  CAN0_MSGBUF10_FID, CAN0_MSGBUF11_FID,
        CAN0_MSGBUF12_FID, CAN0_MSGBUF13_FID, CAN0_MSGBUF14_FID, CAN0_MSGBUF15_FID,
        
	#if (CAN0_NUM_MAILBOXES > 16)
		CAN0_MSGBUF16_FID, CAN0_MSGBUF17_FID, CAN0_MSGBUF18_FID, CAN0_MSGBUF19_FID,
        CAN0_MSGBUF20_FID, CAN0_MSGBUF21_FID, CAN0_MSGBUF22_FID, CAN0_MSGBUF23_FID,
        CAN0_MSGBUF24_FID, CAN0_MSGBUF25_FID, CAN0_MSGBUF26_FID, CAN0_MSGBUF27_FID,
        CAN0_MSGBUF28_FID, CAN0_MSGBUF29_FID, CAN0_MSGBUF30_FID, CAN0_MSGBUF31_FID,
	#endif
	
	#if (CAN0_NUM_MAILBOXES > 32)

        CAN0_MSGBUF32_FID, CAN0_MSGBUF33_FID, CAN0_MSGBUF34_FID, CAN0_MSGBUF35_FID,
        CAN0_MSGBUF36_FID, CAN0_MSGBUF37_FID, CAN0_MSGBUF38_FID, CAN0_MSGBUF39_FID,
        CAN0_MSGBUF40_FID, CAN0_MSGBUF41_FID, CAN0_MSGBUF42_FID, CAN0_MSGBUF43_FID,
        CAN0_MSGBUF44_FID, CAN0_MSGBUF45_FID, CAN0_MSGBUF46_FID, CAN0_MSGBUF47_FID,
		CAN0_MSGBUF48_FID, CAN0_MSGBUF49_FID, CAN0_MSGBUF50_FID, CAN0_MSGBUF51_FID,
        CAN0_MSGBUF52_FID, CAN0_MSGBUF53_FID, CAN0_MSGBUF54_FID, CAN0_MSGBUF55_FID,
        CAN0_MSGBUF56_FID, CAN0_MSGBUF57_FID, CAN0_MSGBUF58_FID, CAN0_MSGBUF59_FID,
        CAN0_MSGBUF60_FID, CAN0_MSGBUF61_FID ,CAN0_MSGBUF62_FID, CAN0_MSGBUF63_FID
	#endif
    };

/**
 *****************************************************************************
 ** \brief Initializes the CAN-FD module.
 **
 ** This function initialises one specific CAN-FD module with the parameters
 ** porvided in the given confdig sturcture.
 **
 ** CanFD_Init() has to be called with the parameter pstcConfig of type
 ** stc_canfd_config_t the CAN-FD settings, the CAN baudrate, the CAN-FD baudrate,
 ** and the transmission and reception and the error and status change callback
 ** function can be set.
 **
 ** All values in pstcConfig have to be in valid range. The callback functions
 ** can be NULL. In this case no information will be reported to the API.
 **
 ** \param [in] pstcCanFD         Pointer to register area of a CAN-FD unit.
 ** \param [in] pstcConfig        CAN-FD configuration parameters.
 **
 ** \retval Ok                    CAN-FD module has been successfully initialized.
 ** \retval ErrorInvalidParameter If one of the following conditions are met:
 **   - pstcCanFD == NULL
 **   - pstcConfig == NULL
 **   - pstcCanFDInternData == NULL (invalid or disabled CAN-FD unit)
 *****************************************************************************/
en_result_t Can_Init( CAN_HWINST const hwinst)
{
    en_result_t CAN_RCVar = Ok;
    stc_id_filter_t*         pstcIdFilter;
    stc_extid_filter_t*      pstcExtIdFilter;
    uint32_t*                pulAdrs;
    uint16_t                 u16count;
	uint8_t					 MsgFilterIndex;

	volatile stc_cpg_canfdn_t* pstcCanFD = (stc_cpg_canfdn_t*)m_astcCanFDInstanceDataLut[hwinst].pstcInstance;

	volatile  stc_cpg_canfdn_fdecr_field_t canfd_fdecr;



    /* Shadow data to avoid RMW and speed up HW access */
    un_mcg_canfdn_1_sidfc_t unSIDFC = { 0u };
    un_mcg_canfdn_1_xidfc_t unXIDFC = { 0u };
    un_mcg_canfdn_1_xidam_t unXIDAM = { 0u };
    un_mcg_canfdn_1_rxf0c_t unRXF0C = { 0u };
    un_mcg_canfdn_1_rxf1c_t unRXF1C = { 0u };
    un_mcg_canfdn_1_rxbc_t  unRXBC  = { 0u };
    un_mcg_canfdn_1_txefc_t unTXEFC = { 0u };
    un_mcg_canfdn_1_txbc_t  unTXBC  = { 0u };
    un_mcg_canfdn_1_cccr_t  unCCCR  = { 0u };
    un_mcg_canfdn_1_nbtp_t   unNBTP   = { 0u };
    un_mcg_canfdn_1_dbtp_t  unDBTP   = { 0u };
    un_mcg_canfdn_1_tdcr_t  unTDCR   = { 0u };
    un_mcg_canfdn_1_gfc_t   unGFC   = { 0u };
    un_mcg_canfdn_1_rxesc_t unRXESC = { 0u };
    un_mcg_canfdn_1_txesc_t unTXESC = { 0u };
    un_mcg_canfdn_1_ie_t    unIE    = { 0u };
    un_mcg_canfdn_1_ils_t   unILS   = { 0u };
    un_mcg_canfdn_1_ile_t   unILE   = { 0u };
	un_cpg_canfdn_test_t    unTEST  = { 0u };

	unTEST.stcField.u1LBCK = 1u;

     /* Set CCCR.INIT to 1 and wait until it will be updated. */
     (void)CanHwEnterInitMode(hwinst);

    /* Cancel protection */
    unCCCR.stcField.u1CCE = 1u;
    pstcCanFD->unCCCR.u32Register |= unCCCR.u32Register;

	MCG_CANFD1_FDECR_CEIV = 1u;

	#ifdef PLL_ENABLE
	Can_PrescalerInit(&CANP, CAN_PRESCALAR, PLL_CLOCK);
	#else
	Can_PrescalerInit(&CANP, CAN_PRESCALAR, MAIN_CLOCK);
	#endif

    /* Set message RAM area */
    /* Standard ID filter */
    unSIDFC.stcField.u8LSS = CAN0_NUM_MAILBOXES; /* Number of standard Message ID filter elements = 1 */
    unSIDFC.stcField.u14FLSSA = 0x00000000UL;      /* offset(word) */
    pstcCanFD->unSIDFC.u32Register = unSIDFC.u32Register;

    /* Extended ID filter */
    unXIDFC.stcField.u7LSE = 0u; /* Number of extended Message ID filter elements = 0 */
    unXIDFC.stcField.u14FLESA = 0x00000040UL/*(CAN0_NUM_MAILBOXES + 1) * 0x00000004*/; /* offset(word) */
    pstcCanFD->unXIDFC.u32Register = unXIDFC.u32Register;

    unXIDAM.stcField.u29EIDM = 0x1FFFFFFFUL;	/* not filtering(initial value) */
    pstcCanFD->unXIDAM.u32Register = unXIDAM.u32Register;

    /* Rx FIFO 0 (not use) */
    unRXF0C.stcField.u1F0OM = 0u;    /* Rx FIFO 0 blocking mode */
    unRXF0C.stcField.u7F0WM = 0u;    /* Watermark interrupt disabled */
    unRXF0C.stcField.u7F0S = 0u;     /* FIFO Element Number = 0 */
    unRXF0C.stcField.u14F0SA = 0x00000050UL; /* offset(word) */
    pstcCanFD->unRXF0C.u32Register = unRXF0C.u32Register;

    /* Rx FIFO 1 (not use) */
    unRXF1C.stcField.u1F1OM = 0u;    /* Rx FIFO 1 blocking mode */
    unRXF1C.stcField.u7F1WM = 0u;    /* Watermark interrupt disabled */
    unRXF1C.stcField.u7F1S = 0u;     /* FIFO Element Number = 0 */
    unRXF1C.stcField.u14F1SA = 0x00000060UL; /* offset(word) */
    pstcCanFD->unRXF1C.u32Register = unRXF1C.u32Register;

    /* Rx buffer */
    unRXBC.stcField.u14RBSA = 0x00000070UL; /* offset(word) */
    pstcCanFD->unRXBC.u32Register = unRXBC.u32Register;

    /* Tx FIFO/QUEUE (not use) */
    unTXEFC.stcField.u6EFWM = 0u; /* Watermark interrupt disabled. */
    unTXEFC.stcField.u6EFS = 0u;  /* Tx Event FIFO disabled. */
    unTXEFC.stcField.u14EFSA = 0x00000120UL; /* offset(word) */
    pstcCanFD->unTXEFC.u32Register = unTXEFC.u32Register;

    /* Tx buffer */
    unTXBC.stcField.u1TFQM = 0u;  /* Tx FIFO operation */
    unTXBC.stcField.u6TFQS = 0u;  /* No Tx FIFO/Queue */
    unTXBC.stcField.u6NDTB = 1u;  /* Number of Dedicated Tx Buffers = 10 */
    unTXBC.stcField.u14TBSA = 0x00000130UL; /* offset(word) */
    pstcCanFD->unTXBC.u32Register = unTXBC.u32Register;
    pstcCanFD->unTXBTIE.u32Register = 0x000003FFul;

    /* Initialize message RAM area(Entire region zeroing) */
    for (pulAdrs = (uint32_t *)CANFD1MSGRAM, u16count = 0u; u16count < CANFD1MRWORDS; u16count++)
    {
        *pulAdrs++ = 0ul;
    }

    /* Configuration of CAN bus */
    /* CCCR register */
    unCCCR.stcField.u1TXP  = 0u; /* Transmit pause disabled. */
        unCCCR.stcField.u1BRSE = 0u; /* Bit rate switching for transmissions disabled. */
        unCCCR.stcField.u1FDOE = 0u; /* FD operation disabled. */
    unCCCR.stcField.u1TEST = 0u; /* Normal operation */
    unCCCR.stcField.u1DAR  = 0u; /* Automatic retransmission enabled. */
    unCCCR.stcField.u1MON  = 0u; /* Bus Monitoring Mode is disabled. */
    unCCCR.stcField.u1CSR  = 0u; /* No clock stop is requested. */
    unCCCR.stcField.u1ASM  = 0u; /* Normal CAN operation. */
    pstcCanFD->unCCCR.u32Register |= unCCCR.u32Register;
	/*pstcCanFD->unTEST.u32Register |=unTEST.u32Register;*/

	/* Loop check */
	/*unTEST.stcField.u1LBCK = 1;
      pstcCanFD->unTEST.u32Register |= unTEST.u32Register;*/

    /* Bit Timing & Prescaler Register */

/*
    unBTP.stcField.u10BRP  = 0;
    unBTP.stcField.u6TSEG1 = CAN0_PSEG1;
    unBTP.stcField.u4TSEG2 = CAN0_PSEG2;
    unBTP.stcField.u4SJW   = CAN0_SJW;
    pstcCanFD->unBTP.u32Register  = unBTP.u32Register;
*/


    /* Bit Timing & Prescaler Register */
    unNBTP.stcField.u9NBRP  = 0x000/*0x3C0*//*pstcConfig->stcBitrate.u16Prescaler*/;
    unNBTP.stcField.u8NTSEG1 = CAN0_PSEG1/*13*//*pstcConfig->stcBitrate.u8TimeSegment1*/;
    unNBTP.stcField.u7NTSEG2 = CAN0_PSEG2/*4*//*pstcConfig->stcBitrate.u8TimeSegment2*/;
    unNBTP.stcField.u7NSJW   = CAN0_SJW/*3*//*pstcConfig->stcBitrate.u8SyncJumpWidth*/;
    pstcCanFD->unNBTP.u32Register  = unNBTP.u32Register;

    /* Configuration of Global Filter */
    unGFC.stcField.u2ANFS = 2u;                          /* Reject when unmatched id */
    unGFC.stcField.u2ANFE = 2u;                          /* Reject when unmatched id */
    unGFC.stcField.u1RRFS = 1u;                          /* Reject all remote frame */
    unGFC.stcField.u1RRFE = 1u;                          /* Reject all remote frame */
    pstcCanFD->unGFC.u32Register = unGFC.u32Register;

        /* Standard Message ID Filter */

      for(MsgFilterIndex = 0u;MsgFilterIndex < 64u;MsgFilterIndex++)
	  {
        pstcIdFilter = ((stc_id_filter_t*)((uint32_t*)CANFD1MSGRAM + pstcCanFD->unSIDFC.stcField.u14FLSSA) + 
                        MsgFilterIndex);

        if(MsgFilterIndex < CAN0_NUM_MAILBOXES)
		{
           pstcIdFilter->SFT   = 2u;                                                   /* Standard Filter Type : Classic filter */
           pstcIdFilter->SFEC  = 7u;                                                   /* Store into dedicated Rx Buffer, configuration of SFT[1:0] ignored. */

           pstcIdFilter->SFID1 = CAN0MBFIDREGCfg[MsgFilterIndex];                     /* Filter Message ID */
           pstcIdFilter->SFID2 = (0u << 9u)                                             /* Store message into a dedicated Rx Buffer */
                                   | (MsgFilterIndex);    /* Buffer index : 0 */
								   /*| ((sizeof(stc_id_filter_t) * MsgFilterIndex)/4);*/
		 }
		 else
		 {
		    pstcIdFilter->SFT   = 3u;                     /* Standard Filter Type : Classic filter */
            pstcIdFilter->SFEC  = 0u;                     /* Store into dedicated Rx Buffer, configuration of SFT[1:0] ignored. */
		 }



	  }

        /* Extended Message ID Filter */
        pstcExtIdFilter = (stc_extid_filter_t*)((uint32_t*)CANFD1MSGRAM + pstcCanFD->unXIDFC.stcField.u14FLESA);
        pstcExtIdFilter->F1_f.EFT   = 0u;                 /* Extended Filter Type : Classic filter */
        pstcExtIdFilter->F0_f.EFEC  = 7u;                 /* Store into dedicated Rx Buffer, configuration of EFT[1:0] ignored. */
        pstcExtIdFilter->F0_f.EFID1 = 0u;                 /* Filter ID : 0x10001(65537) */
        pstcExtIdFilter->F1_f.EFID2 = (0u << 9u)           /* Store message into a dedicated Rx Buffer */
                                 | 0u;                    /* Buffer index : 1 */

        /* Configuration of Rx Buffer and Rx FIFO */
        unRXESC.stcField.u3RBDS = 0u;                      /* 8 byte data field. */
        unRXESC.stcField.u3F1DS = 0u;                      /* FIFO1 8 byte data field. */
        unRXESC.stcField.u3F0DS = 0u;                      /* FIFO0 8 byte data field. */
        pstcCanFD->unRXESC.u32Register = unRXESC.u32Register;

        /* Configuration of Tx Buffer and Tx FIFO/Queue */
        unTXESC.stcField.u3TBDS = 0u;                       /* 8 byte data field. */
        pstcCanFD->unTXESC.u32Register = unTXESC.u32Register;

    /* CAN-FD operation start */
    /* Set CCCR.INIT to 0 and wait until it will be updated. */
    CAN_RCVar = (en_result_t)CanHwExitInitMode(hwinst);

    if(CAN_RCVar == CANRC_OK)
	{
	    CAN_RCVar = Ok;
#if 0
	    /* Changing CAN operation mode */
	    if( pstcConfig->bCanFDMode == 0 )
	    {
	        /* Normal CAN mode */
	        unCCCR.stcField.u2CMR  = 3u; /* Request CAN operation according ISO11898-1. */
	        pstcCanFD->unCCCR.u32Register = unCCCR.u32Register;
	    }
	    else
	    {
	        /* CAN-FD mode */
	        unCCCR.stcField.u2CMR  = 2u; /* Request CAN FD operation with bit rate switching. */
	        pstcCanFD->unCCCR.u32Register = unCCCR.u32Register;
	    }

	    while (pstcCanFD->unCCCR.stcField.u2CMR != 0u)
	    {
	    }
#endif
	}
	else
	{
		CAN_RCVar = Error;
	}

    return CAN_RCVar;
} /* CanFD_Init */

/* ===========================================================================*/
/*                                                                            */
/* Name:            CanHwExitInitMode                                         */
/*                                                                            */
/* Description:     CAN controller Hardware initialization mode exit          */
/*                                                                            */
/* Inputs:          none                                                      */
/*                                                                            */
/* Returns:         Error code                                                */
/*                                                                            */
/* ===========================================================================*/
static CAN_RC CanHwExitInitMode(CAN_HWINST const hwInst)
{
    volatile stc_cpg_canfdn_t* pstcCanFD = (stc_cpg_canfdn_t*)m_astcCanFDInstanceDataLut[hwInst].pstcInstance;

    un_cpg_canfdn_cccr_t  unCCCR = pstcCanFD->unCCCR;

	volatile uint16_t delaycnt;


    CAN_RC      rC = CANRC_OK;

    /* Set CCCR.INIT to 0 and wait until it will be updated. */

	unCCCR.stcField.u1INIT = 0u;

    pstcCanFD->unCCCR.u32Register = unCCCR.u32Register;

    delaycnt = 0u;

	while( delaycnt < 60000u)
	{
	   delaycnt++;
	}

	if( pstcCanFD->unCCCR.stcField.u1INIT != 0u )
    {
        rC = CANRC_FAIL;
    }

    /* Return the Error Code */
    return(rC);
}

/* =========================================================================*/
/*                                                                          */
/* Name:            	CanHwEnterInitMode                                    */
/*                                                                          */
/* Description:    	CAN controller Hardware initialization mode entry       */
/*                                                                          */
/* Inputs:		none                                                          */
/*                                                                          */
/* Returns:         	rC:     Error Code                                    */
/*                                                                          */
/* =========================================================================*/
static CAN_RC CanHwEnterInitMode(CAN_HWINST const hwInst)
{
    volatile stc_mcg_canfdn_1_t* pstcCanFD = m_astcCanFDInstanceDataLut[hwInst].pstcInstance;
    un_mcg_canfdn_1_cccr_t  unCCCR = {0u};

    CAN_RC      rC = CANRC_OK;             /* Return Code */

	/* Set CCCR.INIT to 1 and wait until it will be updated. */
    unCCCR.stcField.u1INIT = 1u;

    pstcCanFD->unCCCR.u32Register = unCCCR.u32Register;

    while ( pstcCanFD->unCCCR.stcField.u1INIT != 1u )
    {
    }

    /* Return the Error Code */
    return(rC);
}

/* ===========================================================================*/
/*  P U B L I C   F U N C T I O N S (Called by CAN Layer)                     */
/* ===========================================================================*/
/* ===========================================================================*/
/*                                                                            */
/* Name:            CanHwTransmit                                             */
/*                                                                            */
/* Description:     FlexCAN Transmit Message Service                          */
/*                                                                            */
/* Inputs:          hMv:     handle to transmit vector                        */
/*                  pTmd:    pointer to message descriptor                    */
/*                                                                            */
/* Returns:         error code                                                */
/*                                                                            */
/* Interrupts:      This function must be called with interrupts masked       */
/*                                                                            */
/* ===========================================================================*/
CAN_RC CanHwTransmit(CAN_HMV const hMv, CAN_TMD const * const pTmd, CAN_HWINST const hwInst)
{
    CAN_RC      rC;                 /* Return Error Code */
	volatile stc_mcg_canfdn_1_t* pstcCanFD = m_astcCanFDInstanceDataLut[hwInst].pstcInstance;
	stc_canfd_msg_t stcMsg;
	uint8_t CANMessageDataIndex;
	uint8_t CANMessageDLCinWord;
	uint32_t CANTransmitData[16];
	uint8_t TransmitMessageBfrIndx;
	uint8_t AvailableTxMsgBfrIndx = 0xFFu;
	uint8_t LoopVar;

    stcMsg.stcIdentifier.u32Identifier = pTmd->Identifier.I32;
	stcMsg.stcIdentifier.bExtended = 0;
	stcMsg.stcData.u8DataLengthCode = pTmd->Size;

    if((stcMsg.stcData.u8DataLengthCode % 4u) == 0u)
	{
	    CANMessageDLCinWord = stcMsg.stcData.u8DataLengthCode / 4u;
	}
	else
	{
	    CANMessageDLCinWord = (stcMsg.stcData.u8DataLengthCode / 4u) + 1u;
	}

	for(LoopVar = 0u;LoopVar < CANMessageDLCinWord;LoopVar++)
	{
        CANTransmitData[LoopVar] = (uint32_t)((pTmd->pData[(LoopVar * 4u) + 3u] << 24u) + (pTmd->pData[(LoopVar * 4u) + 2u] << 16u) + 
                          (pTmd->pData[(LoopVar * 4u) + 1u] << 8u) + (pTmd->pData[(LoopVar * 4u)])) ;
	}
	for(CANMessageDataIndex = 0u;CANMessageDataIndex < CANMessageDLCinWord;CANMessageDataIndex++)
	{
	    stcMsg.stcData.au32Data[CANMessageDataIndex] = CANTransmitData[CANMessageDataIndex];
	}

	rC = CANRC_NOT_AVAILABLE;

    for(TransmitMessageBfrIndx = 0u;(TransmitMessageBfrIndx < pstcCanFD->unTXBC.stcField.u6NDTB) && (0xFFu == AvailableTxMsgBfrIndx);TransmitMessageBfrIndx++)
	{
       if( 0u == (pstcCanFD->unTXBRP.u32Register & (1u << TransmitMessageBfrIndx) )) /* Check the TRPn */ 
       {
           AvailableTxMsgBfrIndx = TransmitMessageBfrIndx;
       }
    }

    rC = Can_UpdateAndTransmitMsgBuffer( pstcCanFD,AvailableTxMsgBfrIndx,&stcMsg);

    return (rC); 
}
/**
 *****************************************************************************
 ** \brief Updates the message data of a message buffer and start transmission.
 ** Transmits the message immediately.
 ** Function CanFD_Init() must be called before setup the identifier and enable
 ** this message buffer.
 **
 ** \param [in] pstcCanFD             Pointer to register area of a CAN-FD unit.
 ** \param [in] u8MsgBuf              Message buffer index (0-31)
 ** \param [in] pstcMsg               CAN-FD message data
 **
 ** \retval Ok                        Message buffer has been succesfully updated.
 ** \retval ErrorInvalidParameter     If one of the following conditions are met:
 **   - pstcCanFD == NULL
 **   - pstcMsg == NULL
 **   - pstcCanFDTxBuffer == NULL
 *****************************************************************************/
uint8_t Can_UpdateAndTransmitMsgBuffer( volatile stc_mcg_canfdn_1_t* pstcCanFD,
                                            uint8_t u8MsgBuf,
                                            stc_canfd_msg_t* pstcMsg
                                          )
{
    uint8_t u8DataLengthWord;
    stc_canfd_tx_buffer_t* pstcCanFDTxBuffer;
    uint16_t u16count;
    uint16_t u16dlcTmp;
    CAN_RC      rC ;                 /* Return Error Code */

	pstcCanFDTxBuffer = (stc_canfd_tx_buffer_t *)(calcTxBufAdrs( pstcCanFD, u8MsgBuf ));

	if ( (pstcCanFD == NULL) || ( pstcMsg == NULL ) || ( u8MsgBuf == 0xFFu) || ( pstcCanFDTxBuffer == NULL) )
	{
	   rC = CANRC_FAIL;	
	}
	else
	{
	   rC = CANRC_OK;	
	}

    if (rC !=  CANRC_FAIL)
    {    
	    /* Set data to Tx buffer */
	    pstcCanFDTxBuffer->T0_f.RTR = 0u; /* Transmit data frame. */
	    pstcCanFDTxBuffer->T0_f.XTD = (pstcMsg->stcIdentifier.bExtended == TRUE) ? 1u : 0u;
	    pstcCanFDTxBuffer->T0_f.ID  = 
	             (pstcCanFDTxBuffer->T0_f.XTD == 0u) ? (pstcMsg->stcIdentifier.u32Identifier << 18u) : pstcMsg->stcIdentifier.u32Identifier;
	    pstcCanFDTxBuffer->T1_f.EFC = 0u; /* Not store Tx event FIFO */
	    pstcCanFDTxBuffer->T1_f.MM  = 0u; /* Not used */
	    pstcCanFDTxBuffer->T1_f.DLC = pstcMsg->stcData.u8DataLengthCode;

	    /* Convert the DLC to data byte word */
	    if ( pstcMsg->stcData.u8DataLengthCode < 8u )
	    {
	        u16dlcTmp = 0u;
	    }
	    else
	    {
	        u16dlcTmp = pstcMsg->stcData.u8DataLengthCode - 8u;
	    }
	    u8DataLengthWord = iDlcInWord[u16dlcTmp];

	    /* Data set */
	    for ( u16count = 0u; u16count < u8DataLengthWord; u16count++ )
	    {
	        pstcCanFDTxBuffer->DATA_AREA_f[u16count] = pstcMsg->stcData.au32Data[u16count];
	    }

		/* Check whether Tx buffer is empty or not */
	    while ( 0u != (pstcCanFD->unTXBRP.u32Register & (1u << u8MsgBuf) )) /* Check the TRP0 */
	    {
	        if(pstcCanFD->unCCCR.stcField.u1INIT == 1u)
	        {
				rC = ErrorOperationInProgress;
				break;
	        }
	    }

	    /* Request to transmit */
	    pstcCanFD->unTXBAR.u32Register |= (1u << u8MsgBuf); // request for buffer 0
	}

    return rC;
} /* Can_UpdateAndTransmitMsgBuffer */

/* ===========================================================================*/
/*                                                                            */
/* Name:            CanHwReceive                                              */
/*                                                                            */
/* Description:     ColdFire FlexCAN Read Hardware Receive Message Buffer     */
/*                                                                            */
/* Inputs:          hMv:    Handle to Receive Message Buffer                  */
/*                  pRmd:   Pointer to Receive Message Data Structure         */
/*                                                                            */
/* Returns:         rC:     Error Code                                        */
/*                                                                            */
/* Interrupts:      Interrupts must be masked when this function is called.   */
/*                                                                            */
/* Assumptions:     Specified Message Buffer is configured as a "Receive"     */
/*                  Message Buffer                                            */
/*                                                                            */
/* ===========================================================================*/
CAN_RC CanHwReceive(CAN_HMV const hMv, CAN_RMD * const pRmd, CAN_HWINST const hwInst)
{
	volatile stc_mcg_canfdn_1_t* pstcCanFD = m_astcCanFDInstanceDataLut[hwInst].pstcInstance;
	uint16_t     u16dlcTmp = 0u;
	uint32_t*    pMbufRegs = NULL;

    CAN_UINT8  * pRxData;			  /* Destination Pointer for Receive Data */    
    CAN_UINT32   MbufRegsIde;       /* Temp Variable to read IDE bit        */
    CAN_UINT8    iMsgBuf;           /* Message Buffer Index                 */
    CAN_UINT16    iByte;             /* Message Byte Index                   */
    CAN_RC       rC;                /* Return Code                          */

	pMbufRegs = calcRxBufAdrs( pstcCanFD, hMv );

	
    /* Initialize the Received Message Qualifier Value */
    pRmd->Qualifiers = 0u;

    /* Initialize the Return Code */
    rC = CANRC_OK;

    /* Initialize Message Buffer Index */
    iMsgBuf = (CAN_UINT8) hMv;

    /* Copy the Received Message */
    /* Initialize the Receive Data Pointer */
    pRxData =  &(pRmd->Data[0]);
	{
		/* Initialize the Message Buffer Register Pointer */
	    pMbufRegs = calcRxBufAdrs( pstcCanFD, iMsgBuf );
    }

   if(pMbufRegs==NULL)
   {
      rC = CANRC_NULL;
   }
   else
   {
	/* read the code register to lock the buffer*/			
    pRmd->Size = (CAN_UINT8)((stc_canfd_rx_buffer_t *) pMbufRegs)->R1_f.DLC;
	if ( pRmd->Size < 8u )
	{
	    u16dlcTmp = 0u;
	}
	else
    /* Read all of the Data Bytes from the Message Buffer */
    {
    	u16dlcTmp = pRmd->Size - 8u;
    }

        /* Get the Data Length Code Value */
    for (iByte = 0u; iByte < iDlcInWord[u16dlcTmp] ; iByte++)
    {
       pRxData[(iByte * 4u)] =  (CAN_UINT8) (((stc_canfd_rx_buffer_t *) pMbufRegs)->DATA_AREA_f[iByte] & 0x000000FFUL);
	   pRxData[(iByte * 4u) + 1u] =  (CAN_UINT8) ((((stc_canfd_rx_buffer_t *) pMbufRegs)->DATA_AREA_f[iByte] & 0x0000FF00UL) >> 8u);
	   pRxData[(iByte * 4u) + 2u] =  (CAN_UINT8) ((((stc_canfd_rx_buffer_t *) pMbufRegs)->DATA_AREA_f[iByte] & 0x00FF0000UL) >> 16u);
	   pRxData[(iByte * 4u) + 3u] =  (CAN_UINT8) ((((stc_canfd_rx_buffer_t *) pMbufRegs)->DATA_AREA_f[iByte] & 0xFF000000UL) >> 24u);
    }

	MbufRegsIde =  ((stc_canfd_rx_buffer_t *) pMbufRegs)->R0_f.XTD;


        /* Check the IDE Bit for an Extended Message */
            /* Set Qualifier Extended Frame Format Bit */

            /* Read the Identifier */
        if (0u == MbufRegsIde)
        {
            /* Get the 11 Bit CAN Identifier (Standard Message) */
            pRmd->Identifier.I32 = (((stc_canfd_rx_buffer_t *) pMbufRegs)->R0_f.ID >> CAN_RX_SHIFT18);
    }
    /* Indicate Which Mailbox Received the Message */
    pRmd->Vector = iMsgBuf;
   }
    /* Return the Error Code */
    return (rC);
}

/**
 *****************************************************************************
 ** \brief Initializes the CAN Prescaler.
 **
 ** This function initialises CAN Prescaler with the parameters
 ** porvided in the given confdig sturcture.
 ** 
 ** Initialize the CAN Prescaler before calling CanFD_Init().
 ** Call the Can_PrescalerInit() in a state in which the CAN-FD is stopped.(CCCR.Init=1)
 **
 ** \param [in] pstcCanp          Pointer to register area of a CAN Prescaler.
 ** \param [in] u8CanPrescaler    CAN Prescaler parameters.
 ** \param [in] bSelectMainClock  Source clock selection. (TRUE:Main clock, FALSE:PLL clock)
 **
 ** \retval Ok                    CAN Prescaler has been successfully initialized.
 ** \retval ErrorInvalidParameter If one of the following conditions are met:
 **   - pstcCanp == NULL
 *****************************************************************************/
en_result_t Can_PrescalerInit( volatile stc_canp_t* pstcCanp, 
                               uint8_t u8CanPrescaler, 
                               boolean_t bSelectMainClock
                             )
{
    en_result_t CAN_RCVar = Ok;
    /* Check for NULL pointers */
    if ( pstcCanp    != NULL )
    {
		/* Set CAN prescaler */
	    pstcCanp->unCTR.stcField.u6CANPRE = u8CanPrescaler;
	    while( pstcCanp->unSTR.stcField.u1BUSY == 1u )
	    {

	    }
	    /* Select the source clock of CAN Prescaler */
	    pstcCanp->unCTR.stcField.u1CPCKS  = (bSelectMainClock == TRUE) ? 1u : 0u ;

		while( pstcCanp->unSTR.stcField.u2SCKM == 3u )
	    {

	    }
    
    }
	else
	{
		    CAN_RCVar = ErrorInvalidParameter;
	}
    return CAN_RCVar;
} /* Can_PrescalerInit */

/**
 *****************************************************************************
 ** \brief Message buffer address calculation for reception.
 **
 ** \param [in] pstcCanFD           Pointer to register area of a CAN-FD unit.
 ** \param [in] u8MsgBuf            Message buffer index for reception.(0-63)

 ** \retval pulAdrs                 Message buffer address corresponding to the index.
 **                                 Can be 0 if the index is invalid.
 *****************************************************************************/
static uint32_t* calcRxBufAdrs(volatile stc_mcg_canfdn_1_t* pstcCanFD,
                                    uint8_t u8MsgBuf)
{
    uint32_t* pulAdrs;

    if (u8MsgBuf > 63u)
    {
        /* Set 0 to the return value if the index is invalid */
        pulAdrs = NULL;
    }
    else
    {
        /* Set the message buffer address to the return value if the index is available */
        pulAdrs = (uint32_t *)CANFD1MSGRAM + pstcCanFD->unRXBC.stcField.u14RBSA + (2u + iDlcInWord[pstcCanFD->unRXESC.stcField.u3RBDS]) * u8MsgBuf;
    }
    return pulAdrs;
}
/**
 *****************************************************************************
 ** \brief Message buffer address calculation for transmission.
 **
 ** \param [in] pstcCanFD           Pointer to register area of a CAN-FD unit.
 ** \param [in] u8MsgBuf            Message buffer index for transmission.(0-31)

 ** \retval pulAdrs                 Message buffer address corresponding to the index.
 **                                 Can be 0 if the index is invalid.
 *****************************************************************************/
static uint32_t* calcTxBufAdrs(volatile stc_mcg_canfdn_1_t* pstcCanFD,
                                    uint8_t u8MsgBuf)
{
    uint32_t* pulAdrs;

    if ( u8MsgBuf > 31u)
    {
        /* Set 0 to the return value if the index is invalid */
        pulAdrs = NULL;
    }
    else
    {
        /* Set the message buffer address to the return value if the index is available */
        pulAdrs = (uint32_t *)CANFD1MSGRAM + pstcCanFD->unTXBC.stcField.u14TBSA + (2u + iDlcInWord[pstcCanFD->unTXESC.stcField.u3TBDS]) * u8MsgBuf;
    }
    return pulAdrs;
}
/* =========================================================================*/
/*                                                                          */
/* Name:            CanHwTxIsPending                                        */
/*                                                                          */
/* Description:     Service to Check for Pending Transmit                   */
/*                                                                          */
/* Inputs:          hMv: Mailbox Handle                                     */
/*                                                                          */
/* Returns:         Tx Pending Flag (True or False)                         */
/*                                                                          */
/* =========================================================================*/
CAN_RC CanHwTxIsPending(CAN_HMV const hMv, CAN_HWINST const hwInst)
{
    volatile stc_mcg_canfdn_1_t* pstcCanFD = m_astcCanFDInstanceDataLut[hwInst].pstcInstance;
    CAN_UINT8 lastMsgBuf;
    CAN_UINT8   nMsgBuffers;
    CAN_UINT8   iMsgBuf;            /* Message Buffer Index                 */
    CAN_RC      rC;                 /* Return Code                          */

    /* Initialize the Return Code */
    rC = CANRC_FALSE;

	/* Get number of message buffers configured for this can channel*/
	nMsgBuffers = pstcCanFD->unTXBC.stcField.u6NDTB;

    /* Initialize the Message Buffer Index */
    iMsgBuf = 0u;
	lastMsgBuf = 0u;

    /*
    	* Determine Which Mailboxes Are to Be Checked...
    	* All Mailboxes?
    */
    if (CANH_MV_ALL == hMv)
    {
        /*
        	* Check All Message Buffers...
        	* Last One is the Last Hardware Buffer
        	*/
        lastMsgBuf = nMsgBuffers - 1u;
        /*
        * Check the Range of General Purpose Transmit Mailboxes...
        * Last One is the Last General Purpose Transmit Buffer
        */
    }
    else if ((CANH_MV_0 <= hMv) && (nMsgBuffers > hMv))
    {
        /* A Specific Mailbox is Indicated */
        iMsgBuf = (CAN_UINT8) hMv;

        /* Last Message Buffer is Same as Specified Buffer */
        lastMsgBuf = iMsgBuf;
    }
    else
    {
        /* Not a Valid Specifier */
        rC = CANRC_NOT_AVAILABLE;
    }

    /* Check for Valid Message Buffer Specifier */
    if (CANRC_NOT_AVAILABLE != rC)
    {
        do
		{
        /* Set Return Code to False (Not Transmitting) */
        rC = CANRC_FALSE;

        /* Check whether Tx buffer is empty or not */
		    if ( 0u != (pstcCanFD->unTXBRP.u32Register & (1u << iMsgBuf)) ) /* Check the TRP0-31 */
	    {
	        rC = CANRC_TRUE;
	        if(pstcCanFD->unCCCR.stcField.u1INIT == 1u)
	        {
			   rC = CANRC_FAIL;
				break;
	        }
	    }
            iMsgBuf++;
		}while( (CANH_MV_ALL == hMv) && (iMsgBuf < lastMsgBuf) && (rC == CANRC_TRUE) );

    } /* if (CANRC_NOT_AVAILABLE != rC) */

    /* Return Tx Pending Status */
    return (rC);
}

/*******************************************************************************/
/* 		Function Name     : CanHwRxBufferIntStatusReq				           */
/*		Description       : It will check whther that particular msg buffer.   */
/*                          has been received or not                           */
/*		Invocation        : fbl_repeat										   */
/*		Parameters        : mailbox and hwint.  							   */
/*		Return Value      : True if received or Fail if it is not received.    */
/*******************************************************************************/

CAN_UINT8 CanHwRxBufferIntStatusReq( CAN_HWINST const hwInst)
{
    volatile stc_mcg_canfdn_1_t* pstcCanFD = (stc_mcg_canfdn_1_t*) &CPG_CANFD1;

	CAN_UINT8 mailbox = 0xFFu;
    /* Received a data frame */
    if ( pstcCanFD->unIR.stcField.u1DRX == 1u ) // At least one received message stored into an Rx Buffer.
    {
		for (mailbox = 0u; mailbox < CAN0_NUM_MAILBOXES; mailbox++ )
		{
			if ( pstcCanFD->unNDAT1.u32Register & (1u << mailbox))
			{
			   break;
			}	
		}
		
	}
	return (mailbox);
}
/*******************************************************************************/
/* 		Function Name     : CanHwRxBufferIntStatusClr				           */
/*		Description       : It clears the receive msgbuffer flag.              */
/*		Invocation        : fbl_repeat										   */
/*		Parameters        : mailbox and hwint.  							   */
/*		Return Value      : None.                                              */
/*******************************************************************************/
void CanHwRxBufferIntStatusClr(CAN_UINT8 mailbox, CAN_HWINST const hwInst)
{
	volatile stc_mcg_canfdn_1_t* pstcCanFD = (stc_mcg_canfdn_1_t*) &CPG_CANFD1;
	pstcCanFD->unNDAT1.u32Register = (1u << mailbox);
}
/*******************************************************************************/
/* 		Function Name     : CanHwTxBufferIntStatusClr				           */
/*		Description       : It clears the transmit msgbuffer flag.             */
/*		Invocation        : fbl_repeat										   */
/*		Parameters        : mailbox and hwint.  							   */
/*		Return Value      : None.                                              */
/*******************************************************************************/
void CanHwTxBufferIntStatusClr(CAN_UINT8 mailbox, CAN_HWINST const hwInst)
{
	volatile stc_mcg_canfdn_1_t* pstcCanFD = (stc_mcg_canfdn_1_t*) &CPG_CANFD1;
	while (pstcCanFD->unTXBRP.u32Register&(1u << mailbox));
}
/*******************************************************************************/
/* 		Function Name     : CanHwGetBusOFFStatus     				           */
/*		Description       : It clears the transmit msgbuffer flag.             */
/*		Invocation        : fbl_repeat										   */
/*		Parameters        : mailbox and hwint.  							   */
/*		Return Value      : None.                                              */
/*******************************************************************************/
CAN_RC CanHwGetBusOFFStatus(CAN_HWINST const hwInst)
{
	volatile stc_mcg_canfdn_1_t* pstcCanFD = (stc_mcg_canfdn_1_t*) &CPG_CANFD1;

	CAN_RC status = CANRC_FALSE;

	if (pstcCanFD->unPSR.stcField.u1BO == TRUE)
	{
		status = CANRC_TRUE;
	}

	return status;
}


/*******************************************************************************
================================================================================
				RTC    REVISION     NOTES									   
  		For each change to this file, be sure to record:					   
  		1.   Who made the change and when the change was made.				   
  		2.   Why the change was made and the intended result.				   
  																			   
  		Date      version     By         Reason For Change					   
================================================================================  																			   
       10-03-16      1      PSATHISH      Initial version						   

================================================================================
********************************************************************************/
