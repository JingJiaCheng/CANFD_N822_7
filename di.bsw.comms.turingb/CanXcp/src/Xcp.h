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

#if !defined ( __XCP_H_ )
#define __XCP_H_


/***************************************************************************/
/* Include                                                                 */
/***************************************************************************/

/* Includes for XcpProf.c/XcpBasic.c */
    #include "Xcp_Cfg.h"
    #include "Xcp_Lcfg.h"
//	#include "xcp_appl.h"

#if defined (XCP_GEN_GENERATOR_MSR)
#if !defined ( ApplXcpInterruptEnable )
# define ApplXcpInterruptEnable()      SchM_Exit_Xcp_XCP_EXCLUSIVE_AREA_0()
#endif
#if !defined ( ApplXcpInterruptDisable )
# define ApplXcpInterruptDisable()     SchM_Enter_Xcp_XCP_EXCLUSIVE_AREA_0()
#endif
#if !defined ( ApplXcpInterruptEnableDaq )
# define ApplXcpInterruptEnableDaq()   SchM_Exit_Xcp_XCP_EXCLUSIVE_AREA_1()
#endif
#if !defined ( ApplXcpInterruptDisableDaq )
# define ApplXcpInterruptDisableDaq()  SchM_Enter_Xcp_XCP_EXCLUSIVE_AREA_1()
#endif
#if !defined ( ApplXcpInterruptEnableStim )
# define ApplXcpInterruptEnableStim()  SchM_Exit_Xcp_XCP_EXCLUSIVE_AREA_2()
#endif
#if !defined ( ApplXcpInterruptDisableStim )
# define ApplXcpInterruptDisableStim() SchM_Enter_Xcp_XCP_EXCLUSIVE_AREA_2()
#endif
#else
#if !defined ( ApplXcpInterruptEnableDaq )
# define ApplXcpInterruptEnableDaq()   ApplXcpInterruptEnable()
#endif
#if !defined ( ApplXcpInterruptDisableDaq )
# define ApplXcpInterruptDisableDaq()  ApplXcpInterruptDisable()
#endif
#if !defined ( ApplXcpInterruptEnableStim )
# define ApplXcpInterruptEnableStim()  ApplXcpInterruptEnable()
#endif
#if !defined ( ApplXcpInterruptDisableStim )
# define ApplXcpInterruptDisableStim() ApplXcpInterruptDisable()
#endif
#endif

/* Include the Transport Layer for CAN (AUTOSAR CAN Interface) if available. */
#if defined ( XCP_TRANSPORT_LAYER_TYPE_CAN_ASR )
  #include "CanXcp.h"
  #include "CanXcp_Cfg.h"
#endif

/* Include the Transport Layer for FlexRay (AUTOSAR FlexRay Interface) if available. */
#if defined ( XCP_TRANSPORT_LAYER_TYPE_FLEXRAY_ASR )
  #include "FrXcp.h"
#endif

/* Include the Transport Layer for Ethernet if available. */
#if defined ( XCP_TRANSPORT_LAYER_TYPE_TCPIP_ASR )
  #include "TcpIpXcp.h"
#endif

/* Include the Transport Layer for Lin if available. */
#if defined ( XCP_TRANSPORT_LAYER_TYPE_LIN_ASR )
  #include "LinXcp.h"
#endif

/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */

/***************************************************************************/
/* Version                                                                 */
/***************************************************************************/

/* BCD coded version number of XCP module */
/* ##V_CFG_MANAGEMENT ##CQProject : Cp_Xcp CQComponent : Implementation */
#define CP_XCP_VERSION         0x0206u
#define CP_XCP_RELEASE_VERSION 0x00u

/* Version of the XCP Protocol Layer Specification V1.1 */
#if ! defined ( XCP_VERSION )
  #define XCP_VERSION 0x0101
#endif

#define XCP_VENDOR_ID   30u
#define XCP_MODULE_ID   26u


/***************************************************************************/
/* Type definitions                                                        */
/***************************************************************************/
/* Development errors */
#if defined ( XCP_ENABLE_DEV_ERROR_DETECT )
/* Definition of the API ID */
  #define XCP_INIT_SERVICE_ID                   0u
  #define XCP_EVENT_SERVICE_ID                  1u
  #define XCP_STIMEVENTSTATUS_SERVICE_ID        2u
  #define XCP_SENDEVENT_SERVICE_ID              3u
  #define XCP_PUTCHAR_SERVICE_ID                4u
  #define XCP_PRINT_SERVICE_ID                  5u
  #define XCP_DISCONNECT_SERVICE_ID             6u
  #define XCP_SENDCRM_SERVICE_ID                7u
  #define XCP_GETXCPDATAPOINTER_SERVICE_ID      8u
  #define XCP_CONTROL_SERVICE_ID                9u
  #define XCP_GETVERSIONINFO_SERVICE_ID        10u
  #define XCP_COMMAND_SERVICE_ID               11u
  #define XCP_SENDCALLBACK_SERVICE_ID          12u
  #define XCP_EXIT_SERVICE_ID                  13u
  #define XCP_GETSTATE_SERVICE_ID              14u
  #define XCP_SETACTIVETL_SERVICE_ID           15u
  #define XCP_GETACTIVETL_SERVICE_ID           16u
  #define XCP_PRINTF_SERVICE_ID                17u
  #define XCP_PRINTDAQLIST_SERVICE_ID          18u
  #define XCP_EXTENDEDEVENT_SERVICE_ID         19u
  #define XCP_MAINFUNCTION_SERVICE_ID         200u

/* Definition of errors/exceptions */
  #define XCP_E_INV_POINTER                     1u
  #define XCP_E_NOT_INITIALIZED                 2u
  #define XCP_E_INVALID_PDUID                   3u
  #define XCP_E_NULL_POINTER                   18u
  #define XCP_E_WRONG_CONTROL_COMMAND           4u
#endif

/* Types used by appl call-backs */
#define XCP_RESUME_NONE       0x00
#define XCP_RESUME_ACTIVE     0x01


/***************************************************************************/
/* Commands                                                                */
/***************************************************************************/

/*-------------------------------------------------------------------------*/
/* Standard Commands */

#define CC_CONNECT                        0xFF
#define CC_DISCONNECT                     0xFE
#define CC_GET_STATUS                     0xFD
#define CC_SYNC                           0xFC

#define CC_GET_COMM_MODE_INFO             0xFB
#define CC_GET_ID                         0xFA
#define CC_SET_REQUEST                    0xF9
#define CC_GET_SEED                       0xF8
#define CC_UNLOCK                         0xF7
#define CC_SET_MTA                        0xF6
#define CC_UPLOAD                         0xF5
#define CC_SHORT_UPLOAD                   0xF4
#define CC_BUILD_CHECKSUM                 0xF3
                                          
#define CC_TRANSPORT_LAYER_CMD            0xF2
#define CC_USER_CMD                       0xF1


/*-------------------------------------------------------------------------*/
/* Calibration Commands*/

#define CC_DOWNLOAD                       0xF0

#define CC_DOWNLOAD_NEXT                  0xEF
#define CC_DOWNLOAD_MAX                   0xEE
#define CC_SHORT_DOWNLOAD                 0xED
#define CC_MODIFY_BITS                    0xEC


/*-------------------------------------------------------------------------*/
/* Page switching Commands (PAG) */

#define CC_SET_CAL_PAGE                   0xEB
#define CC_GET_CAL_PAGE                   0xEA

#define CC_GET_PAG_PROCESSOR_INFO         0xE9
#define CC_GET_SEGMENT_INFO               0xE8
#define CC_GET_PAGE_INFO                  0xE7
#define CC_SET_SEGMENT_MODE               0xE6
#define CC_GET_SEGMENT_MODE               0xE5
#define CC_COPY_CAL_PAGE                  0xE4


/*-------------------------------------------------------------------------*/
/* DATA Acquisition and Stimulation Commands (DAQ/STIM) */
                                          
#define CC_CLEAR_DAQ_LIST                 0xE3
#define CC_SET_DAQ_PTR                    0xE2
#define CC_WRITE_DAQ                      0xE1
#define CC_SET_DAQ_LIST_MODE              0xE0
#define CC_GET_DAQ_LIST_MODE              0xDF
#define CC_START_STOP_DAQ_LIST            0xDE
#define CC_START_STOP_SYNCH               0xDD

#define CC_GET_DAQ_CLOCK                  0xDC
#define CC_READ_DAQ                       0xDB
#define CC_GET_DAQ_PROCESSOR_INFO         0xDA
#define CC_GET_DAQ_RESOLUTION_INFO        0xD9 
#define CC_GET_DAQ_LIST_INFO              0xD8
#define CC_GET_DAQ_EVENT_INFO             0xD7

#define CC_FREE_DAQ                       0xD6
#define CC_ALLOC_DAQ                      0xD5
#define CC_ALLOC_ODT                      0xD4
#define CC_ALLOC_ODT_ENTRY                0xD3


/*-------------------------------------------------------------------------*/
/* Non volatile memory Programming Commands PGM */

#define CC_PROGRAM_START                  0xD2
#define CC_PROGRAM_CLEAR                  0xD1
#define CC_PROGRAM                        0xD0
#define CC_PROGRAM_RESET                  0xCF

#define CC_GET_PGM_PROCESSOR_INFO         0xCE
#define CC_GET_SECTOR_INFO                0xCD
#define CC_PROGRAM_PREPARE                0xCC
#define CC_PROGRAM_FORMAT                 0xCB 
#define CC_PROGRAM_NEXT                   0xCA
#define CC_PROGRAM_MAX                    0xC9
#define CC_PROGRAM_VERIFY                 0xC8


/*-------------------------------------------------------------------------*/
/* Customer specific commands */

#define CC_WRITE_DAQ_MULTIPLE             0xC7


/*-------------------------------------------------------------------------*/
/* Packet Identifiers Slave -> Master */
#define PID_RES                           0xFF   /* response packet        */
#define PID_ERR                           0xFE   /* error packet           */
#define PID_EV                            0xFD   /* event packet           */
#define PID_SERV                          0xFC   /* service request packet */


/*-------------------------------------------------------------------------*/
/* Command Return Codes */

#define CRC_CMD_SYNCH           0x00

#define CRC_CMD_BUSY            0x10
#define CRC_DAQ_ACTIVE          0x11
#define CRC_PRM_ACTIVE          0x12

#define CRC_CMD_UNKNOWN         0x20
#define CRC_CMD_SYNTAX          0x21
#define CRC_OUT_OF_RANGE        0x22
#define CRC_WRITE_PROTECTED     0x23
#define CRC_ACCESS_DENIED       0x24
#define CRC_ACCESS_LOCKED       0x25
#define CRC_PAGE_NOT_VALID      0x26
#define CRC_PAGE_MODE_NOT_VALID 0x27
#define CRC_SEGMENT_NOT_VALID   0x28
#define CRC_SEQUENCE            0x29
#define CRC_DAQ_CONDIF          0x2A

#define CRC_MEMORY_OVERFLOW     0x30
#define CRC_GENERIC             0x31
#define CRC_VERIFY              0x32
#define CRC_RESOURCE_TEMP_NOT_ACCESSIBLE 0x33


/*-------------------------------------------------------------------------*/
/* Event Codes */

#define EVC_RESUME_MODE        0x00
#define EVC_CLEAR_DAQ          0x01
#define EVC_STORE_DAQ          0x02
#define EVC_STORE_CAL          0x03
#define EVC_CMD_PENDING        0x05
#define EVC_DAQ_OVERLOAD       0x06
#define EVC_SESSION_TERMINATED 0x07
#define EVC_TIME_SYNC          0x08
#define EVC_STIM_TIMEOUT       0x09
#define EVC_SLEEP              0x0A
#define EVC_WAKE_UP            0x0B
#define EVC_USER               0xFE
#define EVC_TRANSPORT          0xFF


/*-------------------------------------------------------------------------*/
/* Service Request Codes */ 

#define SERV_RESET 0x00 /* Slave requesting to be reset */
#define SERV_TEXT  0x01 /* Plain ASCII text null terminated */


