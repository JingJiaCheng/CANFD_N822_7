/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2015. Visteon Corporation owns all rights to           *
* this work and intends to maintain it in confidence to preserve             *
* its trade secret status. Visteon Corporation reserves the right,           *
* under the copyright laws of the United States or those of any              *
* other country that may have jurisdiction, to protect this work             *
* as an unpublished work, in the event of an inadvertent or                  *
* deliberate unauthorized publication. Visteon Corporation also              *
* reserves its rights under all copyright laws to protect this               *
* work as a published work, when appropriate. Those having access            *
* to this work may not copy it, use it, modify it or disclose the            *
* information contained in it without the written authorization              *
* of Visteon Corporation.                                                    *
*                                                                            *
******************************************************************************/
/*****************************************************************************
*  File Name         :  I2c.c                                                *
*  Module Short Name :  I2c                                                  *
*  Description       :  This file contains implementations of the I2C Driver *
*                       for S6J32xx series & S6J3120 microcontrollers.       *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  S6J32xx series & S6J120 micro based Hardware Platform  *
*                                                                            *
******************************************************************************/
#ifndef I2C_C
#define I2C_C

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
#include "fbl_i2c_drv.h"
#include "system.h"
#include "I2c_Cfg.h"

/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/
#define I2C_NO_PRIORITY 0xFF
#define I2C_SET_BIT     0x01
#define I2C_CLEAR_BIT   0x00

#define I2C_WRITE   0x00
#define I2C_READ    0x01

/* Only fast mode of operation is supported by this I2cDrv. So Baud rate is hardcoded as 400000. */
#define I2C_BAUD_RATE_COUNT     ((I2C_SOURCE_CLOCK / 400000)-1)

/* This is the timeout used to wait for stop signal generation after generation of NineStartOneStop. As the max 
frequency for cypress series is 240MHz, this is calculated and set as 20  */
#define I2C_WAIT_TIMEOUT        20

#define E_NOT_OK  1u
#define E_OK          0u

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/


/*****************************************************************************
*                                 Registers                                  *
******************************************************************************/
/*
I2C Bus Control Register (IBCR) 

Bit 7: MSS- Master Mode
Bit 6: ACT - Repeated Start Generation Bit for Read
Bit 5: ACKE - Ack byte enable bit for read
Bit 4: WSEL - Wait Selection Bit
Bit 3: CNDE - Condition (Stop / Repeated Start) Detection Interrupt Enable
Bit 2: INTE - Interrupt Enable Bit
Bit 1: BER - Bus Error Flag Bit (R)
Bit 0: INT - Interrupt Flag Bit (R)

I2c Master Mode Init: IBCR = 0x84 (0b10000100)
I2c Master Mode Write: IBCR = 0x84 (0b10000100)
I2c Master Mode Read: IBCR = 0xE4 (0b11100100)
I2c Slave Mode Init: IBCR = 0x04 (0b00000100)



Serial Mode Register (SMR)

Bit 7: MD2 ---|
Bit 6: MD1 ---|-- Operation Mode Setting (100 - I2C Mode)
Bit 5: MD0 ---|
Bit 4: WUCR: Wakeup Control Bit
Bit 3: RIE: Reception Interrupt Enable
Bit 2: TIE: Transmission Interrupt Enable
Bit 1: Resv
Bit 0: Resv

I2c Mode Init: IBCR = 0x80 (0b10000000)
I2c Mode Write: IBCR = 0x84 (0b10000100)
I2c Mode Read: IBCR = 0x88 (0b10001000)

******************************************************************************/


/* Note: A sequence is considered as a channel */
/* There is no difference between both, even though both are used in different places */


/*****************************************************************************
*                                Globally  accessed Variable Declarations    *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/


/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/
static I2c_DrvStatusType     I2c_DrvStatus;
static I2c_ChannelInfoType   I2c_ChannelInfo[I2C_NUMBER_OF_SW_CHANNELS];
static I2c_HwInfoType        I2c_HwInfo[I2C_NUMBER_OF_HW_CHANNELS];
static UINT8                 I2c_SendCom[64];


/*****************************************************************************
*                              Limited Scope Prototypes                      *
******************************************************************************/
static void     I2c_HwInit(UINT8 I2c_unit_index);
static void     I2c_HwDeInit(I2c_RegisterPtrType I2c_unit);
static void     I2c_StartTransfer(I2c_SequenceType Sequence);
static void     I2c_RepeatedStart(I2c_SequenceType Sequence);
static UINT8    I2c_TxData(I2c_RegisterPtrType Reg_pt, I2c_DataType Data);
static void     I2c_RxData(I2c_RegisterPtrType Reg_pt, I2c_DataType* DataPtr);
static void     I2c_Stop(I2c_RegisterPtrType Reg_pt);
static void     I2c_Complete(I2c_RegisterPtrType Reg_pt);
static void     I2c_SendNack(I2c_RegisterPtrType Reg_pt);
static UINT8    I2c_CheckStop(I2c_RegisterPtrType Reg_pt);
static boolean  I2c_CheckSdaSclLines(UINT8 Hw_Unit);
static UINT8    I2c_CheckSdaStatus(I2c_RegisterPtrType Reg_pt);
static UINT8    I2c_CheckSclStatus(I2c_RegisterPtrType Reg_pt);
static boolean  I2c_SendNineStartOneStop(I2c_RegisterPtrType Reg_pt);

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/

/*============================================================================
**
** Function Name    :   I2c_Init
**
** Visibility       :   Public
**
** Description      :   The Init function is called to initialise the Global 
**                      and Static variables of this module.
**
** Invocation       :
**
** Inputs           :   I2c_ConfigType * ConfigPtr - Pointer to a configuration type.
**
** Outputs          :
**
** Critical Section :
**
**==========================================================================*/

void I2c_Init (void)
{
    UINT8 hw_channel;
    UINT8 sw_channel;

    for(hw_channel = 0; hw_channel < I2C_NUMBER_OF_HW_CHANNELS; hw_channel++)
    {
        I2c_HwInfo[hw_channel].CurrentPriority = I2C_NO_PRIORITY;
        I2c_HwInfo[hw_channel].CurrentSeq = 0;
        I2c_HwInfo[hw_channel].TimeoutCount = 0x0000;
        I2c_HwInfo[hw_channel].IsStopWait = FALSE;
        I2c_HwInit(hw_channel);
        I2c_HwInfo[hw_channel].HwStatus = I2C_IDLE;
    }
    for(sw_channel = 0; sw_channel < I2C_NUMBER_OF_SW_CHANNELS; sw_channel++)
    {
        I2c_ChannelInfo[sw_channel].SlaveAddress = 0;
        I2c_ChannelInfo[sw_channel].TxBuffer = 0;
        I2c_ChannelInfo[sw_channel].RxBuffer = 0;
        I2c_ChannelInfo[sw_channel].TxLength = 0;
        I2c_ChannelInfo[sw_channel].TxIndex = 0;
        I2c_ChannelInfo[sw_channel].RxLength = 0;
        I2c_ChannelInfo[sw_channel].RxIndex = 0;
        I2c_ChannelInfo[sw_channel].Result = I2C_SEQ_OK;
        I2c_ChannelInfo[sw_channel].IsRepeatStart = FALSE;
        I2c_ChannelInfo[sw_channel].IsQueued = FALSE;
    }
    I2c_DrvStatus.Status = I2C_IDLE;
}

