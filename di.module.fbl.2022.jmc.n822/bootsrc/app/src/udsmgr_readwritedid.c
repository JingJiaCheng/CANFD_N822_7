/******************************************************************************

  Copyright (C), 2001-2011, DCN Co., Ltd.

 ******************************************************************************
  File Name     : Udsmgr_didRW
  Version       : Initial Draft
  Author        : chenyin
  Created       : 2020/4/26
  Last Modified :
  Description   : ReadDataByIdentifier and WriteDataByIdentifier
  Function List :
  History       :
  1.Date        : 2020/4/26
    Author      : chenyin
    Modification: Created file

******************************************************************************/
#include "udsdiag.h"
#include "udsmgr.h" 
#include "udsmgr_cfg.h"
#include "fbl_i2c_drv.h"
#include "fbl_security.h"


/*----------------------------------------------*
 * macros                                       *
 *----------------------------------------------*/

#define UDSMGR_DID_MSB_POS          0
#define UDSMGR_DID_LSB_POS          1
#define UDSMGR_DID_DATA_START_POS   2

#define F15B_DATA_LEN    (FINGERPRINT_BLOCK_MAX_ID*FINGERPRINT_DATA_LENGTH)

#define UINT8_TO_UINT16(h, l)    ((UINT16)((UINT16)(h) << 8u) | ((UINT16)(l)))
/* define DID Number */
typedef enum USING_DID
{
    DID_F15A = 0,
    DID_F15B,
    DID_F188,
    MAX_DID_COUNT
}USING_DID_STRU;

FINGERPRINT_DATA_STRU fingerprint_data[FINGERPRINT_BLOCK_MAX_ID];
/*----------------------------------------------*
 * external variables                           *
 *----------------------------------------------*/

/*----------------------------------------------*
 * external routine prototypes                  *
 *----------------------------------------------*/

/*----------------------------------------------*
 * internal routine prototypes                  *
 *----------------------------------------------*/
typedef udsdiagu8  (*udsdiag_DIDReadHandler_t ) (udsdiagu8*);
typedef udsdiagu8  (*udsdiag_DIDWriteHandler_t ) (udsdiagu8*);

/*----------------------------------------------*
 * project-wide global variables                *
 *----------------------------------------------*/

/*----------------------------------------------*
 * module-wide global variables                 *
 *----------------------------------------------*/
udsdiagu8 UdsMgr_DIDWriteCallBack_F15A(udsdiagu8* buffer);
udsdiagu8 UdsMgr_DIDReadCallBack_F15B(udsdiagu8* buffer);
udsdiagu8 UdsMgr_DIDReadCallBack_F188(udsdiagu8* buffer);

/*----------------------------------------------*
 * constants                                    *
 *----------------------------------------------*/
typedef struct DID_INFO_CALLBACK
{
    UINT16  Index;
    UINT16  did_number;
    UINT32  did_data_len;
    udsdiag_DIDReadHandler_t read_handler;
    udsdiag_DIDWriteHandler_t write_handler;
}DID_INFO_CALLBACK_STRU;

/* DID Info */
DID_INFO_CALLBACK_STRU DID_Map[MAX_DID_COUNT]=
{
/*   Index  did_number  did_data_len    readhandler                     writehandler        */
    {0,     0xF15A,     9u,             NULL,                           UdsMgr_DIDWriteCallBack_F15A},  
    {0,     0xF15B,     F15B_DATA_LEN,  UdsMgr_DIDReadCallBack_F15B,    NULL},
    {0,     0xF188,     24u,            UdsMgr_DIDReadCallBack_F188,    NULL}    
};



/*----------------------------------------------*
 * routines' implementations                    *
 *----------------------------------------------*/
void UdsMgr_Fingerprint_Data_Init(void)
{
    udsdiagu8 ulI = 0;

    for ( ulI = 0; ulI < FINGERPRINT_BLOCK_MAX_ID ; ulI++ )
    {
        fingerprint_data[ulI].has_get_flag = FALSE;
        fingerprint_data[ulI].id = 0xFF;
    }
}

