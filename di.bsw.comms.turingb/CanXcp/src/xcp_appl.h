/* ===========================================================================

                     CONFIDENTIAL VISTEON CORPORATION

  This is an unpublished work of authorship, which contains trade secrets,
  created in 2006.  Visteon Corporation owns all rights to this work and
  intends to maintain it in confidence to preserve its trade secret status.
  Visteon Corporation reserves the right, under the copyright laws of the
  United States or those of any other country that may have jurisdiction, to
  protect this work as an unpublished work, in the event of an inadvertent
  or deliberate unauthorized publication.  Visteon Corporation also reserves
  its rights under all copyright laws to protect this work as a published
  work, when appropriate.  Those having access to this work may not copy it,
  use it, modify it or disclose the information contained in it without the
  written authorization of Visteon Corporation.

 =========================================================================*/

#if !defined ( XCP_APPL_H )
#define XCP_APPL_H


/***************************************************************************/
/* Include                                                                 */
/***************************************************************************/

#include "Xcp.h"

/***************************************************************************/
/* Function Prototype                                                                 */
/***************************************************************************/

#if defined ( MTABYTEPTR )
#else
  #define MTABYTEPTR P2VAR(uint8, AUTOMATIC, XCP_MTA_DATA)
#endif


#if (defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL ) && !defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL )) \
  || defined ( XCP_ENABLE_TYPESAVE_COPY )
  extern FUNC(uint8, XCP_CODE) XcpAppl_MeasurementRead(P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len);
  extern FUNC(uint8, XCP_CODE) XcpAppl_CalibrationWrite(P2VAR(void, AUTOMATIC, XCP_APPL_DATA) dst, P2CONST(void, AUTOMATIC, XCP_APPL_DATA) src, uint8 len);
#endif

 /* DAQ resume */
#if defined ( XCP_ENABLE_DAQ_RESUME )
  extern FUNC(void, XCP_CODE) XcpAppl_DaqResumeStore( P2CONST(tXcpDaq, AUTOMATIC, XCP_APPL_DATA) daq, uint16 size, uint8 measurementStart );
  extern FUNC(void, XCP_CODE) XcpAppl_DaqResumeClear(void);
  extern FUNC(uint8, XCP_CODE) XcpAppl_CalResumeStore(void);
  extern FUNC(uint8, XCP_CODE) XcpAppl_DaqResume( P2VAR(tXcpDaq, AUTOMATIC, XCP_APPL_DATA) daq );
#endif

/* DAQ Timestamp */
#if defined ( XCP_ENABLE_DAQ )
#if defined ( XCP_ENABLE_DAQ_TIMESTAMP )
  #if defined ( XcpAppl_GetTimestamp )
  /* XcpAppl_GetTimestamp is redefined */
  #else
    extern FUNC(XcpDaqTimestampType, XCP_CODE) XcpAppl_GetTimestamp( void );
  #endif
#endif

#if defined ( XCP_ENABLE_DAQ_RUNTIME_SUPERVISION )
  extern FUNC(void, XCP_CODE) XcpAppl_RtsStart(void);
  extern FUNC(uint8, XCP_CODE) XcpAppl_RtsSnapshot(void);
#endif
#endif /* XCP_ENABLE_DAQ */


/* RAM/ROM Switching */
#if defined ( XCP_ENABLE_CALIBRATION_PAGE )

extern FUNC(uint8, XCP_CODE) XcpAppl_GetCalPage( uint8 segment, uint8 mode );
extern FUNC(uint8, XCP_CODE) XcpAppl_SetCalPage( uint8 segment, uint8 page, uint8 mode);

  #if defined ( XCP_ENABLE_PAGE_COPY )
extern FUNC(uint8, XCP_CODE) XcpAppl_CopyCalPage( uint8 srcSeg, uint8 srcPage, uint8 destSeg, uint8 destPage );
/* Returns:
   XCP_CMD_OK    
   XCP_CMD_PENDING - call Xcp_SendCrm when done
   XCP_CMD_ERROR 
*/
  #endif