/*============================================================================
**
** Function Name    :   I2c_HwInit
**
** Visibility       :   Static
**
** Description      :   This function will be called to initialise the i2c hw unit. 
**
** Invocation       :   I2c_Init
**
** Inputs           :   UINT8 I2c_unit_index - Hw unit index.
**
** Outputs          :   None
**
** Critical Section :
**
**==========================================================================*/
static void I2c_HwInit(UINT8 I2c_unit_index)
{

    I2c_RegisterPtrType i2c_unit;

    /* I2C Port Settings shall be done in port configurations */
    
    i2c_unit = I2c_Config[I2c_unit_index].BaseAddress;
    /* Switch to I2C operation mode */
    i2c_unit->Std.RegSmr.SMR_t.Md = 0x04u;
    /* Disable address compare. */
    i2c_unit->Std.RegIsmk.ISMK_t.Sm = I2C_CLEAR_BIT;
    /* Continue after bus error */
    i2c_unit->Std.RegEibcr.EIBCR_t.Bec = I2C_SET_BIT;

    i2c_unit->Std.RegIsba.ISBA_t.Saen = I2C_CLEAR_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Mssc = I2C_CLEAR_BIT;
    i2c_unit->Std.RegIbcr.IBCR_t.Scc = I2C_CLEAR_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Ackec = I2C_SET_BIT;
    i2c_unit->Clr.RegSsrC.SSRC_t.Dmac = I2C_SET_BIT;
    /* Set baudrate */
    i2c_unit->Std.RegBgr1Brg0 = I2C_BAUD_RATE_COUNT;

    i2c_unit->Clr.RegIbsrC.IBSRC_t.Rscc = I2C_SET_BIT;
    i2c_unit->Clr.RegIbsrC.IBSRC_t.Spcc = I2C_SET_BIT;
    i2c_unit->Clr.RegFcr0C.FCR0C_t.Fe1c = I2C_SET_BIT;
    i2c_unit->Clr.RegFcr0C.FCR0C_t.Fe2c = I2C_SET_BIT;
    i2c_unit->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
    i2c_unit->Clr.RegSmrC.SMRC_t.Riec = I2C_SET_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Cndec = I2C_SET_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Intec = I2C_SET_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;

    /* Enable I2C Interface */
    i2c_unit->Std.RegIsmk.ISMK_t.En = I2C_SET_BIT;
   
}
/*============================================================================
**
** Function Name    :   I2c_DeInit
**
** Visibility       :   Public
**
** Description      :   The DeInit function is called to initialise the Global 
**                      and Static variables of this module to initial/ default values.
**
** Invocation       :   Function could be called from interrupt level or from task level
**
** Inputs           :
**
** Outputs          :   E_OK  : Init Successful
**                      E_NOT_OK : Init Not Successful
**
** Critical Section :
**
**==========================================================================*/
UINT8 I2c_DeInit(void)
{
    UINT8 hw_channel;
    UINT8 sw_channel;
    I2c_RegisterPtrType i2c_unit;
    UINT8 ret_val;

    ret_val = E_NOT_OK;
    
    for(hw_channel = 0; hw_channel < I2C_NUMBER_OF_HW_CHANNELS; hw_channel++)
    {
        i2c_unit = I2c_Config[hw_channel].BaseAddress;
        I2c_HwInfo[hw_channel].CurrentPriority = I2C_NO_PRIORITY;
        I2c_HwInfo[hw_channel].CurrentSeq = 0;
        I2c_HwInfo[hw_channel].TimeoutCount = 0x0000;
        I2c_HwInfo[hw_channel].IsStopWait = FALSE;
        I2c_HwInfo[hw_channel].HwStatus = I2C_UNINIT;
        I2c_HwDeInit(i2c_unit);
    }
    for(sw_channel = 0; sw_channel < I2C_NUMBER_OF_SW_CHANNELS; sw_channel++)
    {
        I2c_ChannelInfo[sw_channel].SlaveAddress = 0;
        I2c_ChannelInfo[sw_channel].TxBuffer = 0;
        I2c_ChannelInfo[sw_channel].RxBuffer = 0;
        I2c_ChannelInfo[sw_channel].TxLength = 0;
        I2c_ChannelInfo[sw_channel].TxIndex = 0;
        I2c_ChannelInfo[sw_channel].RxLength = 0;
        I2c_ChannelInfo[sw_channel].RxIndex = 0;
        I2c_ChannelInfo[sw_channel].Result = I2C_SEQ_OK;
        I2c_ChannelInfo[sw_channel].IsRepeatStart = FALSE;
        I2c_ChannelInfo[sw_channel].IsQueued = FALSE;
    }
    I2c_DrvStatus.Status = I2C_UNINIT;
    
    return ret_val;
}

/*============================================================================
**
** Function Name    :   I2c_HwDeInit
**
** Visibility       :   Static
**
** Description      :   This function will be called to shutdown the i2c hw unit. 
**
** Invocation       :   I2c_DeInit
**
** Inputs           :   I2c_RegisterPtrType i2c_unit - Hw unit base register address.
**
** Outputs          :   None
**
** Critical Section :
**
**==========================================================================*/
static void I2c_HwDeInit(I2c_RegisterPtrType I2c_unit)
{
    /* I2C Port Settings shall be done in port configurations */
    
    /* Disable I2C */
    I2c_unit->Std.RegIsmk.ISMK_t.En = I2C_CLEAR_BIT;
    /* Reset the register to power on default */
    I2c_unit->Std.RegSmr.SMR_u8 = 0x00;
    I2c_unit->Std.RegSsr.SSR_u8 = 0x00;
}

/*============================================================================
**
** Function Name    :   I2c_SetupEB
**
** Visibility       :   Public
**
** Description      :   This function makes the buffer to QUEUED state. 
**                      This will not trigger the transmission.
**                      If the EB transmission if ongoing, the request will not
**                      be queued.
**
** Invocation       :   Application
**
** Inputs           :   I2c_ChannelType Channel: I2c sw channel number.
**                      const I2c_DataType* TxBufferPtr: Data buffer pointer for Tx.
**                      I2c_DataType* RxBufferPtr: Data buffer pointer for Rx.
**                      I2c_NumberOfDataType TxLength: Transmission Length.
**                      I2c_NumberOfDataType RxLength: Reception Length.
**                      UINT8 SlaveAddress: Device Slave Address.
**
** Outputs          :  E_OK: If success.
**                     E_NOT_OK: If not success.
**
** Critical Section :
**
**==========================================================================*/
UINT8 I2c_SetupEB(I2c_ChannelType Channel, I2c_DataType* TxBufferPtr, I2c_DataType* RxBufferPtr, \
                           I2c_NumberOfDataType TxLength, I2c_NumberOfDataType RxLength, UINT8 SlaveAddress)
{
    UINT8 ret_val;
    I2c_SeqResultType Result;

    ret_val = E_NOT_OK;
    
    I2c_EnterCriticalSection();
    Result = I2c_ChannelInfo[Channel].Result;
    I2c_ExitCriticalSection();
    if(Result != I2C_SEQ_BUSY)
    {
        I2c_ChannelInfo[Channel].SlaveAddress = SlaveAddress;
        I2c_ChannelInfo[Channel].TxBuffer = TxBufferPtr;
        I2c_ChannelInfo[Channel].RxBuffer = RxBufferPtr;
        I2c_ChannelInfo[Channel].RxLength = RxLength;
        I2c_ChannelInfo[Channel].TxLength = TxLength;
        I2c_ChannelInfo[Channel].TxIndex = 0;
        I2c_ChannelInfo[Channel].RxIndex = 0;
        I2c_ChannelInfo[Channel].IsRepeatStart = 0;
        ret_val = E_OK;
    }
    
    return ret_val;
}

/*============================================================================
**
** Function Name    :   I2c_AsyncTransmit
**
** Visibility       :   Public
**
** Description      :   This function triggers the asynchronous transmission.
**                      This will take the external buffers under this sequence already setup-ed.
**
** Invocation       :   Application.
**
** Inputs           :   I2c_SequenceType Sequence: The sequence number to be triggered.
**
** Outputs          :  E_OK: If tx/rx accepted.
**                     E_NOT_OK: If tx/rx not accepted.
**
** Critical Section :
**
**==========================================================================*/
UINT8 I2c_AsyncTransmit(I2c_SequenceType Sequence)
{
    UINT8 ret_val;
    ret_val = E_NOT_OK;
    
    if(I2c_DrvStatus.Status != I2C_UNINIT)
    {
        if(Sequence < I2C_NUMBER_OF_SW_CHANNELS)
        {
            I2c_EnterCriticalSection();
            I2c_ChannelInfo[Sequence].IsQueued = TRUE;
            I2c_ExitCriticalSection();
            ret_val = E_OK;
        }
    }
    return ret_val;
}

