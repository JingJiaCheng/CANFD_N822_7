/*****************************************************************************
 *                                                                            *
 *              CONFIDENTIAL VISTEON CORPORATION                              *
 *                                                                            *
 * This is an unpublished work of authorship, which contains trade            *
 * secrets, created in 2016. Visteon Corporation owns all rights to           *
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

File Name        :  udsmgr_tester.c
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\uds\src\udsmgr_download.c
Author           :  kshanmu4
Description      :  UDS Request Download, Transfer Data, Transfer Exit
                    Message Handlers
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
 ******************************************************************************/

/**  Include Files  **/
#include "fbl_main.h"
#include "fbl_security.h"
#include "fbl_comp.h"
#include "fbl_app_cfg.h"
#include "udsmgr.h"
#include "udsmgr_cfg.h"
#include "udsdiag.h"

#include "fbl_comp.h"
#include "fbl_nvm_cfg.h"

#include "fbl_i2c_drv.h"

extern UINT8 FblApp_IsAppDependencies(void);


#if (EEPROM	== ENABLE)
#if MICRO == RL78
#pragma location = PARTIAL_NVM_ADDRESS
__no_init UINT32 PARTIAL_NVM_REQ;
#endif
#endif
#define EOL_BACKUPRAM_INIT_MAGIC_NUMBER  ((UINT32)0x1A2B3C4D) //The same macro needs to be defined with same value in EcuMExt_Cfg.h file

#pragma ghs section data=".buram_magic_flag"
static UINT32 buram_init_magic_flag = EOL_BACKUPRAM_INIT_MAGIC_NUMBER;
#pragma ghs section data=default

//#pragma ghs startdata
//#pragma ghs section rodata="V_FBLVAL"
//const extern UINT8 appValidEnd[8];
//#pragma ghs section rodata=default
//#pragma ghs enddata

/**  Macro Definitions  **/

#define UDSMGR_ROUTINE_MEM_TYPE_ROM							(0x01u)
#define UDSMGR_ROUTINE_MEM_TYPE_HF							(0x02u)

/* Subfunction Identifiers */
#define UDSMGR_ROUTINE_SUBFUNC_ID_START                     (0x01u)
#define UDSMGR_ROUTINE_SUBFUNC_ID_STOP                      (0x02u)
#define UDSMGR_ROUTINE_SUBFUNC_ID_RESULTS                   (0x03u)

/* Supported Routine Identifiers */
#define UDSMGR_ROUTINE_ID_ERASE                             (0xFF00u)
#define UDSMGR_ROUTINE_ID_CHECKINTEGRITY                    (0x0202u)
#define UDSMGR_ROUTINE_ID_CHECKDEPENDENCIES                 (0xFF01u)

/* Supported Routine Responses */
#define UDSMGR_RESP_SUCCESS                                 (0x00u)
#define UDSMGR_RESP_FAILED                                  (0x01u)
#define UDSMGR_RESP_ERASE_FAILED                            (0x01u)
#define UDSMGR_RESP_CHECK_FAILED                            (0x01u)

/* Routine Offset Macros */
#define UDSMGR_ROUTINE_SUBFUNC_POS		                    (0u)
#define UDSMGR_ROUTINE_ID_MSB_POS		                    (1u)
#define UDSMGR_ROUTINE_ID_LSB_POS		                    (2u)
#define UDSMGR_ROUTINE_ADDTYPE  		                    (3u)
#define UDSMGR_ROUTINE_MEM_ADD_MSBH_POS		                (4u)
#define UDSMGR_ROUTINE_MEM_ADD_MSBL_POS		                (5u)
#define UDSMGR_ROUTINE_MEM_ADD_LSBH_POS		                (6u)
#define UDSMGR_ROUTINE_MEM_ADD_LSBL_POS		                (7u)
#define UDSMGR_ROUTINE_MEM_LEN_MSBH_POS		                (8u)
#define UDSMGR_ROUTINE_MEM_LEN_MSBL_POS		                (9u)
#define UDSMGR_ROUTINE_MEM_LEN_LSBH_POS		                (10u)
#define UDSMGR_ROUTINE_MEM_LEN_LSBL_POS		                (11u)


/* Routine Request Data Size Macros */
#define UDSMGR_ERASE_REQ_SIZE                               (12u)
#define UDSMGR_CHECKINTEGRITY_REQ_SIZE                      (7u)

