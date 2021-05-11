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

File Name        :  udsmgr.h
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\uds\src\udsmgr.h
Description      :  Lists the Interface function exported by UDS Stack
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef UDSMGR_H
#define UDSMGR_H

/**  Include Files  **/
#include "system.h"
#include "udsdiag.h"

/**  Macro Definitions  **/
/* Supported session names */
#define SESSION_DEFAULT                 ( 0x01u)
#define SESSION_PROGRAMMNG              ( 0x02u)
#define SESSION_EXTENDED                ( 0x03u)
#define SESSION_DEFAULT_INDX            ( 0x00u)

/* Misc */
#define PID_BYTE_LENGTH                 ( 2u)
#define NULL_PTR                        ((void *) 0)
#define ZERO                            ( 0u)
#define NO_SPACE_AVAILABLE              ( 0xFFu)
#define Active              			( 0x01u)
#define InActive              			( 0x00u)


#define Security_Level_Access            Active  /* Set the security level access as active or inactive */




/* Negative Response Code */

#define NO_ERROR                                             0x00u
#define NRC_GENERAL_REJECT                                   0x10u
#define NRC_SERVICE_NOT_SUPPORTED                            0x11u
#define NRC_SUBFUNCTION_NOT_SUPPORTED                        0x12u
#define NRC_INVALID_FORMAT                                   0x13u
#define NRC_BUSY_REPEAT_REQUEST                              0x21u
#define NRC_CONDITIONS_NOT_CORRECT                           0x22u
#define NRC_ROUTINE_NOT_COMPLETED                            0x23u
#define NRC_REQUEST_SEQUENCE_ERROR                           0x24u
#define NRC_REQUEST_OUT_OF_RANGE                             0x31u
#define NRC_SECURITY_ACCESS_DENIED                           0x33u
#define NRC_INVALID_KEY                                      0x35u
#define NRC_EXCEEDED_NUMBER_ATTEMPTS                         0x36u
#define NRC_REQUIRED_TIME_DELAY_NOT_EXPIRED                  0x37u
#define NRC_GENERAL_PROGRAMMING_FAILURE                      0x72u
#define NRC_WRONG_BLOCK_SEQ_COUNTER                          0x73u
#define NRC_RESPONSE_PENDING                                 0x78u
#define NRC_SUBFUNCTION_NOT_SUPPORTED_IN_ACTIVE_SESSION      0x7Eu
#define NRC_SERVICE_NOT_SUPPORTED_IN_ACTIVE_SESSION          0x7Fu

/* Maximum response length */
#define MAX_DATA_RESPONSE                                   (1024u)

/*
** Positive response suppression
*/
#define RESPONSE_SUPPRESS_MASK              (0x7Fu)
#define UDS_INSPECT_POS_RSP_SUPPRESSED(x)   ((udsdiagu8)(x[0] & \
                                            (udsdiagu8)(~(udsdiagu8)RESPONSE_SUPPRESS_MASK)))

extern UINT32 Req_start_address;
extern UINT32 Req_end_address;
extern UINT32 fbl_calc_chksum;

extern UINT16 Fbl_Seed_bytes_Temp[2];
extern UINT32 Fbl_Key_Value;
extern UINT32 Fbl_Seed_bytes[8];
extern UINT8 Activate_SBL;

extern UINT8 curSession;


/*============================================================================
 ** Function Name:    UdsMgr_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS Manager
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_Init(void);

/*============================================================================
 ** Function Name:    UdsMgr_IsDiagReqPermitted 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to evaluate conditions if the 
 **                   diagnostics  request can be performed or not
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           BOOLEAN
 **                   TRUE  - Diagnostics can be performed
 **                   FALSE - Diagnostics cannot be performed
 **
 ** Critical Section: None.
 **==========================================================================*/
BOOLEAN UdsMgr_IsDiagReqPermitted(void);

