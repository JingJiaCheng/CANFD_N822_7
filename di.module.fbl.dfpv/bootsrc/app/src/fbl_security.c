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

File Name        :  fbl_security.c
Module Short Name:  vehiclecomm.core.fbl.hyundai
VOBName          :  vehiclecomm.core.fbl.hyundai\security\src\fbl_security.c
Author           :  kshanmu4
Description      :  Defines interfaces for security functions
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Any
Target Processor :  Any
******************************************************************************/

/**  Include Files  **/
#include "fbl_security.h"
#include "fbl_timer_drv.h"

//#define D53_GENERATE_KEY

/*Private Function*/
#ifdef D53_GENERATE_KEY
static void FblSec_GenerateKey (UINT16 *Seed_Key);
#else
#if 0
static void FblSec_GenerateKey (UINT32 *Seed_Key);
#endif
#endif

typedef struct
{
	UINT8 FblSec_BitFrom;
	UINT8 FblSec_BitTo;
}tKey_Validation_LookUp;

/**  Private Variables  **/
static UINT8   			security_sts;
static UINT8 			FblSeed[FBL_SEC_SEED_LEN];
tKey_Validation_LookUp 	Key_Validation_LookUp[16] =
{
	/*BitFRom	,	  BitTo		*/
	{	0u 		, 		7u		},/*1*/
	{	1u 		, 		10u		},/*2*/
	{	2u 		, 		9u		},/*3*/
	{	3u 		, 		4u		},/*4*/
	{	4u 		, 		3u		},/*5*/
	{	5u 		, 		6u		},/*6*/
	{	6u 		, 		5u		},/*7*/
	{	7u 		, 		8u		},/*8*/
	{	8u 		, 		15u		},/*9*/
	{	9u 		, 		2u		},/*10*/
	{	10u 	, 		1u		},/*11*/
	{	11u 	, 		12u		},/*12*/
	{	12u 	, 		11u		},/*13*/
	{	13u 	, 		14u		},/*14*/
	{	14u 	, 		13u		},/*15*/
	{	15u 	, 		0u		} /*16*/
};


/*============================================================================
 ** Function Name:    FblSec_Init 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to initialize the security module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 	- Success
 **                   FBL_FAIL 	- Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_Init(void)
{
	UINT32 idx;
	
	security_sts = FBL_SECURITY_NOT_DONE;

	for(idx = 0u; idx < FBL_SEC_SEED_LEN; idx++)
	{
		FblSeed[idx] = 0x00u;
	}
	return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblSec_DeInit 
 **
 ** Visibility:       Public
 **
 ** Description:      This function is used to deinitialize the security
 **					  module. 
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 	- Success
 **                   FBL_FAIL 	- Failed
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_DeInit(void)
{
	UINT32 idx;
	
	for(idx = 0u; idx < FBL_SEC_SEED_LEN; idx++)
	{
		FblSeed[idx] = 0x00u;
	}
	return FBL_OK;
}

/*============================================================================
 ** Function Name:    FblSec_RequestSeed 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to request seed for security access
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 compId 	- Component ID 
 **					  UINT8 *pSeedBuffer - Buffer to copy the seed
 **					  UINT32 len	- Length of the buffer
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **                   FBL_INVALID_PARAM 	- Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_RequestSeed(UINT8 *pSeedBuffer, UINT32 len)
{
	UINT8 status 	= FBL_INVALID_PARAM;
	UINT8 Temp 		= 0u;
	
	if((NULL != pSeedBuffer) && (FBL_SEC_SEED_LEN == len))
	{
		
		FblSeed[0]= (UINT8)( ((UINT16)FblTimerDrv_GetCount(FBL_TIMER_0) >> 8u) & 0xFFu);
		FblSeed[1]=	(UINT8)( (UINT16) FblTimerDrv_GetCount(FBL_TIMER_0) & 0xFFu);
		FblSeed[2]=	(UINT8)( ((UINT16)FblTimerDrv_GetCount(FBL_TIMER_0) >> 8u) & 0xFFu);
		FblSeed[3]=	(UINT8)( (UINT16) FblTimerDrv_GetCount(FBL_TIMER_0) & 0xFFu);
		
	  /* Copy the seed */
		for ( Temp = 0u; Temp<= 3u; Temp ++)
		{
            if ( FblSeed[Temp] != 0 )
            {
                pSeedBuffer[Temp] = FblSeed[Temp];
            }
            else
            {
                FblSeed[Temp] += (Temp+2);
                pSeedBuffer[Temp] = FblSeed[Temp];
            }
		}
		status = FBL_OK;
	}

	/* Store the compId as pending, if successfull */
	if(FBL_OK == status)
	{
		security_sts  = FBL_SECURITY_PENDING;
	}
	else
	{
		security_sts = FBL_SECURITY_REQ_SEED_FAILED;	
	}
	
	return status;
}