/*-------------------------------------------------------------------------*/
/* Flush Types */

#define XCP_FLUSH_CTO   0u
#define XCP_FLUSH_DTO   1u
#define XCP_FLUSH_ALL   2u


/***************************************************************************/
/* Definitions                                                             */
/***************************************************************************/

/*-------------------------------------------------------------------------*/
/* ResourceMask (CONNECT) */

#define RM_CAL_PAG                  0x01
#define RM_DAQ                      0x04
#define RM_STIM                     0x08
#define RM_PGM                      0x10


/*-------------------------------------------------------------------------*/
/* CommModeBasic (CONNECT) */

#define PI_MOTOROLA                   0x01

#define CMB_BYTE_ORDER                (0x01u<<0)
#define CMB_ADDRESS_GRANULARITY       (0x03u<<1)
#define CMB_SLAVE_BLOCK_MODE          (0x01u<<6)
#define CMB_OPTIONAL                  (0x01u<<7)

#define CMB_ADDRESS_GRANULARITY_BYTE  (0<<1)
#define CMB_ADDRESS_GRANULARITY_WORD  (1<<1)
#define CMB_ADDRESS_GRANULARITY_DWORD (2<<1)
#define CMB_ADDRESS_GRANULARITY_QWORD (3<<1)


/*-------------------------------------------------------------------------*/
/* Protocol Info (GET_COMM_MODE_INFO - COMM_OPTIONAL) */

#define CMO_MASTER_BLOCK_MODE  0x01
#define CMO_INTERLEAVED_MODE   0x02   


/*-------------------------------------------------------------------------*/
/* Session Status (GET_STATUS and SET_REQUEST) */

#define SS_STORE_CAL_REQ       0x0001u 
#define SS_BLOCK_UPLOAD        0x0002u /* Internal */
#define SS_STORE_DAQ_REQ_NO_RESUME 0x0002u /* Internal */
#define SS_STORE_DAQ_REQ       0x0004u
#define SS_CLEAR_DAQ_REQ       0x0008u
#define SS_ERROR               0x0010u /* Internal */
#define SS_CONNECTED           0x0020u /* Internal */
#define SS_DAQ                 0x0040u
#define SS_RESUME              0x0080u
#define SS_POLLING             0x0100u /* Internal */
#define SS_STORE_DAQ_REQ_NO_RESUME_INTERNAL 0x0200u /* Internal */


/*-------------------------------------------------------------------------*/
/* Identifier Type (GET_ID) */

#define IDT_ASCII              0
#define IDT_ASAM_NAME          1
#define IDT_ASAM_PATH          2
#define IDT_ASAM_URL           3
#define IDT_ASAM_UPLOAD        4
#define IDT_VECTOR_MAPNAMES    0xDB
#define IDT_VECTOR_INFOMEM     0xDC
#define IDT_VECTOR_GENMEAS     0xA2

/*-------------------------------------------------------------------------*/
/* Checksum Types (BUILD_CHECKSUM) */

#define XCP_CHECKSUM_TYPE_ADD11      0x01  /* Add BYTE into a BYTE checksum, ignore overflows */
#define XCP_CHECKSUM_TYPE_ADD12      0x02  /* Add BYTE into a WORD checksum, ignore overflows */
#define XCP_CHECKSUM_TYPE_ADD14      0x03  /* Add BYTE into a DWORD checksum, ignore overflows */
#define XCP_CHECKSUM_TYPE_ADD22      0x04  /* Add WORD into a WORD checksum, ignore overflows, blocksize must be modulo 2 */
#define XCP_CHECKSUM_TYPE_ADD24      0x05  /* Add WORD into a DWORD checksum, ignore overflows, blocksize must be modulo 2 */ 
#define XCP_CHECKSUM_TYPE_ADD44      0x06  /* Add DWORD into DWORD, ignore overflows, blocksize must be modulo 4 */
#define XCP_CHECKSUM_TYPE_CRC16      0x07  /* See CRC error detection algorithms */
#define XCP_CHECKSUM_TYPE_CRC16CCITT 0x08  /* See CRC error detection algorithms */
#define XCP_CHECKSUM_TYPE_CRC32      0x09  /* See CRC error detection algorithms */
#define XCP_CHECKSUM_TYPE_DLL        0xFF  /* User defined, ASAM MCD 2MC DLL Interface */


/*-------------------------------------------------------------------------*/
/* Page Mode (SET_CAL_PAGE) */

#define CAL_ECU                0x01
#define CAL_XCP                0x02
#define CAL_ALL                0x80        /* not supported */


/*-------------------------------------------------------------------------*/
/* PAG_PROPERTIES (GET_PAG_PROCESSOR_INFO) */

#define PAG_PROPERTY_FREEZE               0x01


/*-------------------------------------------------------------------------*/
/* PAGE_PROPERTIES (GET_PAGE_INFO)*/

#define ECU_ACCESS_TYPE                   0x03
#define XCP_READ_ACCESS_TYPE              0x0C
#define XCP_WRITE_ACCESS_TYPE             0x30

/* ECU_ACCESS_TYPE */
#define ECU_ACCESS_NONE                   (0<<0)
#define ECU_ACCESS_WITHOUT                (1<<0)
#define ECU_ACCESS_WITH                   (2<<0)
#define ECU_ACCESS_DONT_CARE              (3<<0)

/* XCP_READ_ACCESS_TYPE */
#define XCP_READ_ACCESS_NONE              (0<<2)
#define XCP_READ_ACCESS_WITHOUT           (1<<2)
#define XCP_READ_ACCESS_WITH              (2<<2)
#define XCP_READ_ACCESS_DONT_CARE         (3<<2)

/* XCP_WRITE_ACCESS_TYPE */
#define XCP_WRITE_ACCESS_NONE             (0<<4)
#define XCP_WRITE_ACCESS_WITHOUT          (1<<4)
#define XCP_WRITE_ACCESS_WITH             (2<<4)
#define XCP_WRITE_ACCESS_DONT_CARE        (3<<4)


/*-------------------------------------------------------------------------*/
/* SEGMENT_MODE (GET_SEGMENT_MODE, SET_SEGMENT_MODE) */

#define SEGMENT_FLAG_FREEZE               0x01 /* */


/*-------------------------------------------------------------------------*/
/* DAQ_LIST_MODE (GET_DAQ_LIST_MODE, SET_DAQ_LIST_MODE) */

#define DAQ_FLAG_SELECTED                 0x01u /* */
#define DAQ_FLAG_DIRECTION                0x02u /* Data Stimulation Mode */

#define DAQ_FLAG_TIMESTAMP                0x10u /* Timestamps */
#define DAQ_FLAG_NO_PID                   0x20u /* No PID */
#define DAQ_FLAG_RUNNING                  0x40u /* Is started */
#define DAQ_FLAG_RESUME                   0x80u /* Resume Mode */

#define DAQ_FLAG_RESERVED                 0x08u 
#define DAQ_FLAG_OVERRUN                  0x08u /* Overun (Internal Use) */


/*-------------------------------------------------------------------------*/
/* GET_DAQ_PROCESSOR_INFO */

/* DAQ_PROPERTIES */
#define DAQ_PROPERTY_CONFIG_TYPE          0x01
#define DAQ_PROPERTY_PRESCALER            0x02
#define DAQ_PROPERTY_RESUME               0x04
#define DAQ_PROPERTY_BIT_STIM             0x08
#define DAQ_PROPERTY_TIMESTAMP            0x10
#define DAQ_PROPERTY_NO_PID               0x20
#define DAQ_PROPERTY_OVERLOAD_INDICATION  0xC0

/* DAQ Overload Indication Type */
#define DAQ_OVERLOAD_INDICATION_NONE      (0<<6)
#define DAQ_OVERLOAD_INDICATION_PID       (1<<6)
#define DAQ_OVERLOAD_INDICATION_EVENT     (2<<6)

/* DAQ_KEY_BYTE */
#define DAQ_OPT_TYPE                      0x0F
#define DAQ_EXT_TYPE                      0x30
#define DAQ_HDR_TYPE                      0xC0

/* DAQ Optimisation Type */
#define DAQ_OPT_DEFAULT                   (0<<0)
#define DAQ_OPT_ODT_16                    (1<<0)
#define DAQ_OPT_ODT_32                    (2<<0)
#define DAQ_OPT_ODT_64                    (3<<0)
#define DAQ_OPT_ALIGNMENT                 (4<<0)
#define DAQ_OPT_MAX_ENTRY_SIZE            (5<<0)

/* DAQ Address Extension Scope */
#define DAQ_EXT_FREE                      (0<<4)
#define DAQ_EXT_ODT                       (1<<4)
#define DAQ_EXT_DAQ                       (3<<4)

/* DAQ Identification Field Type */
#define DAQ_HDR_PID                       (0<<6)
#define DAQ_HDR_ODT_DAQB                  (1<<6)
#define DAQ_HDR_ODT_DAQW                  (2<<6)
#define DAQ_HDR_ODT_FIL_DAQW              (3<<6)
 

/*-------------------------------------------------------------------------*/
/* GET_DAQ_RESOLUTION_INFO */

/* TIMESTAMP_MODE */
#define DAQ_TIMESTAMP_SIZE  0x07
#define DAQ_TIMESTAMP_FIXED 0x08
#define DAQ_TIMESTAMP_UNIT  0xF0

/* DAQ Timestamp Size */
#define DAQ_TIMESTAMP_OFF         (0<<0)
#define DAQ_TIMESTAMP_BYTE        (1<<0)
#define DAQ_TIMESTAMP_WORD        (2<<0)
#define DAQ_TIMESTAMP_DWORD       (4<<0)

/* DAQ Timestamp Unit */
#define DAQ_TIMESTAMP_UNIT_1NS    (0<<4)
#define DAQ_TIMESTAMP_UNIT_10NS   (1<<4)
#define DAQ_TIMESTAMP_UNIT_100NS  (2<<4)
#define DAQ_TIMESTAMP_UNIT_1US    (3<<4)
#define DAQ_TIMESTAMP_UNIT_10US   (4<<4)
#define DAQ_TIMESTAMP_UNIT_100US  (5<<4)
#define DAQ_TIMESTAMP_UNIT_1MS    (6<<4)
#define DAQ_TIMESTAMP_UNIT_10MS   (7<<4)
#define DAQ_TIMESTAMP_UNIT_100MS  (8<<4)
#define DAQ_TIMESTAMP_UNIT_1S     (9<<4)
#define DAQ_TIMESTAMP_UNIT_1PS    (10<<4)
#define DAQ_TIMESTAMP_UNIT_10PS   (11<<4)
#define DAQ_TIMESTAMP_UNIT_100PS  (12<<4)


/*-------------------------------------------------------------------------*/
/* DAQ_LIST_PROPERTIES (GET_DAQ_LIST_INFO) */

#define DAQ_LIST_PREDEFINED           0x01
#define DAQ_LIST_FIXED_EVENT          0x02
#define DAQ_LIST_DIR_DAQ              0x04
#define DAQ_LIST_DIR_STIM             0x08


/*-------------------------------------------------------------------------*/
/* EVENT_PROPERTY (GET_DAQ_EVENT_INFO) */

#define DAQ_EVENT_DIRECTION_DAQ      0x04
#define DAQ_EVENT_DIRECTION_STIM     0x08
#define DAQ_EVENT_DIRECTION_DAQ_STIM 0x0C
#define DAQ_EVENT_CONSISTENCY_DAQ    0x40
#define DAQ_EVENT_CONSISTENCY_EVENT  0x80


/*-------------------------------------------------------------------------*/
/* Comm mode programming parameter (PROGRAM_START) */

#define PI_PGM_BLOCK_DOWNLOAD      0x01
#define PI_PGM_BLOCK_UPLOAD        0x40   


/*-------------------------------------------------------------------------*/
/* PGM_PROPERTIES (GET_PGM_PROCESSOR_INFO) */

