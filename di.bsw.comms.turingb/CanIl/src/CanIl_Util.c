/* ===========================================================================
//
//                     CONFIDENTIAL VISTEON CORPORATION
//
//  This is an unpublished work of authorship, which contains trade secrets,
//  created in 2006.  Visteon Corporation owns all rights to this work and
//  intends to maintain it in confidence to preserve its trade secret status.
//  Visteon Corporation reserves the right, under the copyright laws of the
//  United States or those of any other country that may have jurisdiction, to
//  protect this work as an unpublished work, in the event of an inadvertent
//  or deliberate unauthorized publication.  Visteon Corporation also reserves
//  its rights under all copyright laws to protect this work as a published
//  work, when appropriate.  Those having access to this work may not copy it,
//  use it, modify it or disclose the information contained in it without the
//  written authorization of Visteon Corporation.
//
// =========================================================================*/
/* ===========================================================================
//
//  Name:           CanIlUtil.c
//
//  Description:    VNIM Utilities
//
//  Organization:   Multiplex Subsystems
//
// =========================================================================*/
/* ===========================================================================
//  I N C L U D E   F I L E S
// =========================================================================*/

#include "Std_Types.h"
#include "can_defs.h"
#include "Can_CSec.h"
#include "CanIl_Util.h"
#include "CanIl_Util_Cfg.h"

/* ===========================================================================
//  P U B L I C   F U N C T I O N S
// =========================================================================*/

#ifdef CANUTIL_ENABLED

#ifdef CANUTIL_DEBUG_RECORD
static CanDetailStruct CanHistoryBuffer[CANUTIL_HISTORY_STRUCT_SIZE];
static CAN_UINT8 DbglogIndex;
#endif

#define CAN_DBG_UNUSED_VAR(X)  do { if(0 == (X)){} } while(0)

#endif

/* ===========================================================================
//
// Name:            CanIlUtilCopyBytesAtomic
//
// Description:     Copy Bytes from One Buffer to Another in a Critical Section
//
// Inputs:          pFrom:      "From" Copy Pointer
//
//                  pTo:        "To" Copy Pointer
//
//                  numBytes:   Number of Bytes to Copy
//
// Returns:         none
//
// =========================================================================*/
void
CanIlUtilCopyBytesAtomic( CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes )
{
    CAN_UINT8 FuncExecSt = E_OK;
    
    if( (NULL == pFrom) || (NULL == pTo) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if( 0 == numBytes )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
	if( E_NOT_OK != FuncExecSt )
	{

	    CanIlUtilCopyBytes( pFrom, pTo, numBytes );

	}
}

/* ===========================================================================
//
// Name:            CanIlUtilCopyByteinReverse
//
// Description:     Copy Bytes from One Buffer to Another in reverse in a Critical Section
//
// Inputs:          pFrom:      "From" Copy Pointer
//
//                  pTo:        "To" Copy Pointer
//
//                  numBytes:   Number of Bytes to Copy
//
// Returns:         none
//
// =========================================================================*/
void
CanIlUtilCopyByteinReverse(CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes )
{
    CAN_UINT8 FuncExecSt = E_OK;
    
	CAN_UINT8 iByte = 0;
    CAN_UINT8 jByte = 0;

    if( (NULL == pFrom) || (NULL == pTo) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if( 0 == numBytes )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
	if( E_NOT_OK != FuncExecSt )
	{
	    CanEnterCriticalSection();

	    for(iByte = 0,jByte = (numBytes-1) ; iByte < numBytes; iByte++,jByte--)
	    {
	        pTo[ iByte ] = pFrom[ jByte ];
	    }

	    CanExitCriticalSection();
	}
}

/* ===========================================================================
//
// Name:            CanIlUtilCopyBytes
//
// Description:     Copy Bytes from One Buffer to Another
//
// Inputs:          pFrom:      "From" Copy Pointer
//
//                  pTo:        "To" Copy Pointer
//
//                  numBytes:   Number of Bytes to Copy
//
// Returns:         none
//
// =========================================================================*/
void
CanIlUtilCopyBytes( CAN_UINT8 const * const pFrom, CAN_UINT8 * const pTo, CAN_UINT8 const numBytes )
{
    CAN_UINT8 iByte;

    CAN_UINT8 FuncExecSt = E_OK;
    
    if( (NULL == pFrom) || (NULL == pTo) )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

    if( 0 == numBytes )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}
    
	if( E_NOT_OK != FuncExecSt )
	{
	    CanEnterCriticalSection();

	    for(iByte = 0; iByte < numBytes; iByte++)
	    {
	        pTo[ iByte ] = pFrom[ iByte ];
	    }

	    CanExitCriticalSection();
	}
}

/* ===========================================================================
//
// Name:            CanIlUtilSetClearBits
//
// Description:     Private Function to Set/Clear Tx or Rx Status Bits Atomically
//
// Inputs:          pStatus: Pointer to CAN_UINT8 Status Byte
//
//                  bitMask: Bit Mask for Bits to Set
//
// Returns:         none
//
// =========================================================================*/
void
CanIlUtilSetClearBits( CAN_UINT8 * const pStatus, CAN_UINT8 const bitMask, CAN_BOOLEAN setMode )
{
    CAN_UINT8 FuncExecSt = E_OK;
    
    if( NULL == pStatus )
	{
	    #ifdef CANUTIL_ENABLED
	    CanUtil_ReportError();
		#else
		FuncExecSt = E_NOT_OK;
		#endif
	}

	if( E_NOT_OK != FuncExecSt )
	{
	    /* Set the Status Bits in a Critical Section */
	    CanEnterCriticalSection();

	    if(TRUE == setMode)
		{
	        (*(pStatus)) |= bitMask;
		}
		else
		{
		    (*(pStatus)) &= CAN_MASK8_COMPLEMENT( bitMask );
		}

	    CanExitCriticalSection();
	}
}


/* Debug support code */

#ifdef CANUTIL_ENABLED

FUNC(void, CAN_DBG_CODE) CanUtil_Init(void)
{
    CAN_UINT8 DbgLoopIndex = 0;

    DbglogIndex = 0;

    for(; DbgLoopIndex < CANUTIL_HISTORY_STRUCT_SIZE; DbgLoopIndex++)
	{
	    CanDbgHistoryBuffer[DbgLoopIndex] = 0xFF;
	}
}

FUNC(void, CAN_DBG_CODE) CanUtil_ReportError( /*CAN_UINT16 ModuleId, CAN_UINT8 InstanceId, CAN_UINT8 ApiId, CAN_UINT8 ErrorId*/ )
{

      #ifdef CANUTIL_DEBUG_RECORD

      /*CanDbgHistoryBuffer[DbglogIndex].moduleId = ModuleId;
      CanDbgHistoryBuffer[DbglogIndex].instanceId = InstanceId;
      CanDbgHistoryBuffer[DbglogIndex].apiId = ApiId;
      CanDbgHistoryBuffer[DbglogIndex].errorId = ErrorId;

      if( (CAN_DBG_HISTORY_STRUCT_SIZE - 1) > DbglogIndex ) DbglogIndex++;
	  else DbglogIndex = 0;*/

      #else

      /*CAN_DBG_UNUSED_VAR(ModuleId);
	  CAN_DBG_UNUSED_VAR(InstanceId);
	  CAN_DBG_UNUSED_VAR(ApiId);
	  CAN_DBG_UNUSED_VAR(ErrorId);*/

      while(1)
      {
          ; /* Typical place for a breakpoint if extended debugging support is disabled */
      }

	  #endif

}

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* CANUTIL_ENABLED */