static UINT32 seedToKey(UINT32 pucSeed, UINT32 mask)
{
    UINT32 i;
    UINT32 key;
         
         //const DWORD mask = 0x8EC9AA7E;//
   /* The array for SEED starts with [1], the array for KEY starts with [0] */
   /* seed contains the SEED from the ECU */
         /* length contains the number of bytes of seed */
   /* key contains the KEY to send to ECU */
   /* retLen contains the number of bytes to send to ECU as key */


    if ((pucSeed & 0xffff0000) == 0)
    {
        return key = 0;
    }
    else
    {
        for (i = 0; i < 35; i++)
        {
            if (pucSeed & 0x80000000)
            {
                pucSeed = pucSeed << 1;
                pucSeed = pucSeed ^ mask;
            }
            else
            {
                pucSeed = pucSeed << 1;
            }
        }

        key = pucSeed;
        return key;

    }
}

UINT8 ES_CalculateKeyFromSeed(  unsigned char* pucSeed, UINT32* pucKey )
{

    UINT32 Seed,Key,mask;
    UINT8 result;

    mask =0x8EC8BB8E;

    Seed = pucSeed[3] + (UINT32)(pucSeed[2]<<8) + (UINT32)(pucSeed[1] << 16) + (UINT32)(pucSeed[0] << 24);
    Key = seedToKey(Seed, mask);
    if (Key == 0)
    {
        result= FBL_FAIL;
    }
    else
    {
        *pucKey = Key;
        result = FBL_OK;        
    }

    return result;

}


/*============================================================================
 ** Function Name:    FblSec_VerifyKey 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to verify the security key sent by
 **					  the tester
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 *pKeyBuffer - Buffer that contains the key
 **					  UINT32 len - Length of the buffer
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **                   FBL_FAIL 				- Failed
 **                   FBL_INVALID_PARAM 	- Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_VerifyKey(const UINT8 *pKeyBuffer, UINT32 len)
{

#ifdef D53_GENERATE_KEY

	UINT8  status = FBL_INVALID_PARAM;

	UINT16 L_Key_Tool =  ((UINT16)pKeyBuffer[0] << 8u) 	| ((UINT16)pKeyBuffer[1]);
	UINT16 R_Key_Tool =  ((UINT16)pKeyBuffer[2] << 8u) 	| ((UINT16)pKeyBuffer[3]);
	
	UINT16 L_Seed_Key =  ( ((UINT16)FblSeed[0] << 8u) 	| ((UINT16)FblSeed[1]) );
	UINT16 R_Seed_Key =  ( ((UINT16)FblSeed[2] << 8u) 	| ((UINT16)FblSeed[3]) );


	if((FBL_SEC_KEY_LEN == len))
	{
		/* Calculate Key */
		FblSec_GenerateKey(&L_Seed_Key);
		FblSec_GenerateKey(&R_Seed_Key);

		/* Verify Key */
	    if (( R_Key_Tool == R_Seed_Key) && ( L_Key_Tool == L_Seed_Key))
	    {
	        status = FBL_OK;
	    }
	}

	if(FBL_OK == status)
	{
		/* Make the pending component to active component */
		security_sts = FBL_SECURITY_SUCCESS;
	}
	else
	{
		security_sts = FBL_SECURITY_KEY_FAILED;	
	}

	return status;
#else

	UINT8  status = FBL_INVALID_PARAM;

	UINT32 Key_Tool = ((UINT32)pKeyBuffer[0] << 24u)    
                        | ((UINT32)pKeyBuffer[1] << 16u)
                        | ((UINT32)pKeyBuffer[2] << 8u) 
                        | (UINT32)pKeyBuffer[3];
	UINT32 Seed_Key;

	if((FBL_SEC_KEY_LEN == len))
	{
		/* Calculate Key */
//		FblSec_GenerateKey(&Seed_Key);
        ES_CalculateKeyFromSeed(FblSeed,&Seed_Key);

		/* Verify Key */
	    if (Key_Tool == Seed_Key) 
	    {
	        status = FBL_OK;
	    }
        else
        {
            status = FBL_INVALID_PARAM;;
        }
	}
    else
    {
        status = FBL_INVALID_PARAM;;
    }

	if(FBL_OK == status)
	{
		/* Make the pending component to active component */
		security_sts = FBL_SECURITY_SUCCESS;
	}
	else
	{
		security_sts = FBL_SECURITY_KEY_FAILED;	
	}

	return status;
#endif
	
}

/*============================================================================
 ** Function Name:    FblSec_VerifySecurityAccess 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to verify the security access to 
 **					  program the component ID
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT8 compId 	- Component ID
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **                   FBL_FAIL 				- Failed
 **                   FBL_INVALID_PARAM 	- Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_VerifySecurityAccess(void)
{
	UINT8 status = FBL_INVALID_PARAM;
	
	if(security_sts == FBL_SECURITY_SUCCESS)
	{
		status = FBL_OK;
	}
	else
	{
		security_sts = FBL_SECURITY_NOT_DONE;
		status = FBL_FAIL;
	}
	
	return status;
}


/*============================================================================
 ** Function Name:    FblSec_ClearSecurityAccess 
 **
 ** Visibility:       Public
 **
 ** Description:      This function used to clear the security access
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **
 ** Critical Section: None.
 **==========================================================================*/