#define PGM_ACCESS_TYPE                   0x03
#define PGM_COMPRESSION_TYPE              0x0C
#define PGM_ENCRYPTION_TYPE               0x30
#define PGM_NON_SEQ_TYPE                  0xC0

/* PGM Access Mode */
#define PGM_ACCESS_ABSOLUTE               (1<<0)
#define PGM_ACCESS_FUNCTIONAL             (2<<0)
#define PGM_ACCESS_FREE                   (3<<0)

/* PGM Compression type */
#define PGM_COMPRESSION_NONE              (0<<2)
#define PGM_COMPRESSION_SUPPORTED         (1<<2)
#define PGM_COMPRESSION_REQUIRED          (3<<2)

/* PGM Encryption type */
#define PGM_ENCRYPTION_NONE               (0<<4)
#define PGM_ENCRYPTION_SUPPORTED          (1<<4)
#define PGM_ENCRYPTION_REQUIRED           (3<<4)

/* PGM non sequential programming type */
#define PGM_NON_SEQ_NONE                  (0<<6)
#define PGM_NON_SEQ_SUPPORTED             (1<<6)
#define PGM_NON_SEQ_REQUIRED              (3<<6)


/***************************************************************************/
/* XCP Commands and Responces, Type Definition */
/***************************************************************************/

/* Protocol command structure definition */
#define CRO_CMD                                         CRO_BYTE(0)
#define CRM_CMD                                         CRM_BYTE(0)
#define CRM_ERR                                         CRM_BYTE(1)
/* CONNECT */

#define CRO_CONNECT_LEN                                 2
#define CRO_CONNECT_MODE                                CRO_BYTE(1)
#define CRM_CONNECT_LEN                                 8
#define CRM_CONNECT_RESOURCE                            CRM_BYTE(1)
#define CRM_CONNECT_COMM_BASIC                          CRM_BYTE(2)
#define CRM_CONNECT_MAX_CTO_SIZE                        CRM_BYTE(3)
#define CRM_CONNECT_MAX_DTO_SIZE                        CRM_WORD(2)
#define CRM_CONNECT_PROTOCOL_VERSION                    CRM_BYTE(6)
#define CRM_CONNECT_TRANSPORT_VERSION                   CRM_BYTE(7)


/* DISCONNECT */
                                        
#define CRO_DISCONNECT_LEN                              1
#define CRM_DISCONNECT_LEN                              1


/* GET_STATUS */                                        

#define CRO_GET_STATUS_LEN                              1

#define CRM_GET_STATUS_LEN                              6
#define CRM_GET_STATUS_STATUS                           CRM_BYTE(1)
#define CRM_GET_STATUS_PROTECTION                       CRM_BYTE(2)
#define CRM_GET_STATUS_CONFIG_ID                        CRM_WORD(2)


/* SYNCH */
                                        
#define CRO_SYNCH_LEN                                   1

#define CRM_SYNCH_LEN                                   2
#define CRM_SYNCH_RESULT                                CRM_BYTE(1)
                                                 
                                                       
/* GET_COMM_MODE_INFO */

#define CRO_GET_COMM_MODE_INFO_LEN                      1

#define CRM_GET_COMM_MODE_INFO_LEN                      8
#define CRM_GET_COMM_MODE_INFO_COMM_OPTIONAL            CRM_BYTE(2)
#define CRM_GET_COMM_MODE_INFO_MAX_BS                   CRM_BYTE(4)
#define CRM_GET_COMM_MODE_INFO_MIN_ST                   CRM_BYTE(5)
#define CRM_GET_COMM_MODE_INFO_QUEUE_SIZE               CRM_BYTE(6)
#define CRM_GET_COMM_MODE_INFO_DRIVER_VERSION           CRM_BYTE(7)


/* GET_ID */
                                            
#define CRO_GET_ID_LEN                                  2
#define CRO_GET_ID_TYPE                                 CRO_BYTE(1)

#define CRM_GET_ID_LEN                                  8
#define CRM_GET_ID_MODE                                 CRM_BYTE(1)
#define CRM_GET_ID_LENGTH                               CRM_DWORD(1)
#define CRM_GET_ID_DATA                                 (&CRM_BYTE(8))

/* SET_REQUEST */

#define CRO_SET_REQUEST_LEN                             4
#define CRO_SET_REQUEST_MODE                            CRO_BYTE(1)
#define CRO_SET_REQUEST_CONFIG_ID                       CRO_WORD(1)

#define CRM_SET_REQUEST_LEN                             1

                                                        
/* GET_SEED */
                                          
#define CRO_GET_SEED_LEN                                3
#define CRO_GET_SEED_MODE                               CRO_BYTE(1)
#define CRO_GET_SEED_RESOURCE                           CRO_BYTE(2)

#define CRM_GET_SEED_LEN                                (CRM_GET_SEED_LENGTH+2u)
#define CRM_GET_SEED_LENGTH                             CRM_BYTE(1)
#define CRM_GET_SEED_DATA                               (&CRM_BYTE(2))

                                                        
/* UNLOCK */
                                            
#define CRO_UNLOCK_LEN                                  8
#define CRO_UNLOCK_LENGTH                               CRO_BYTE(1)
#define CRO_UNLOCK_KEY                                  (&CRO_BYTE(2))

#define CRM_UNLOCK_LEN                                  2
#define CRM_UNLOCK_PROTECTION                           CRM_BYTE(1)

                                                        
/* SET_MTA */

#define CRO_SET_MTA_LEN                                 8
#define CRO_SET_MTA_EXT                                 CRO_BYTE(3)
#define CRO_SET_MTA_ADDR                                CRO_DWORD(1)

#define CRM_SET_MTA_LEN                                 1


/* UPLOAD */

#define CRM_UPLOAD_MAX_SIZE                             ((uint8)(xcp.Daq.xcpMaxCTO-1))
#define CRO_UPLOAD_LEN                                  2
#define CRO_UPLOAD_SIZE                                 CRO_BYTE(1)

#define CRM_UPLOAD_LEN                                  1 /* +CRO_UPLOAD_SIZE */
#define CRM_UPLOAD_DATA                                 (&CRM_BYTE(1))


/* SHORT_UPLOAD */

#define CRO_SHORT_UPLOAD_LEN                            8
#define CRO_SHORT_UPLOAD_SIZE                           CRO_BYTE(1)
#define CRO_SHORT_UPLOAD_EXT                            CRO_BYTE(3)
#define CRO_SHORT_UPLOAD_ADDR                           CRO_DWORD(1)

#define CRM_SHORT_UPLOAD_MAX_SIZE                       ((uint8)(xcp.Daq.xcpMaxCTO-1))

#define CRM_SHORT_UPLOAD_LEN                            1 /* +CRO_SHORT_UPLOAD_SIZE */
#define CRM_SHORT_UPLOAD_DATA                           (&CRM_BYTE(1))


/* BUILD_CHECKSUM */

#define CRO_BUILD_CHECKSUM_LEN                          8
#define CRO_BUILD_CHECKSUM_SIZE                         CRO_DWORD(1)

#define CRM_BUILD_CHECKSUM_LEN                          8
#define CRM_BUILD_CHECKSUM_TYPE                         CRM_BYTE(1)
#define CRM_BUILD_CHECKSUM_RESULT                       CRM_DWORD(1)

       
/* DOWNLOAD */
                                            
#define CRO_DOWNLOAD_MAX_SIZE                           ((uint8)((xcp.Daq.xcpMaxCTO-2)))

#define CRO_DOWNLOAD_LEN                                2 /* + CRO_DOWNLOAD_SIZE */
#define CRO_DOWNLOAD_SIZE                               CRO_BYTE(1)
#define CRO_DOWNLOAD_DATA                               (&CRO_BYTE(2))

#define CRM_DOWNLOAD_LEN                                1


/* DOWNLOAD_NEXT */
                                            
#define CRO_DOWNLOAD_NEXT_MAX_SIZE                      ((uint8)((xcp.Daq.xcpMaxCTO-2)))

#define CRO_DOWNLOAD_NEXT_LEN                           2 /* + size */
#define CRO_DOWNLOAD_NEXT_SIZE                          CRO_BYTE(1)
#define CRO_DOWNLOAD_NEXT_DATA                          (&CRO_BYTE(2))

#define CRM_DOWNLOAD_NEXT_LEN                           1

                                                        
/* DOWNLOAD_MAX */

#define CRO_DOWNLOAD_MAX_MAX_SIZE                       ((uint8)(xcp.Daq.xcpMaxCTO-1))

#define CRO_DOWNLOAD_MAX_DATA                           (&CRO_BYTE(1))

#define CRM_DOWNLOAD_MAX_LEN                            1


/* SHORT_DOWNLOAD */

#define CRO_SHORT_DOWNLOAD_LEN                          8
#define CRO_SHORT_DOWNLOAD_SIZE                         CRO_BYTE(1)
#define CRO_SHORT_DOWNLOAD_EXT                          CRO_BYTE(3)
#define CRO_SHORT_DOWNLOAD_ADDR                         CRO_DWORD(1)
#define CRO_SHORT_DOWNLOAD_DATA                         (&CRO_BYTE(8))

#define CRM_SHORT_DOWNLOAD_MAX_SIZE                     ((uint8)((xcp.Daq.xcpMaxCTO-8)))
#define CRM_SHORT_DOWNLOAD_LEN                          1 /* +CRO_SHORT_UPLOAD_SIZE */

                                                        
/* MODIFY_BITS */

#define CRO_MODIFY_BITS_LEN                             6
#define CRO_MODIFY_BITS_SHIFT                           CRO_BYTE(1)
#define CRO_MODIFY_BITS_AND                             CRO_WORD(1)
#define CRO_MODIFY_BITS_XOR                             CRO_WORD(2)

#define CRM_MODIFY_BITS_LEN                             1

                                                        
/* SET_CAL_PAGE */
                                      
#define CRO_SET_CAL_PAGE_LEN                            4
#define CRO_SET_CAL_PAGE_MODE                           CRO_BYTE(1)
#define CRO_SET_CAL_PAGE_SEGMENT                        CRO_BYTE(2)
#define CRO_SET_CAL_PAGE_PAGE                           CRO_BYTE(3)

#define CRM_SET_CAL_PAGE_LEN                            1

                                                        
/* GET_CAL_PAGE */
                                      
#define CRO_GET_CAL_PAGE_LEN                            3
#define CRO_GET_CAL_PAGE_MODE                           CRO_BYTE(1)
#define CRO_GET_CAL_PAGE_SEGMENT                        CRO_BYTE(2)

#define CRM_GET_CAL_PAGE_LEN                            4
#define CRM_GET_CAL_PAGE_PAGE                           CRM_BYTE(3)


/* GET_PAG_PROCESSOR_INFO */

#define CRO_GET_PAG_PROCESSOR_INFO_LEN                  1

#define CRM_GET_PAG_PROCESSOR_INFO_LEN                  3
#define CRM_GET_PAG_PROCESSOR_INFO_MAX_SEGMENT          CRM_BYTE(1)
#define CRM_GET_PAG_PROCESSOR_INFO_PROPERTIES           CRM_BYTE(2)


/* GET_SEGMENT_INFO */

#define CRO_GET_SEGMENT_INFO_LEN                        5
#define CRO_GET_SEGMENT_INFO_MODE                       CRO_BYTE(1)
#define CRO_GET_SEGMENT_INFO_NUMBER                     CRO_BYTE(2)
#define CRO_GET_SEGMENT_INFO_MAPPING_INDEX              CRO_BYTE(3)
#define CRO_GET_SEGMENT_INFO_MAPPING                    CRO_BYTE(4)

#define CRM_GET_SEGMENT_INFO_LEN                        8
#define CRM_GET_SEGMENT_INFO_MAX_PAGES                  CRM_BYTE(1)
#define CRM_GET_SEGMENT_INFO_ADDRESS_EXTENSION          CRM_BYTE(2)
#define CRM_GET_SEGMENT_INFO_MAX_MAPPING                CRM_BYTE(3)
#define CRM_GET_SEGMENT_INFO_COMPRESSION                CRM_BYTE(4)
#define CRM_GET_SEGMENT_INFO_ENCRYPTION                 CRM_BYTE(5)
#define CRM_GET_SEGMENT_INFO_MAPPING_INFO               CRM_DWORD(1)


