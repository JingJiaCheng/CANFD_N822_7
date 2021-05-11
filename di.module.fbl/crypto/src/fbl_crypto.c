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

File Name        :  fbl_crypto.c
Module Short Name:  vehiclecomm.core.fbl.crypto
VOBName          :  vehiclecomm.core.fbl.crypto\src\fbl_crypto.c
Author           :  kshanmu4
Description      :  FBL Cryptographic routines
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

/**  Include Files  **/
#include "fbl_crypto.h"

/**  Macro Definitions  **/
#define SHA256_HASH_SIZE				(32u)

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
UINT8 FblCrypto_Init(void)
{
    UINT8 status = FBL_OK;
#if CRYPTOLIB == TOMCRYPT
    #ifdef CIPHER_AES
    if (-1 == register_cipher(&rijndael_desc)) {
        status = FBL_FAIL;
    }
    #endif
#endif
    return status;
}

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
UINT8 FblCrypto_OMAC_Init(SFblCrypto *pInst, const UINT8 *pKey, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 idx, err;
	
	if((NULL == pInst) || (NULL == pKey) || (0ul == len))
	{
		status = FBL_INVALID_PARAM;
	}
	else
	{
		#ifdef CIPHER_AES
		idx = find_cipher("rijndael");
		#endif
		
		if(-1 == idx)
		{
			status = FBL_FAIL; 
		}
		
		/* start the OMAC */
		if (FBL_OK == status)
		{
			err = omac_init((omac_state*)&pInst->omac_state, idx, pKey, len);
			if(CRYPT_OK != err) {
				status = FBL_FAIL; 
			}
		}
	}
    
    return status;
}

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
UINT8 FblCrypto_OMAC_Process(SFblCrypto *pInst, const UINT8 *pBuffer, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if((NULL == pInst) || (NULL == pBuffer) || (0ul == len))
	{
		status = FBL_INVALID_PARAM;
	}
	else
	{
		err =  omac_process((omac_state*)&pInst->omac_state, pBuffer, len);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}

    return status;  
}

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
UINT8 FblCrypto_OMAC_Done(SFblCrypto *pInst, UINT8 *pBuffer, UINT32 *pLen)
{
    UINT8 status = FBL_OK;
    SINT32 err;
	UINT32L size;/* To silence QAC unsigned long=unsigned int=UINT32 */

	if((NULL == pInst) || (NULL == pBuffer) || (NULL == pLen) || (0ul == *pLen))
	{
		status = FBL_INVALID_PARAM;
	}
	else
	{	
		err =  omac_done((omac_state*)&(pInst->omac_state), pBuffer, &size);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		} 
		else 
		{
			*pLen = size;
		}
	}
    
    return status;  
}
#endif

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
 **                   UINT8 *pKey       - Pointer to the key buffer
 **                   UINT32 len        - Size of the key
 **
 ** Return:           UINT8
 **                   FBL_OK            - Success
 **                   FBL_FAIL          - Failed
 **                   FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Init(SFblCrypto *pInst, const UINT8 *pKey, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

    if((NULL == pInst) || (NULL == pKey) || (0ul == len))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {
        zeromem(&pInst->skey, sizeof(symmetric_key));
        
        err = aes_setup(pKey, (SINT32)len, 0, &pInst->skey);
        if (CRYPT_OK != err) { 
            status = FBL_FAIL; 
        }
    }
    
    return status;  
}