#define UDSMGR_ERASE_COMPID_OFFSET                          (UDSMGR_ROUTINE_DATA_OFFSET)
#define UDSMGR_ERASE_COMPID_SIZE                            (1u)
#define UDSMGR_ROUTINE_INFO                                 (0x10u)

#define UDSMGR_VALID_APP_NOT_PRESENT                        (1u)
#define UDSMGR_VALID_APP_PRESENT                            (2u)

#define ASCII_TO_HEX(x)          ((((x) > '9')? ((x) + 9) : (x)) & 0x0Fu)
#define ASCII_TO_UINT8(x)        ((ASCII_TO_HEX((x)[0]) << 4u) | ASCII_TO_HEX((x)[1]))
#define UINT8_TO_UINT16(h, l)    ((UINT16)((UINT16)(h) << 8u) | ((UINT16)(l)))

/**  Private Variables  **/
/*static UINT32 lastAppAuthTimeMs*/

/*Function Pointers for Diag Services */
typedef void (*pSBLServices)();

/* Flash header structure */
typedef struct
{
	pSBLServices SBLServFn;

} tFlashHeaderData;

tFlashHeaderData *Headerptr = ( tFlashHeaderData *)0x5000;
udsdiagu8 l_Driver_GetDone_Flag = FALSE;    /* flash driver in ram flag, 
                                                false: none of driver in ram;
                                                true: driver has download in ram */
udsdiagu8 UdsMgr_GetDriverDoneFlag(void)
{
    return l_Driver_GetDone_Flag;
}
/**  Structure Definitions  **/
//struct SFblCompMemInfo
//{
//    UINT32 memStartAddr;
//    UINT32 memEndAddr;
//    UINT32 memDriverId;
//    UINT32 memOffset;
//    UINT32 maxReprogAttempts;
//    UINT32 memHeaderOffset;
//};
//
//extern const struct SFblCompMemInfo FblCompMemInfoTbl[FBL_COMP_MAX];

/**  Private Functions  **/

#if 0
static UINT8 UdsMgr_EraseRoutine(UINT8 compId);
#endif

