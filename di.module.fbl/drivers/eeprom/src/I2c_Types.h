/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2015. Visteon Corporation owns all rights to           *
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
*  File Name         :  I2c_Types.h                                          *
*  Module Short Name :  I2c_Types                                            *
*  Description       :  This file contains declations of the I2C Driver Types*
*                       and macros                                           *
*                                                                            *
* Organization     :  Driver Information Software Section,                   *
*                     Visteon Software Operation                             *
*                     Visteon Corporation                                    *
*                                                                            *
* ---------------------------------------------------------------------------*
* Compiler Name    :  GHS Multi                                              *
* Target Hardware  :  S6J32xx series & S6J120 micro based Hardware Platform  *
*                                                                            *
******************************************************************************/
#ifndef I2C_TYPES_H
#define I2C_TYPES_H

/*****************************************************************************
*                            Include files                                   *
******************************************************************************/
#include "s6j32xx_I2c.h"
#include "system.h"

/*****************************************************************************
*                                 Macro Definitions                          *
*----------------------------------------------------------------------------*
* Definition of macro shall be followed by a comment that explains the       *
* purpose of the macro.                                                      *
******************************************************************************/

/*****************************************************************************
*                                 Type Declarations                          *
******************************************************************************/

/* I2c Data Type*/
typedef UINT8  I2c_DataType;

/* Number of Data Type */
typedef UINT16  I2c_NumberOfDataType;

/* I2c Channel Type */
typedef UINT8  I2c_ChannelType;

/* I2c PhysicalAddress Type */
typedef UINT16  I2c_PhysicalAddress;

/* I2c Sequence Type */
typedef I2c_ChannelType  I2c_SequenceType;

#define I2C_UNINIT      0 /* I2c not initialized */
#define I2C_IDLE        1 /* I2c Idle */
#define I2C_QUEUED      2 /* I2c Queued */
#define I2C_BUSY        3 /* I2c Busy */
/* I2c Status Type */
typedef UINT8   I2c_StatusType;

#define I2C_SEQ_OK        0
#define I2C_SEQ_BUSY      1
#define I2C_SEQ_QUEUED    2
#define I2C_SEQ_FAILED    3
#define I2C_SEQ_CANCELLED 4
/* I2c Sequence Result Type */
typedef UINT8   I2c_SeqResultType;


/*****************************************************************************
*                                Globally  accessed Variable Declarations    *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                                 Locally used Variable Declarations         *
*----------------------------------------------------------------------------*
* Declaration shall be followed by a comment that gives the following info.  *
* about the variable.                                                        *
* purpose, critical section, unit, and resolution                            *
******************************************************************************/

/*****************************************************************************
*                               Functions                                    *
******************************************************************************/

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
Date               : 16-Nov-2015
CDSID              : ssebast1
Traceability       : RTC #453910
Change Description : Initial Framework version of I2c
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
Date               : 29-Jan-2016
CDSID              : ssebast1
Traceability       : RTC #402180
Change Description : I2c Write, Read and Error Handling Implementation
-----------------------------------------------------------------------------*/
/* end of file =============================================================*/
