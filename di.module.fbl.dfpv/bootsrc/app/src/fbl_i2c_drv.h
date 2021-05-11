/******************************************************************************

  Copyright (C), 2001-2011, DCN Co., Ltd.

 ******************************************************************************
  File Name     : fbl_i2c_drv.h
  Version       : Initial Draft
  Author        : chenyin
  Created       : 2020/5/15
  Last Modified :
  Description   : I2C drv.h
  Function List :
  History       :
  1.Date        : 2020/5/15
    Author      : chenyin
    Modification: Created file

******************************************************************************/
#include "I2c_Types.h"
#include "fbl_comp_cfg.h"

/*----------------------------------------------*
 * external variables                           *
 *----------------------------------------------*/
#define EEPROM_ADDR                 0xA0
                
#define DID_F15A_WRITE_ADD          (1925u)
#define FINGERPRINT_DATA_LENGTH     (10u)
#define FINGERPRINT_DATA_ID_LENGTH  (1u)
/* Maximum fingerprint block length */
#define FINGERPRINT_BLOCK_MAX_ID    (FBL_COMP_RAM)

typedef struct FINGERPRINT_DATA
{
    UINT8  has_get_flag;
    UINT8  id;
    UINT8  data[(FINGERPRINT_DATA_LENGTH-FINGERPRINT_DATA_ID_LENGTH)];
}FINGERPRINT_DATA_STRU;
extern FINGERPRINT_DATA_STRU fingerprint_data[FINGERPRINT_BLOCK_MAX_ID];

typedef unsigned char       boolean;        /* for use with TRUE/FALSE        */

typedef struct 
{
    /* Tx Buffer */
    I2c_DataType*           TxBuffer;
    /* Rx Buffer */
    I2c_DataType*           RxBuffer;
    /* Physical Address the device. */
    I2c_PhysicalAddress PhysicalAddress;        
    /* Slave Address of the device. */
    UINT8                   SlaveAddress;
    /* Tx Length */
    I2c_NumberOfDataType    TxLength;
    /* Tx Data Index */
    I2c_NumberOfDataType    TxIndex;
    /* Rx Length */
    I2c_NumberOfDataType    RxLength;
    /* Rx Data Index */
    I2c_NumberOfDataType    RxIndex;
    /* I2c Channel Result */
    I2c_SeqResultType       Result;
    /* Channel queued flag */
    boolean                 IsQueued;
    /* Repeat Start flag */
    boolean                 IsRepeatStart;

}I2c_ChannelInfoType;

typedef struct
{
    /* I2c Channel Status */
    I2c_StatusType          Status;
}I2c_DrvStatusType;

typedef struct
{
    UINT16                  TimeoutCount;
    I2c_ChannelType         CurrentSeq;
    I2c_StatusType          HwStatus;
    UINT8                   CurrentPriority;
    boolean                 IsStopWait;
}I2c_HwInfoType;

/*----------------------------------------------*
 * external routine prototypes                  *
 *----------------------------------------------*/

/*----------------------------------------------*
 * internal routine prototypes                  *
 *----------------------------------------------*/

/*----------------------------------------------*
 * project-wide global variables                *
 *----------------------------------------------*/

/*----------------------------------------------*
 * module-wide global variables                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * constants                                    *
 *----------------------------------------------*/

/*----------------------------------------------*
 * macros                                       *
 *----------------------------------------------*/

/*----------------------------------------------*
 * routines' implementations                    *
 *----------------------------------------------*/
UINT8 I2C_Channel_TxData(I2c_ChannelType Channel,I2c_DataType * TxBufferPtr,I2c_NumberOfDataType TxLength
                            ,UINT8 SlaveAddress,I2c_PhysicalAddress PhysicalAddress);
UINT8 I2C_Channel_RxData( I2c_ChannelType Channel, I2c_DataType* RxBufferPtr, I2c_NumberOfDataType RxLength
                            , UINT8 SlaveAddress, I2c_PhysicalAddress PhysicalAddress);