UINT8 FblSec_ClearSecurityAccess(void)
{
	security_sts = FBL_SECURITY_NOT_DONE;
	
	return FBL_OK;	
}

/*============================================================================
 ** Function Name:    FblSec_GenerateKey 
 **
 ** Visibility:       Private
 **
 ** Description:      This function used to Generate the security key after getting SEED
 **		
 **                   
 ** Invocation:       Invoked by FBL
 **                   
 ** Inputs            UINT32 *x1 - address of left key variable from the  calling function
 **                   UINT32 *xr - address of right key variable from the calling function
 **                   
 **
 ** Return:           UINT8
 **                   FBL_OK 				- Success
 **                   FBL_FAIL 				- Failed
 **                   FBL_INVALID_PARAM 	- Invalid Parameter
 **
 ** Critical Section: None.
 **==========================================================================*/
#ifdef D53_GENERATE_KEY
static void FblSec_GenerateKey (UINT16 *Seed_Key)
{
	UINT8 SeedH_1;
	UINT8 SeedH_2;
	UINT8 SeedH_result;

	UINT8 SeedL_1;
	UINT8 SeedL_2;
	UINT8 SeedL_result;

	SeedH_1 	= (UINT8)(*Seed_Key >> 8u);
	SeedH_2 	= SeedH_1;
	SeedH_result= SeedH_1;

	SeedL_1 	= (UINT8)(*Seed_Key & 0xFFu);
	SeedL_2 	= SeedL_1;
	SeedL_result= SeedL_1;

	/*step 1 for SeedH*/
	SeedH_1 = (SeedH_1 >> 3u) & 0x1Fu;
	SeedH_2 = (SeedH_2 << 5u) & 0xE0u;
	SeedH_result = SeedH_1 | SeedH_2;
	SeedH_1 = SeedH_2 = SeedH_result;

	/*step 2 for SeedH*/
	SeedH_1 = (SeedH_1 & 0x55u) << 1u;
	SeedH_2 = (SeedH_2 & 0xAAu) >> 1u;
	SeedH_result = SeedH_1 | SeedH_2;
	SeedH_1 = SeedH_2 = SeedH_result;

	/*step 1 for SeedL*/
	SeedL_1 = (SeedL_1 >> 3u) & 0x1Fu;
	SeedL_2 = (SeedL_2 << 5u) & 0xE0u;
	SeedL_result = SeedL_1 | SeedL_2;
	SeedL_1 = SeedL_2 = SeedL_result;

	/*step 2 for SeedL*/
	SeedL_1 = (SeedL_1 & 0x55u) << 1u;
	SeedL_2 = (SeedL_2 & 0xAAu) >> 1u;
	SeedL_result = SeedL_1 | SeedL_2;
	SeedL_1 = SeedL_2 = SeedL_result;

	/*step 3 for SeedH and SeedL*/
	SeedH_1 = (SeedH_1 << 3u) & 0xF8u;
	SeedH_2 = (SeedH_2 >> 5u) & 0x07u;

	SeedL_1 = (SeedL_1 << 3u) & 0xF8u;
	SeedL_2 = (SeedL_2 >> 5u) & 0x07u;

	SeedH_result = SeedH_1 | SeedL_2;
	SeedL_result = SeedH_2 | SeedL_1;

	/*step 4 for create keys*/
	*Seed_Key = (UINT16)( ~(SeedH_result ^ SEED_AND_KEY_COCF1) ) << 8u;
	*Seed_Key = (UINT16)( *Seed_Key | (UINT8)(~(SeedL_result ^ SEED_AND_KEY_COCF2)) );

}
#else
#if 0
static void FblSec_GenerateKey (UINT32 *Seed_Key)
{
	UINT32 u32Mask; 
	u32Mask = 0x8EC8BB8E;//0x8EACBA9F; //modify by lhan4
	UINT32 u32Key;
	u32Key = *Seed_Key;
	UINT16 u16Loop=0; 
	for(u16Loop=0;u16Loop<35;u16Loop++)
	{
		if(u32Key & 0x80000000)
		{
			u32Key = u32Key << 1;
			u32Key = u32Key ^ u32Mask;
		}
		else
		{
			u32Key = u32Key << 1;
		}
	}
	
	*Seed_Key = (UINT32) u32Key;
}
#endif
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
Date              : 26-SEP-2017
By                : Dmanjuna
Traceability      :	NONE
Change Description: Initial Version.
-----------------------------------------------------------------------------*/