/* GET_PAGE_INFO */

#define CRO_GET_PAGE_INFO_LEN                           4
#define CRO_GET_PAGE_INFO_SEGMENT_NUMBER                CRO_BYTE(2)
#define CRO_GET_PAGE_INFO_PAGE_NUMBER                   CRO_BYTE(3)

#define CRM_GET_PAGE_INFO_LEN                           3
#define CRM_GET_PAGE_INFO_PROPERTIES                    CRM_BYTE(1)
#define CRM_GET_PAGE_INFO_INIT_SEGMENT                  CRM_BYTE(2)


/* SET_SEGMENT_MODE */

#define CRO_SET_SEGMENT_MODE_LEN                        3
#define CRO_SET_SEGMENT_MODE_MODE                       CRO_BYTE(1)
#define CRO_SET_SEGMENT_MODE_SEGMENT                    CRO_BYTE(2)

#define CRM_SET_SEGMENT_MODE_LEN                        1


/* GET_SEGMENT_MODE */

#define CRO_GET_SEGMENT_MODE_LEN                        3
#define CRO_GET_SEGMENT_MODE_SEGMENT                    CRO_BYTE(2)

#define CRM_GET_SEGMENT_MODE_LEN                        3
#define CRM_GET_SEGMENT_MODE_MODE                       CRM_BYTE(2)


/* COPY_CAL_PAGE */

#define CRO_COPY_CAL_PAGE_LEN                           5
#define CRO_COPY_CAL_PAGE_SRC_SEGMENT                   CRO_BYTE(1)
#define CRO_COPY_CAL_PAGE_SRC_PAGE                      CRO_BYTE(2)
#define CRO_COPY_CAL_PAGE_DEST_SEGMENT                  CRO_BYTE(3)
#define CRO_COPY_CAL_PAGE_DEST_PAGE                     CRO_BYTE(4)

#define CRM_COPY_CAL_PAGE_LEN                           1


/* CLEAR_DAQ_LIST */

#define CRO_CLEAR_DAQ_LIST_LEN                          4
#define CRO_CLEAR_DAQ_LIST_DAQ                          CRO_WORD(1)

#define CRM_CLEAR_DAQ_LIST_LEN                          1

                                                        
/* SET_DAQ_PTR */

#define CRO_SET_DAQ_PTR_LEN                             6
#define CRO_SET_DAQ_PTR_DAQ                             CRO_WORD(1)
#define CRO_SET_DAQ_PTR_ODT                             CRO_BYTE(4)
#define CRO_SET_DAQ_PTR_IDX                             CRO_BYTE(5)

#define CRM_SET_DAQ_PTR_LEN                             1


/* WRITE_DAQ */

#define CRO_WRITE_DAQ_LEN                               8
#define CRO_WRITE_DAQ_BITOFFSET                         CRO_BYTE(1)
#define CRO_WRITE_DAQ_SIZE                              CRO_BYTE(2)
#define CRO_WRITE_DAQ_EXT                               CRO_BYTE(3)
#define CRO_WRITE_DAQ_ADDR                              CRO_DWORD(1)

#define CRM_WRITE_DAQ_LEN                               1


/* WRITE_DAQ_MULTIPLE */
#define CRO_WRITE_DAQ_MULTIPLE_LEN                      8
#define CRO_WRITE_DAQ_MULTIPLE_COMMAND                  CRO_BYTE(0)
#define CRO_WRITE_DAQ_MULTIPLE_NODAQ                    CRO_BYTE(1)
#define CRO_WRITE_DAQ_MULTIPLE_BITOFFSET(i)             CRO_BYTE(2 + (8*(i))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRO_WRITE_DAQ_MULTIPLE_SIZE(i)                  CRO_BYTE(3 + (8*(i))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRO_WRITE_DAQ_MULTIPLE_EXT(i)                   CRO_BYTE(8 + (8*(i))) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRO_WRITE_DAQ_MULTIPLE_ADDR(i)                  CRO_DWORD(1 + (2*(i))) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#define CRM_WRITE_DAQ_MULTIPLE_LEN                      1


/* SET_DAQ_LIST_MODE */

#define CRO_SET_DAQ_LIST_MODE_LEN                       8
#define CRO_SET_DAQ_LIST_MODE_MODE                      CRO_BYTE(1)
#define CRO_SET_DAQ_LIST_MODE_DAQ                       CRO_WORD(1)
#define CRO_SET_DAQ_LIST_MODE_EVENTCHANNEL              CRO_WORD(2)
#define CRO_SET_DAQ_LIST_MODE_PRESCALER                 CRO_BYTE(6)
#define CRO_SET_DAQ_LIST_MODE_PRIORITY                  CRO_BYTE(7)

#define CRM_SET_DAQ_LIST_MODE_LEN                       6


/* GET_DAQ_LIST_MODE */

#define CRO_GET_DAQ_LIST_MODE_LEN                       4
#define CRO_GET_DAQ_LIST_MODE_DAQ                       CRO_WORD(1)

#define CRM_GET_DAQ_LIST_MODE_LEN                       8
#define CRM_GET_DAQ_LIST_MODE_MODE                      CRM_BYTE(1)
#define CRM_GET_DAQ_LIST_MODE_EVENTCHANNEL              CRM_WORD(2)
#define CRM_GET_DAQ_LIST_MODE_PRESCALER                 CRM_BYTE(6)
#define CRM_GET_DAQ_LIST_MODE_PRIORITY                  CRM_BYTE(7)


/* START_STOP_DAQ_LIST */
                                        
#define CRO_START_STOP_LEN                              4
#define CRO_START_STOP_MODE                             CRO_BYTE(1)
#define CRO_START_STOP_DAQ                              CRO_WORD(1)

#define CRM_START_STOP_LEN                              2
#define CRM_START_STOP_FIRST_PID                        CRM_BYTE(1)


/* START_STOP_SYNCH */
  
#define CRO_START_STOP_SYNC_LEN                         2
#define CRO_START_STOP_SYNC_MODE                        CRO_BYTE(1)

#define CRM_START_STOP_SYNC_LEN                         1


/* GET_DAQ_CLOCK */

#define CRO_GET_DAQ_CLOCK_LEN                           1

#define CRM_GET_DAQ_CLOCK_LEN                           8
#define CRM_GET_DAQ_CLOCK_TIME                          CRM_DWORD(1)


/* READ_DAQ */

#define CRO_READ_DAQ_LEN                                1

#define CRM_READ_DAQ_LEN                                8
#define CRM_READ_DAQ_BITOFFSET                          CRM_BYTE(1)
#define CRM_READ_DAQ_SIZE                               CRM_BYTE(2)
#define CRM_READ_DAQ_EXT                                CRM_BYTE(3)
#define CRM_READ_DAQ_ADDR                               CRM_DWORD(1)


/* GET_DAQ_PROCESSOR_INFO */

#define CRO_GET_DAQ_PROCESSOR_INFO_LEN                  1

#define CRM_GET_DAQ_PROCESSOR_INFO_LEN                  8
#define CRM_GET_DAQ_PROCESSOR_INFO_PROPERTIES           CRM_BYTE(1)
#define CRM_GET_DAQ_PROCESSOR_INFO_MAX_DAQ              CRM_WORD(1)
#define CRM_GET_DAQ_PROCESSOR_INFO_MAX_EVENT            CRM_WORD(2)
#define CRM_GET_DAQ_PROCESSOR_INFO_MIN_DAQ              CRM_BYTE(6)
#define CRM_GET_DAQ_PROCESSOR_INFO_DAQ_KEY_BYTE         CRM_BYTE(7)


/* GET_DAQ_RESOLUTION_INFO */
                                
#define CRO_GET_DAQ_RESOLUTION_INFO_LEN                 1

#define CRM_GET_DAQ_RESOLUTION_INFO_LEN                 8
#define CRM_GET_DAQ_RESOLUTION_INFO_GRANULARITY_DAQ     CRM_BYTE(1)
#define CRM_GET_DAQ_RESOLUTION_INFO_MAX_SIZE_DAQ        CRM_BYTE(2)
#define CRM_GET_DAQ_RESOLUTION_INFO_GRANULARITY_STIM    CRM_BYTE(3)
#define CRM_GET_DAQ_RESOLUTION_INFO_MAX_SIZE_STIM       CRM_BYTE(4)
#define CRM_GET_DAQ_RESOLUTION_INFO_TIMESTAMP_MODE      CRM_BYTE(5)
#define CRM_GET_DAQ_RESOLUTION_INFO_TIMESTAMP_TICKS     CRM_WORD(3)

                                                        
/* GET_DAQ_LIST_INFO */

#define CRO_GET_DAQ_LIST_INFO_LEN                       4
#define CRO_GET_DAQ_LIST_INFO_DAQ                       CRO_WORD(1)

#define CRM_GET_DAQ_LIST_INFO_LEN                       6
#define CRM_GET_DAQ_LIST_INFO_PROPERTIES                CRM_BYTE(1)
#define CRM_GET_DAQ_LIST_INFO_MAX_ODT                   CRM_BYTE(2)
#define CRM_GET_DAQ_LIST_INFO_MAX_ODT_ENTRY             CRM_BYTE(3)
#define CRM_GET_DAQ_LIST_INFO_FIXED_EVENT               CRM_WORD(2)


/* GET_DAQ_EVENT_INFO */

#define CRO_GET_DAQ_EVENT_INFO_LEN                      4
#define CRO_GET_DAQ_EVENT_INFO_EVENT                    CRO_WORD(1)

#define CRM_GET_DAQ_EVENT_INFO_LEN                      7
#define CRM_GET_DAQ_EVENT_INFO_PROPERTIES               CRM_BYTE(1)
#define CRM_GET_DAQ_EVENT_INFO_MAX_DAQ_LIST             CRM_BYTE(2)
#define CRM_GET_DAQ_EVENT_INFO_NAME_LENGTH              CRM_BYTE(3)
#define CRM_GET_DAQ_EVENT_INFO_TIME_CYCLE               CRM_BYTE(4)
#define CRM_GET_DAQ_EVENT_INFO_TIME_UNIT                CRM_BYTE(5)
#define CRM_GET_DAQ_EVENT_INFO_PRIORITY                 CRM_BYTE(6)


/* FREE_DAQ */

#define CRO_FREE_DAQ_LEN                                1

#define CRM_FREE_DAQ_LEN                                1


/* ALLOC_DAQ */

#define CRO_ALLOC_DAQ_LEN                               4
#define CRO_ALLOC_DAQ_COUNT                             CRO_WORD(1)

#define CRM_ALLOC_DAQ_LEN                               1


/* ALLOC_ODT */

#define _CRO_ALLOC_ODT_LEN                              3
#define _CRO_ALLOC_ODT_DAQ                              CRO_WORD(1)
#define _CRO_ALLOC_ODT_COUNT                            CRO_BYTE(1)

#define CRO_ALLOC_ODT_LEN                               5
#define CRO_ALLOC_ODT_DAQ                               CRO_WORD(1)
#define CRO_ALLOC_ODT_COUNT                             CRO_BYTE(4)

#define CRM_ALLOC_ODT_LEN                               1


/* ALLOC_ODT_ENTRY */

#define CRO_ALLOC_ODT_ENTRY_LEN                         6
#define CRO_ALLOC_ODT_ENTRY_DAQ                         CRO_WORD(1)
#define CRO_ALLOC_ODT_ENTRY_ODT                         CRO_BYTE(4)
#define CRO_ALLOC_ODT_ENTRY_COUNT                       CRO_BYTE(5)

#define CRM_ALLOC_ODT_ENTRY_LEN                         1


/* PROGRAM_START */
                                     
#define CRO_PROGRAM_START_LEN                           1