/*============================================================================
 ** Function Name:    FblCrypto_AES_Encrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to encrypt data using AES algorithm.
 **                   The clearText and cipherText buffer must have same size.
 **                   The size of the buffers must be in multiple of the size
 **                   of the key (16). 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_AES_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText - Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len        - Length of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK            - Success
 **                   FBL_FAIL          - Failed
 **                   FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Encrypt(SFblCrypto *pInst, const UINT8 *pClearText, UINT8 *pCipherText, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;
    UINT32 bytesEncrypted;

    if((NULL == pInst) || (NULL == pClearText) || (NULL == pCipherText) || (0ul != (len & 0xFul)))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {
        bytesEncrypted = 0ul;
        
        while(bytesEncrypted < len)
        {
            err = aes_ecb_encrypt(&pClearText[bytesEncrypted], &pCipherText[bytesEncrypted], &pInst->skey);
            if (CRYPT_OK != err) { 
                status = FBL_FAIL; 
                break;
            }
            bytesEncrypted += AES_BLOCK_SIZE;
        }
    }

    return status;  
}

/*============================================================================
 ** Function Name:    FblCrypto_AES_Decrypt 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to decrypt data using AES algorithm.
 **                   The clearText and cipherText buffer must have same size.
 **                   The size of the buffers must be in multiple of the size
 **                   of the key (16). 
 **                   
 ** Invocation:       Invoked by FBL
 **                   FblCrypto_AES_Init must have been called before
 **                   
 ** Inputs            SFblCrypto *pInst - Pointer to crypto instance
 **                   UINT8 *pClearText - Pointer to the buffer containing
 **                                       clear text data
 **                   UINT8 *pCipherText- Pointer to the buffer containing
 **                                       encrypted data
 **                   UINT32 len        - Length of the buffers
 **
 ** Return:           UINT8
 **                   FBL_OK            - Success
 **                   FBL_FAIL          - Failed
 **                   FBL_INVALID_PARAM - Invalid parameters
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblCrypto_AES_Decrypt(SFblCrypto *pInst, const UINT8 *pCipherText, UINT8 *pClearText, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;
    UINT32 bytesDecrypted;

    if((NULL == pInst) || (NULL == pClearText) || (NULL == pCipherText) || (0ul != (len & 0xFul)))
    {
        status = FBL_INVALID_PARAM;
    }
    else
    {
        bytesDecrypted = 0ul;

        while(bytesDecrypted < len)
        {
            err = aes_ecb_decrypt(&pCipherText[bytesDecrypted], &pClearText[bytesDecrypted], &pInst->skey);
            if (CRYPT_OK != err) { 
                status = FBL_FAIL;
                break;
            }
            bytesDecrypted += AES_BLOCK_SIZE;
        }
    }
    
    return status;  
}
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
UINT8 FblCrypto_CBC_Start(SFblCrypto *pInst, const UINT8 *pIV, const UINT8 *pKey, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 idx, err;
    
	if((NULL == pInst) || (NULL == pIV) || (NULL == pKey) || (0ul == len))
    {
        status = FBL_INVALID_PARAM;
    }
	else
	{
		#ifdef CIPHER_AES
		idx = find_cipher("rijndael");
		#endif
		
		if(-1 == idx)
		{
			status = FBL_FAIL; 
		}
		else
		{
			/* start the CBC */	
			err = cbc_start(idx, pIV, pKey, (SINT32)len, 0, (symmetric_CBC*)&pInst->cbc);
			if(CRYPT_OK != err) {
				status = FBL_FAIL; 
			}
		}
	}
    
    return status;
    
}

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
UINT8 FblCrypto_CBC_Encrypt(SFblCrypto *pInst, const UINT8 *pClearText, UINT8 *pCipherText, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if((NULL == pInst) || (NULL == pCipherText) || (NULL == pClearText) || (0ul == len))
    {
        status = FBL_INVALID_PARAM;
    }
	else
	{
		err =  cbc_encrypt(pClearText, pCipherText, len, (symmetric_CBC*)&pInst->cbc);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}		

    return status;  
}

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
UINT8 FblCrypto_CBC_Decrypt(SFblCrypto *pInst, const UINT8 *pCipherText, UINT8 *pClearText, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if((NULL == pInst) || (NULL == pCipherText) || (NULL == pClearText) || (0ul == len))
    {
        status = FBL_INVALID_PARAM;
    }
	else
	{	
		err =  cbc_decrypt(pCipherText, pClearText, len, (symmetric_CBC*)&pInst->cbc);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}
    return status;  
}

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
UINT8 FblCrypto_CBC_Done(SFblCrypto *pInst)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if(NULL == pInst)
    {
        status = FBL_INVALID_PARAM;
    }
	else
	{
		err =  cbc_done((symmetric_CBC*)&pInst->cbc);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}		
    
    return status;
}
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
UINT8 FblCrypto_SHA256_Start(SFblCrypto *pInst)
{
    UINT8 status = FBL_OK;
    SINT32 err;
    
	if(NULL == pInst)
    {
        status = FBL_INVALID_PARAM;
    }
	else
	{
		/* start the SHA256 */
		err = sha256_init((hash_state*)&pInst->sha256_state);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}		
    
    return status;  
}

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
UINT8 FblCrypto_SHA256_Process(SFblCrypto *pInst, const UINT8 *pBuffer, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if((NULL == pInst) || (NULL == pBuffer) || (0ul == len))
	{
		status = FBL_INVALID_PARAM;
	}
	else
	{
		err =  sha256_process((hash_state*)&pInst->sha256_state, pBuffer, len);
		if(CRYPT_OK != err) {
			status = FBL_FAIL; 
		}
	}

    return status;      
}

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
UINT8 FblCrypto_SHA256_Done(SFblCrypto *pInst, UINT8 *pBuffer, UINT32 len)
{
    UINT8 status = FBL_OK;
    SINT32 err;

	if((NULL == pInst) || (NULL == pBuffer) || (SHA256_HASH_SIZE != len))
	{
		status = FBL_INVALID_PARAM;
	}
	else
	{
        err =  sha256_done((hash_state*)&pInst->sha256_state, pBuffer);
        if(CRYPT_OK != err) {
            status = FBL_FAIL; 
        }
	}
    
    return status;      
}

#endif
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
