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

File Name        :  fbl_app.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\src\fbl_app.h
Author           :  kshanmu4
Description      :  Lists the Interface function exported app specific code
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_APP_H
#define FBL_APP_H

#include "system.h"
#include "fbl_app_cfg.h"
#include "fbl_comp_cfg.h"

extern void FblStartup_ConfigureClocks(void);

/*  Initialization Functions
 */
UINT8 FblApp_PreHwInit(void);
void FblApp_HwInit(void);
UINT8 FblApp_MemInit(void);
UINT8 FblApp_MemDeInit(void);
void FblApp_PreStartupInit(void);

/* Utility Functions
 */
void FblApp_ResetECU(void);
UINT8 FblApp_GetFblMode(void);
void  FblApp_SetResetReason(UINT8 reason);

/* Validation Functions
 */
UINT8 FblApp_IsValidApp(void);
UINT8 FblApp_IsValidNvm(void);
UINT8 FblApp_CheckFblExitCondition(void);


void Can_BusTransceiverToNormal(void);
void FblApp_Memcpy(UINT8 *dst,UINT8 *src,UINT32 size);
void FblApp_Memset(UINT8 *dst,UINT8 src,UINT32 size);
void FblApp_JumpApp(void);


void udspbl_check_diag_response (void);
void pbl_check_diag_response (void);
#endif /* FBL_APP_H */