#define CRM_PROGRAM_START_LEN                           7
#define CRM_PROGRAM_COMM_MODE_PGM                       CRM_BYTE(2) 
#define CRM_PROGRAM_MAX_CTO_PGM                         CRM_BYTE(3) 
#define CRM_PROGRAM_MAX_BS_PGM                          CRM_BYTE(4) 
#define CRM_PROGRAM_MIN_ST_PGM                          CRM_BYTE(5) 
#define CRM_PROGRAM_QUEUE_SIZE_PGM                      CRM_BYTE(6) 

                                                        
/* PROGRAM_CLEAR */
                                     
#define CRO_PROGRAM_CLEAR_LEN                           8
#define CRO_PROGRAM_CLEAR_MODE                          CRO_BYTE(1)
#define CRO_PROGRAM_CLEAR_SIZE                          CRO_DWORD(1)

#define CRM_PROGRAM_CLEAR_LEN                           1

                                                        
/* PROGRAM */

#define CRO_PROGRAM_MAX_SIZE                            ((uint8)((xcp.Daq.xcpMaxCTO-2)))
                                           
#define CRO_PROGRAM_LEN                                 2 /* + CRO_PROGRAM_SIZE */ 
#define CRO_PROGRAM_SIZE                                CRO_BYTE(1)
#define CRO_PROGRAM_DATA                                (&CRO_BYTE(2))

#define CRM_PROGRAM_LEN                                 1


/* PROGRAM RESET */

#define CRO_PROGRAM_RESET_LEN                           1

#define CRM_PROGRAM_RESET_LEN                           1

                                                        
/*GET_PGM_PROCESSOR_INFO*/

#define CRO_GET_PGM_PROCESSOR_INFO_LEN                  1

#define CRM_GET_PGM_PROCESSOR_INFO_LEN                  3
#define CRM_GET_PGM_PROCESSOR_INFO_PROPERTIES           CRM_BYTE(1)
#define CRM_GET_PGM_PROCESSOR_INFO_MAX_SECTOR           CRM_BYTE(2)

 
/* GET_SECTOR_INFO */

#define CRO_PROGRAM_GET_SECTOR_INFO_LEN                 3
#define CRO_PROGRAM_GET_SECTOR_INFO_MODE                CRO_BYTE(1)
#define CRO_PROGRAM_GET_SECTOR_INFO_NUMBER              CRO_BYTE(2)

#define CRM_PROGRAM_GET_SECTOR_INFO_LEN                 8
#define CRM_PROGRAM_GET_SECTOR_CLEAR_SEQ_NUM            CRM_BYTE(1)
#define CRM_PROGRAM_GET_SECTOR_PGM_SEQ_NUM              CRM_BYTE(2)
#define CRM_PROGRAM_GET_SECTOR_PGM_METHOD               CRM_BYTE(3)
#define CRM_PROGRAM_GET_SECTOR_SECTOR_INFO              CRM_DWORD(1)
#define CRM_PROGRAM_GET_SECTOR_NAME_LENGTH              CRM_BYTE(1)


/* PROGRAM_PREPARE */
                                   
#define CRO_PROGRAM_PREPARE_LEN                         4
#define CRO_PROGRAM_PREPARE_SIZE                        CRO_WORD(1)

#define CRM_PROGRAM_PREPARE_LEN                         1


/* PROGRAM_FORMAT */

#define CRO_PROGRAM_FORMAT_LEN                          5
#define CRO_PROGRAM_FORMAT_COMPRESSION_METHOD           CRO_BYTE(1)
#define CRO_PROGRAM_FORMAT_ENCRYPTION_METHOD            CRO_BYTE(2)
#define CRO_PROGRAM_FORMAT_PROGRAMMING_METHOD           CRO_BYTE(3)
#define CRO_PROGRAM_FORMAT_ACCESS_METHOD                CRO_BYTE(4)

#define CRM_PROGRAM_FORMAT_LEN                          1


/* PROGRAM_NEXT */

#define CRO_PROGRAM_NEXT_MAX_SIZE                       ((uint8)((xcp.Daq.xcpMaxCTO-2)))

#define CRO_PROGRAM_NEXT_LEN                            2 /* + size */
#define CRO_PROGRAM_NEXT_SIZE                           CRO_BYTE(1)
#define CRO_PROGRAM_NEXT_DATA                           (&CRO_BYTE(2))

#define CRM_PROGRAM_NEXT_LEN                            3
#define CRM_PROGRAM_NEXT_ERR_SEQUENCE                   CRM_BYTE(1)
#define CRM_PROGRAM_NEXT_SIZE_EXPECTED_DATA             CRM_BYTE(2)


/* PROGRAM_MAX */

#define CRO_PROGRAM_MAX_MAX_SIZE                        ((uint8)((xcp.Daq.xcpMaxCTO-1)))
                                       
#define CRO_PROGRAM_MAX_DATA                            (&CRO_BYTE(1))

#define CRM_PROGRAM_MAX_LEN                             1


/* PROGRAM_VERIFY */

#define CRO_PROGRAM_VERIFY_LEN                          8
#define CRO_PROGRAM_VERIFY_MODE                         CRO_BYTE(1)
#define CRO_PROGRAM_VERIFY_TYPE                         CRO_WORD(1)
#define CRO_PROGRAM_VERIFY_VALUE                        CRO_DWORD(1)

#define CRM_PROGRAM_VERIFY_LEN                          1


/* GET_SLAVE_ID */

#define CRO_GET_SLAVE_ID_LEN                            6
#define CRO_GET_SLAVE_ID_SUB_CODE                       CRO_BYTE(1)
#define CRO_GET_SLAVE_ID_X                              CRO_BYTE(2)
#define CRO_GET_SLAVE_ID_C                              CRO_BYTE(3)
#define CRO_GET_SLAVE_ID_P                              CRO_BYTE(4)
#define CRO_GET_SLAVE_ID_MODE                           CRO_BYTE(5)

#define CRM_GET_SLAVE_ID_LEN                            8
#define CRM_GET_SLAVE_ID_X                              CRM_BYTE(1)
#define CRM_GET_SLAVE_ID_C                              CRM_BYTE(2)
#define CRM_GET_SLAVE_ID_P                              CRM_BYTE(3)
#define CRM_GET_SLAVE_ID_CAN_ID_CMD_STIM                CRM_DWORD(1)

                                                        
/* GET_DAQ_ID */
                                   
#define CRO_GET_DAQ_ID_LEN                              3
#define CRO_GET_DAQ_ID_SUB_CODE                         CRO_BYTE(1)
#define CRO_GET_DAQ_ID_DAQ                              CRO_WORD(1)

#define CRM_GET_DAQ_ID_LEN                              8
#define CRM_GET_DAQ_ID_FIXED                            CRM_BYTE(1)
#define CRM_GET_DAQ_ID_ID                               CRM_DWORD(1)


/* SET_DAQ_ID */
                                   
#define CRO_SET_DAQ_ID_LEN                              8
#define CRO_SET_DAQ_ID_SUB_CODE                         CRO_BYTE(1)
#define CRO_SET_DAQ_ID_DAQ                              CRO_WORD(1)
#define CRO_SET_DAQ_ID_ID                               CRO_DWORD(1)

#define CRM_SET_DAQ_ID_LEN                              1

/* SET_SLAVE_PORT */

#define CRO_SET_SLAVE_PORT_LEN                          4
#define CRO_SET_SLAVE_PORT_SUB_CODE                     CRO_BYTE(1)
#define CRO_SET_SLAVE_PORT_PORT                         CRO_WORD(1)

#define CRM_SET_SLAVE_PORT                              1  

#if defined ( XCP_ENABLE_GET_SESSION_STATUS_API )
  #define XCP_DISCONNECTED                              0u
  #define XCP_CONNECTED                                 1u
#endif


/****************************************************************************/
/* Implementation                                                           */
/****************************************************************************/



#if defined ( XCP_ENABLE_SEND_EVENT ) || defined ( XCP_ENABLE_SERV_TEXT )
  #define EV_BYTE(x)            (xcp.Ev.b[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#endif

#define CRO_BYTE(x)             (pCmd->b[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRO_WORD(x)             (pCmd->w[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRO_DWORD(x)            (pCmd->dw[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRM_BYTE(x)             (xcp.Crm.b[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRM_WORD(x)             (xcp.Crm.w[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#define CRM_DWORD(x)            (xcp.Crm.dw[x]) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/****************************************************************************/
/* Default data type definitions                                            */
/****************************************************************************/

#if !defined ( STATIC )
  #define STATIC static
#endif

#if !defined ( FUNC )
  #define FUNC(rettype, memclass) rettype
#endif

#if !defined ( P2VAR )
  #define P2VAR(ptrtype, memclass, ptrclass) ptrtype * ptrclass
#endif

#if !defined ( P2CONST )
  #define P2CONST(ptrtype, memclass, ptrclass) const ptrtype * ptrclass
#endif

#if !defined ( CONST )
  #define CONST(type, memclass) const type
#endif

#if !defined ( VAR )
  #define VAR(vartype, memclass) vartype
#endif

#if !defined ( XCP_APPL_DATA )
  #define XCP_APPL_DATA
#endif


/*
   DAQBYTEPTR and MTABYTEPTR may be defined different to BYTEPTR to save memory
   Example:
     #define BYTEPTR     unsigned char *
     #define MTABYTEPTR  huge unsigned char *
     #define DAQBYTEPTR  unsigned char *
*/
#if !defined ( DAQBYTEPTR ) && defined ( XCP_MEMORY_MODEL_PAGED ) 
#endif
#if defined ( DAQBYTEPTR )
#else
  #define DAQBYTEPTR P2VAR(uint8, AUTOMATIC, XCP_DAQ_DATA)
#endif
#if !defined ( ROMDAQBYTEPTR ) && defined ( XCP_MEMORY_MODEL_PAGED ) 
#endif
#if defined ( ROMDAQBYTEPTR )
#else
  #define ROMDAQBYTEPTR P2CONST(uint8, AUTOMATIC, XCP_DAQ_DATA)
#endif

#if !defined ( MTABYTEPTR ) && defined ( XCP_MEMORY_MODEL_PAGED ) 
#endif
#if defined ( MTABYTEPTR )
#else
  #define MTABYTEPTR P2VAR(uint8, AUTOMATIC, XCP_MTA_DATA)
#endif
#if !defined ( ROMMTABYTEPTR ) && defined ( XCP_MEMORY_MODEL_PAGED ) 
#endif
#if defined ( ROMMTABYTEPTR )
#else
  #define ROMMTABYTEPTR P2CONST(uint8, AUTOMATIC, XCP_MTA_DATA)
#endif

/* Pointer type used to point into the xcp structure */
#if defined ( BYTEPTR )
#else
  #define BYTEPTR P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA)
#endif
#if defined ( ROMBYTEPTR )
#else
  #define ROMBYTEPTR P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA)
#endif


/****************************************************************************/
/* Checks and default values                                                */
/****************************************************************************/

/* Turn off test instrumentation, if not used */
#if !defined(XCP_ASSERT)
  #define XCP_ASSERT(x) 
#endif
#if !defined(XCP_PRINT)
  #define XCP_PRINT(x) 
#endif

/* Check limits of the XCP imnplementation
*/
#if defined ( kXcpMaxCTOMax )
  #if ( kXcpMaxCTOMax > 255 )
    #error "kXcpMaxCTOMax must be < 256"
  #endif
  #if ( kXcpMaxCTOMax < 8 )
    #error "kXcpMaxCTOMax must be > 7"
  #endif
#else
  #error "kXcpMaxCTOMax must be defined!"
#endif

#if defined ( kXcpMaxDTOMax )
  #if ( kXcpMaxDTOMax > 255 )
    #error "kXcpMaxDTOMax must be < 256"
  #endif
  #if ( kXcpMaxDTOMax < 8 )
    #error "kXcpMaxDTOMax must be > 7"
  #endif
#else
  #error "kXcpMaxDTOMax must be defined!"
#endif


#if defined ( XCP_ENABLE_DAQ )

/* kXcpDaqMemSize must be defined 
*/
  #if defined ( kXcpDaqMemSize )
  #else
    #error "Please define kXcpDaqMemSize"
  #endif