#if 0
/*============================================================================
**
** Function Name    :   I2c_SyncTransmit
**
** Visibility       :   Public
**
** Description      :   This function triggers the Synchronous transmission.
**                      This will take the external buffers under this sequence already setup-ed.
**
** Invocation       :   Should not be invoked as this functionality is not supported.
**
** Inputs           :   I2c_SequenceType Sequence: The sequence number to be triggered.
**
** Outputs          :  E_OK: If tx/rx success.
**                     E_NOT_OK: If tx/rx not success.
**
** Critical Section :
**
**==========================================================================*/
UINT8 I2c_SyncTransmit(I2c_SequenceType Sequence)
{
    UINT8 ret_val;
    ret_val = E_NOT_OK;
    return ret_val;
}
#endif /* I2C_SYNC_TRANSMIT_ENABLED */ 

void I2c_Delay(UINT32 delaytime)
{
    UINT32 ulI = 0;
    for ( ulI = 0; ulI < delaytime ; ulI++ )
    {
        ;
    }

    return;
}

/*============================================================================
**
** Function Name    :   I2c_GetStatus
**
** Visibility       :   Public
**
** Description      :   This function returns the I2c driver status.
**
** Invocation       :   Application
**
** Inputs           :   void
**
** Outputs          :  I2C_UNINIT: If I2c not initialized.
**                     I2C_BUSY: If I2c line busy.
**                     I2C_IDLE: If I2c Idle.
**
** Critical Section :  Yes
**
**==========================================================================*/
I2c_StatusType I2c_GetStatus(void)
{
    I2c_StatusType ret_status;
    /* CS Start */
    I2c_EnterCriticalSection();
    ret_status = I2c_DrvStatus.Status;
    I2c_ExitCriticalSection();
    /* CS End */
    return (ret_status);
}

/*============================================================================
**
** Function Name    :   I2c_GetSequenceResult
**
** Visibility       :   Public
**
** Description      :   This function returns the Sequence Result.
**
** Invocation       :   Application
**
** Inputs           :   I2c_SequenceType Sequence: Sequence ID.
**
** Outputs          :  I2c_SeqResultType
**                     I2C_SEQ_OK        : Sequence OK.
**                     I2C_SEQ_BUSY      : Sequence BUSY.
**                     I2C_SEQ_QUEUED    : Sequence Queued.
**                     I2C_SEQ_FAILED    : Sequence Failed.
**                     I2C_SEQ_CANCELLED : Sequence Cancelled.
** Critical Section :  Yes
**
**==========================================================================*/
I2c_SeqResultType I2c_GetSequenceResult(I2c_SequenceType Sequence)
{
    I2c_SeqResultType ret_result;
    /* CS Start */
    I2c_EnterCriticalSection();
    ret_result = I2c_ChannelInfo[Sequence].Result;
    I2c_ExitCriticalSection();
    /* CS End */
    return (ret_result);
}

/*============================================================================
**
** Function Name    :   I2c_Cancel
**
** Visibility       :   Public
**
** Description      :   This function cancels an already triggered sequence, if 
**                      it is not taken for transmission (still queued).
**
** Invocation       :   Application.
**
** Inputs           :   I2c_SequenceType Sequence: Sequence ID.
**
** Outputs          :   None
**
** Critical Section :   Yes
**
**==========================================================================*/
void I2c_Cancel(I2c_SequenceType Sequence )
{
    if(Sequence < I2C_NUMBER_OF_SW_CHANNELS)
    {
        /* CS Start */
        I2c_EnterCriticalSection();
        /* For I2c, Sequence and Channel are same */
        if(I2c_ChannelInfo[Sequence].Result == I2C_SEQ_QUEUED)
        {
            I2c_ChannelInfo[Sequence].Result = I2C_SEQ_CANCELLED;
        }
        /* Else, if busy, it shall complete the sequence. */
        /* Any other state, no need to cancel */
        I2c_ExitCriticalSection();
        /* CS End */
    }
}