static UINT8 UdsMgr_CheckProgramintegrity_0202(udsdiagu8 *pData, udsdiagu16 dataLen)
{
    UINT32  checksum_rcvd = 0u;
    UINT8   status = NO_ERROR;
    UINT8   result = 0u;
    UINT32   ulI = 0;
    UINT32   ulI2 = 0;    
    UINT32   count = 0;
    udsdiagu8   compId;
    UINT8 *p_hy_data = 0x4BFFFFF8;
    UINT8 write_data[8]={0};

    compId = FblComp_GetCompIdFromAddress(Req_start_address);

    if ( GET_SESSION() == REPROGRAMMINGSESSION)
    {
        if ( FALSE == UdsMgr_DownloadIsInEndState() )
        {
            status = NRC_CONDITIONS_NOT_CORRECT;
        }
        else
        {
            if(UDSMGR_CHECKINTEGRITY_REQ_SIZE == dataLen)
            {
                /*Get the checksum data from the checksum routine*/
                checksum_rcvd  =(                                                           \
                                    ( ((UINT32)pData[3] << 24u) & ((UINT32)0xFF000000u) ) | \
                                    ( ((UINT32)pData[4] << 16u) & ((UINT32)0x00FF0000u) ) | \
                                    ( ((UINT32)pData[5] <<  8u) & ((UINT32)0x0000FF00u) ) | \
                                    ( ((UINT32)pData[6] <<  0u) & ((UINT32)0x000000FFu) )   \
                                );
                
                FblMain_SendRCRRP();
                /*Give negative response as invalid data when received checksum not match with calculated checksum*/
                if(checksum_rcvd != (fbl_calc_chksum ^ 0xffffffff))
                {
                    switch ( compId )
                    {
                        case FBL_COMP_APP :
                            FblComp_Erase(FBL_COMP_APP,((UINT32)0x01b80000),((UINT32)0x40000));
                            break;
                        case FBL_COMP_HF0 :
                            FblComp_Erase(FBL_COMP_APP,((UINT32)0x01bc0000),((UINT32)0x40000));
                            break;
                        default:
                            ;
                    }
                    result = 0x01;
                }
                else
                {
#if (EEPROM	== ENABLE)

                    if(compId == FBL_COMP_NVM)
                    {
                        result = FblApp_InvalidateValidateNVM(NVM_VALIDATE);

                        if(result == FBL_EEPROM_ERASE_NO_ERROR)
                        {
                            status = NRC_GENERAL_PROGRAMMING_FAILURE;
                        }
                        else
                        {
                            result = NO_ERROR;
                        }
                    }
                    else
                    {
                        ;/* DO NOTHING */
                    }
#endif
                    for ( ulI = 0; ulI < FINGERPRINT_BLOCK_MAX_ID ; ulI++ )
                    {
                        if ((TRUE == fingerprint_data[ulI].has_get_flag ) && (0xff != fingerprint_data[ulI].id ))
                        {
                            I2C_Channel_TxData(0,&(fingerprint_data[ulI].id),FINGERPRINT_DATA_ID_LENGTH
                                                ,EEPROM_ADDR,DID_F15A_WRITE_ADD+(fingerprint_data[ulI].id*FINGERPRINT_DATA_LENGTH));
                            for ( count = 0 ; count <500000 ; count++ )
                            {
                                ;
                            }
                            for ( ulI2 = 0 ; ulI2 < (FINGERPRINT_DATA_LENGTH - FINGERPRINT_DATA_ID_LENGTH) ; ulI2++ )
                            {
                                I2C_Channel_TxData(0,&(fingerprint_data[ulI].data[ulI2]),1
                                                    ,EEPROM_ADDR,(DID_F15A_WRITE_ADD+(fingerprint_data[ulI].id*FINGERPRINT_DATA_LENGTH)+FINGERPRINT_DATA_ID_LENGTH+ulI2));
                                
                                for ( count = 0 ; count <700000 ; count++ )
                                {
                                    ;
                                }
                            }

                            fingerprint_data[ulI].has_get_flag = FALSE;
                            fingerprint_data[ulI].id = 0xff;  
                            
                            break;
                        }
                        else
                        {
                            ;
                        }
                    }
                    
                    switch ( compId )
                    {
                        case FBL_COMP_APP :
                            break;
                        case FBL_COMP_HF0 :
                            {
                                for ( ulI = 0 ; ulI < 4 ; ulI++ )
                                {
                                    write_data[ulI] = *p_hy_data;
                                    p_hy_data++;
                                }

                                FblComp_Erase(FBL_COMP_APP,((UINT32)0x01bc0000),((UINT32)0x40000));
                                FblComp_Write(((UINT32)0x01BFFf00), 8, write_data);
                            }
                            break;
                        case FBL_COMP_RAM :
                            l_Driver_GetDone_Flag = TRUE;
                            break;
                        default:
                            break;
                    }

                }

                /*Append the result in to Response buffer*/
                UdsMgr_AddByteToRespBuffer(result);
            }
            else
            {
                status = NRC_INVALID_FORMAT;
            }
        }
    }
    else
    {
        status = NRC_SUBFUNCTION_NOT_SUPPORTED_IN_ACTIVE_SESSION;
    }

    /* Reinit download parameters */
    UdsMgr_RequestDownloadInit();
    
    return status;
}


