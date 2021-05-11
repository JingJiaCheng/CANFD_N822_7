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

File Name        :  fbl_startup_cfg.h
Module Short Name:  vehiclecomm.core.fbl.compress
VOBName          :  vehiclecomm.core.fbl.compress\cfg\fbl_startup_cfg.h
Author           :  kshanmu4
Description      :  FBL Startup Module Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
******************************************************************************/
#ifndef FBL_STARTUP_CFG_H
#define FBL_STARTUP_CFG_H

#include "fbl_startup.h"

#define APP_NUM_MPU_REGIONS   12u

#define DFPV_D53


extern SFblStartupMpuConfig AppMpuConfig[APP_NUM_MPU_REGIONS];

#endif //FBL_STARTUP_CFG_H
