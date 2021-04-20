
#ifndef CCLSTACK_TYPES_H
#define CCLSTACK_TYPES_H

/*==================[inclusions]=============================================*/

#include <Std_Types.h> /* Standard type declarations */
#include "can_defs.h"
#include <CclStack_Cfg.h>  /* Communication Stack PDU types */

/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

typedef uint8        PNCHandleType;                 /* Neccessary for partial network */

/** \brief type for storage of basic information about a PDU
 *
 * This type shall be used to store the basic information about a PDU of
 * any type, namely a pointer variable pointing to it's SDU (payload) and
 * the corresponding length of the SDU in bytes.
 */
typedef struct
{
   /** \brief pointer to the SDU of the PDU  */
   P2VAR(uint8, AUTOMATIC, CCLSTACKDATA) SduDataPtr;
   PduLengthType SduLength; /** \brief length of SDU in bytes */
} PduInfoType;

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum                          
{
  BUFREQ_OK,           /*Buffer request accomplished successful.*/
  BUFREQ_E_NOT_OK,     /*Buffer request not successful. Buffer cannot be accessed.*/
  BUFREQ_E_BUSY,       /*Temporarily no buffer available. It's up the requestor to retry request for a certain time.*/
  BUFREQ_E_OVFL,        /*No Buffer of the required length can be provided.*/
  BUFREQ_FILLNR
} BufReq_ReturnType;

typedef CAN_UINT8        NetworkHandleType;

typedef enum                          
{
  TP_DATACONF,         /* TP_DATACONF  indicates  that  all  data,  that  have been  copied  so  far,  are  confirmed  and  can  be 
                          removed  from  the  TP  buffer.  Data  copied  by  this API call are excluded and will be confirmed later. */
  TP_DATARETRY,        /* TP_DATARETRY  indicates  that  this  API  call  shall copy already copied data in order to recover from 
                          an  error.  In  this  case  TxTpDataCnt  specifies  the offset of the first byte to be copied by the API call.  */
  TP_CONFPENDING
} TpDataStateType;

typedef struct
{
  TpDataStateType TpDataState;
  PduLengthType TxTpDataCnt;
} RetryInfoType;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* ifndef CCLSTACK_TYPES_H */