static UINT8 UdsMgr_EraseRoutine_FF00(udsdiagu8 *pData, udsdiagu16 dataLen)
{
	UINT32  address	= 0u;
	UINT32  size	= 0u;
	UINT8   status = NO_ERROR;
	UINT8   result = NO_ERROR;
	UINT8   compId;
	UINT8   ulI = 0;

    if ( GET_SESSION() == REPROGRAMMINGSESSION)
    {
        /*Validate the data length*/
        if(UDSMGR_ERASE_REQ_SIZE == dataLen)
        {
            /*
             * It is program specific requirement-
             * validate whether Seed and key security is already passed
             */
#if( defined(D53_PBL) || defined(J59_PBL) )
            if(FBL_OK == FblSec_VerifySecurityAccess())
#endif
            {
                if(TRUE == UdsMgr_GetDriverDoneFlag() )
                {
                    if (0x44 == pData[UDSMGR_ROUTINE_ADDTYPE] )
                    {
                        address = (                                                           \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_ADD_MSBH_POS] << 24u) & ((UINT32)0xFF000000u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_ADD_MSBL_POS] << 16u) & ((UINT32)0x00FF0000u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_ADD_LSBH_POS] <<  8u) & ((UINT32)0x0000FF00u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_ADD_LSBL_POS] <<  0u) & ((UINT32)0x000000FFu) )   \
                                );
                        size = (                                                           \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_LEN_MSBH_POS] << 24u) & ((UINT32)0xFF000000u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_LEN_MSBL_POS] << 16u) & ((UINT32)0x00FF0000u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_LEN_LSBH_POS] <<  8u) & ((UINT32)0x0000FF00u) ) | \
                                    ( ((UINT32)pData[UDSMGR_ROUTINE_MEM_LEN_LSBL_POS] <<  0u) & ((UINT32)0x000000FFu) )   \
                                );
                    }
                    else
                    {
                        status = NRC_REQUEST_OUT_OF_RANGE;
                    }
                               

                    /*Get the compId with respect to address of memtype*/
                    compId = FblComp_GetCompIdFromAddress(address);

                    /*Check the total size of the file is within the configured range*/
                    if(compId != FblComp_GetCompIdFromAddress(address + size - 1u))
                    {
                        status = NRC_REQUEST_OUT_OF_RANGE;
                    }
                    else
                    {
#if (EEPROM	== ENABLE)
                        compId = pData[UDSMGR_ERASE_COMPID_OFFSET];

                        if(compId == FBL_COMP_NVM)
                        {
                            result = FblApp_InvalidateValidateNVM(NVM_INVALIDATE);
                        }
                        else
#endif
                        {
                            FblMain_SendRCRRP();
                            /*Erase the memory w.r.t compId*/
                            switch ( compId )
                            {
                                case FBL_COMP_APP :
                                    result = FblComp_Erase(FBL_COMP_APP,((UINT32)0x01b80000),((UINT32)0x40000));
                                    break;
                                case FBL_COMP_HF0 :
                                    result = FblComp_Erase(FBL_COMP_APP,((UINT32)0x01bc0000),((UINT32)0x40000));
                                    break;
                                case FBL_COMP_RAM :
                                    result = FBL_FAIL;
                                    break;
                                default:
                                    result = FBL_FAIL;
                            }

                            if ( FBL_OK == result )
                            {
                            	if(FBL_OK != FblComp_Erase(compId,address,size))
                            	{
                            		result = UDSMGR_RESP_ERASE_FAILED;
                            	}
                            	else
                            	{
                            		/*OPEN Clear backupram Flag*/
                                    buram_init_magic_flag = 0x0;
                            	}
                            }
                            else
                            {
                                /*Do nothing*/
                            }
                        }
                        /*Send NRC if Erase is not successfull*/
                        if(result != NO_ERROR)
                        {
                            status = NRC_GENERAL_PROGRAMMING_FAILURE;
                        }
                        else
                        {
                            /*Do nothing*/
                        }

                        UdsMgr_AddByteToRespBuffer(result);         // Response Buffer =    [3]
                        UdsMgr_RequestDownloadInit();
                        fbl_calc_chksum = 0xffffffffu;
                        for ( ulI = 0; ulI < FINGERPRINT_BLOCK_MAX_ID ; ulI++ )
                        {
                            if ((TRUE == fingerprint_data[ulI].has_get_flag ) && (0xff == fingerprint_data[ulI].id))
                            {
                                I2C_Channel_TxData(0,&(fingerprint_data[ulI].id),FINGERPRINT_DATA_ID_LENGTH
                                                    ,EEPROM_ADDR,DID_F15A_WRITE_ADD+(compId*FINGERPRINT_DATA_LENGTH));
                                fingerprint_data[ulI].id = compId; 
                                break;
                            }
                            else
                            {
                                ;
                            }
                        }
                        
                    }
                }
                else
                {
//                    status = NRC_GENERAL_PROGRAMMING_FAILURE;
                    UdsMgr_AddByteToRespBuffer(0x01);         // Response Buffer =    [3]
                }
            }
            /*
             * It is program specific requirement-
             * NRC need to be send when security check is not passed yet
             */
#if( defined(D53_PBL) || defined(J59_PBL) )
            else
            {
                status = NRC_SECURITY_ACCESS_DENIED;
            }
#endif
        }
        else
        {
            status = NRC_INVALID_FORMAT;
        }
    }
    else
    {
        status = NRC_SUBFUNCTION_NOT_SUPPORTED_IN_ACTIVE_SESSION;
    }
    return status;
}


static UINT8 UdsMgr_CheckDependencies_FF01(udsdiagu8 *pData, udsdiagu16 dataLen)
{
	UINT8   status = NO_ERROR;
	UINT8   result = 0u;
    if ( GET_SESSION() == REPROGRAMMINGSESSION)
    {
        result = FblApp_IsAppDependencies();
        
        if ( FALSE == result )
        {
            UdsMgr_AddByteToRespBuffer(0x01);
        }
        else
        {
            UdsMgr_AddByteToRespBuffer(0x00);
        }
    }
    else
    {
        status = NRC_SUBFUNCTION_NOT_SUPPORTED_IN_ACTIVE_SESSION;
    }

    return status;
}