/*============================================================================
 ** Function Name:    UdsMgr_SendPositiveResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send positive response
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 *pBuffer - Data to be sent to the tester
 **                   UINT16 len - Size of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SendPositiveResponse(const UINT8 *pBuffer, UINT16 len);

/*============================================================================
 ** Function Name:    UdsMgr_SendNegativeResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send negative response
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 resp - Negative Response Code
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SendNegativeResponse(UINT8 resp);

/*============================================================================
 ** Function Name:    UdsMgr_SendResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to send positive/negative response
 **                   It is used when response buffer is used
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 status - Response Code
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SendResponse(UINT8 status);

/*============================================================================
 ** Function Name:    UdsMgr_SuppressResponse 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to suppress response for a request
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SuppressResponse(void);

/*============================================================================
 ** Function Name:    UdsMgr_InitResponseBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_InitResponseBuffer(void);

/*============================================================================
 ** Function Name:    UdsMgr_AddByteToRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to add a byte of data to the
 **                   response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 byte - data to add
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_AddByteToRespBuffer(UINT8 byte);

/*============================================================================
 ** Function Name:    UdsMgr_GetByteArrayRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used allocate data in the response buffer
 **                   and return the pointer to copy the data
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT32 len - length to allocate
 **
 ** Return:           UINT8*
 **                   Pointer to the allocated buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8*  UdsMgr_GetByteArrayRespBuffer(UINT32 len);

/*============================================================================
 ** Function Name:    UdsMgr_GetByteArrayRespBufferPointer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used get the pointer to the response
 **                   buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT32 index - Index in the response buffer
 **
 ** Return:           UINT8*
 **                   Pointer to the response buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8*  UdsMgr_GetByteArrayRespBufferPointer(UINT32 index);

/*============================================================================
 ** Function Name:    UdsMgr_GetRespBufferLength 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used get the size of the response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None
 **
 ** Return:           UINT16
 **                   Size of the response buffer
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT16  UdsMgr_GetRespBufferLength(void);

/*============================================================================
 ** Function Name:    UdsMgr_AddByteArrayToRespBuffer 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used add byte array to the response buffer
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           UINT8 *pBuffer - Pointer to the data
 **                   UINT32 len - Size of the data
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_AddByteArrayToRespBuffer(const UINT8 *pBuffer, UINT32 len);

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS diagnostic 
 **                   session request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_DiagnosticSessionControlInit(void);

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS diagnostic 
 **                   session request
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
void    UdsMgr_DiagnosticSessionControlHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_DiagnosticSessionControlPostHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the ECU Reset post
 **                   request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_DiagnosticSessionControlPostHandler(void);

/*============================================================================
 ** Function Name:    UdsMgr_GetCurrentDiagnosticSession 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to retrieve the current 
 **                   diagnostic session
 **                   
 ** Invocation:       Invoked by UDS Stack
 **                   
 ** Inputs:           None 
 **
 ** Return:           UINT8 - Current Diagnostic Session ID
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8   UdsMgr_GetCurrentDiagnosticSession(void);

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS security 
 **                   access handlers
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SecurityAccessInit(void);

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Security Access
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
void    UdsMgr_SecurityAccessHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_SecurityAccessReset 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to clear the security access
 **                   
 ** Invocation:       Invoked by UDS
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_SecurityAccessReset(void);

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
void    UdsMgr_RoutineControlInit(void);

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
void    UdsMgr_RoutineControlHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*****************************************************************************
 Prototype    : UdsMgr_GetDriverDoneFlag
 Description  : get Driver flag. done: True; no has: False
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2021/1/15
    Author       : chenyin
    Modification : Created function

*****************************************************************************/
udsdiagu8 UdsMgr_GetDriverDoneFlag(void);

/*============================================================================
 ** Function Name:    UdsMgr_RequestDownloadInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the UDS request 
 **                   download handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_RequestDownloadInit(void);

/*****************************************************************************
 Prototype    : UdsMgr_DownloadIsInEndState
 Description  : return Downloa is done or not; TRUE:transfer done; FALSE:transfer not done
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2021/1/15
    Author       : chenyin
    Modification : Created function

*****************************************************************************/
udsdiagu8 UdsMgr_DownloadIsInEndState(void);

/*============================================================================
 ** Function Name:    UdsMgr_RequestDownloadHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Request Download
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
void    UdsMgr_RequestDownloadHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_TransferDataHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Transfer data
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
void    UdsMgr_TransferDataHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_TransferExitHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the UDS Transfer exit
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
void    UdsMgr_TransferExitHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_TesterPresentInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the Tester present 
 **                   handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_TesterPresentInit(void);

/*============================================================================
 ** Function Name:    UdsMgr_TesterPresentHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the Tester present 
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
void    UdsMgr_TesterPresentHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_EcuResetInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the ECU reset 
 **                   handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_EcuResetInit(void);

/*============================================================================
 ** Function Name:    UdsMgr_EcuResetHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the ECU Reset request
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
void    UdsMgr_EcuResetHandler(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_EcuResetPostHandler 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the ECU Reset post
 **                   request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void    UdsMgr_EcuResetPostHandler(void);


//void UdsMgr_ChecksumRoutine(UINT32 chksum_start_add, UINT32 chksum_end_add, UINT8 *pData);

void UdsMgr_SBLActivationPostHandler(void);

void UdsMgr_Communication_Control(UINT8 *pdiagdata,UINT16 dataLen);
void UdsMgr_Control_DTC_setting(UINT8 *pdiagdata,UINT16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_Fingerprint_Data_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      initialize the Fingerprint Data 
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_Fingerprint_Data_Init(void);

/*============================================================================
 ** Function Name:    UdsMgr_WriteDataByIdentifier 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the Write Did post
 **                   request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_WriteDataByIdentifier(udsdiagu8 *pData, udsdiagu16 dataLen);

/*============================================================================
 ** Function Name:    UdsMgr_WriteDataByIdentifier 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to handle the Read Did post
 **                   request handler
 **                   
 ** Invocation:       Invoked by UDS Diag
 **                   
 ** Inputs:           None 
 **
 ** Return:           None
 **
 ** Critical Section: None.
 **==========================================================================*/
void UdsMgr_ReadDataByIdentifier(udsdiagu8 *pData, udsdiagu16 dataLen);

#endif /* UDSMGR_H */
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