/* Use send queue as default
*/
  #if defined ( XCP_ENABLE_SEND_QUEUE ) || defined ( XCP_DISABLE_SEND_QUEUE )
  #else
    #define XCP_ENABLE_SEND_QUEUE
  #endif 

/*
  Max. size of an object referenced by an ODT entry
  XCP_MAX_ODT_ENTRY_SIZE may be limited 
*/
  #if defined ( XCP_MAX_ODT_ENTRY_SIZE )
  #else
    #if defined ( XCP_ENABLE_DAQ_HDR_ODT_DAQ )
      #define XCP_MAX_ODT_ENTRY_SIZE (xcp.Daq.xcpMaxDTO-2)
    #else
      #define XCP_MAX_ODT_ENTRY_SIZE (xcp.Daq.xcpMaxDTO-1)
    #endif
  #endif

#else /* XCP_ENABLE_DAQ */
  #if defined ( XCP_ENABLE_WRITE_DAQ_MULTIPLE )
    #error "Please activate DAQ measurement first!"
  #endif
#endif /* XCP_ENABLE_DAQ */



/****************************************************************************/
/* XCP Packet Type Definition                                               */
/****************************************************************************/

typedef struct {
  uint8 b[kXcpMaxDTOMax];
  uint8 l;
} tXcpDtouS;

typedef union { /* PRQA S 0750 */ /* MD_MSR_18.4 */
  tXcpDtouS buffer;
#if defined ( XCP_ENABLE_ALIGNED_DTO )
  uint16 w[ ((kXcpMaxDTOMax + 3) & 0xFFFC) / 2  ];
  uint32 dw[ ((kXcpMaxDTOMax + 3) & 0xFFFC) / 4 ];
#endif
} tXcpDto;

typedef union { /* PRQA S 0750 */ /* MD_MSR_18.4 */
  /* There might be a loss of up to 3 bytes. */
  uint8  b[ ((kXcpMaxCTOMax + 3) & 0xFFC)      ];
  uint16 w[ ((kXcpMaxCTOMax + 3) & 0xFFC) / 2  ];
  uint32 dw[ ((kXcpMaxCTOMax + 3) & 0xFFC) / 4 ];
} tXcpCto;


/****************************************************************************/
/* DAQ Lists, Type Definition                                               */
/****************************************************************************/

/* Note:
   - Adressextensions are not used for DAQ
*/

#if defined ( XCP_ENABLE_DAQ )

/* ODT */
/* Size must be even !!! */
typedef struct {

  uint16 firstOdtEntry;       /* Absolute */
  uint16 lastOdtEntry;        /* Absolute */

  #if defined ( XCP_ENABLE_STIM )
  P2VAR(tXcpDto, AUTOMATIC, XCP_APPL_DATA) StimBuffer; 
  #endif

} tXcpOdt;

#if defined( XCP_ENABLE_ODT_SIZE_WORD )
typedef uint16 tXcpOdtIdx;
typedef uint16 tXcpOdtCnt;
#else
typedef uint8 tXcpOdtIdx;
typedef uint8 tXcpOdtCnt;
#endif

#if defined ( XCP_ENABLE_EXTENDED_EVENTS )
typedef uint16 tXcpEventType;
#else
typedef uint8 tXcpEventType;
#endif


/* DAQ list */
typedef struct {

  tXcpOdtIdx lastOdt;             /* Absolute */
  tXcpOdtIdx firstOdt;            /* Absolute */

  uint8 flags;

  #if defined ( kXcpMaxEvent ) && ! defined ( XCP_ENABLE_STIM )
  /* Event-Daq association array used */
  #else
  tXcpEventType eventChannel;
  #endif

  #if defined ( XCP_ENABLE_DAQ_PRESCALER )
  uint8 prescaler;  
  uint8 cycle;     
  #endif

} tXcpDaqList;

#endif /* XCP_ENABLE_DAQ */

/* Dynamic DAQ list structures */
typedef struct {

  uint8 activeTl;                 /* Active Transport Layer */
  uint8 xcpMaxCTO;                /* Current Max CTO */
  uint8 xcpMaxDTO;                /* Current Max DTO */

#if defined ( XCP_ENABLE_DAQ )    /* Data Acquisition */

  #if defined ( XCP_ENABLE_SEND_QUEUE )
  uint8           SendQueueBehaviour; /* Send Queue Behaviour - has to be set by Xcp: 0 = linear mode, 1 = ring buffer mode */
  #endif

  uint8           DaqCount;
  tXcpOdtCnt      OdtCount;       /* Absolute count */
  uint16          OdtEntryCount;  /* Absolute count */

  /* Session configuration id for resume mode */
  #if defined ( XCP_ENABLE_DAQ_RESUME )
  uint16 DaqConfigId;
  #endif

  /* Event-Daq association array */ 
  #if defined ( kXcpMaxEvent ) && ! defined ( XCP_ENABLE_STIM )
  uint8 EventDaq[kXcpMaxEvent];
  #endif

  union { /* PRQA S 0750 */ /* MD_MSR_18.4 */
    uint8         b[kXcpDaqMemSize];
    tXcpDaqList   DaqList[1];
  } u;

#endif /* XCP_ENABLE_DAQ */

} tXcpDaq;

typedef uint16 SessionStatusType;

#if defined ( XCP_ENABLE_DAQ )            /* Data Acquisition */

#if defined ( XCP_ENABLE_DAQ_TIMESTAMP )
  #if ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_BYTE )
    typedef uint8 XcpDaqTimestampType;
  #elif ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_WORD )
    typedef uint16 XcpDaqTimestampType;
  #elif ( kXcpDaqTimestampSize == DAQ_TIMESTAMP_DWORD )
    typedef uint32 XcpDaqTimestampType;
  #else
    #error "kXcpDaqTimestampSize not defined. Please define a valid timestamp type!"
  #endif
#endif


  /* Shortcuts */

  /* j is absolute odt number */
  #define DaqListOdtEntryCount(j) ((xcp.pOdt[j].lastOdtEntry-xcp.pOdt[j].firstOdtEntry)+1) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListOdtLastEntry(j)  (xcp.pOdt[j].lastOdtEntry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListOdtFirstEntry(j) (xcp.pOdt[j].firstOdtEntry) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListOdtStimBuffer(j) (xcp.pOdt[j].StimBuffer) /* PRQA S 3453 */ /* MD_MSR_19.7 */

  /* n is absolute odtEntry number */
  #define OdtEntrySize(n)         (xcp.pOdtEntrySize[n]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define OdtEntryAddr(n)         (xcp.pOdtEntryAddr[n]) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define OdtEntryExt(n)          (xcp.pOdtEntryExt[n]) /* PRQA S 3453 */ /* MD_MSR_19.7 */

  /* i is daq number */
  #define DaqListOdtCount(i)      ((xcp.Daq.u.DaqList[i].lastOdt-xcp.Daq.u.DaqList[i].firstOdt)+1) /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListLastOdt(i)       xcp.Daq.u.DaqList[i].lastOdt /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListFirstOdt(i)      xcp.Daq.u.DaqList[i].firstOdt /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListFirstPid(i)      xcp.Daq.u.DaqList[i].firstOdt /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListFlags(i)         xcp.Daq.u.DaqList[i].flags /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListEventChannel(i)  xcp.Daq.u.DaqList[i].eventChannel /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListPrescaler(i)     xcp.Daq.u.DaqList[i].prescaler /* PRQA S 3453 */ /* MD_MSR_19.7 */
  #define DaqListCycle(i)         xcp.Daq.u.DaqList[i].cycle /* PRQA S 3453 */ /* MD_MSR_19.7 */


#endif /* XCP_ENABLE_DAQ */


/****************************************************************************/
/* Checksum, Type Definition                                                */
/****************************************************************************/
#if defined ( XCP_ENABLE_CHECKSUM )
  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD11 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD12 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD14 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16CCITT ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC32 )
  typedef uint8 tXcpChecksumAddType;    /* Data type (width) of the data to be added.  */
  #endif
  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 )
  typedef uint16 tXcpChecksumAddType;   /* Data type (width) of the data to be added.  */
  #endif
  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 )
  typedef uint32 tXcpChecksumAddType;   /* Data type (width) of the data to be added.  */
  #endif

  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD11 )
  typedef uint8 tXcpChecksumSumType;    /* Data type (width) of the actually checksum. */
  #endif
  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD12 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16CCITT )
  typedef uint16 tXcpChecksumSumType;   /* Data type (width) of the actually checksum. */
  #endif
  #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD14 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 ) || \
      ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC32 ) 
  typedef uint32 tXcpChecksumSumType;   /* Data type (width) of the actually checksum. */
  #endif
#endif


/****************************************************************************/
/* XCP Segment CAL parameters                                               */
/* Sement info                                                              */
/****************************************************************************/

#if defined ( XCP_ENABLE_PAGE_INFO )
typedef struct {
    uint8  SegmentInfoMaxPages; 
    uint8  SegmentInfoInitSegment; 
    uint8  SegmentInfoAddressExtension;
    uint8  SegmentInfoMaxMapping;
    uint8  SegmentInfoMode;
    uint8  SegmentPageProperties[kXcpMaxPages];
    uint8  SegmentPageAktiv[kXcpMaxPages];        /* 1=aktiv, 0=deaktiv. */
    uint8  SegmentPageMode[kXcpMaxPages];         /* 1=ECU, 2=XCP */
    uint32 SegmentInfoMapping;
} tXcpSegmentInfo;
#endif


/****************************************************************************/
/* XCP Driver Variables, Type Definition                                    */
/****************************************************************************/

/* Return values */
#define XCP_CMD_OK                  0x00
#define XCP_CMD_PENDING             0x01

#define XCP_CMD_BUSY                0x10
#define XCP_CMD_UNKNOWN             0x20
#define XCP_CMD_SYNTAX              0x21
#define XCP_CMD_OUT_OF_RANGE        0x22
#define XCP_CMD_PROTECTED           0x23
#define XCP_CMD_DENIED              0x24
#define XCP_CMD_ERROR               0xFF

#define XCP_OK                      0
#define XCP_NOT_OK                  1

/* Return values for Xcp_Event() */
#define XCP_EVENT_NOP               0x00u   /* Inactive (DAQ not running, Event not configured) */
#define XCP_EVENT_DAQ               0x01u   /* DAQ active */
#define XCP_EVENT_DAQ_OVERRUN       0x02u   /* DAQ queue overflow */
#define XCP_EVENT_DAQ_TIMEOUT       0x04u   /* Timeout supervision violation */
#define XCP_EVENT_STIM              0x08u   /* STIM active */
#define XCP_EVENT_STIM_OVERRUN      0x10u   /* STIM data not available */

/* Bitmasks for xcp.SendStatus */
#define XCP_CRM_REQUEST             0x01u
#define XCP_DTO_REQUEST             0x02u
#define XCP_EVT_REQUEST             0x04u
#define XCP_CRM_PENDING             0x10u
#define XCP_DTO_PENDING             0x20u
#define XCP_EVT_PENDING             0x40u
#define XCP_SEND_PENDING            (XCP_DTO_PENDING|XCP_CRM_PENDING|XCP_EVT_PENDING)