static udsdiagu8 UdsMgr_FingerPrint_Data_Check(udsdiagu8* buffer)
{
    udsdiagu8 ReturnValue = NO_ERROR;

    if (((buffer[0] & 0x0f) > 9u) || ((buffer[0] & 0xf0) > 0x90))
    {
        ReturnValue = NRC_REQUEST_OUT_OF_RANGE;
    }
    else
    {
        ;
    }

    if (( buffer[1] > 18u ) || ((buffer[1] & 0x0f) > 9u))
    {
        ReturnValue = NRC_REQUEST_OUT_OF_RANGE;
    }
    else
    {
        ;
    }

    if (((buffer[2] & 0x0f) > 9u) || ((buffer[2] & 0xf0) > 0x30) || (buffer[2] > 0x31))
    {
        ReturnValue = NRC_REQUEST_OUT_OF_RANGE;
    }
    else
    {
        ;
    }
    
    if (( buffer[3] != 'T' )&&( buffer[3] != 'V' )&&( buffer[3] != 'G' )&&( buffer[3] != 'K' )&&( buffer[3] != 'O' ))
    {
        ReturnValue = NRC_REQUEST_OUT_OF_RANGE;
    }
    else
    {
        ;
    }

    return ReturnValue;
}


udsdiagu8 UdsMgr_DIDWriteCallBack_F15A(udsdiagu8* buffer)
{
    udsdiagu8 ulI = 0;
    udsdiagu8 count;
    udsdiagu8 ReturnValue = NRC_REQUEST_OUT_OF_RANGE;

/*********************************************/
    ReturnValue = UdsMgr_FingerPrint_Data_Check(buffer);
    if ( ReturnValue != NO_ERROR)
    {
        ;
    }
    else
    {
        for ( ulI = 0; ulI < FINGERPRINT_BLOCK_MAX_ID ; ulI++ )
        {
            
            if ( TRUE != fingerprint_data[ulI].has_get_flag )
            {
                break;
            }
            else
            {
                ;
            }
        }

        if ( ulI < FINGERPRINT_BLOCK_MAX_ID )
        {
            fingerprint_data[ulI].has_get_flag = TRUE;
            for ( count = 0 ; count < (FINGERPRINT_DATA_LENGTH-FINGERPRINT_DATA_ID_LENGTH) ; count++ )
            {
                fingerprint_data[ulI].data[count] = buffer[count];
            }
            ReturnValue = NO_ERROR;        
        }
        else
        {
            ;
        }
    } 

    return ReturnValue;

}

udsdiagu8 UdsMgr_DIDReadCallBack_F15B(udsdiagu8* buffer)
{
    UINT32 ulI = 0;
    UINT32 ulI2 = 0 ;
    FINGERPRINT_DATA_STRU F15B_DATA;

    for ( ulI = 0; ulI < FINGERPRINT_BLOCK_MAX_ID; ulI++ )
    {
        I2C_Channel_RxData(0,&(F15B_DATA.id),FINGERPRINT_DATA_ID_LENGTH,EEPROM_ADDR,DID_F15A_WRITE_ADD+(ulI*FINGERPRINT_DATA_LENGTH));
        if ( F15B_DATA.id < FINGERPRINT_BLOCK_MAX_ID )
        {
            UdsMgr_AddByteToRespBuffer(F15B_DATA.id);
//            I2C_Channel_RxData(0,F15B_DATA.data,(FINGERPRINT_DATA_LENGTH - FINGERPRINT_DATA_ID_LENGTH)
//                                ,EEPROM_ADDR,(DID_F15A_WRITE_ADD+(ulI*FINGERPRINT_DATA_LENGTH)+FINGERPRINT_DATA_ID_LENGTH));
            for ( ulI2 = 0 ; ulI2 < (FINGERPRINT_DATA_LENGTH - FINGERPRINT_DATA_ID_LENGTH); ulI2++ )
            {
                I2C_Channel_RxData(0,&(F15B_DATA.data[ulI2]),1,EEPROM_ADDR,(DID_F15A_WRITE_ADD+(ulI*FINGERPRINT_DATA_LENGTH)+FINGERPRINT_DATA_ID_LENGTH+ulI2));
                UdsMgr_AddByteToRespBuffer(F15B_DATA.data[ulI2]);
            }
        }
        else
        {
            for ( ulI2 = 0 ; ulI2 < (FINGERPRINT_DATA_LENGTH); ulI2++ )
            {
                UdsMgr_AddByteToRespBuffer(0x20);
            }
        }
    }

    return NO_ERROR;
    
}

