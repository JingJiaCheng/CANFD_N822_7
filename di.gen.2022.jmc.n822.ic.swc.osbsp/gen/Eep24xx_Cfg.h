/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2013. Visteon Corporation owns all rights to           *
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
*  File Name         :  Eep24xx_Cfg.h                                            *
*  Module Short Name :  EepDrv                                               *
*  Description       :  Generated File                                       *
*                                                                            *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  I2c Based External EEPROM device with                  *
* 						CAT24C04/08/16/32 series
*                                                                            *
******************************************************************************/
#ifndef Eep24xx_CFG_H
#define Eep24xx_CFG_H




/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
//todo: need to revisit if the below header need to be here
#include "Std_Types.h"
#include "Os.h"
#include "Ea_Cbk.h"
/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/

/*---------------  Eep24xx Critical Sections Macro  ------------------------*/
#define EEP24XX_ENTER_CRITICAL_SECTION()   SuspendAllInterrupts()
#define EEP24XX_EXIT_CRITICAL_SECTION()    ResumeAllInterrupts()


/*---------------  Eep24xx User Callback Configurations Macro  -----------------*/
#define EEP24XX_JOB_END_NOTIFICATION     Ea_JobEndNotification
#define EEP24XX_JOB_ERROR_NOTIFICATION   Ea_JobErrorNotification

/*---------------  EEPROM Development Error Reporting Macro  -----------------*/
#define EEP24XX_REPORT_ERROR(API_ID, ErrorCode)

/*---------------  I2c Specific Configurations Macro  -----------------*/
#define EEP24XX_READ_SEQ_ID                 0
#define EEP24XX_READ_CHANNEL                0

#define EEP24XX_WRITE_SEQ_ID                1
#define EEP24XX_WRITE_CHANNEL               0


/*---------------  EEPROM Device specific Configurations  Macro  -----------------*/

#define EEP24XX_MEM_SIZE                    4096u
#define EEP24XX_CHIP_SLAVE_ADDRESS          (uint8)0xA0 //I2c24xxEepDrv External EEPROM Slave Address
#define EEP24XX_CHIP_ERASE_VALUE            (uint8)0xFF
#define EEP24XX_MEM_BASE_ADDRESS            0

/*---------------  Configurations specific to BIG_EEPROM  -----------------*/
#define EEP24XX_READ_BLOCK_SIZE             32
#define EEP24XX_WRITE_BLOCK_SIZE            32
#define EEP24XX_CHIP_PAGE_SIZE              EEP24XX_WRITE_BLOCK_SIZE

//I2c24xxEepDrv internal buffer configurations - total buffer size is 17(16data bytes + 1 address byte). So data starts from 1st index of buffer.
#define EEP24XX_BUFFER_SIZE                 34
#define EEP24XX_ADDRESS_BUFFER_SIZE         2
#define EEP24XX_BUFF_DATA_START_INDEX       (uint8)0x02




/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/
typedef uint16  Eep24xx_AddressType;
typedef uint16  Eep24xx_LengthType;


#endif

/*============================================================================
**============================================================================
** R E V I S I O N    N O T E S
**============================================================================
**
** For each change to this file, be sure to record:
** 1.  Who made the change and when the change was made.
** 2.  Why the change was made and the intended result.
**
**===========================================================================*/
/*---------------------------------------------------------------------------
Date               : 21-March-2017
CDSID              : asivalin
Traceability       : RTC #823813 (EepDrv support for 24xx series I2c based EEPROM)
Change Description : Modifed the parameter "EEP24XX_ADDRESS_BUFFER_SIZE" as configurable
-----------------------------------------------------------------------------*/
/* end of file =============================================================*/