/*============================================================================
**
** Function Name    :   I2c_MainFunction
**
** Visibility       :   Public
**
** Description      :   This function is invoked periodically by the Os. 
**                      This function process the pending transmissions 
**                      according to the priority.
**
** Invocation       :   Os Scheduleing.
**
** Inputs           :   None
**
** Outputs          :   None
**
** Critical Section :   Yes
**
**==========================================================================*/
void I2c_MainFunction(void)
{
    I2c_SequenceType Sequence;
    UINT8 HwUnitIndex;
    
    /*Select the sequence(channel) among the queued, based on priority and HwUnit Status */
    for(Sequence = 0; Sequence< I2C_NUMBER_OF_SW_CHANNELS; Sequence++)
    {
        if(I2c_ChannelInfo[Sequence].IsQueued != FALSE)
        {
            HwUnitIndex = I2c_ChannelConfig[Sequence].HwUnit;
            if((I2c_HwInfo[HwUnitIndex].HwStatus == I2C_IDLE) || (I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED))
            {
                if(I2c_HwInfo[HwUnitIndex].CurrentPriority > I2c_ChannelConfig[Sequence].SeqPriority)
                {
                    I2c_HwInfo[HwUnitIndex].CurrentPriority = I2c_ChannelConfig[Sequence].SeqPriority;
                    I2c_HwInfo[HwUnitIndex].CurrentSeq = Sequence;
                    I2c_HwInfo[HwUnitIndex].HwStatus = I2C_QUEUED;
                }
            }
        }
    }
    /* Transmit the selected Sequence for each HwUnit*/
    for(HwUnitIndex = 0; HwUnitIndex < I2C_NUMBER_OF_HW_CHANNELS; HwUnitIndex++)
    {
        if(I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED)
        {
            Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
            /* Clear the Queued Flag */
            I2c_EnterCriticalSection();
            I2c_ChannelInfo[Sequence].IsQueued = FALSE;
            I2c_ExitCriticalSection();
            if((I2c_ChannelInfo[Sequence].TxLength > 0) || (I2c_ChannelInfo[Sequence].RxLength > 0))
            {
                 /* Channel Status to BUSY */
                 I2c_ChannelInfo[Sequence].Result = I2C_SEQ_BUSY;
                 /* Hw Unit Status to BUSY */
                 I2c_HwInfo[HwUnitIndex].HwStatus = I2C_BUSY;
                 /* Driver Status to BUSY */
                 I2c_DrvStatus.Status = I2C_BUSY;
                 
                 if(FALSE != I2c_CheckSdaSclLines(HwUnitIndex))
                 {
                     I2c_StartTransfer(Sequence); 
                 }
                 else
                 {
                     /* I2c Bus busy, cannot start communication */
                     /* Channel Status to FAILED */
                     I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                     /* Hw Unit Status to IDLE */
                     I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
                     /* Driver Status to IDLE */
                     I2c_DrvStatus.Status = I2C_IDLE;
                     I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
                     if(I2c_ChannelConfig[Sequence].EndNotification != NULL)
                     {
                           /* Sequence End Callback Notofication */
                           I2c_ChannelConfig[Sequence].EndNotification();
                     }
                 }
            }
        }
        else if(I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
        {
            if (0 != I2c_HwInfo[HwUnitIndex].TimeoutCount)
            {
               I2c_HwInfo[HwUnitIndex].TimeoutCount--;
               if (0 == I2c_HwInfo[HwUnitIndex].TimeoutCount)
               {
                  /* cs start */
                  I2c_EnterCriticalSection();
                  if (I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
                  {
                      I2c_Complete(I2c_Config[HwUnitIndex].BaseAddress);
                      I2c_HwInfo[HwUnitIndex].IsStopWait = FALSE;
                  }
                  I2c_ExitCriticalSection();
                  /*end cs*/
                  Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
                  I2c_ChannelInfo[Sequence].IsRepeatStart = FALSE;
                  I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                  I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
                  if(I2c_ChannelConfig[Sequence].EndNotification != NULL)
                  {
                       /* Sequence End Callback Notofication */
                       I2c_ChannelConfig[Sequence].EndNotification();
                  }
                  I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
               }
           }
        }
    }
}

/*============================================================================
**
** Function Name    :   I2c_StartTransfer
**
** Visibility       :   Static
**
** Description      :   This function starts the I2c transfer. 
**                      Rest of the transfer will take place in interrupt.
**
** Invocation       :   Main Function.
**
** Inputs           :   I2c_SequenceType Sequence: Sequence/Channel ID
**
** Outputs          :   None
**
** Critical Section :   Yes
**
**==========================================================================*/
static void I2c_StartTransfer(I2c_SequenceType Sequence)
{
    I2c_RegisterPtrType i2c_unit;

    i2c_unit = I2c_Config[(I2c_ChannelConfig[Sequence].HwUnit)].BaseAddress;

    /*Fill the transfer buffer with Slave Address*/
    i2c_unit->Std.RegDr = (I2c_ChannelInfo[Sequence].SlaveAddress | I2C_WRITE);
    /* Clear interrupt flag */
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
    /* Wait Select; ACK for 8th bit */
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Wselc = I2C_SET_BIT;
    /* Enable i2c Status interrupts */
//    i2c_unit->Std.RegIbcr.IBCR_t.Inte = I2C_SET_BIT;
    /* Set start condition */
    i2c_unit->Std.RegIbcr.IBCR_t.Mss = I2C_SET_BIT;


}

/*============================================================================
**
** Function Name    :   I2c_RepeatedStart
**
** Visibility       :   Static
**
** Description      :   This function triggers the I2c Repeated Start. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_SequenceType Sequence: Sequence/Channel ID
**
** Outputs          :   None
**
** Critical Section :   Yes
**
**==========================================================================*/
static void I2c_RepeatedStart(I2c_SequenceType Sequence)
{
    I2c_RegisterPtrType i2c_unit;
    
    i2c_unit = I2c_Config[(I2c_ChannelConfig[Sequence].HwUnit)].BaseAddress;
    
    /* Disable Repeated Start / Stop Interrupt */
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Cndec = I2C_SET_BIT;
    /* Enable i2c Status interrupts */
//    i2c_unit->Std.RegIbcr.IBCR_t.Inte = I2C_SET_BIT;
    /* Disable Tx Interrupt */
    i2c_unit->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;

    i2c_unit->Set.RegIbcrS.IBCRS_t.Wsels = I2C_SET_BIT;
    i2c_unit->Set.RegIbcrS.IBCRS_t.Ackes  = I2C_SET_BIT;
    i2c_unit->Std.RegDr = (I2c_ChannelInfo[Sequence].SlaveAddress | I2C_READ);
    i2c_unit->Set.RegIbcrS.IBCRS_t.Sccs = I2C_SET_BIT;
    i2c_unit->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
    I2c_Delay(300);    

}
/*============================================================================
**
** Function Name    :   I2c_TxRxIsroutine
**
** Visibility       :   Public
**
** Description      :   This ISR is invoked whenever a transmission complete 
**                      or reception of a byte is done.
**
** Invocation       :   Interrupt.
**
** Inputs           :   UINT8 I2c_unit_index: Hw Unit Index
**
** Outputs          :   None
**
** Critical Section :   Yes
**
**==========================================================================*/
UINT8 I2c_TxRxIsroutine(UINT8 HwUnitIndex)
{
    I2c_DataType Data;
    I2c_ChannelType Sequence;
    I2c_RegisterPtrType Reg_pt;
    UINT8 return_value = 0;

    Reg_pt = I2c_Config[HwUnitIndex].BaseAddress;
    Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;

    if (Reg_pt->Std.RegIbcr.IBCR_t.Ber != I2C_CLEAR_BIT)
    {
        /*error*/
        if((Reg_pt->Std.RegIbcr.IBCR_t.Scc != I2C_CLEAR_BIT) && (Reg_pt->Std.RegIbcr.IBCR_t.Mss != I2C_CLEAR_BIT))
        {
            I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
            /* Start/Repeated Start already issued. Issue a STOP */
            I2c_Stop(Reg_pt);
            /* Load Timeout Value for Stop*/
            I2c_HwInfo[HwUnitIndex].TimeoutCount = I2C_STOP_TIMEOUT_COUNT;
            I2c_HwInfo[HwUnitIndex].IsStopWait = TRUE;
        }
        else
        {
            /* I2c Arbitration Loss need not to be checked, as it doesnt support Multi Master */
        }
    }
    else if (FALSE != I2c_HwInfo[HwUnitIndex].IsStopWait)
    {
        if(FALSE != I2c_CheckStop(Reg_pt))
        {
            /* Stop Interrupt has generated */
            I2c_Delay(500);
            I2c_Complete(Reg_pt);
            I2c_HwInfo[HwUnitIndex].TimeoutCount = 0x0000;
            I2c_HwInfo[HwUnitIndex].IsStopWait = FALSE;
            I2c_ChannelInfo[Sequence].IsRepeatStart = FALSE;
            I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
            if(I2c_ChannelConfig[Sequence].EndNotification != NULL)
            {
                /* Sequence End Callback Notofication */
                I2c_ChannelConfig[Sequence].EndNotification();
            }
            I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
            I2c_Delay(1000);
            return_value = 1;
        }
        else
        {
            /* wait received stop in next routine */
            return_value = 0;
        }
    }
    else
    {
        /* No Error found, continue communication */
        if(FALSE != Reg_pt->Std.RegIbsr.IBSR_t.Trx)
        {
            if(I2c_ChannelInfo[Sequence].TxIndex < I2c_ChannelInfo[Sequence].TxLength)
            {
                /* Data Pending for Transmission*/
                if(Reg_pt->Std.RegSsr.SSR_t.Tdre != I2C_CLEAR_BIT)
                {
                    /* Ack received? */
                    if(FALSE == Reg_pt->Std.RegIbsr.IBSR_t.Rack)
                    {
                        Data = I2c_ChannelInfo[Sequence].TxBuffer[(I2c_ChannelInfo[Sequence].TxIndex)];
                        if(FALSE != I2c_TxData(Reg_pt, Data))
                        {
                            I2c_ChannelInfo[Sequence].TxIndex++;
                            if(I2c_ChannelInfo[Sequence].TxIndex == I2c_ChannelInfo[Sequence].TxLength)
                            {
                                /* Enable i2c status interrupts */
//                                Reg_pt->Std.RegIbcr.IBCR_t.Inte = I2C_SET_BIT;
                                /* Disable Transmission Interrupt */
                                Reg_pt->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
                                I2c_Delay(1500);
                            }
                            else    /* has another send data go to next routine*/
                            {
                                ;
                            }
                        }
                        else    /* send error, next routine resend */
                        {
                            ;
                        }
                    }
                    else /* Ack not recieved */
                    {
                        I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                        /* Ack not recieved. Issue a STOP */
                        I2c_Stop(Reg_pt);
                        /* Load Timeout Value for Stop*/
                        I2c_HwInfo[HwUnitIndex].TimeoutCount = I2C_STOP_TIMEOUT_COUNT;
                        I2c_HwInfo[HwUnitIndex].IsStopWait = TRUE;
                        I2c_Delay(800);                        
                    }
                }
                else    /* did not send end bit */
                {
                    ;
                }
            }
            else
            {
                if(I2c_ChannelInfo[Sequence].RxLength != 0)
                {
                    if(Reg_pt->Std.RegSsr.SSR_t.Tdre != I2C_CLEAR_BIT)
                    {
                        if(FALSE == Reg_pt->Std.RegIbsr.IBSR_t.Rack)
                        {
                            /* Repeated Start */
                            I2c_RepeatedStart(Sequence);
                            I2c_Delay(1500);  
                        }
                        else /* Ack not recieved */
                        {
                            I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                            /* Ack not recieved. Issue a STOP */
                            I2c_Stop(Reg_pt);
                            /* Load Timeout Value for Stop*/
                            I2c_HwInfo[HwUnitIndex].TimeoutCount = I2C_STOP_TIMEOUT_COUNT;
                            I2c_HwInfo[HwUnitIndex].IsStopWait = TRUE;
                            I2c_Delay(800);                                                    
                        }
                    }
                    else   /* did not send end bit */ 
                    {
                        ;
                    }
                }
                else    /* send all data */
                {
                    /* Write Complete; No read; Generate STOP */
                    I2c_ChannelInfo[Sequence].Result = I2C_SEQ_OK;
                    /* Disable Tx Interrupt */
                    Reg_pt->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
                    /* Genrate I2c Stop */
                    I2c_Stop(Reg_pt);
                    I2c_HwInfo[HwUnitIndex].TimeoutCount = I2C_STOP_TIMEOUT_COUNT;
                    I2c_HwInfo[HwUnitIndex].IsStopWait = TRUE;
                    I2c_Delay(1500);  
                }
            }
        }
        else
        {
            /* Reception */
            if(I2c_ChannelInfo[Sequence].RxIndex < I2c_ChannelInfo[Sequence].RxLength)
            {
                if(Reg_pt->Std.RegIbsr.IBSR_t.Fbt == I2C_CLEAR_BIT)
                {
                    I2c_Delay(1500);     
                    I2c_RxData(Reg_pt, &Data);                   
                    I2c_ChannelInfo[Sequence].RxBuffer[(I2c_ChannelInfo[Sequence].RxIndex)] = Data;
                    I2c_ChannelInfo[Sequence].RxIndex++;
                    if(I2c_ChannelInfo[Sequence].RxIndex == (I2c_ChannelInfo[Sequence].RxLength))
                    {
                        /* Last byte received. Send NACK */
                        I2c_SendNack(Reg_pt);
                        I2c_ChannelInfo[Sequence].Result = I2C_SEQ_OK;
                        /* Genrate I2c Stop */
                        I2c_Stop(Reg_pt);
                        I2c_HwInfo[HwUnitIndex].TimeoutCount = I2C_STOP_TIMEOUT_COUNT;
                        I2c_HwInfo[HwUnitIndex].IsStopWait = TRUE;
                        I2c_Delay(1500);     
                    }
                    else /* has other data receive in next routine */
                    {
                        ;
                    }
                }
                else
                {
                    /* Clear repeated start condition. */
                    if(Reg_pt->Std.RegIbsr.IBSR_t.Rsc == I2C_SET_BIT)
                    {
                        /* This is Repeated Start Interrupt. */
//                        Reg_pt->Clr.RegIbsrC.IBSRC_t.Rscc = I2C_SET_BIT;
                        /* Disable i2c Status interrupts */
                        Reg_pt->Clr.RegIbcrC.IBCRC_t.Intec = I2C_SET_BIT;
                        /* Disable Tx Interrupt */
                        Reg_pt->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
                        /* Enable Rx Interrupt */
//                        Reg_pt->Set.RegSmrS.SMRS_t.Ries = I2C_SET_BIT;
                    }
                    else
                    {
                        /* After Repeated Start with Slave Address+R, Repeated Start Bit is not set */
                    }
                    I2c_Delay(3000);     
                }
                
                if(I2c_ChannelInfo[Sequence].RxIndex != I2c_ChannelInfo[Sequence].RxLength)
                {
                    /* Just clear the INT for data reception. Do not clear INT for last byte. This will be done in STOP*/
                    Reg_pt->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
                }
                else /* received all data */
                {
                    ;
                }
            }
            else    /* received all data */
            {
                ;
            }
        }
    }
    return return_value;
}


/*============================================================================
**
** Function Name    :   I2c_TxData
**
** Visibility       :   Private
**
** Description      :   This function triggers the transmission of Data. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**                      I2c_DataType Data : Data to be transmitted
**
** Outputs          :   TRUE: If Trasmission triggered; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static UINT8 I2c_TxData(I2c_RegisterPtrType Reg_pt, I2c_DataType Data)
{
    UINT8 ReturnStatus;

    ReturnStatus = FALSE;
    if(Reg_pt->Std.RegSsr.SSR_t.Tdre != I2C_CLEAR_BIT)
    {
        Reg_pt->Std.RegDr = Data;
        Reg_pt->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
        ReturnStatus = TRUE;
    }
    
    I2c_Delay(1500);        
    return(ReturnStatus);
}

/*============================================================================
**
** Function Name    :   I2c_RxData
**
** Visibility       :   Private
**
** Description      :   This function recieves the data. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**                      I2c_DataType *Data : Data Pointer
**
** Outputs          :   None
**
** Critical Section :   NA
**
**==========================================================================*/
static void I2c_RxData(I2c_RegisterPtrType Reg_pt, I2c_DataType* DataPtr)
{
    *DataPtr = (I2c_DataType) Reg_pt->Std.RegDr;
}

/*============================================================================
**
** Function Name    :   I2c_SendNack
**
** Visibility       :   Private
**
** Description      :   This function sets the NACK and Wait Select as 9th bit. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   None
**
** Critical Section :   NA
**
**==========================================================================*/
static void I2c_SendNack(I2c_RegisterPtrType Reg_pt)
{
    /* Disable Tx Interrupt */
    Reg_pt->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
    /* Disable Rx Interrupt */
    Reg_pt->Clr.RegSmrC.SMRC_t.Riec = I2C_SET_BIT;
    /* Send NACK */
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Ackec = I2C_SET_BIT;
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Wselc = I2C_SET_BIT;
}

/*============================================================================
**
** Function Name    :   I2c_Stop
**
** Visibility       :   Private
**
** Description      :   This function Sends the Stop signal. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   None
**
** Critical Section :   NA
**
**==========================================================================*/
static void I2c_Stop(I2c_RegisterPtrType Reg_pt)
{
    Reg_pt->Set.RegIbcrS.IBCRS_t.Cndes = I2C_SET_BIT;
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Mssc  = I2C_SET_BIT;
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
    
}

/*============================================================================
**
** Function Name    :   I2c_Complete
**
** Visibility       :   Private
**
** Description      :   This function disables the I2c Communication once the 
**                      transmission is over. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   None
**
** Critical Section :   NA
**
**==========================================================================*/
static void I2c_Complete(I2c_RegisterPtrType Reg_pt)
{
    volatile UINT32 dummy_data;
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Intc = I2C_SET_BIT;
    /* Disable stop detect */
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Cndec= I2C_SET_BIT;
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Intec = I2C_SET_BIT;
    /* Clear stop flag */
    Reg_pt->Clr.RegIbsrC.IBSRC_t.Spcc = I2C_SET_BIT;
    /* Read Dummy Data */
    dummy_data = Reg_pt->Std.RegDr;
    /* Disable Tx Rx Interrupt */
    Reg_pt->Clr.RegSmrC.SMRC_t.Tiec = I2C_SET_BIT;
    Reg_pt->Clr.RegSmrC.SMRC_t.Riec = I2C_SET_BIT;
}

/*============================================================================
**
** Function Name    :   I2c_CheckStop
**
** Visibility       :   Private
**
** Description      :   This function checks whether the stop is generated or not. 
**
** Invocation       :   ISR.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   TRUE: If stop generated; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static UINT8 I2c_CheckStop(I2c_RegisterPtrType Reg_pt)
{
    UINT8 ReturnValue;

    ReturnValue = FALSE;
    if(Reg_pt->Std.RegIbsr.IBSR_t.Spc != I2C_CLEAR_BIT)
    {
        ReturnValue = TRUE;
    }
    return(ReturnValue);
}

/*============================================================================
**
** Function Name    :   I2c_CheckSdaSclLines
**
** Visibility       :   Private
**
** Description      :   This function checks whether the stop is generated or not. 
**
** Invocation       :   Main_Function.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   TRUE: If stop generated; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static boolean I2c_CheckSdaSclLines(UINT8 Hw_Unit)
{
    UINT8 ReturnValue;
    I2c_RegisterPtrType Reg_pt;

    Reg_pt = I2c_Config[Hw_Unit].BaseAddress;

    ReturnValue = TRUE;
    if(FALSE == I2c_CheckSdaStatus(Reg_pt))
    {
        ReturnValue = FALSE;
        /* 9 start one stop */
        (void)I2c_SendNineStartOneStop(Reg_pt);
    }
    if(FALSE == I2c_CheckSclStatus(Reg_pt))
    {
        ReturnValue = FALSE;
        /* Device Power Toggle */
        I2c_ToggleDevicePower;
    }
    if(ReturnValue == FALSE)
    {
        if((FALSE != I2c_CheckSdaStatus(Reg_pt)) && (FALSE != I2c_CheckSclStatus(Reg_pt)))
        {
            ReturnValue = TRUE;
        }
    }
    return(ReturnValue);
}

