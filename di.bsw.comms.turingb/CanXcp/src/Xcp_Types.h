/*****************************************************************************
| Project Name:   XCP Protocol Layer
|    File Name:   Xcp_Types.h
|
|  Description:   Implementation of the XCP Protocol Layer XCP Basic V1.25.1
|    
|-----------------------------------------------------------------------------
|                         R E V I S I O N   H I S T O R Y
|-----------------------------------------------------------------------------
|  Date       Version  Author  Description
| ----------  -------  ------  -----------------------------------------------
|03/03/2016  1.0      psubash   Create Basic version xcp_appl.c
|***************************************************************************/

#if !defined ( XCPPROF_TYPES_H )
#define XCPPROF_TYPES_H

#include "ComStack_Types.h"
#include "Xcp.h"


typedef struct
{
  P2FUNC(void, XCP_CODE, ApplXcpSend)( uint8 len, P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) msg );
  P2FUNC(void, XCP_CODE, ApplXcpSendFlush)( uint8 FlushType );
  #if defined ( XCP_ENABLE_TL_COMMAND )
  P2FUNC(uint8, XCP_CODE, ApplXcpTLService)( P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) pCmd );
  #endif
} Xcp_TlApiType;

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif
/* XCPPROF_TYPES_H */