typedef struct {
  /* Crm has to be the first object of this structure !! (refer to XcpInit()) */

  tXcpCto Crm;                           /* RES,ERR Message buffer */
  uint8   CrmLen;                        /* RES,ERR Message length */

#if defined ( XCP_ENABLE_SEND_EVENT ) || defined ( XCP_ENABLE_SERV_TEXT )
  tXcpCto Ev;                            /* EV,SERV Message buffer */
  uint8   EvLen;                         /* EV,SERV Message length */
#endif
  
  SessionStatusType SessionStatus;

  MTABYTEPTR Mta;                        /* Memory Transfer Address */
#if defined ( XCP_ENABLE_READCCCONFIG )
  uint8      MtaExt;
#endif

#if defined ( XCP_ENABLE_BLOCK_DOWNLOAD ) || defined (XCP_ENABLE_BLOCK_UPLOAD)
  uint8 NextDataBlockSize;
#endif

#if defined ( XCP_ENABLE_SEED_KEY )
  uint8 ProtectionStatus;                /* Resource Protection Status */
#endif

#if defined ( XCP_ENABLE_CHECKSUM ) && !defined ( XCP_ENABLE_CUSTOM_CRC )
  uint16              CheckSumSize;       /* Counter for checksum calculation */
  tXcpChecksumSumType CheckSum;           /* Actual checksum */
#endif

  /*
    Dynamic DAQ list structures
    This structure should be stored in resume mode
  */
  tXcpDaq Daq;

#if defined ( XCP_ENABLE_DAQ )            /* Data Acquisition */

  P2VAR(tXcpOdt, AUTOMATIC, XCP_APPL_DATA)  pOdt;
  P2VAR(DAQBYTEPTR, AUTOMATIC, XCP_APPL_DATA) pOdtEntryAddr;
  P2VAR(uint8, AUTOMATIC, XCP_APPL_DATA)    pOdtEntrySize;
  
  /* Transmit Queue */
  #if defined ( XCP_ENABLE_SEND_QUEUE )
  P2VAR(tXcpDto, AUTOMATIC, XCP_APPL_DATA)  pQueue;
  uint16   QueueSize;
  uint16   QueueLen;
  uint16   QueueRp;
  #endif

  /* Transmit Status */
  #if defined ( XCP_ENABLE_SEND_QUEUE)
  volatile uint8 SendStatus;
  #endif

  /* Pointer for SET_DAQ_PTR */
  uint16 DaqListPtr;           
    
  #if defined ( XCP_ENABLE_STIM )
  tXcpDto StimBuffer[kXcpStimOdtCount];
  #endif
    
#endif /* XCP_ENABLE_DAQ */

} tXcpData;

#if defined ( XCP_ENABLE_VECTOR_INFOMEM )
typedef struct {
  uint16  MajorVersion;
  uint16  Patchversion;
  uint16  DaqMemory;
  uint16  StimOdtCount;
} tInfoMem;
#endif

typedef P2VAR(tXcpData, TYPEDEF, XCP_APPL_DATA) tXcpDataPtr;

/***************************************************************************/
/* External Declarations                                                   */
/***************************************************************************/

/*******************************************************************************
* External 8 Bit Constants
*******************************************************************************/
#define XCP_START_SEC_CONST_8BIT
//#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONST(uint8, XCP_CONST) kXcpMainVersion;
extern CONST(uint8, XCP_CONST) kXcpSubVersion;
extern CONST(uint8, XCP_CONST) kXcpReleaseVersion;

#define XCP_STOP_SEC_CONST_8BIT
//#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/****************************************************************************/
/* Prototypes                                                               */
/****************************************************************************/


/* Important external functions of xcp.c */
/*-----------------------------------------*/
#define XCP_START_SEC_CODE
//#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/* Initialization and deinitialization functions for the XCP Protocol Layer. */
extern FUNC(void, XCP_CODE) Xcp_InitMemory( void );
extern FUNC(void, XCP_CODE) Xcp_Init( void );
extern FUNC(void, XCP_CODE) Xcp_Exit( void );

/* Trigger a XCP data acquisition or stimulation event */
/* Returns an error status XCP_EVENT_xxxx */
#if defined ( XCP_ENABLE_DAQ )
  extern FUNC(uint8, XCP_CODE) Xcp_Event( tXcpEventType event );

/* Check if a XCP stimulation event can perform or delete the buffers */
/* Returns 1 (TRUE) if new stimulation data is available */
#if defined ( XCP_ENABLE_STIM )

  /* action */
  #define STIM_CHECK_ODT_BUFFER 1u
  #define STIM_RESET_ODT_BUFFER 2u

  extern FUNC(uint8, XCP_CODE) Xcp_StimEventStatus( tXcpEventType event, uint8 action );

#endif
#endif /* XCP_ENABLE_DAQ */

/* Call the XCP command processor. */
extern FUNC(void, XCP_CODE) Xcp_Command( P2CONST(uint32, AUTOMATIC, XCP_APPL_DATA) pCommand );

/* Transmit Notification */
/* Confirmation of the transmit request by ApplXcpSend(). */
/* Returns 0 when the XCP driver is idle */
extern FUNC(uint8, XCP_CODE) Xcp_SendCallBack( void );

/* Background Loop */
/* Return 1 (TRUE) if anything is still pending */
/* Used only if Checksum Calculation or EEPROM Programming is required */
extern FUNC(void, XCP_CODE) Xcp_MainFunction( void );

/*-----------------------------------------------------------------------------------*/
/* Functions or Macros that have to be provided externally to the XCP Protocol Layer */
/*-----------------------------------------------------------------------------------*/

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


/* Some available utility functions */
/*----------------------------------*/

/* Force a XCP disconnect */
extern FUNC(void, XCP_CODE) Xcp_Disconnect( void );

/* Set size of transfer objects */
extern FUNC(void, XCP_CODE) Xcp_SetActiveTl(uint8 MaxCto, uint8 MaxDto, uint8 ActiveTl);
extern FUNC(uint8, XCP_CODE) Xcp_GetActiveTl( void );

/* Send a pending XCP response packet (RES). */
/* To be used after a XCP_CMD_PENDING from EEPROM or FLASH programming. */
extern FUNC(void, XCP_CODE) Xcp_SendCrm( void );

/* Send a XCP event (EV) or service request (SERV) message */ 
#if defined ( XCP_ENABLE_SEND_EVENT )
extern FUNC(void, XCP_CODE) Xcp_SendEvent( uint8 evc, ROMBYTEPTR c, uint8 len);
#endif

/* Send a text message */
/* Implement print and putchar into a XCP SERV/SERV_TEXT message */
#if defined ( XCP_ENABLE_SERV_TEXT )
  #if defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR )
extern FUNC(void, XCP_CODE) Xcp_Putchar( CONST(uint8, AUTOMATIC) c );
    #if defined ( XCP_ENABLE_SERV_TEXT_PRINT )
extern FUNC(void, XCP_CODE) Xcp_Print( P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) str );
      #if defined ( XCP_ENABLE_SERV_TEXT_PRINTF )
extern FUNC(void, XCP_CODE) Xcp_Printf( P2CONST(uint8, AUTOMATIC, XCP_APPL_DATA) str, ... );
      #endif
    #endif
  #endif
#endif


/* Functions that may have be provided externally depending on options */
/*---------------------------------------------------------------------*/

/* Utility functions from xcp.c */
/*------------------------------*/

/* Override option for the memory transfer function */
/* May be used for optimization */
/* #define Xcp_MemCpy, #define Xcp_MemSet to disable the implementation in xcp.c */
#if defined ( Xcp_MemCpy ) 
#else
  extern FUNC(void, XCP_CODE) Xcp_MemCpy( DAQBYTEPTR dest, ROMDAQBYTEPTR src, uint8 n );
#endif
#if defined ( Xcp_MemSet )
#else
  extern FUNC(void, XCP_CODE) Xcp_MemSet( BYTEPTR p, uint16 n, uint8 b );
#endif

/* Send a DTO */
/* Can be redefined to meet DMA requirements */
#if defined ( XCP_ENABLE_DAQ )
  #if defined ( Xcp_SendDto )
  /* Xcp_SendDto is redefined */
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

/* Calculate checksum for a memory range */
/* Returns 0 (false) if access denied */
/* Used only, if read protection of memory areas is required */
#if defined ( XCP_ENABLE_CHECKSUM ) && defined ( XCP_ENABLE_CUSTOM_CRC )
  #if defined ( XcpAppl_CalculateChecksum ) /* Not defined as macro */
  #else
extern FUNC(uint8, XCP_CODE) XcpAppl_CalculateChecksum( ROMBYTEPTR pMemArea, BYTEPTR pRes, uint32 length );
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

#if defined ( XCP_ENABLE_VERSION_INFO_API )
  extern FUNC(void, XCP_CODE) Xcp_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, XCP_APPL_DATA) XcpVerInfoPtr);
#endif

#if defined ( XCP_ENABLE_GET_SESSION_STATUS_API )
/* Get the session state of the XCP Protocol Layer */
  extern FUNC(SessionStatusType, XCP_CODE) Xcp_GetSessionStatus( void );
#endif

#if defined ( XCP_ENABLE_GET_XCP_DATA_POINTER )
  extern FUNC(void, XCP_CODE) Xcp_GetXcpDataPointer( P2VAR(tXcpDataPtr, AUTOMATIC, XCP_APPL_DATA) pXcpData );
#endif

#if defined ( XCP_ENABLE_CONTROL )
/* En- or disable the Xcp Protocol Layer globally */
extern FUNC(void, XCP_CODE) Xcp_Control( uint8 command );
  #define kXcp_Control_Disable   0x00u
  #define kXcp_Control_Enable    0x01u
#endif

/* Activation/Deactivation control macros */
#if defined( XCP_ENABLE_CONTROL )

  #if defined ( XCP_ACTIVATE )
  #else
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_CAN_ASR )
      #if ( CANXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_ACTIVATE_CAN() CanXcp_Control(kXcponCan_Control_Enable)
      #else
        #define XCP_ACTIVATE_CAN()
      #endif
    #else
      #define XCP_ACTIVATE_CAN()
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_FLEXRAY_ASR )
      #if ( FRXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_ACTIVATE_FR() FrXcp_Control(kXcponFr_Control_Enable)
      #else
        #define XCP_ACTIVATE_FR() 
      #endif
    #else
      #define XCP_ACTIVATE_FR() 
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_TCPIP_ASR )
      #if ( TCPIPXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_ACTIVATE_TCPIP() TcpIpXcp_Control(kXcponTcpIp_Control_Enable)
      #else
        #define XCP_ACTIVATE_TCPIP()
      #endif
    #else
      #define XCP_ACTIVATE_TCPIP()
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_LIN_ASR )
      #if ( LINXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_ACTIVATE_LIN() LinXcp_Control(kXcponLin_Control_Enable)
      #else
        #define XCP_ACTIVATE_LIN()
      #endif
    #else
      #define XCP_ACTIVATE_LIN()
    #endif
    #define XCP_ACTIVATE() { XCP_ACTIVATE_CAN(); XCP_ACTIVATE_FR(); XCP_ACTIVATE_TCPIP(); XCP_ACTIVATE_LIN(); Xcp_Control(kXcp_Control_Enable); } /* PRQA S 3458 */ /* MD_MSR_19.4 */
  #endif

  #if defined ( XCP_DEACTIVATE )
  #else
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_CAN_ASR )
      #if ( CANXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_DEACTIVATE_CAN() CanXcp_Control(kXcponCan_Control_Disable)
      #else
        #define XCP_DEACTIVATE_CAN()
      #endif
    #else
      #define XCP_DEACTIVATE_CAN()
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_FLEXRAY_ASR )
      #if ( FRXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_DEACTIVATE_FR() FrXcp_Control(kXcponFr_Control_Disable)
      #else
        #define XCP_DEACTIVATE_FR() 
      #endif
    #else
      #define XCP_DEACTIVATE_FR() 
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_TCPIP_ASR )
      #if ( TCPIPXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_DEACTIVATE_TCPIP() TcpIpXcp_Control(kXcponTcpIp_Control_Disable)
      #else
        #define XCP_DEACTIVATE_TCPIP()
      #endif
    #else
      #define XCP_DEACTIVATE_TCPIP()
    #endif
    #if defined ( XCP_TRANSPORT_LAYER_TYPE_LIN_ASR )
      #if ( LINXCP_ENABLE_CONTROL == STD_ON )
        #define XCP_DEACTIVATE_LIN() LinXcp_Control(kXcponLin_Control_Disable)
      #else
        #define XCP_DEACTIVATE_LIN()
      #endif
    #else
      #define XCP_DEACTIVATE_LIN()
    #endif
    #define XCP_DEACTIVATE() { Xcp_Disconnect(); XCP_DEACTIVATE_CAN(); XCP_DEACTIVATE_FR(); XCP_DEACTIVATE_TCPIP(); XCP_DEACTIVATE_LIN(); Xcp_Control(kXcp_Control_Disable); } /* PRQA S 3458 */ /* MD_MSR_19.4 */
  #endif
