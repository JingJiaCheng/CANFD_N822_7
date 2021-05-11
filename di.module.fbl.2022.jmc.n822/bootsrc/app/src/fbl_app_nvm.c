/*****************************************************************************
*                                                                            *
*              CONFIDENTIAL VISTEON CORPORATION                              *
*                                                                            *
* This is an unpublished work of authorship, which contains trade            *
* secrets, created in 2010. Visteon Corporation owns all rights to           *
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

File Name        :  fbl_app_nvm.c
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df9\src\fbl_app_nvm.c
Author           :  kshanmu4
Description      :  Implements the component validation routines
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/

#include "fbl_app.h"
#include "fbl_nvm_cfg.h"
#include "fbl_error.h"

UINT8 FblApp_IsValidNvm(void)
{
    UINT8 ret_type= FBL_OK;

    return(ret_type);
}

UINT8 FblApp_InvalidateValidateNVM(UINT8 Optype)
{
  UINT8 ret_val = FBL_OK;

  return(ret_val);
}
