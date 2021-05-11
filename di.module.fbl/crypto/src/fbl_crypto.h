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

File Name        :  fbl_crypto.h
Module Short Name:  vehiclecomm.core.fbl.crypto
VOBName          :  vehiclecomm.core.fbl.crypto\src\fbl_crypto.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported 
                    by fbl_crypto.c
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/
#ifndef FBL_CRYPTO_H
#define FBL_CRYPTO_H

/* Macro values used in the CFG File */
/* Supported libraries */
#define TOMCRYPT			0

/**  Include Files  **/
#include "fbl_main.h"
#include "fbl_crypto_cfg.h"

#if CRYPTOLIB == TOMCRYPT
	#include "tomcrypt.h"
#else
	#error Select a crypto library
#endif

/**  Macro Definitions  **/
#define AES_BLOCK_SIZE				16u

/** Fbl Crypto Instance Structure
 ** Do not allocate as a local variable in stack
 */
typedef struct SFblCrypto
{
#if CRYPTOLIB == TOMCRYPT	
	#ifdef MAC_OMAC
	omac_state omac_state;
	#endif
	#ifdef CIPHER_AES
	symmetric_key skey;
	#endif
	#ifdef MODE_CBC
	symmetric_CBC cbc;
	#endif
	#ifdef SHA_256
	hash_state sha256_state;
	#endif
#endif	
} SFblCrypto;

/*============================================================================
 ** Function Name:    FblCrypto_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the crypto module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            None
 **
 ** Return:           UINT8
 **                   FBL_OK 	- Success
 **                   FBL_FAIL 	- Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_Init(void);

#ifdef CIPHER_AES
/*============================================================================
 ** Function Name:    FblCrypto_AES_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the AES algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pKey 		- Pointer to the key buffer
 **                   UINT32 len	    - Size of the key
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Init(SFblCrypto *pInst, const UINT8 *pKey, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_AES_Encrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to encrypt data using AES algorithm.
 **                   The clearText and cipherText buffer must have same size.
 **					  The size of the buffers must be in multiple of the size
 **                   of the key (16). 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_AES_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText	- Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len	    - Length of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Encrypt(SFblCrypto *pInst, const UINT8 *pClearText, 
						    UINT8 *pCipherText, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_AES_Decrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to encrypt data using AES algorithm.
 **                   The clearText and cipherText buffer must have same size.
 **					  The size of the buffers must be in multiple of the size
 **                   of the key (16). 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_AES_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText	- Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len	    - Size of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Decrypt(SFblCrypto *pInst, const UINT8 *pCipherText, 
							UINT8 *pClearText, UINT32 len);
#endif

#ifdef MAC_OMAC
/*============================================================================
 ** Function Name:    FblCrypto_OMAC_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the OMAC algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pKey 		- Pointer to the key buffer
 **                   UINT32 len	    - Size of the key
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_OMAC_Init(SFblCrypto *pInst, const UINT8 *pKey, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_OMAC_Process 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to process a block of data using the 
 **					  OMAC algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_OMAC_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pBuffer	- Pointer to data buffer
 **                   UINT32 len	    - Length of the data buffer
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_OMAC_Process(SFblCrypto *pInst, const UINT8 *pBuffer, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_OMAC_Done 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to process a retrieve the result 
 **					  of the OMAC algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_OMAC_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pBuffer	- Pointer to data buffer to 
 **										  copy result
 **                   UINT32 *pLen	    - Pointer to the variable that 
 **										  containts the size of the buffer
 **										  When the function returns it contains
 **										  no. of bytes actually copied.
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_OMAC_Done(SFblCrypto *pInst, UINT8 *pBuffer, UINT32 *pLen);
#endif

#ifdef MODE_CBC
/*============================================================================
 ** Function Name:    FblCrypto_CBC_Start 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the CBC algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **					  UINT8 *pIV		- Pointer to the IV buffer
 **                   UINT8 *pKey 		- Pointer to the key buffer
 **                   UINT32 len	    - Size of the key and IV
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_CBC_Start(SFblCrypto *pInst, const UINT8 *pIV, 
                          const UINT8 *pKey, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_CBC_Decrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to decrypt data using CBC algorithm. 
 **					  FblCrypto_CBC_Start must have been called before
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText	- Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len	    - Size of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_CBC_Decrypt(SFblCrypto *pInst, const UINT8 *pCipherText, 
                            UINT8 *pClearText, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_CBC_Encrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to encrypt data using CBC algorithm. 
 **					  FblCrypto_CBC_Start must have been called before
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText	- Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len	    - Size of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_CBC_Encrypt(SFblCrypto *pInst, const UINT8 *pClearText, 
							UINT8 *pCipherText, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_CBC_Done 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to finalize CBC algorithm.
 **					  FblCrypto_CBC_Start must have been called before
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_CBC_Done(SFblCrypto *pInst);
#endif

#ifdef SHA_256
/*============================================================================
 ** Function Name:    FblCrypto_SHA256_Start 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to initialize the SHA256 algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_SHA256_Start(SFblCrypto *pInst);

/*============================================================================
 ** Function Name:    FblCrypto_SHA256_Process 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to process a block of data using the 
 **					  SHA256 algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_SHA256_Start must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pBuffer	- Pointer to data buffer
 **                   UINT32 len	    - Length of the data buffer
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_SHA256_Process(SFblCrypto *pInst, const UINT8 *pBuffer, UINT32 len);

/*============================================================================
 ** Function Name:    FblCrypto_SHA256_Done 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to retrieve the result of the 
 **					  SHA256 algorithm. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_SHA256_Start must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pBuffer	- Pointer to data buffer to 
 **										  copy result
 **                   UINT32 len	    - Length of the buffer.
 **										  Must be 32.
 **
 ** Return:           UINT8
 **                   FBL_OK 			- Success
 **                   FBL_FAIL 			- Failed
 **					  FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_SHA256_Done(SFblCrypto *pInst, UINT8 *pBuffer, UINT32 len);
#endif

#endif /* FBL_CRYPTO_H */
/******************************************************************************/
/*   for each change to this file, be sure to record:                         */
/*      1.  who made the change and when the change was made                  */
/*      2.  why the change was made and the intended result                   */
/*   Following block needs to be repeated for each change					  */
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
Traceability      :	NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