/*============================================================================
**
** Function Name    :   I2c_CheckSdaStatus
**
** Visibility       :   Private
**
** Description      :   This function checks the SDA line status. 
**
** Invocation       :   Main_Function.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   TRUE: If SDA is HIGH; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static UINT8 I2c_CheckSdaStatus(I2c_RegisterPtrType Reg_pt)
{
    UINT8 ReturnValue;

    ReturnValue = TRUE;
    if((Reg_pt->Std.RegEibcr.EIBCR_t.Sdas == I2C_CLEAR_BIT) || (Reg_pt->Std.RegIbsr.IBSR_t.Bb != I2C_CLEAR_BIT))
    {
        ReturnValue = FALSE;
    }
    return(ReturnValue);
}

/*============================================================================
**
** Function Name    :   I2c_CheckSclStatus
**
** Visibility       :   Private
**
** Description      :   This function checks the SCL line status. 
**
** Invocation       :   Main_Function.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   TRUE: If SCL is HIGH; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static UINT8 I2c_CheckSclStatus(I2c_RegisterPtrType Reg_pt)
{
    UINT8 ReturnValue;

    ReturnValue = TRUE;
    if((Reg_pt->Std.RegEibcr.EIBCR_t.Scls == I2C_CLEAR_BIT)  || (Reg_pt->Std.RegIbsr.IBSR_t.Bb != I2C_CLEAR_BIT))
    {
        ReturnValue = FALSE;
    }
    return(ReturnValue);
}

/*============================================================================
**
** Function Name    :   I2c_SendNineStartOneStop
**
** Visibility       :   Private
**
** Description      :   This is a recovery mechanism if the SDA line is held LOW. 
**
** Invocation       :   Main_Function.
**
** Inputs           :   I2c_RegisterPtrType Reg_pt: Register Pointer
**
** Outputs          :   TRUE: If 9Start1Stop generated successfully; Else FALSE
**
** Critical Section :   NA
**
**==========================================================================*/
static boolean I2c_SendNineStartOneStop(I2c_RegisterPtrType Reg_pt)
{
    UINT8 toggle_t;
    UINT8 loop;
    UINT8 InnerLoop;
    UINT16 I2c_timeout_variable;
    boolean return_value;

    return_value = TRUE;
    /* Disable stop detect */
    Reg_pt->Clr.RegIbcrC.IBCRC_t.Cndec= I2C_SET_BIT;

    /* Enable Output Control */
    Reg_pt->Std.RegEibcr.EIBCR_t.Soce = I2C_SET_BIT;
    if(Reg_pt->Std.RegEibcr.EIBCR_t.Scls == I2C_CLEAR_BIT)
    {
        Reg_pt->Std.RegEibcr.EIBCR_t.Sclc = I2C_SET_BIT;
    }
    toggle_t = I2C_SET_BIT;
    /* 9 Start */
    for (loop = 0; loop < 9; )
    {
        for(InnerLoop = 0; InnerLoop < 10; InnerLoop++);
        toggle_t = toggle_t ^ I2C_SET_BIT;
        Reg_pt->Std.RegEibcr.EIBCR_t.Sdac = toggle_t;
        for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
        Reg_pt->Std.RegEibcr.EIBCR_t.Sclc = toggle_t;
        loop += toggle_t;
    }
    /* 1 Stop */
    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
    Reg_pt->Std.RegEibcr.EIBCR_t.Sclc = I2C_CLEAR_BIT;
    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
    Reg_pt->Std.RegEibcr.EIBCR_t.Sdac = I2C_CLEAR_BIT;
    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
    Reg_pt->Std.RegEibcr.EIBCR_t.Sclc = I2C_SET_BIT;
    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
    Reg_pt->Std.RegEibcr.EIBCR_t.Sdac = I2C_SET_BIT;

    /* Wait for Stop to generate */
    I2c_timeout_variable = 0;
    while(Reg_pt->Std.RegIbsr.IBSR_t.Spc == I2C_CLEAR_BIT)
    {
       I2c_timeout_variable++;
       if(I2c_timeout_variable > I2C_WAIT_TIMEOUT)
       {
           /* Waiting for Stop generation timed out */
           return_value = FALSE;
           break;
       }
     }
    /* IBCR:BER will be set by this time */
    /* Clear stop flag to clear the BER bit */
    Reg_pt->Clr.RegIbsrC.IBSRC_t.Spcc = I2C_SET_BIT;
    /* Clear Repeated Start bit */
    Reg_pt->Clr.RegIbsrC.IBSRC_t.Rscc = I2C_SET_BIT;

    /* Disable direct pin control. I2C takes over control again. */
    Reg_pt->Std.RegEibcr.EIBCR_t.Soce = I2C_CLEAR_BIT;

    return(return_value);
}