udsdiagu8 UdsMgr_DIDReadCallBack_F188(udsdiagu8* buffer)
{
    UINT32 ulI = 0;
    UINT8 F188_DATA[24] 
        = {0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};
    for ( ulI = 0; ulI < DID_Map[DID_F188].did_data_len; ulI++ )
    {
        UdsMgr_AddByteToRespBuffer(F188_DATA[ulI]);
    }

//    I2C_Channel_TxData(0,F188_DATA,24,0xA0,0x2222);
    return NO_ERROR;
    
}





/* READ & WRITE SERVICE HANDER */
/*****************************************************************************
 Prototype    : UdsMgr_ReadDataByIdentifier
 Description  : DID Read Hander
 Input        : udsdiagu8 *pData    
                udsdiagu16 dataLen  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/4/30
    Author       : chenyin
    Modification : Created function

*****************************************************************************/
void UdsMgr_ReadDataByIdentifier(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    UINT8   status = NO_ERROR;
    UINT16  routine;
    UINT32  ulI;

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;
    }
    else if((NULL == pData) || (dataLen < DATA_LEN_2_BYTE))
    {
        status = NRC_INVALID_FORMAT;
    }
    else
    {
        /* Initialize Response Buffers */
        UdsMgr_InitResponseBuffer();
        UdsMgr_AddByteToRespBuffer(pData[UDSMGR_DID_MSB_POS]);  // Response Buffer =    [0]
        UdsMgr_AddByteToRespBuffer(pData[UDSMGR_DID_LSB_POS]);   // Response Buffer =    [1]

        /* Extract Routine ID */
        routine =   UINT8_TO_UINT16(pData[UDSMGR_DID_MSB_POS], pData[UDSMGR_DID_LSB_POS]);

        for ( ulI = 0; ulI < MAX_DID_COUNT ; ulI++ )
        {
            if ( routine == DID_Map[ulI].did_number )
            {

                if ( NULL != DID_Map[ulI].read_handler )
                {
                    status = DID_Map[ulI].read_handler(NULL);
                }
                else
                {
                    status = NRC_CONDITIONS_NOT_CORRECT;
                }
                
                break;
            }
            else
            {
                status = NRC_REQUEST_OUT_OF_RANGE;
            }
        }
    }
    /* Send Response */
    UdsMgr_SendResponse(status);
}
 
void UdsMgr_WriteDataByIdentifier(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    UINT8   status = NO_ERROR;
    UINT16  routine;
    UINT32  ulI;

    if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
    {
        status = NRC_CONDITIONS_NOT_CORRECT;
    }
    else
    {
        #if( defined(D53_PBL) || defined(J59_PBL) )
        if(FBL_OK == FblSec_VerifySecurityAccess())
        #endif
        {
            /* Initialize Response Buffers */
            UdsMgr_InitResponseBuffer();
            UdsMgr_AddByteToRespBuffer(pData[UDSMGR_DID_MSB_POS]);  // Response Buffer =    [0]
            UdsMgr_AddByteToRespBuffer(pData[UDSMGR_DID_LSB_POS]);   // Response Buffer =    [1]

            /* Extract Routine ID */
            routine =   UINT8_TO_UINT16(pData[UDSMGR_DID_MSB_POS], pData[UDSMGR_DID_LSB_POS]);

            for ( ulI = 0; ulI < MAX_DID_COUNT ; ulI++ )    /* find DID Process Handler */
            {
                if ( routine == DID_Map[ulI].did_number )
                {
                    /* check Handler and checke data len */
                    if (( NULL != DID_Map[ulI].write_handler ) && ((dataLen - 2u) >= DID_Map[ulI].did_data_len))
                    {
                        status = DID_Map[ulI].write_handler(&(pData[UDSMGR_DID_DATA_START_POS]));
                    }
                    else
                    {
                        status = NRC_INVALID_FORMAT;
                    }
                    break;
                }
                else
                {
                    status = NRC_REQUEST_OUT_OF_RANGE;
                }
            }
        }
        #if( defined(D53_PBL) || defined(J59_PBL) )
        else
        {
            status = NRC_SECURITY_ACCESS_DENIED;
        }
        #endif
    }

    /* Send Response */
    UdsMgr_SendResponse(status);
}