/*============================================================================
 ** Function Name:    UdsMgr_RoutineControlInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS Routine 
 **                   control handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_RoutineControlInit(void)
{
	/*lastAppAuthTimeMs = 0u*/
    l_Driver_GetDone_Flag = FALSE;
}

/*============================================================================
 ** Function Name:    UdsMgr_RoutineControlHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Routine Control
 **                   request
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           UINT8 *pData   - Data associated with the request
 **                   UINT16 dataLen - Length of the data 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_RoutineControlHandler(udsdiagu8 *pData, udsdiagu16 dataLen)
{
	UINT8   status = NO_ERROR;
	UINT16  routine;

#if (EEPROM	== ENABLE)
	UINT8 compId;
#endif

	if((BOOLEAN)FALSE != UdsMgr_IsDiagReqPermitted())
	{
		status = NRC_CONDITIONS_NOT_CORRECT;
	}
	else if((NULL == pData) || (dataLen < DATA_LEN_3_BYTE))
	{
		status = NRC_INVALID_FORMAT;
	}
	else if(UDSMGR_ROUTINE_SUBFUNC_ID_START != pData[UDSMGR_ROUTINE_SUBFUNC_POS])
	{
		status = NRC_SUBFUNCTION_NOT_SUPPORTED;
	}
	else
	{
		/* Initialize Response Buffers */
		UdsMgr_InitResponseBuffer();
		UdsMgr_AddByteToRespBuffer(pData[UDSMGR_ROUTINE_SUBFUNC_POS]);	// Response Buffer = 	[0]
		UdsMgr_AddByteToRespBuffer(pData[UDSMGR_ROUTINE_ID_MSB_POS]);	// Response Buffer = 	[1]
		UdsMgr_AddByteToRespBuffer(pData[UDSMGR_ROUTINE_ID_LSB_POS]);	// Response Buffer = 	[2]

		/* Extract Routine ID */
		routine = 	UINT8_TO_UINT16(pData[UDSMGR_ROUTINE_ID_MSB_POS], pData[UDSMGR_ROUTINE_ID_LSB_POS]);

		switch(routine)
		{
    		/*Check Routine control for Erase routine - FF 00*/
    		case UDSMGR_ROUTINE_ID_ERASE:
                status = UdsMgr_EraseRoutine_FF00(pData, dataLen);
    			break;
    		/*Check Routine control is for Checksum routine - FF 01*/
    		case UDSMGR_ROUTINE_ID_CHECKINTEGRITY:
                status = UdsMgr_CheckProgramintegrity_0202(pData, dataLen);
                break;
            case UDSMGR_ROUTINE_ID_CHECKDEPENDENCIES :
                status = UdsMgr_CheckDependencies_FF01(pData, dataLen);
                break;
    		default:
    			status = NRC_INVALID_FORMAT;
    			break;
		}
	}

	/* Send Response */
	UdsMgr_SendResponse(status);
}

#if 0
/*============================================================================
 ** Function Name:    UdsMgr_EraseRoutine 
 **
 ** Visibility:       Private
 **
 ** Description:      This function is used to erase components
 **                   
 ** Invocation:       Invoked UdsMgr_RoutineControlHandler
 **                   
 ** Inputs:           UINT8 compId   - Component ID
 **
 ** Return:           UINT8
 **                   UDSMGR_RESP_SUCCESS - Erase Successfull
 **                   UDSMGR_RESP_ERASE_FAILED - Erase Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
static UINT8 UdsMgr_EraseRoutine(UINT8 compId)
{
	UINT8 status = UDSMGR_RESP_SUCCESS;

	if(FBL_OK != FblComp_Erase(compId))
	{
		status = UDSMGR_RESP_ERASE_FAILED;
	}
	else
	{
		/*Do Nothing*/
	}

	return status;
}
#endif
void UdsMgr_SBLActivationPostHandler(void)
{
	if( Activate_SBL == TRUE)
	{
		Headerptr->SBLServFn();
	}	
}

/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change                     */
/******************************************************************************/
/*   Note: In the traceability column we need to trace back to the Design Doc.*/
/*   For the initial version it is traced to the Design Document section.     */
/*   For further changes it shall trace to the source of the change which may */
/*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  */
/*   other reason                                                             */
/******************************************************************************/
/*---------------------------------------------------------------------------
Date              : 26-SEP-2016
By                : KSHANMU4
Traceability      : NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