#endif
#if defined ( XCP_ENABLE_PAGE_FREEZE )
  extern FUNC(void, XCP_CODE) XcpAppl_SetFreezeMode( uint8 segment, uint8 mode );
  extern FUNC(uint8, XCP_CODE) XcpAppl_GetFreezeMode( uint8 segment );
#endif


/* Flash Programming */
#if defined ( XCP_ENABLE_PROGRAM )

extern FUNC(void, XCP_CODE) XcpAppl_Reset( void );

extern FUNC(uint8, XCP_CODE) XcpAppl_ProgramStart( void );
/* Returns:
   XCP_CMD_OK    
   XCP_CMD_PENDING - call Xcp_SendCrm when done
   XCP_CMD_ERROR 
*/

extern FUNC(uint8, XCP_CODE) XcpAppl_FlashClear( MTABYTEPTR address, uint32 size );
/* Returns:
   XCP_CMD_OK    
   XCP_CMD_PENDING - call Xcp_SendCrm when done
   XCP_CMD_ERROR 
*/

extern FUNC(uint8, XCP_CODE) XcpAppl_FlashProgram( ROMBYTEPTR data, MTABYTEPTR address, uint8 size );
/* Returns:
   XCP_CMD_OK      - FLASH written
   XCP_CMD_PENDING - FLASH write in progress, call Xcp_SendCrm when done
*/

#endif /* XCP_ENABLE_PROGRAM */


/* Generate a native pointer from XCP address extension and address */
#if defined ( XcpAppl_GetPointer )
#else
extern FUNC(MTABYTEPTR, XCP_CODE) XcpAppl_GetPointer( uint8 addr_ext, uint32 addr );
#endif


#if defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL )
extern FUNC(uint8, XCP_CODE) XcpAppl_Read( uint32 addr );
extern FUNC(void, XCP_CODE) XcpAppl_Write( uint32 addr, uint8 data );
#endif

#if defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL ) || defined ( XCP_ENABLE_MEM_ACCESS_BY_APPL )
  #if defined ( XCP_ENABLE_CHECKSUM )
     #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
         ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 ) || \
         ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 ) || \
         defined ( XCP_ENABLE_CALIBRATION_MEM_ACCESS_BY_APPL )
extern FUNC(tXcpChecksumAddType, XCP_CODE) XcpAppl_ReadChecksumValue( uint32 addr );
    #endif
  #endif
#endif

/* Calculate checksum for a memory range */
/* Returns 0 (false) if access denied */
/* Used only, if read protection of memory areas is required */
#if defined ( XCP_ENABLE_CHECKSUM ) && defined ( XCP_ENABLE_CUSTOM_CRC )
  #if defined ( XcpAppl_CalculateChecksum ) /* Not defined as macro */
  #else
extern FUNC(uint8, XCP_CODE) XcpAppl_CalculateChecksum( ROMBYTEPTR pMemArea, BYTEPTR pRes, uint32 length );
  #endif
#endif


/* Check addresses for valid write access */
/* Returns 0 (false) if access denied */
/* Used only, if write protection of memory areas is required */
#if defined ( XCP_ENABLE_WRITE_PROTECTION )
  #if defined ( XcpAppl_CheckWriteAccess ) /* Not defined as macro */
  #else
    extern FUNC(uint8, XCP_CODE) XcpAppl_CheckWriteAccess( ROMMTABYTEPTR address, uint8 size );
  #endif
#endif

/* Check addresses for valid read access */
/* Returns 0 (false) if access denied */
/* Used only, if read protection of memory areas is required */
#if defined ( XCP_ENABLE_READ_PROTECTION )
  #if defined ( XcpAppl_CheckReadAccess ) /* Not defined as macro */
  #else
    extern FUNC(uint8, XCP_CODE) XcpAppl_CheckReadAccess( ROMMTABYTEPTR address, uint32 size );
  #endif
#endif

/* Check addresses for valid read/write access */
/* Returns 0 (false) if access denied */
/* Used only, if DAQ protection of memory areas is required */
#if defined ( XCP_ENABLE_DAQ )
  #if defined ( XCP_ENABLE_READ_PROTECTION ) || defined ( XCP_ENABLE_WRITE_PROTECTION )
    extern FUNC(uint8, XCP_CODE) XcpAppl_CheckDAQAccess(DAQBYTEPTR address, uint8 size);
  #endif