#endif




#define XCP_STOP_SEC_CODE
//#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/*****************************************************************************/
/* Consistency and limit checks ( XCP Protocol Layer specific )              */
/*****************************************************************************/

/* The test mode must not be used with XCP Professional.  */



/* Check consistency of DAQ switch */

#if defined ( XCP_ENABLE_DAQ ) && defined ( XCP_DISABLE_DAQ )
  #error "XCP consistency error: DAQ must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_DAQ ) || defined ( XCP_DISABLE_DAQ )
#else
  #error "XCP consistency error: DAQ must be enabled or disabled."
#endif

/* Check consistency of STIM switch */

#if defined ( XCP_ENABLE_STIM ) && defined ( XCP_DISABLE_STIM )
  #error "XCP consistency error: Data stimulation (STIM) must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_STIM ) || defined ( XCP_DISABLE_STIM )
#else
  #error "XCP consistency error: Data stimulation (STIM) must be enabled or disabled."
#endif
#if defined ( XCP_ENABLE_STIM ) && defined ( XCP_DISABLE_DAQ )
  #error "XCP consistency error: Data stimulation (STIM) requires DAQ."
#endif
#if defined ( XCP_ENABLE_STIM ) 
  #if defined ( kXcpStimOdtCount )
  #else
    #error "XCP consistency error: Data stimulation (STIM) requires kXcpStimOdtCount."
  #endif
#endif

/* Check consistency of send queue */

#if defined ( XCP_ENABLE_SEND_QUEUE ) && defined ( XCP_DISABLE_SEND_QUEUE )
  #error "XCP consistency error: Send queue must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SEND_QUEUE ) || defined ( XCP_DISABLE_SEND_QUEUE )
#else
  #error "XCP consistency error: Send queue must be enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SEND_QUEUE ) && defined ( XCP_DISABLE_DAQ )
  #error "XCP consistency error: Send queue cannot be used without DAQ."
#endif

/* Check consistency of communictaion mode info */

#if defined ( XCP_ENABLE_COMM_MODE_INFO ) && defined ( XCP_DISABLE_COMM_MODE_INFO )
  #error "XCP consistency error: Communictaion mode info must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_COMM_MODE_INFO ) || defined ( XCP_DISABLE_COMM_MODE_INFO )
#else
  #error "XCP consistency error: Communictaion mode info must be enabled or disabled."
#endif

/* Check consistency of block download */

#if defined ( XCP_ENABLE_BLOCK_DOWNLOAD ) && defined ( XCP_DISABLE_BLOCK_DOWNLOAD )
  #error "XCP consistency error: Block download must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_BLOCK_DOWNLOAD ) || defined ( XCP_DISABLE_BLOCK_DOWNLOAD )
#else
  #error "XCP consistency error: Block download must be enabled or disabled."
#endif
#if defined ( XCP_ENABLE_BLOCK_DOWNLOAD ) && defined ( XCP_DISABLE_COMM_MODE_INFO )
  #error "XCP consistency error: Communication mode info should be enabled when using block download."
#endif

/* Check service request */

#if defined ( XCP_ENABLE_SERV_TEXT ) && defined ( XCP_DISABLE_SERV_TEXT )
  #error "XCP consistency error: Service request must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SERV_TEXT ) || defined ( XCP_DISABLE_SERV_TEXT )
#else
  #error "XCP consistency error: Service request must be enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SERV_TEXT ) && defined ( XCP_DISABLE_SERV_TEXT_PUTCHAR )
  #error "XCP consistency error: Without Xcp_Putchar is no service request possible."
#endif

/* Check service request Xcp_Putchar */

#if defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR ) && defined ( XCP_DISABLE_SERV_TEXT_PUTCHAR )
  #error "XCP consistency error: Xcp_Putchar function must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR ) || defined ( XCP_DISABLE_SERV_TEXT_PUTCHAR )
#else
  #error "XCP consistency error: Xcp_Putchar function must be enabled or disabled."
#endif
#if defined ( XCP_DISABLE_SERV_TEXT ) && defined ( XCP_ENABLE_SERV_TEXT_PUTCHAR )
  #error "XCP consistency error: Xcp_Putchar function can only be used with service requests."
#endif

/* check service request Xcp_Putchar */

#if defined ( XCP_ENABLE_SERV_TEXT_PRINT ) && defined ( XCP_DISABLE_SERV_TEXT_PRINT )
  #error "XCP consistency error: Xcp_Print function must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SERV_TEXT_PRINT ) || defined ( XCP_DISABLE_SERV_TEXT_PRINT )
#else
  #error "XCP consistency error: Xcp_Print function must be enabled or disabled."
#endif
#if defined ( XCP_ENABLE_SERV_TEXT ) && defined ( XCP_DISABLE_SERV_TEXT_PUTCHAR )
  #error "XCP consistency error: Xcp_Print requires Xcp_Putchar function."
#endif

/* Check consistency of DAQ header ODT */
#if defined(XCP_ENABLE_DAQ) 
  #if defined ( XCP_ENABLE_DAQ_HDR_ODT_DAQ ) && defined ( XCP_DISABLE_DAQ_HDR_ODT_DAQ )
    #error "XCP consistency error: DAQ_HDR_ODT_DAQ must be either enabled or disabled."
  #endif
  #if defined ( XCP_ENABLE_DAQ_HDR_ODT_DAQ ) || defined ( XCP_DISABLE_DAQ_HDR_ODT_DAQ )
  #else
    #error "XCP consistency error: DAQ_HDR_ODT_DAQ must be enabled or disabled."
  #endif
#endif

/* Check consistency of Page switching */

#if defined ( XCP_ENABLE_CALIBRATION_PAGE ) && defined ( XCP_DISABLE_CALIBRATION_PAGE )
  #error "XCP consistency error: Page switching must be either enabled or disabled."
#endif
#if defined ( XCP_ENABLE_CALIBRATION_PAGE ) || defined ( XCP_DISABLE_CALIBRATION_PAGE )
#else
  #error "XCP consistency error: Page switching must be enabled or disabled."
#endif

/* Check range of kXcpStationIdLength */

#if defined ( kXcpStationIdLength )
  #if ( kXcpStationIdLength > 0xFF )
    #error "XCP error: kXcpStationIdLength must be < 256."
  #endif
#endif

/* Check range of kXcpStimOdtCount */

#if defined ( XCP_ENABLE_STIM )
  #if defined ( kXcpStimOdtCount )
    #if ( kXcpStimOdtCount > 0xFF )
      #error "XCP error: kXcpStimOdtCount must be <= 0xFF."
    #endif
  #endif
#endif

#if defined ( XCP_ENABLE_DAQ )

  /* Check range of kXcpDaqMemSize */

  #if defined ( kXcpDaqMemSize )
    #if ( kXcpDaqMemSize > 0xFFFF )
      #error "XCP error: kXcpDaqMemSize must be <= 0xFFFF."
    #endif
  #endif

  /* Check range of kXcpSendQueueMinSize. */

  #if defined ( kXcpSendQueueMinSize ) 
    #if ( kXcpSendQueueMinSize > 0xFF )
      #error "XCP error: kXcpSendQueueMinSize must be <= 0xFF."
    #endif
  #endif

  /* Check XCP_ENABLE_ODT_SIZE_WORD in combination with XCP_ENABLE_DAQ_HDR_ODT_DAQ */
  #if defined ( XCP_ENABLE_ODT_SIZE_WORD ) 
    #if defined ( XCP_ENABLE_DAQ_HDR_ODT_DAQ )
    #else
      #error "XCP error: If XCP_ENABLE_ODT_SIZE_WORD is enabled, XCP_ENABLE_DAQ_HDR_ODT_DAQ must be enabled as well."
    #endif
  #endif

#endif /* defined ( XCP_ENABLE_DAQ ) */

#if defined ( XCP_ENABLE_CHECKSUM )

  /* Check configuration of kXcpChecksumMethod */
  #if defined ( kXcpChecksumMethod )
    #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD11 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD12 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD14 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC32 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16CCITT )
    #else
      #error "XCP error: Checksum calculation method not supported."
    #endif
  #endif

  /* Check configuration of kXcpChecksumBlockSize. */
  #if defined ( kXcpChecksumBlockSize )
    #if ( kXcpChecksumBlockSize > 0xFFFF )
      #error "XCP error: Checksum block size is limited to a maximum of 0xFFFF."
    #endif
    #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD22 ) || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD24 )
      #if ((kXcpChecksumBlockSize % 2) != 0 )
        #error "XCP error: The blocksize must be modulo 2."
      #endif
    #endif
    #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_ADD44 )
      #if ((kXcpChecksumBlockSize % 4) != 0 )
        #error "XCP error: The blocksize must be modulo 4."
      #endif
    #endif
  #endif

  #if defined ( XCP_ENABLE_AUTOSAR_CRC_MODULE )
    #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC32 )      || \
        ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC16CCITT )
    #else
      #error "XCP error: Checksum calculation method not supported."
    #endif
    #if defined ( XCP_ENABLE_CRC16CCITT_REFLECTED )
      #error "XCP error: Checksum calculation method not supported."
    #endif
  #else
    #if ( kXcpChecksumMethod == XCP_CHECKSUM_TYPE_CRC32 )
      #error "XCP error: Checksum calculation method not supported."
    #endif
  #endif

#endif /* defined ( XCP_ENABLE_CHECKSUM ) */

#if defined ( XCP_ENABLE_DAQ_TIMESTAMP )

  /* Check configuration of kXcpDaqTimestampUnit. */

  #if defined ( kXcpDaqTimestampUnit )
    #if ( (kXcpDaqTimestampUnit >> 4) > 12 ) || ( (kXcpDaqTimestampUnit & 0x0F) > 0 )
      #error "XCP error: the value of kXcpDaqTimestampUnit is not valid."
    #endif
  #endif

  /* Check configuration of kXcpDaqTimestampTicksPerUnit. */

  #if defined ( kXcpDaqTimestampTicksPerUnit )
    #if ( (kXcpDaqTimestampTicksPerUnit > 0xFFFF) || (kXcpDaqTimestampTicksPerUnit == 0) )
      #error "XCP error: illegal range of kXcpDaqTimestampTicksPerUnit: 0 < kXcpDaqTimestampTicksPerUnit <= 0xFFFF."
    #endif
  #endif

  /* Check for configuration of kXcpDaqTimestampSize */
  #if defined ( kXcpDaqTimestampSize )
    #if ( kXcpDaqTimestampSize != DAQ_TIMESTAMP_BYTE ) && ( kXcpDaqTimestampSize != DAQ_TIMESTAMP_WORD ) && ( kXcpDaqTimestampSize != DAQ_TIMESTAMP_DWORD )
      #error "XCP error: Please define kXcpDaqTimestampSize to either DAQ_TIMESTAMP_BYTE, DAQ_TIMESTAMP_WORD or DAQ_TIMESTAMP_DWORD"
    #endif
  #endif

#endif

/* Check range of service request kXcpMaxSegment. */

#if defined ( XCP_ENABLE_PAGE_INFO )
  #if defined ( kXcpMaxSegment ) 
    #if  ( ( kXcpMaxSegment > 0xFF ) || ( kXcpMaxSegment == 0x00 ) )
      #error "XCP error: kXcpMaxSegment must be <= 0xFF and > 0x00."
    #endif
  #endif
#endif

/* Check range of service request kXcpProgramMaxSector. */

#if defined ( XCP_ENABLE_PROGRAM_INFO )
  #if defined ( kXcpProgramMaxSector )
    #if  ( ( kXcpProgramMaxSector > 0xFF ) || ( kXcpProgramMaxSector == 0x00 ) )
      #error "XCP error: kXcpProgramMaxSector must be <= 0xFF and > 0x00."
    #endif
  #endif
#endif


  #define C_KOMMENTAR_VECTOR

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* ! defined ( __XCP_H_ ) */

