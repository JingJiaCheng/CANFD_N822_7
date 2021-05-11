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

File Name        :  fbl_can_cfg.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\cfg\fbl_can_cfg.h
Author           :  kshanmu4
Description      :  FBL Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_CAN_CFG_H
#define FBL_CAN_CFG_H

#define FBL_CAN_CHANNEL_ID    (0u)

#define FBL_CAN_TX_HANDLE     (0u)

#define FBL_BUS_OFF_CHECK_PERIOD    (4u)

#define DIAGSESSIONSRVCSIZE         (0x02u)
#define DIAGSESSIONSRVCID           (0x10u)
#define DIAG_EXTENDEDSESSION_ID     (0x03u)

#endif /* FBL_CAN_CFG_H */