#endif

/* Check addresses for valid programming access */
/* Returns 0 (false) if access denied */
/* Used only, if programming protection of memory areas is required */
#if defined ( XCP_ENABLE_PROGRAMMING_WRITE_PROTECTION )
  #if defined ( XcpAppl_CheckProgramAccess ) /* Not defined as macro */
  #else
    extern FUNC(uint8, XCP_CODE) XcpAppl_CheckProgramAccess( MTABYTEPTR address, uint32 size );
  #endif
#endif

/* Flash Programming by Flash Kernel */
#if defined ( XCP_ENABLE_BOOTLOADER_DOWNLOAD )
  extern FUNC(uint8, XCP_CODE) XcpAppl_DisableNormalOperation( MTABYTEPTR a, uint16 size );
  extern FUNC(uint8, XCP_CODE) XcpAppl_StartBootLoader( void );
#endif


/* EEPROM Programing */
#if defined ( XCP_ENABLE_WRITE_EEPROM )
/* Return values for XcpAppl_CheckWriteEEPROM:
 XCP_CMD_OK      - EEPROM written
 XCP_CMD_DENIED  - This is not EEPROM
 XCP_CMD_PENDING - EEPROM write in progress, call Xcp_SendCrm when done
*/
extern FUNC(uint8, XCP_CODE) XcpAppl_CheckWriteEEPROM( MTABYTEPTR addr, uint8 size, ROMBYTEPTR data );
#endif
#if defined ( XCP_ENABLE_READ_EEPROM )
/* Return values for XcpAppl_CheckReadEEPROM:
 XCP_CMD_OK      - EEPROM read
 XCP_CMD_DENIED  - This is not EEPROM
*/
extern FUNC(uint8, XCP_CODE) XcpAppl_CheckReadEEPROM( MTABYTEPTR addr, uint8 size, BYTEPTR data );
#endif


/* Seed & Key */
#if defined ( XCP_ENABLE_SEED_KEY )
  extern FUNC(uint8, XCP_CODE) XcpAppl_GetSeed( const uint8 resource, P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA) seed );
  extern FUNC(uint8, XCP_CODE) XcpAppl_Unlock( P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) key, const uint8 length );
#endif

/* User defined service of GET_ID */
#if defined ( XCP_ENABLE_GET_ID_GENERIC )
  extern FUNC(uint32, XCP_CODE) XcpAppl_GetIdData( MTABYTEPTR *pData, uint8 id );
#endif

/* User defined service */ 
#if defined ( XCP_ENABLE_USER_COMMAND )
/* Return values for XcpAppl_UserService:
 XCP_CMD_OK      - Done
 XCP_CMD_PENDING - Pending, call Xcp_SendCrm when done
 XCP_CMD_SYNTAX  - Error
*/
extern FUNC(uint8, XCP_CODE) XcpAppl_UserService( ROMBYTEPTR pCmd );
#endif

#if defined ( XCP_ENABLE_OPENCMDIF )
/* Return values for XcpAppl_OpenCmdIf:
 XCP_CMD_OK           - Done
 XCP_CMD_PENDING      - Pending, call Xcp_SendCrm when done
 XCP_CMD_UNKNOWN      - not implemented optional command
*/
extern FUNC(uint8, XCP_CODE) XcpAppl_OpenCmdIf( ROMBYTEPTR pCmd, BYTEPTR pRes, BYTEPTR pLength );
#endif


/* Resolve a transmit stall condition in Xcp_Putchar() or Xcp_SendEvent() */
/* Returns true (!=0) if successfull */
#if defined ( XCP_ENABLE_SEND_EVENT ) || defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR )
  #if defined ( XCP_ENABLE_SEND_QUEUE )
    #if defined ( XcpAppl_SendStall )
    #else
      #if defined ( XCP_TRANSPORT_LAYER_TYPE_LIN )
        #define XcpAppl_SendStall()  XcpLinSendStall()
      #else
extern FUNC(uint8, XCP_CODE) XcpAppl_SendStall( void );
      #endif
    #endif
  #endif
#endif

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* ! defined ( XCP_APPL_H ) */