UINT8 I2C_Channel_TxData( I2c_ChannelType Channel, I2c_DataType* TxBufferPtr, I2c_NumberOfDataType TxLength
                            , UINT8 SlaveAddress, I2c_PhysicalAddress PhysicalAddress)
{
    UINT8 ret_val;
    UINT8 HwUnitIndex;
    I2c_SequenceType Sequence;
    UINT32 ulI;
    UINT32 MAX_DELAY = 0;

    I2c_ChannelConfig[Channel].HwUnit = Channel;
    HwUnitIndex = I2c_ChannelConfig[Channel].HwUnit;    
    Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
    
    ret_val = E_NOT_OK;

    I2c_SendCom[0] = (PhysicalAddress>>8);
    I2c_SendCom[1] = (PhysicalAddress&0x00ff);

    for ( ulI = 0; ulI < TxLength ; ulI++ )
    {
        I2c_SendCom[ulI+2] = TxBufferPtr[ulI];
    }

    /* Set Channel Info  */
    I2c_ChannelInfo[Channel].SlaveAddress = SlaveAddress;
    I2c_ChannelInfo[Channel].TxBuffer = I2c_SendCom;
    I2c_ChannelInfo[Channel].RxBuffer = NULL;
    I2c_ChannelInfo[Channel].TxLength = TxLength+2;
    I2c_ChannelInfo[Channel].RxLength = 0;
    I2c_ChannelInfo[Channel].TxIndex = 0;
    I2c_ChannelInfo[Channel].RxIndex = 0;
    I2c_ChannelInfo[Channel].IsRepeatStart = 0;
    I2c_ChannelInfo[Channel].PhysicalAddress = PhysicalAddress;


    I2c_HwInfo[HwUnitIndex].HwStatus = I2C_QUEUED;
    
    if((I2c_HwInfo[HwUnitIndex].HwStatus == I2C_IDLE) || (I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED))
    {
        if(I2c_HwInfo[HwUnitIndex].CurrentPriority > I2c_ChannelConfig[Sequence].SeqPriority)
        {
            I2c_HwInfo[HwUnitIndex].CurrentPriority = I2c_ChannelConfig[Sequence].SeqPriority;
            I2c_HwInfo[HwUnitIndex].CurrentSeq = Sequence;
            I2c_HwInfo[HwUnitIndex].HwStatus = I2C_QUEUED;
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

    do
    {
        if(I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED)
        {
            Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
            /* Clear the Queued Flag */
            I2c_EnterCriticalSection();
            I2c_ChannelInfo[Sequence].IsQueued = FALSE;
            I2c_ExitCriticalSection();
            if((I2c_ChannelInfo[Channel].TxLength > 0) || (I2c_ChannelInfo[Sequence].RxLength > 0))
            {
                /* Channel Status to BUSY */
                I2c_ChannelInfo[Channel].Result = I2C_SEQ_BUSY;
                /* Hw Unit Status to BUSY */
                I2c_HwInfo[HwUnitIndex].HwStatus = I2C_BUSY;
                /* Driver Status to BUSY */
                I2c_DrvStatus.Status = I2C_BUSY;

                if(FALSE != I2c_CheckSdaSclLines(HwUnitIndex))
                {
                    I2c_StartTransfer(Sequence); 
                    do
                    {
                        I2c_Delay(300);
                        if ( MAX_DELAY++ > 500 )
                        {
                            ret_val = E_NOT_OK;
                            break;
                        }
                    }while((0 == I2c_TxRxIsroutine(Sequence)));
                }
                else
                {
                    /* I2c Bus busy, cannot start communication */
                    /* Channel Status to FAILED */
                    I2c_ChannelInfo[Channel].Result = I2C_SEQ_FAILED;
                    /* Hw Unit Status to IDLE */
                    I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
                    /* Driver Status to IDLE */
                    I2c_DrvStatus.Status = I2C_IDLE;
                    I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
                    if(I2c_ChannelConfig[Channel].EndNotification != NULL)
                    {
                        /* Sequence End Callback Notofication */
                        I2c_ChannelConfig[Channel].EndNotification();
                    }
                }
            }
        }
#if 0        
        else if(I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
        {
            if (0 != I2c_HwInfo[HwUnitIndex].TimeoutCount)
            {
                I2c_HwInfo[HwUnitIndex].TimeoutCount--;
                if (0 == I2c_HwInfo[HwUnitIndex].TimeoutCount)
                {
                    /* cs start */
                    I2c_EnterCriticalSection();
                    if (I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
                    {
                        I2c_Complete(I2c_Config[HwUnitIndex].BaseAddress);
                        I2c_HwInfo[HwUnitIndex].IsStopWait = FALSE;
                    }

                    I2c_ExitCriticalSection();
                    /*end cs*/
                    Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
                    I2c_ChannelInfo[Channel].IsRepeatStart = FALSE;
                    I2c_ChannelInfo[Channel].Result = I2C_SEQ_FAILED;
                    I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;

                    if(I2c_ChannelConfig[Channel].EndNotification != NULL)
                    {
                        /* Sequence End Callback Notofication */
                        I2c_ChannelConfig[Sequence].EndNotification();
                    }
                    I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
                }
            }
        }
#endif
        else
        {
            ;
        }
    }while(0);


    return ret_val;
}


UINT8 I2C_Channel_RxData( I2c_ChannelType Channel, I2c_DataType* RxBufferPtr, I2c_NumberOfDataType RxLength
                            , UINT8 SlaveAddress, I2c_PhysicalAddress PhysicalAddress)    
{
    UINT8 ret_val;
    UINT8 HwUnitIndex;
    I2c_SequenceType Sequence;
    UINT32 MAX_DELAY = 0;

    I2c_ChannelConfig[Channel].HwUnit = Channel;
    HwUnitIndex = I2c_ChannelConfig[Channel].HwUnit;
    Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
    
    ret_val = E_NOT_OK;

    I2c_SendCom[0] = (PhysicalAddress>>8);
    I2c_SendCom[1] = (PhysicalAddress&0x00ff);

    /* Set Channel Info  */
    I2c_ChannelInfo[Channel].SlaveAddress = SlaveAddress;
    I2c_ChannelInfo[Channel].RxLength = RxLength;
    I2c_ChannelInfo[Channel].TxBuffer = I2c_SendCom;
    I2c_ChannelInfo[Channel].TxLength = 2;
    I2c_ChannelInfo[Channel].TxIndex = 0;
    I2c_ChannelInfo[Channel].RxIndex = 0;
    I2c_ChannelInfo[Channel].IsRepeatStart = 0;
    I2c_ChannelInfo[Channel].PhysicalAddress = PhysicalAddress;
    I2c_ChannelInfo[Channel].RxBuffer = RxBufferPtr;


    I2c_HwInfo[HwUnitIndex].HwStatus = I2C_QUEUED;

    HwUnitIndex = I2c_ChannelConfig[Sequence].HwUnit;
    if((I2c_HwInfo[HwUnitIndex].HwStatus == I2C_IDLE) || (I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED))
    {
        if(I2c_HwInfo[HwUnitIndex].CurrentPriority > I2c_ChannelConfig[Sequence].SeqPriority)
        {
            I2c_HwInfo[HwUnitIndex].CurrentPriority = I2c_ChannelConfig[Sequence].SeqPriority;
            I2c_HwInfo[HwUnitIndex].CurrentSeq = Sequence;
            I2c_HwInfo[HwUnitIndex].HwStatus = I2C_QUEUED;
        }
    }

    do
    {
        /* Transmit the selected Sequence for each HwUnit*/
        if(I2c_HwInfo[HwUnitIndex].HwStatus == I2C_QUEUED)
        {
            Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
            /* Clear the Queued Flag */
            I2c_EnterCriticalSection();
            I2c_ChannelInfo[Sequence].IsQueued = FALSE;
            I2c_ExitCriticalSection();
            if((I2c_ChannelInfo[Sequence].TxLength > 0) || (I2c_ChannelInfo[Sequence].RxLength > 0))
            {
                 /* Channel Status to BUSY */
                 I2c_ChannelInfo[Sequence].Result = I2C_SEQ_BUSY;
                 /* Hw Unit Status to BUSY */
                 I2c_HwInfo[HwUnitIndex].HwStatus = I2C_BUSY;
                 /* Driver Status to BUSY */
                 I2c_DrvStatus.Status = I2C_BUSY;
                 
                 if(FALSE != I2c_CheckSdaSclLines(HwUnitIndex))
                 {
                     I2c_StartTransfer(Sequence); 
                     do
                     {
                         I2c_Delay(300);
                         if ( MAX_DELAY++ > 500 )
                         {
                             ret_val = E_NOT_OK;
                             break;
                         }
                         
                     }while((0 == I2c_TxRxIsroutine(Sequence)));
                     
                 }
                 else
                 {
                     /* I2c Bus busy, cannot start communication */
                     /* Channel Status to FAILED */
                     I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                     /* Hw Unit Status to IDLE */
                     I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
                     /* Driver Status to IDLE */
                     I2c_DrvStatus.Status = I2C_IDLE;
                     I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
                     if(I2c_ChannelConfig[Sequence].EndNotification != NULL)
                     {
                           /* Sequence End Callback Notofication */
                           I2c_ChannelConfig[Sequence].EndNotification();
                     }
                 }
            }
        }
#if 0        
        else if(I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
        {
            if (0 != I2c_HwInfo[HwUnitIndex].TimeoutCount)
            {
               I2c_HwInfo[HwUnitIndex].TimeoutCount--;
               if (0 == I2c_HwInfo[HwUnitIndex].TimeoutCount)
               {
                  /* cs start */
                  I2c_EnterCriticalSection();
                  if (I2C_BUSY == I2c_HwInfo[HwUnitIndex].HwStatus)
                  {
                      I2c_Complete(I2c_Config[HwUnitIndex].BaseAddress);
                      I2c_HwInfo[HwUnitIndex].IsStopWait = FALSE;
                  }
                  I2c_ExitCriticalSection();
                  /*end cs*/
                  Sequence = I2c_HwInfo[HwUnitIndex].CurrentSeq;
                  I2c_ChannelInfo[Sequence].IsRepeatStart = FALSE;
                  I2c_ChannelInfo[Sequence].Result = I2C_SEQ_FAILED;
                  I2c_HwInfo[HwUnitIndex].CurrentPriority = I2C_NO_PRIORITY;
                  if(I2c_ChannelConfig[Sequence].EndNotification != NULL)
                  {
                       /* Sequence End Callback Notofication */
                       I2c_ChannelConfig[Sequence].EndNotification();
                  }
                  I2c_HwInfo[HwUnitIndex].HwStatus = I2C_IDLE;
               }
           }
        }
#endif
        else
        {
            ;
        }
    }while(0);

    return ret_val;
    
}

#endif

/*============================================================================
*				EPMIODRV_EEPROM_Reset
* Description	: send 1 start, 9 bit one and 1 start 1 stop to the I2C  bus
* Arguments		: none
* Returns		: none
**==========================================================================*/
#if 1
void I2C_EPMIODRV_EEPROM_Reset(void)
{
    UINT8 loop;
    UINT8 InnerLoop;
    stc_port_pin_config_t PpcConf;

	PpcConf.bInputEnable = FALSE;
	PpcConf.bNoiseFilterEnable    = FALSE;					
    PpcConf.enGpioDirection       = PortGpioOutput;					
    PpcConf.enInputLevel          = PortInputLevelCmosA;					
    PpcConf.enOutputDrive         = PortOutputDriveB;/*ODR01 2mA*/					
    PpcConf.enOutputFunction      = PortOutputResourceGPIO;				
    PpcConf.enPullResistor        = PortPullResistorUp;/*D53 have hardware pullup*/					
    PpcConf.enGpioInitOutputLevel = PortGpioHigh;/*default High*/					
					
    // set port p3_00 SDA to High level					
    (void)Port_SetPinConfig(3, 00,  &PpcConf);				
    // set port p3_01 SDA to High level					
    (void)Port_SetPinConfig(3, 01,  &PpcConf);
	
	/*1 start*/
	for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
	Port_SetPortPinLevel(3, 00, PortGpioHigh);
	for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
	Port_SetPortPinLevel(3, 01, PortGpioHigh);
	for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
	Port_SetPortPinLevel(3, 00, PortGpioLow);
	for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
	Port_SetPortPinLevel(3, 01, PortGpioLow);
    /* 9 big high */
    for (loop = 0; loop < 9; loop++)
    {
		Port_SetPortPinLevel(3, 01, PortGpioLow);
		for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);		
        Port_SetPortPinLevel(3, 00, PortGpioHigh);
        for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
        Port_SetPortPinLevel(3, 01, PortGpioHigh);
		for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
		Port_SetPortPinLevel(3, 01, PortGpioLow);
		for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
    }

	/*1 start*/
	for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
	Port_SetPortPinLevel(3, 00, PortGpioHigh);
	for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
	Port_SetPortPinLevel(3, 01, PortGpioHigh);
	for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
	Port_SetPortPinLevel(3, 00, PortGpioLow);
	for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
	Port_SetPortPinLevel(3, 01, PortGpioLow);

	
    /* 1 Stop */
    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
    Port_SetPortPinLevel(3, 01, PortGpioLow);
    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
    Port_SetPortPinLevel(3, 00, PortGpioLow);
    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
    Port_SetPortPinLevel(3, 01, PortGpioHigh);
    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
    Port_SetPortPinLevel(3, 00, PortGpioHigh);
	
	for(InnerLoop = 0; InnerLoop < 100; InnerLoop++);/*Delay*/
}
#else
void I2C_EPMIODRV_EEPROM_Reset(void) /*only 9 scl ,then check sda*/
{
    UINT8 loop;
    UINT8 InnerLoop;
    stc_port_pin_config_t PpcConf;
	en_port_gpio_level_t sdaGetSig;

	PpcConf.bInputEnable = FALSE;
	PpcConf.bNoiseFilterEnable    = FALSE;					
    PpcConf.enGpioDirection       = PortGpioOutput;					
    PpcConf.enInputLevel          = PortInputLevelCmosA;					
    PpcConf.enOutputDrive         = PortOutputDriveB;/*ODR01 2mA*/					
    PpcConf.enOutputFunction      = PortOutputResourceGPIO;				
    PpcConf.enPullResistor        = PortPullResistorUp;/*D53 have hardware pullup*/					
    PpcConf.enGpioInitOutputLevel = PortGpioHigh;/*default High*/										
    // set port p3_00 SDA to High level					
    (void)Port_SetPinConfig(3, 01,  &PpcConf);

	PpcConf.bInputEnable = TRUE;
	PpcConf.bNoiseFilterEnable    = FALSE;					
    PpcConf.enGpioDirection       = PortGpioInput;/*Set SDA inputs*/					
    PpcConf.enInputLevel          = PortInputLevelCmosA;					
    PpcConf.enOutputDrive         = PortOutputDriveB;/*ODR01 2mA*/					
    PpcConf.enOutputFunction      = PortOutputResourceGPIO;				
    PpcConf.enPullResistor        = PortPullResistorNone;/*D53 have hardware pullup*/					
    PpcConf.enGpioInitOutputLevel = PortGpioHigh;/*default High*/	
    // set port p3_00 SDA Input					
    (void)Port_SetPinConfig(3, 00,  &PpcConf);
	
    /* 9 bit CLK */
    for (loop = 0; loop < 8; loop++)
    {
		Port_SetPortPinLevel(3, 01, 0);
		for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);		
        Port_SetPortPinLevel(3, 01, 1);	
		for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
		#if 0
		Port_GetPortPinLevel(3, 00, &sdaGetSig);
		if (sdaGetSig == 1)
		{
		    /* 1 Stop */
		    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
		    Port_SetPortPinLevel(3, 01, 0);
		    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
		    Port_SetPortPinLevel(3, 00, 0);
		    for(InnerLoop = 0; InnerLoop < 50; InnerLoop++);
		    Port_SetPortPinLevel(3, 01, 1);
		    for(InnerLoop = 0; InnerLoop < 20; InnerLoop++);
		    Port_SetPortPinLevel(3, 00, 1);
		}
		#endif
		
    }

}
#endif
void I2_Reset_SClSDA_Locked(void)
{
    I2c_RegisterPtrType Reg_pt;

    Reg_pt = I2c_Config[0].BaseAddress;
	(void)I2c_SendNineStartOneStop(Reg_pt);

    //Reg_pt = I2c_Config[1].BaseAddress;
	//(void)I2c_SendNineStartOneStop(Reg_pt);

}

/*============================================================================
**============================================================================
** R E V I S I O N    N O T E S
**============================================================================
**
** For each change to this file, be sure to record:
** 1.  Who made the change and when the change was made.
** 2.  Why the change was made and the intended result.
**
**===========================================================================*/
/*---------------------------------------------------------------------------
Date               : 16-Nov-2015
CDSID              : ssebast1
Traceability       : RTC #453910
Change Description : Initial Framework version of I2c
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 29-Jan-2016
CDSID              : ssebast1
Traceability       : RTC #402180
Change Description : I2c Write, Read and Error Handling Implementation
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 22-Mar-2016
CDSID              : ssebast1
Traceability       : RTC #557583
Change Description : I2c Interrrupt handling modified to arrest the non generation
                     of Repeated Start and Stop signals.
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 06-April-2017
CDSID              : asivalin
Traceability       : RTC #842601
Change Description : While checking the I2C bus status, Proper SCL line status update
                     with the API "I2c_CheckSclStatus".
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 14-Sep-2017
CDSID              : msavariy
Traceability       : RTC #955333
Change Description : Defect fix related to NACK handling
-----------------------------------------------------------------------------*/
/* end of file =============================================================*/



