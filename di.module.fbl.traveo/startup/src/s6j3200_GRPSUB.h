/* S6J3200 SERIES I/O REGISTER FILE V02L01
 *
 * Copyright (C) 2014-2015 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_GRPSUB_H
#define __S6J3200_GRPSUB_H

#include "s6j3200io_basetypes.h"

/* GRPSUB_SUBC base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_SUBC	stcGRPSUB_SUBC
#else /* __IO_DEFINE */
#define GRPSUB_SUBC	(*((volatile stc_grpsub_subc_t*)0x50200000))
#endif /* __IO_DEFINE */

/* LockUnlock */
#define GRPSUB_SUBC_LockUnlock	(GRPSUB_SUBC.unLockUnlock.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_LOCKUNLOCK	(GRPSUB_SUBC_LockUnlock)  /*@rg2@*/
#define GRPSUB_SUBC_LockUnlock_LockUnlock	GRPSUB_SUBC_LockUnlock  /*@bfrg@*/
#define GRPSUB_SUBC_LOCKUNLOCK_LOCKUNLOCK	GRPSUB_SUBC_LockUnlock_LockUnlock  /*@bf2@*/

typedef union un_grpsub_subc_lockunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_lockunlock_t;

/* LockStatus */
#define GRPSUB_SUBC_LockStatus	(GRPSUB_SUBC.unLockStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_LOCKSTATUS	(GRPSUB_SUBC_LockStatus)  /*@rg2@*/
#define GRPSUB_SUBC_LockStatus_LockStatus	(GRPSUB_SUBC.unLockStatus.stcField.u1LockStatus)  /*@bf@*/
#define GRPSUB_SUBC_LockStatus_PrivilegeStatus	(GRPSUB_SUBC.unLockStatus.stcField.u1PrivilegeStatus)  /*@bf@*/
#define GRPSUB_SUBC_LockStatus_FreezeStatus	(GRPSUB_SUBC.unLockStatus.stcField.u1FreezeStatus)  /*@bf@*/
#define GRPSUB_SUBC_LOCKSTATUS_LOCKSTATUS	GRPSUB_SUBC_LockStatus_LockStatus  /*@bf2@*/
#define GRPSUB_SUBC_LOCKSTATUS_PRIVILEGESTATUS	GRPSUB_SUBC_LockStatus_PrivilegeStatus  /*@bf2@*/
#define GRPSUB_SUBC_LOCKSTATUS_FREEZESTATUS	GRPSUB_SUBC_LockStatus_FreezeStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_lockstatus_field{
    uint_io32_t		u1LockStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1PrivilegeStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1FreezeStatus:1;
    uint_io32_t		:23;
}stc_grpsub_subc_lockstatus_field_t;

typedef union un_grpsub_subc_lockstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_lockstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_lockstatus_t;

/* IPIdentifier */
#define GRPSUB_SUBC_IPIdentifier	(GRPSUB_SUBC.unIPIdentifier.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_IPIDENTIFIER	(GRPSUB_SUBC_IPIdentifier)  /*@rg2@*/
#define GRPSUB_SUBC_IPIdentifier_DesignDeliveryID	(GRPSUB_SUBC.unIPIdentifier.stcField.u4DesignDeliveryID)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_DesignMaturityLevel	(GRPSUB_SUBC.unIPIdentifier.stcField.u4DesignMaturityLevel)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_IPEvolution	(GRPSUB_SUBC.unIPIdentifier.stcField.u4IPEvolution)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_IPFeatureSet	(GRPSUB_SUBC.unIPIdentifier.stcField.u4IPFeatureSet)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_IPApplication	(GRPSUB_SUBC.unIPIdentifier.stcField.u4IPApplication)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_IPConfiguration	(GRPSUB_SUBC.unIPIdentifier.stcField.u4IPConfiguration)  /*@bf@*/
#define GRPSUB_SUBC_IPIdentifier_IPFamily	(GRPSUB_SUBC.unIPIdentifier.stcField.u4IPFamily)  /*@bf@*/
#define GRPSUB_SUBC_IPIDENTIFIER_DESIGNDELIVERYID	GRPSUB_SUBC_IPIdentifier_DesignDeliveryID  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_DESIGNMATURITYLEVEL	GRPSUB_SUBC_IPIdentifier_DesignMaturityLevel  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_IPEVOLUTION	GRPSUB_SUBC_IPIdentifier_IPEvolution  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_IPFEATURESET	GRPSUB_SUBC_IPIdentifier_IPFeatureSet  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_IPAPPLICATION	GRPSUB_SUBC_IPIdentifier_IPApplication  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_IPCONFIGURATION	GRPSUB_SUBC_IPIdentifier_IPConfiguration  /*@bf2@*/
#define GRPSUB_SUBC_IPIDENTIFIER_IPFAMILY	GRPSUB_SUBC_IPIdentifier_IPFamily  /*@bf2@*/

typedef struct stc_grpsub_subc_ipidentifier_field{
    uint_io32_t		:4;
    uint_io32_t		u4DesignDeliveryID:4;
    uint_io32_t		u4DesignMaturityLevel:4;
    uint_io32_t		u4IPEvolution:4;
    uint_io32_t		u4IPFeatureSet:4;
    uint_io32_t		u4IPApplication:4;
    uint_io32_t		u4IPConfiguration:4;
    uint_io32_t		u4IPFamily:4;
}stc_grpsub_subc_ipidentifier_field_t;

typedef union un_grpsub_subc_ipidentifier{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ipidentifier_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ipidentifier_t;

/* ConfigClockControl */
#define GRPSUB_SUBC_ConfigClockControl	(GRPSUB_SUBC.unConfigClockControl.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_CONFIGCLOCKCONTROL	(GRPSUB_SUBC_ConfigClockControl)  /*@rg2@*/
#define GRPSUB_SUBC_ConfigClockControl_ConfigClockSelect	(GRPSUB_SUBC.unConfigClockControl.stcField.u3ConfigClockSelect)  /*@bf@*/
#define GRPSUB_SUBC_CONFIGCLOCKCONTROL_CONFIGCLOCKSELECT	GRPSUB_SUBC_ConfigClockControl_ConfigClockSelect  /*@bf2@*/

typedef struct stc_grpsub_subc_configclockcontrol_field{
    uint_io32_t		u3ConfigClockSelect:3;
    uint_io32_t		:29;
}stc_grpsub_subc_configclockcontrol_field_t;

typedef union un_grpsub_subc_configclockcontrol{
    uint_io32_t		u32Register;
    stc_grpsub_subc_configclockcontrol_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_configclockcontrol_t;

/* VRamInterruptEnable */
#define GRPSUB_SUBC_VRamInterruptEnable	(GRPSUB_SUBC.unVRamInterruptEnable.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAMINTERRUPTENABLE	(GRPSUB_SUBC_VRamInterruptEnable)  /*@rg2@*/
#define GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECC2DGCSysEnable	(GRPSUB_SUBC.unVRamInterruptEnable.stcField.u1VRamInterruptECC2DGCSysEnable)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECCDispEnable	(GRPSUB_SUBC.unVRamInterruptEnable.stcField.u1VRamInterruptECCDispEnable)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECC3DGCEnable	(GRPSUB_SUBC.unVRamInterruptEnable.stcField.u1VRamInterruptECC3DGCEnable)  /*@bf@*/
#define GRPSUB_SUBC_VRAMINTERRUPTENABLE_VRAMINTERRUPTECC2DGCSYSENABLE	GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECC2DGCSysEnable  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTENABLE_VRAMINTERRUPTECCDISPENABLE	GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECCDispEnable  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTENABLE_VRAMINTERRUPTECC3DGCENABLE	GRPSUB_SUBC_VRamInterruptEnable_VRamInterruptECC3DGCEnable  /*@bf2@*/

typedef struct stc_grpsub_subc_vraminterruptenable_field{
    uint_io32_t		u1VRamInterruptECC2DGCSysEnable:1;
    uint_io32_t		u1VRamInterruptECCDispEnable:1;
    uint_io32_t		u1VRamInterruptECC3DGCEnable:1;
    uint_io32_t		:29;
}stc_grpsub_subc_vraminterruptenable_field_t;

typedef union un_grpsub_subc_vraminterruptenable{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vraminterruptenable_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vraminterruptenable_t;

/* VRamInterruptPreset */
#define GRPSUB_SUBC_VRamInterruptPreset	(GRPSUB_SUBC.unVRamInterruptPreset.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAMINTERRUPTPRESET	(GRPSUB_SUBC_VRamInterruptPreset)  /*@rg2@*/
#define GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECC2DGCSysPreset	(GRPSUB_SUBC.unVRamInterruptPreset.stcField.u1VRamInterruptECC2DGCSysPreset)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECCDispPreset	(GRPSUB_SUBC.unVRamInterruptPreset.stcField.u1VRamInterruptECCDispPreset)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECC3DGCPreset	(GRPSUB_SUBC.unVRamInterruptPreset.stcField.u1VRamInterruptECC3DGCPreset)  /*@bf@*/
#define GRPSUB_SUBC_VRAMINTERRUPTPRESET_VRAMINTERRUPTECC2DGCSYSPRESET	GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECC2DGCSysPreset  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTPRESET_VRAMINTERRUPTECCDISPPRESET	GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECCDispPreset  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTPRESET_VRAMINTERRUPTECC3DGCPRESET	GRPSUB_SUBC_VRamInterruptPreset_VRamInterruptECC3DGCPreset  /*@bf2@*/

typedef struct stc_grpsub_subc_vraminterruptpreset_field{
    uint_io32_t		u1VRamInterruptECC2DGCSysPreset:1;
    uint_io32_t		u1VRamInterruptECCDispPreset:1;
    uint_io32_t		u1VRamInterruptECC3DGCPreset:1;
    uint_io32_t		:29;
}stc_grpsub_subc_vraminterruptpreset_field_t;

typedef union un_grpsub_subc_vraminterruptpreset{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vraminterruptpreset_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vraminterruptpreset_t;

/* VRamInterruptClear */
#define GRPSUB_SUBC_VRamInterruptClear	(GRPSUB_SUBC.unVRamInterruptClear.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAMINTERRUPTCLEAR	(GRPSUB_SUBC_VRamInterruptClear)  /*@rg2@*/
#define GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECC2DGCSysClear	(GRPSUB_SUBC.unVRamInterruptClear.stcField.u1VRamInterruptECC2DGCSysClear)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECCDispClear	(GRPSUB_SUBC.unVRamInterruptClear.stcField.u1VRamInterruptECCDispClear)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECC3DGCClear	(GRPSUB_SUBC.unVRamInterruptClear.stcField.u1VRamInterruptECC3DGCClear)  /*@bf@*/
#define GRPSUB_SUBC_VRAMINTERRUPTCLEAR_VRAMINTERRUPTECC2DGCSYSCLEAR	GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECC2DGCSysClear  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTCLEAR_VRAMINTERRUPTECCDISPCLEAR	GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECCDispClear  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTCLEAR_VRAMINTERRUPTECC3DGCCLEAR	GRPSUB_SUBC_VRamInterruptClear_VRamInterruptECC3DGCClear  /*@bf2@*/

typedef struct stc_grpsub_subc_vraminterruptclear_field{
    uint_io32_t		u1VRamInterruptECC2DGCSysClear:1;
    uint_io32_t		u1VRamInterruptECCDispClear:1;
    uint_io32_t		u1VRamInterruptECC3DGCClear:1;
    uint_io32_t		:29;
}stc_grpsub_subc_vraminterruptclear_field_t;

typedef union un_grpsub_subc_vraminterruptclear{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vraminterruptclear_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vraminterruptclear_t;

/* VRamInterruptStatus */
#define GRPSUB_SUBC_VRamInterruptStatus	(GRPSUB_SUBC.unVRamInterruptStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAMINTERRUPTSTATUS	(GRPSUB_SUBC_VRamInterruptStatus)  /*@rg2@*/
#define GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECC2DGCSysStatus	(GRPSUB_SUBC.unVRamInterruptStatus.stcField.u1VRamInterruptECC2DGCSysStatus)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECCDispStatus	(GRPSUB_SUBC.unVRamInterruptStatus.stcField.u1VRamInterruptECCDispStatus)  /*@bf@*/
#define GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECC3DGCStatus	(GRPSUB_SUBC.unVRamInterruptStatus.stcField.u1VRamInterruptECC3DGCStatus)  /*@bf@*/
#define GRPSUB_SUBC_VRAMINTERRUPTSTATUS_VRAMINTERRUPTECC2DGCSYSSTATUS	GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECC2DGCSysStatus  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTSTATUS_VRAMINTERRUPTECCDISPSTATUS	GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECCDispStatus  /*@bf2@*/
#define GRPSUB_SUBC_VRAMINTERRUPTSTATUS_VRAMINTERRUPTECC3DGCSTATUS	GRPSUB_SUBC_VRamInterruptStatus_VRamInterruptECC3DGCStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_vraminterruptstatus_field{
    uint_io32_t		u1VRamInterruptECC2DGCSysStatus:1;
    uint_io32_t		u1VRamInterruptECCDispStatus:1;
    uint_io32_t		u1VRamInterruptECC3DGCStatus:1;
    uint_io32_t		:29;
}stc_grpsub_subc_vraminterruptstatus_field_t;

typedef union un_grpsub_subc_vraminterruptstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vraminterruptstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vraminterruptstatus_t;

/* dsp_LockUnlock */
#define GRPSUB_SUBC_dsp_LockUnlock	(GRPSUB_SUBC.undsp_LockUnlock.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP_LOCKUNLOCK	(GRPSUB_SUBC_dsp_LockUnlock)  /*@rg2@*/
#define GRPSUB_SUBC_dsp_LockUnlock_dsp_LockUnlock	GRPSUB_SUBC_dsp_LockUnlock  /*@bfrg@*/
#define GRPSUB_SUBC_DSP_LOCKUNLOCK_DSP_LOCKUNLOCK	GRPSUB_SUBC_dsp_LockUnlock_dsp_LockUnlock  /*@bf2@*/

typedef union un_grpsub_subc_dsp_lockunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp_lockunlock_t;

/* dsp_LockStatus */
#define GRPSUB_SUBC_dsp_LockStatus	(GRPSUB_SUBC.undsp_LockStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP_LOCKSTATUS	(GRPSUB_SUBC_dsp_LockStatus)  /*@rg2@*/
#define GRPSUB_SUBC_dsp_LockStatus_dsp_LockStatus	(GRPSUB_SUBC.undsp_LockStatus.stcField.u1dsp_LockStatus)  /*@bf@*/
#define GRPSUB_SUBC_dsp_LockStatus_dsp_PrivilegeStatus	(GRPSUB_SUBC.undsp_LockStatus.stcField.u1dsp_PrivilegeStatus)  /*@bf@*/
#define GRPSUB_SUBC_dsp_LockStatus_dsp_FreezeStatus	(GRPSUB_SUBC.undsp_LockStatus.stcField.u1dsp_FreezeStatus)  /*@bf@*/
#define GRPSUB_SUBC_DSP_LOCKSTATUS_DSP_LOCKSTATUS	GRPSUB_SUBC_dsp_LockStatus_dsp_LockStatus  /*@bf2@*/
#define GRPSUB_SUBC_DSP_LOCKSTATUS_DSP_PRIVILEGESTATUS	GRPSUB_SUBC_dsp_LockStatus_dsp_PrivilegeStatus  /*@bf2@*/
#define GRPSUB_SUBC_DSP_LOCKSTATUS_DSP_FREEZESTATUS	GRPSUB_SUBC_dsp_LockStatus_dsp_FreezeStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp_lockstatus_field{
    uint_io32_t		u1dsp_LockStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1dsp_PrivilegeStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1dsp_FreezeStatus:1;
    uint_io32_t		:23;
}stc_grpsub_subc_dsp_lockstatus_field_t;

typedef union un_grpsub_subc_dsp_lockstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp_lockstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp_lockstatus_t;

/* dsp0_ClockDivider */
#define GRPSUB_SUBC_dsp0_ClockDivider	(GRPSUB_SUBC.undsp0_ClockDivider.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_CLOCKDIVIDER	(GRPSUB_SUBC_dsp0_ClockDivider)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_ClockDivider_dsp0_ClockDivider	(GRPSUB_SUBC.undsp0_ClockDivider.stcField.u16dsp0_ClockDivider)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_CLOCKDIVIDER_DSP0_CLOCKDIVIDER	GRPSUB_SUBC_dsp0_ClockDivider_dsp0_ClockDivider  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_clockdivider_field{
    uint_io32_t		:8;
    uint_io32_t		u16dsp0_ClockDivider:16;
    uint_io32_t		:8;
}stc_grpsub_subc_dsp0_clockdivider_field_t;

typedef union un_grpsub_subc_dsp0_clockdivider{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_clockdivider_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_clockdivider_t;

/* dsp0_DomainControl */
#define GRPSUB_SUBC_dsp0_DomainControl	(GRPSUB_SUBC.undsp0_DomainControl.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_DOMAINCONTROL	(GRPSUB_SUBC_dsp0_DomainControl)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_DomainControl_dsp0_ClockEnable	(GRPSUB_SUBC.undsp0_DomainControl.stcField.u1dsp0_ClockEnable)  /*@bf@*/
#define GRPSUB_SUBC_dsp0_DomainControl_dsp0_SoftwareReset	(GRPSUB_SUBC.undsp0_DomainControl.stcField.u1dsp0_SoftwareReset)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_DOMAINCONTROL_DSP0_CLOCKENABLE	GRPSUB_SUBC_dsp0_DomainControl_dsp0_ClockEnable  /*@bf2@*/
#define GRPSUB_SUBC_DSP0_DOMAINCONTROL_DSP0_SOFTWARERESET	GRPSUB_SUBC_dsp0_DomainControl_dsp0_SoftwareReset  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_domaincontrol_field{
    uint_io32_t		u1dsp0_ClockEnable:1;
    uint_io32_t		:15;
    uint_io32_t		u1dsp0_SoftwareReset:1;
    uint_io32_t		:15;
}stc_grpsub_subc_dsp0_domaincontrol_field_t;

typedef union un_grpsub_subc_dsp0_domaincontrol{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_domaincontrol_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_domaincontrol_t;

/* dsp0_ClockShift */
#define GRPSUB_SUBC_dsp0_ClockShift	(GRPSUB_SUBC.undsp0_ClockShift.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_CLOCKSHIFT	(GRPSUB_SUBC_dsp0_ClockShift)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_ClockShift_dsp0_ClockInvert	(GRPSUB_SUBC.undsp0_ClockShift.stcField.u1dsp0_ClockInvert)  /*@bf@*/
#define GRPSUB_SUBC_dsp0_ClockShift_dsp0_ClockOffset	(GRPSUB_SUBC.undsp0_ClockShift.stcField.u8dsp0_ClockOffset)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_CLOCKSHIFT_DSP0_CLOCKINVERT	GRPSUB_SUBC_dsp0_ClockShift_dsp0_ClockInvert  /*@bf2@*/
#define GRPSUB_SUBC_DSP0_CLOCKSHIFT_DSP0_CLOCKOFFSET	GRPSUB_SUBC_dsp0_ClockShift_dsp0_ClockOffset  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_clockshift_field{
    uint_io32_t		u1dsp0_ClockInvert:1;
    uint_io32_t		:15;
    uint_io32_t		u8dsp0_ClockOffset:8;
    uint_io32_t		:8;
}stc_grpsub_subc_dsp0_clockshift_field_t;

typedef union un_grpsub_subc_dsp0_clockshift{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_clockshift_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_clockshift_t;

/* dsp0_ClockMeasurementControl */
#define GRPSUB_SUBC_dsp0_ClockMeasurementControl	(GRPSUB_SUBC.undsp0_ClockMeasurementControl.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTCONTROL	(GRPSUB_SUBC_dsp0_ClockMeasurementControl)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_ClockMeasurementControl_dsp0_MeasurementStart	(GRPSUB_SUBC.undsp0_ClockMeasurementControl.stcField.u1dsp0_MeasurementStart)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTCONTROL_DSP0_MEASUREMENTSTART	GRPSUB_SUBC_dsp0_ClockMeasurementControl_dsp0_MeasurementStart  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_clockmeasurementcontrol_field{
    uint_io32_t		u1dsp0_MeasurementStart:1;
    uint_io32_t		:31;
}stc_grpsub_subc_dsp0_clockmeasurementcontrol_field_t;

typedef union un_grpsub_subc_dsp0_clockmeasurementcontrol{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_clockmeasurementcontrol_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_clockmeasurementcontrol_t;

/* dsp0_ClockMeasurementStatus */
#define GRPSUB_SUBC_dsp0_ClockMeasurementStatus	(GRPSUB_SUBC.undsp0_ClockMeasurementStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTSTATUS	(GRPSUB_SUBC_dsp0_ClockMeasurementStatus)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementReady	(GRPSUB_SUBC.undsp0_ClockMeasurementStatus.stcField.u1dsp0_MeasurementReady)  /*@bf@*/
#define GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementNoCapClkError	(GRPSUB_SUBC.undsp0_ClockMeasurementStatus.stcField.u1dsp0_MeasurementNoCapClkError)  /*@bf@*/
#define GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementSlowCapClkError	(GRPSUB_SUBC.undsp0_ClockMeasurementStatus.stcField.u1dsp0_MeasurementSlowCapClkError)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTSTATUS_DSP0_MEASUREMENTREADY	GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementReady  /*@bf2@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTSTATUS_DSP0_MEASUREMENTNOCAPCLKERROR	GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementNoCapClkError  /*@bf2@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTSTATUS_DSP0_MEASUREMENTSLOWCAPCLKERROR	GRPSUB_SUBC_dsp0_ClockMeasurementStatus_dsp0_MeasurementSlowCapClkError  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_clockmeasurementstatus_field{
    uint_io32_t		u1dsp0_MeasurementReady:1;
    uint_io32_t		:3;
    uint_io32_t		u1dsp0_MeasurementNoCapClkError:1;
    uint_io32_t		u1dsp0_MeasurementSlowCapClkError:1;
    uint_io32_t		:26;
}stc_grpsub_subc_dsp0_clockmeasurementstatus_field_t;

typedef union un_grpsub_subc_dsp0_clockmeasurementstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_clockmeasurementstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_clockmeasurementstatus_t;

/* dsp0_ClockMeasurementResult */
#define GRPSUB_SUBC_dsp0_ClockMeasurementResult	(GRPSUB_SUBC.undsp0_ClockMeasurementResult.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTRESULT	(GRPSUB_SUBC_dsp0_ClockMeasurementResult)  /*@rg2@*/
#define GRPSUB_SUBC_dsp0_ClockMeasurementResult_dsp0_MeasurementResult	(GRPSUB_SUBC.undsp0_ClockMeasurementResult.stcField.u17dsp0_MeasurementResult)  /*@bf@*/
#define GRPSUB_SUBC_DSP0_CLOCKMEASUREMENTRESULT_DSP0_MEASUREMENTRESULT	GRPSUB_SUBC_dsp0_ClockMeasurementResult_dsp0_MeasurementResult  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp0_clockmeasurementresult_field{
    uint_io32_t		:8;
    uint_io32_t		u17dsp0_MeasurementResult:17;
    uint_io32_t		:7;
}stc_grpsub_subc_dsp0_clockmeasurementresult_field_t;

typedef union un_grpsub_subc_dsp0_clockmeasurementresult{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp0_clockmeasurementresult_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp0_clockmeasurementresult_t;

/* dsp1_ClockDivider */
#define GRPSUB_SUBC_dsp1_ClockDivider	(GRPSUB_SUBC.undsp1_ClockDivider.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_CLOCKDIVIDER	(GRPSUB_SUBC_dsp1_ClockDivider)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_ClockDivider_dsp1_ClockDivider	(GRPSUB_SUBC.undsp1_ClockDivider.stcField.u16dsp1_ClockDivider)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_CLOCKDIVIDER_DSP1_CLOCKDIVIDER	GRPSUB_SUBC_dsp1_ClockDivider_dsp1_ClockDivider  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_clockdivider_field{
    uint_io32_t		:8;
    uint_io32_t		u16dsp1_ClockDivider:16;
    uint_io32_t		:8;
}stc_grpsub_subc_dsp1_clockdivider_field_t;

typedef union un_grpsub_subc_dsp1_clockdivider{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_clockdivider_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_clockdivider_t;

/* dsp1_DomainControl */
#define GRPSUB_SUBC_dsp1_DomainControl	(GRPSUB_SUBC.undsp1_DomainControl.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_DOMAINCONTROL	(GRPSUB_SUBC_dsp1_DomainControl)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_DomainControl_dsp1_ClockEnable	(GRPSUB_SUBC.undsp1_DomainControl.stcField.u1dsp1_ClockEnable)  /*@bf@*/
#define GRPSUB_SUBC_dsp1_DomainControl_dsp1_SoftwareReset	(GRPSUB_SUBC.undsp1_DomainControl.stcField.u1dsp1_SoftwareReset)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_DOMAINCONTROL_DSP1_CLOCKENABLE	GRPSUB_SUBC_dsp1_DomainControl_dsp1_ClockEnable  /*@bf2@*/
#define GRPSUB_SUBC_DSP1_DOMAINCONTROL_DSP1_SOFTWARERESET	GRPSUB_SUBC_dsp1_DomainControl_dsp1_SoftwareReset  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_domaincontrol_field{
    uint_io32_t		u1dsp1_ClockEnable:1;
    uint_io32_t		:15;
    uint_io32_t		u1dsp1_SoftwareReset:1;
    uint_io32_t		:15;
}stc_grpsub_subc_dsp1_domaincontrol_field_t;

typedef union un_grpsub_subc_dsp1_domaincontrol{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_domaincontrol_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_domaincontrol_t;

/* dsp1_ClockShift */
#define GRPSUB_SUBC_dsp1_ClockShift	(GRPSUB_SUBC.undsp1_ClockShift.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_CLOCKSHIFT	(GRPSUB_SUBC_dsp1_ClockShift)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_ClockShift_dsp1_ClockInvert	(GRPSUB_SUBC.undsp1_ClockShift.stcField.u1dsp1_ClockInvert)  /*@bf@*/
#define GRPSUB_SUBC_dsp1_ClockShift_dsp1_ClockOffset	(GRPSUB_SUBC.undsp1_ClockShift.stcField.u8dsp1_ClockOffset)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_CLOCKSHIFT_DSP1_CLOCKINVERT	GRPSUB_SUBC_dsp1_ClockShift_dsp1_ClockInvert  /*@bf2@*/
#define GRPSUB_SUBC_DSP1_CLOCKSHIFT_DSP1_CLOCKOFFSET	GRPSUB_SUBC_dsp1_ClockShift_dsp1_ClockOffset  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_clockshift_field{
    uint_io32_t		u1dsp1_ClockInvert:1;
    uint_io32_t		:15;
    uint_io32_t		u8dsp1_ClockOffset:8;
    uint_io32_t		:8;
}stc_grpsub_subc_dsp1_clockshift_field_t;

typedef union un_grpsub_subc_dsp1_clockshift{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_clockshift_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_clockshift_t;

/* dsp1_ClockMeasurementControl */
#define GRPSUB_SUBC_dsp1_ClockMeasurementControl	(GRPSUB_SUBC.undsp1_ClockMeasurementControl.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTCONTROL	(GRPSUB_SUBC_dsp1_ClockMeasurementControl)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_ClockMeasurementControl_dsp1_MeasurementStart	(GRPSUB_SUBC.undsp1_ClockMeasurementControl.stcField.u1dsp1_MeasurementStart)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTCONTROL_DSP1_MEASUREMENTSTART	GRPSUB_SUBC_dsp1_ClockMeasurementControl_dsp1_MeasurementStart  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_clockmeasurementcontrol_field{
    uint_io32_t		u1dsp1_MeasurementStart:1;
    uint_io32_t		:31;
}stc_grpsub_subc_dsp1_clockmeasurementcontrol_field_t;

typedef union un_grpsub_subc_dsp1_clockmeasurementcontrol{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_clockmeasurementcontrol_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_clockmeasurementcontrol_t;

/* dsp1_ClockMeasurementStatus */
#define GRPSUB_SUBC_dsp1_ClockMeasurementStatus	(GRPSUB_SUBC.undsp1_ClockMeasurementStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTSTATUS	(GRPSUB_SUBC_dsp1_ClockMeasurementStatus)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementReady	(GRPSUB_SUBC.undsp1_ClockMeasurementStatus.stcField.u1dsp1_MeasurementReady)  /*@bf@*/
#define GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementNoCapClkError	(GRPSUB_SUBC.undsp1_ClockMeasurementStatus.stcField.u1dsp1_MeasurementNoCapClkError)  /*@bf@*/
#define GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementSlowCapClkError	(GRPSUB_SUBC.undsp1_ClockMeasurementStatus.stcField.u1dsp1_MeasurementSlowCapClkError)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTSTATUS_DSP1_MEASUREMENTREADY	GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementReady  /*@bf2@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTSTATUS_DSP1_MEASUREMENTNOCAPCLKERROR	GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementNoCapClkError  /*@bf2@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTSTATUS_DSP1_MEASUREMENTSLOWCAPCLKERROR	GRPSUB_SUBC_dsp1_ClockMeasurementStatus_dsp1_MeasurementSlowCapClkError  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_clockmeasurementstatus_field{
    uint_io32_t		u1dsp1_MeasurementReady:1;
    uint_io32_t		:3;
    uint_io32_t		u1dsp1_MeasurementNoCapClkError:1;
    uint_io32_t		u1dsp1_MeasurementSlowCapClkError:1;
    uint_io32_t		:26;
}stc_grpsub_subc_dsp1_clockmeasurementstatus_field_t;

typedef union un_grpsub_subc_dsp1_clockmeasurementstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_clockmeasurementstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_clockmeasurementstatus_t;

/* dsp1_ClockMeasurementResult */
#define GRPSUB_SUBC_dsp1_ClockMeasurementResult	(GRPSUB_SUBC.undsp1_ClockMeasurementResult.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTRESULT	(GRPSUB_SUBC_dsp1_ClockMeasurementResult)  /*@rg2@*/
#define GRPSUB_SUBC_dsp1_ClockMeasurementResult_dsp1_MeasurementResult	(GRPSUB_SUBC.undsp1_ClockMeasurementResult.stcField.u17dsp1_MeasurementResult)  /*@bf@*/
#define GRPSUB_SUBC_DSP1_CLOCKMEASUREMENTRESULT_DSP1_MEASUREMENTRESULT	GRPSUB_SUBC_dsp1_ClockMeasurementResult_dsp1_MeasurementResult  /*@bf2@*/

typedef struct stc_grpsub_subc_dsp1_clockmeasurementresult_field{
    uint_io32_t		:8;
    uint_io32_t		u17dsp1_MeasurementResult:17;
    uint_io32_t		:7;
}stc_grpsub_subc_dsp1_clockmeasurementresult_field_t;

typedef union un_grpsub_subc_dsp1_clockmeasurementresult{
    uint_io32_t		u32Register;
    stc_grpsub_subc_dsp1_clockmeasurementresult_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_dsp1_clockmeasurementresult_t;

/* vram_LockUnlock */
#define GRPSUB_SUBC_vram_LockUnlock	(GRPSUB_SUBC.unvram_LockUnlock.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_LOCKUNLOCK	(GRPSUB_SUBC_vram_LockUnlock)  /*@rg2@*/
#define GRPSUB_SUBC_vram_LockUnlock_vram_LockUnlock	GRPSUB_SUBC_vram_LockUnlock  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_LOCKUNLOCK_VRAM_LOCKUNLOCK	GRPSUB_SUBC_vram_LockUnlock_vram_LockUnlock  /*@bf2@*/

typedef union un_grpsub_subc_vram_lockunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_lockunlock_t;

/* vram_LockStatus */
#define GRPSUB_SUBC_vram_LockStatus	(GRPSUB_SUBC.unvram_LockStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_LOCKSTATUS	(GRPSUB_SUBC_vram_LockStatus)  /*@rg2@*/
#define GRPSUB_SUBC_vram_LockStatus_vram_LockStatus	(GRPSUB_SUBC.unvram_LockStatus.stcField.u1vram_LockStatus)  /*@bf@*/
#define GRPSUB_SUBC_vram_LockStatus_vram_PrivilegeStatus	(GRPSUB_SUBC.unvram_LockStatus.stcField.u1vram_PrivilegeStatus)  /*@bf@*/
#define GRPSUB_SUBC_vram_LockStatus_vram_FreezeStatus	(GRPSUB_SUBC.unvram_LockStatus.stcField.u1vram_FreezeStatus)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_LOCKSTATUS_VRAM_LOCKSTATUS	GRPSUB_SUBC_vram_LockStatus_vram_LockStatus  /*@bf2@*/
#define GRPSUB_SUBC_VRAM_LOCKSTATUS_VRAM_PRIVILEGESTATUS	GRPSUB_SUBC_vram_LockStatus_vram_PrivilegeStatus  /*@bf2@*/
#define GRPSUB_SUBC_VRAM_LOCKSTATUS_VRAM_FREEZESTATUS	GRPSUB_SUBC_vram_LockStatus_vram_FreezeStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_lockstatus_field{
    uint_io32_t		u1vram_LockStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1vram_PrivilegeStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1vram_FreezeStatus:1;
    uint_io32_t		:23;
}stc_grpsub_subc_vram_lockstatus_field_t;

typedef union un_grpsub_subc_vram_lockstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_lockstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_lockstatus_t;

/* vram_sram_select */
#define GRPSUB_SUBC_vram_sram_select	(GRPSUB_SUBC.unvram_sram_select.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_SRAM_SELECT	(GRPSUB_SUBC_vram_sram_select)  /*@rg2@*/
#define GRPSUB_SUBC_vram_sram_select_vram_sram_select	(GRPSUB_SUBC.unvram_sram_select.stcField.u12vram_sram_select)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_SRAM_SELECT_VRAM_SRAM_SELECT	GRPSUB_SUBC_vram_sram_select_vram_sram_select  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_sram_select_field{
    uint_io32_t		u12vram_sram_select:12;
    uint_io32_t		:20;
}stc_grpsub_subc_vram_sram_select_field_t;

typedef union un_grpsub_subc_vram_sram_select{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_sram_select_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_sram_select_t;

/* vram_errinj_data_s0_hi */
#define GRPSUB_SUBC_vram_errinj_data_s0_hi	(GRPSUB_SUBC.unvram_errinj_data_s0_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S0_HI	(GRPSUB_SUBC_vram_errinj_data_s0_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s0_hi_vram_errinj_data_s0_hi	GRPSUB_SUBC_vram_errinj_data_s0_hi  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S0_HI_VRAM_ERRINJ_DATA_S0_HI	GRPSUB_SUBC_vram_errinj_data_s0_hi_vram_errinj_data_s0_hi  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s0_hi{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s0_hi_t;

/* vram_errinj_data_s0_lo */
#define GRPSUB_SUBC_vram_errinj_data_s0_lo	(GRPSUB_SUBC.unvram_errinj_data_s0_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S0_LO	(GRPSUB_SUBC_vram_errinj_data_s0_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s0_lo_vram_errinj_data_s0_lo	GRPSUB_SUBC_vram_errinj_data_s0_lo  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S0_LO_VRAM_ERRINJ_DATA_S0_LO	GRPSUB_SUBC_vram_errinj_data_s0_lo_vram_errinj_data_s0_lo  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s0_lo{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s0_lo_t;

/* vram_errinj_ecc_s0_hi */
#define GRPSUB_SUBC_vram_errinj_ecc_s0_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s0_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S0_HI	(GRPSUB_SUBC_vram_errinj_ecc_s0_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s0_hi_vram_errinj_ecc_s0_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s0_hi.stcField.u20vram_errinj_ecc_s0_hi)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S0_HI_VRAM_ERRINJ_ECC_S0_HI	GRPSUB_SUBC_vram_errinj_ecc_s0_hi_vram_errinj_ecc_s0_hi  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s0_hi_field{
    uint_io32_t		u20vram_errinj_ecc_s0_hi:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s0_hi_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s0_hi{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s0_hi_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s0_hi_t;

/* vram_errinj_ecc_s0_lo */
#define GRPSUB_SUBC_vram_errinj_ecc_s0_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s0_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S0_LO	(GRPSUB_SUBC_vram_errinj_ecc_s0_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s0_lo_vram_errinj_ecc_s0_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s0_lo.stcField.u20vram_errinj_ecc_s0_lo)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S0_LO_VRAM_ERRINJ_ECC_S0_LO	GRPSUB_SUBC_vram_errinj_ecc_s0_lo_vram_errinj_ecc_s0_lo  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s0_lo_field{
    uint_io32_t		u20vram_errinj_ecc_s0_lo:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s0_lo_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s0_lo{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s0_lo_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s0_lo_t;

/* vram_errinj_data_s1_hi */
#define GRPSUB_SUBC_vram_errinj_data_s1_hi	(GRPSUB_SUBC.unvram_errinj_data_s1_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S1_HI	(GRPSUB_SUBC_vram_errinj_data_s1_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s1_hi_vram_errinj_data_s1_hi	GRPSUB_SUBC_vram_errinj_data_s1_hi  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S1_HI_VRAM_ERRINJ_DATA_S1_HI	GRPSUB_SUBC_vram_errinj_data_s1_hi_vram_errinj_data_s1_hi  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s1_hi{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s1_hi_t;

/* vram_errinj_data_s1_lo */
#define GRPSUB_SUBC_vram_errinj_data_s1_lo	(GRPSUB_SUBC.unvram_errinj_data_s1_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S1_LO	(GRPSUB_SUBC_vram_errinj_data_s1_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s1_lo_vram_errinj_data_s1_lo	GRPSUB_SUBC_vram_errinj_data_s1_lo  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S1_LO_VRAM_ERRINJ_DATA_S1_LO	GRPSUB_SUBC_vram_errinj_data_s1_lo_vram_errinj_data_s1_lo  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s1_lo{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s1_lo_t;

/* vram_errinj_ecc_s1_hi */
#define GRPSUB_SUBC_vram_errinj_ecc_s1_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s1_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S1_HI	(GRPSUB_SUBC_vram_errinj_ecc_s1_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s1_hi_vram_errinj_ecc_s1_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s1_hi.stcField.u20vram_errinj_ecc_s1_hi)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S1_HI_VRAM_ERRINJ_ECC_S1_HI	GRPSUB_SUBC_vram_errinj_ecc_s1_hi_vram_errinj_ecc_s1_hi  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s1_hi_field{
    uint_io32_t		u20vram_errinj_ecc_s1_hi:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s1_hi_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s1_hi{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s1_hi_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s1_hi_t;

/* vram_errinj_ecc_s1_lo */
#define GRPSUB_SUBC_vram_errinj_ecc_s1_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s1_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S1_LO	(GRPSUB_SUBC_vram_errinj_ecc_s1_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s1_lo_vram_errinj_ecc_s1_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s1_lo.stcField.u20vram_errinj_ecc_s1_lo)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S1_LO_VRAM_ERRINJ_ECC_S1_LO	GRPSUB_SUBC_vram_errinj_ecc_s1_lo_vram_errinj_ecc_s1_lo  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s1_lo_field{
    uint_io32_t		u20vram_errinj_ecc_s1_lo:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s1_lo_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s1_lo{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s1_lo_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s1_lo_t;

/* vram_errinj_data_s2_hi */
#define GRPSUB_SUBC_vram_errinj_data_s2_hi	(GRPSUB_SUBC.unvram_errinj_data_s2_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S2_HI	(GRPSUB_SUBC_vram_errinj_data_s2_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s2_hi_vram_errinj_data_s2_hi	GRPSUB_SUBC_vram_errinj_data_s2_hi  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S2_HI_VRAM_ERRINJ_DATA_S2_HI	GRPSUB_SUBC_vram_errinj_data_s2_hi_vram_errinj_data_s2_hi  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s2_hi{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s2_hi_t;

/* vram_errinj_data_s2_lo */
#define GRPSUB_SUBC_vram_errinj_data_s2_lo	(GRPSUB_SUBC.unvram_errinj_data_s2_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S2_LO	(GRPSUB_SUBC_vram_errinj_data_s2_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_data_s2_lo_vram_errinj_data_s2_lo	GRPSUB_SUBC_vram_errinj_data_s2_lo  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_DATA_S2_LO_VRAM_ERRINJ_DATA_S2_LO	GRPSUB_SUBC_vram_errinj_data_s2_lo_vram_errinj_data_s2_lo  /*@bf2@*/

typedef union un_grpsub_subc_vram_errinj_data_s2_lo{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_data_s2_lo_t;

/* vram_errinj_ecc_s2_hi */
#define GRPSUB_SUBC_vram_errinj_ecc_s2_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s2_hi.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S2_HI	(GRPSUB_SUBC_vram_errinj_ecc_s2_hi)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s2_hi_vram_errinj_ecc_s2_hi	(GRPSUB_SUBC.unvram_errinj_ecc_s2_hi.stcField.u20vram_errinj_ecc_s2_hi)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S2_HI_VRAM_ERRINJ_ECC_S2_HI	GRPSUB_SUBC_vram_errinj_ecc_s2_hi_vram_errinj_ecc_s2_hi  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s2_hi_field{
    uint_io32_t		u20vram_errinj_ecc_s2_hi:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s2_hi_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s2_hi{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s2_hi_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s2_hi_t;

/* vram_errinj_ecc_s2_lo */
#define GRPSUB_SUBC_vram_errinj_ecc_s2_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s2_lo.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S2_LO	(GRPSUB_SUBC_vram_errinj_ecc_s2_lo)  /*@rg2@*/
#define GRPSUB_SUBC_vram_errinj_ecc_s2_lo_vram_errinj_ecc_s2_lo	(GRPSUB_SUBC.unvram_errinj_ecc_s2_lo.stcField.u20vram_errinj_ecc_s2_lo)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ERRINJ_ECC_S2_LO_VRAM_ERRINJ_ECC_S2_LO	GRPSUB_SUBC_vram_errinj_ecc_s2_lo_vram_errinj_ecc_s2_lo  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_errinj_ecc_s2_lo_field{
    uint_io32_t		u20vram_errinj_ecc_s2_lo:20;
    uint_io32_t		:12;
}stc_grpsub_subc_vram_errinj_ecc_s2_lo_field_t;

typedef union un_grpsub_subc_vram_errinj_ecc_s2_lo{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_errinj_ecc_s2_lo_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_errinj_ecc_s2_lo_t;

/* vram_sberraddr_s0 */
#define GRPSUB_SUBC_vram_sberraddr_s0	(GRPSUB_SUBC.unvram_sberraddr_s0.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S0	(GRPSUB_SUBC_vram_sberraddr_s0)  /*@rg2@*/
#define GRPSUB_SUBC_vram_sberraddr_s0_vram_sberraddr_s0	GRPSUB_SUBC_vram_sberraddr_s0  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S0_VRAM_SBERRADDR_S0	GRPSUB_SUBC_vram_sberraddr_s0_vram_sberraddr_s0  /*@bf2@*/

typedef union un_grpsub_subc_vram_sberraddr_s0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_sberraddr_s0_t;

/* vram_sberraddr_s1 */
#define GRPSUB_SUBC_vram_sberraddr_s1	(GRPSUB_SUBC.unvram_sberraddr_s1.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S1	(GRPSUB_SUBC_vram_sberraddr_s1)  /*@rg2@*/
#define GRPSUB_SUBC_vram_sberraddr_s1_vram_sberraddr_s1	GRPSUB_SUBC_vram_sberraddr_s1  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S1_VRAM_SBERRADDR_S1	GRPSUB_SUBC_vram_sberraddr_s1_vram_sberraddr_s1  /*@bf2@*/

typedef union un_grpsub_subc_vram_sberraddr_s1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_sberraddr_s1_t;

/* vram_sberraddr_s2 */
#define GRPSUB_SUBC_vram_sberraddr_s2	(GRPSUB_SUBC.unvram_sberraddr_s2.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S2	(GRPSUB_SUBC_vram_sberraddr_s2)  /*@rg2@*/
#define GRPSUB_SUBC_vram_sberraddr_s2_vram_sberraddr_s2	GRPSUB_SUBC_vram_sberraddr_s2  /*@bfrg@*/
#define GRPSUB_SUBC_VRAM_SBERRADDR_S2_VRAM_SBERRADDR_S2	GRPSUB_SUBC_vram_sberraddr_s2_vram_sberraddr_s2  /*@bf2@*/

typedef union un_grpsub_subc_vram_sberraddr_s2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_sberraddr_s2_t;

/* vram_arbitor_priority */
#define GRPSUB_SUBC_vram_arbitor_priority	(GRPSUB_SUBC.unvram_arbitor_priority.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_VRAM_ARBITOR_PRIORITY	(GRPSUB_SUBC_vram_arbitor_priority)  /*@rg2@*/
#define GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s0_write	(GRPSUB_SUBC.unvram_arbitor_priority.stcField.u2vram_priority_s0_write)  /*@bf@*/
#define GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s0_read	(GRPSUB_SUBC.unvram_arbitor_priority.stcField.u2vram_priority_s0_read)  /*@bf@*/
#define GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s1_read	(GRPSUB_SUBC.unvram_arbitor_priority.stcField.u2vram_priority_s1_read)  /*@bf@*/
#define GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s2_read	(GRPSUB_SUBC.unvram_arbitor_priority.stcField.u2vram_priority_s2_read)  /*@bf@*/
#define GRPSUB_SUBC_VRAM_ARBITOR_PRIORITY_VRAM_PRIORITY_S0_WRITE	GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s0_write  /*@bf2@*/
#define GRPSUB_SUBC_VRAM_ARBITOR_PRIORITY_VRAM_PRIORITY_S0_READ	GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s0_read  /*@bf2@*/
#define GRPSUB_SUBC_VRAM_ARBITOR_PRIORITY_VRAM_PRIORITY_S1_READ	GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s1_read  /*@bf2@*/
#define GRPSUB_SUBC_VRAM_ARBITOR_PRIORITY_VRAM_PRIORITY_S2_READ	GRPSUB_SUBC_vram_arbitor_priority_vram_priority_s2_read  /*@bf2@*/

typedef struct stc_grpsub_subc_vram_arbitor_priority_field{
    uint_io32_t		u2vram_priority_s0_write:2;
    uint_io32_t		u2vram_priority_s0_read:2;
    uint_io32_t		u2vram_priority_s1_read:2;
    uint_io32_t		u2vram_priority_s2_read:2;
    uint_io32_t		:24;
}stc_grpsub_subc_vram_arbitor_priority_field_t;

typedef union un_grpsub_subc_vram_arbitor_priority{
    uint_io32_t		u32Register;
    stc_grpsub_subc_vram_arbitor_priority_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_vram_arbitor_priority_t;

/* hpm_LockUnlock */
#define GRPSUB_SUBC_hpm_LockUnlock	(GRPSUB_SUBC.unhpm_LockUnlock.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_HPM_LOCKUNLOCK	(GRPSUB_SUBC_hpm_LockUnlock)  /*@rg2@*/
#define GRPSUB_SUBC_hpm_LockUnlock_hpm_LockUnlock	GRPSUB_SUBC_hpm_LockUnlock  /*@bfrg@*/
#define GRPSUB_SUBC_HPM_LOCKUNLOCK_HPM_LOCKUNLOCK	GRPSUB_SUBC_hpm_LockUnlock_hpm_LockUnlock  /*@bf2@*/

typedef union un_grpsub_subc_hpm_lockunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_hpm_lockunlock_t;

/* hpm_LockStatus */
#define GRPSUB_SUBC_hpm_LockStatus	(GRPSUB_SUBC.unhpm_LockStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_HPM_LOCKSTATUS	(GRPSUB_SUBC_hpm_LockStatus)  /*@rg2@*/
#define GRPSUB_SUBC_hpm_LockStatus_hpm_LockStatus	(GRPSUB_SUBC.unhpm_LockStatus.stcField.u1hpm_LockStatus)  /*@bf@*/
#define GRPSUB_SUBC_hpm_LockStatus_hpm_PrivilegeStatus	(GRPSUB_SUBC.unhpm_LockStatus.stcField.u1hpm_PrivilegeStatus)  /*@bf@*/
#define GRPSUB_SUBC_hpm_LockStatus_hpm_FreezeStatus	(GRPSUB_SUBC.unhpm_LockStatus.stcField.u1hpm_FreezeStatus)  /*@bf@*/
#define GRPSUB_SUBC_HPM_LOCKSTATUS_HPM_LOCKSTATUS	GRPSUB_SUBC_hpm_LockStatus_hpm_LockStatus  /*@bf2@*/
#define GRPSUB_SUBC_HPM_LOCKSTATUS_HPM_PRIVILEGESTATUS	GRPSUB_SUBC_hpm_LockStatus_hpm_PrivilegeStatus  /*@bf2@*/
#define GRPSUB_SUBC_HPM_LOCKSTATUS_HPM_FREEZESTATUS	GRPSUB_SUBC_hpm_LockStatus_hpm_FreezeStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_hpm_lockstatus_field{
    uint_io32_t		u1hpm_LockStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1hpm_PrivilegeStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1hpm_FreezeStatus:1;
    uint_io32_t		:23;
}stc_grpsub_subc_hpm_lockstatus_field_t;

typedef union un_grpsub_subc_hpm_lockstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_hpm_lockstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_hpm_lockstatus_t;

/* cap1_bypass_en */
#define GRPSUB_SUBC_cap1_bypass_en	(GRPSUB_SUBC.uncap1_bypass_en.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_CAP1_BYPASS_EN	(GRPSUB_SUBC_cap1_bypass_en)  /*@rg2@*/
#define GRPSUB_SUBC_cap1_bypass_en_cap_bypass_en	(GRPSUB_SUBC.uncap1_bypass_en.stcField.u1cap_bypass_en)  /*@bf@*/
#define GRPSUB_SUBC_CAP1_BYPASS_EN_CAP_BYPASS_EN	GRPSUB_SUBC_cap1_bypass_en_cap_bypass_en  /*@bf2@*/

typedef struct stc_grpsub_subc_cap1_bypass_en_field{
    uint_io32_t		u1cap_bypass_en:1;
    uint_io32_t		:31;
}stc_grpsub_subc_cap1_bypass_en_field_t;

typedef union un_grpsub_subc_cap1_bypass_en{
    uint_io32_t		u32Register;
    stc_grpsub_subc_cap1_bypass_en_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_cap1_bypass_en_t;

/* ilaxibridge_LockUnlock */
#define GRPSUB_SUBC_ilaxibridge_LockUnlock	(GRPSUB_SUBC.unilaxibridge_LockUnlock.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK	(GRPSUB_SUBC_ilaxibridge_LockUnlock)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_LockUnlock_ilaxibridge_LockUnlock	GRPSUB_SUBC_ilaxibridge_LockUnlock  /*@bfrg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKUNLOCK_ILAXIBRIDGE_LOCKUNLOCK	GRPSUB_SUBC_ilaxibridge_LockUnlock_ilaxibridge_LockUnlock  /*@bf2@*/

typedef union un_grpsub_subc_ilaxibridge_lockunlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_lockunlock_t;

/* ilaxibridge_LockStatus */
#define GRPSUB_SUBC_ilaxibridge_LockStatus	(GRPSUB_SUBC.unilaxibridge_LockStatus.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKSTATUS	(GRPSUB_SUBC_ilaxibridge_LockStatus)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_LockStatus	(GRPSUB_SUBC.unilaxibridge_LockStatus.stcField.u1ilaxibridge_LockStatus)  /*@bf@*/
#define GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_PrivilegeStatus	(GRPSUB_SUBC.unilaxibridge_LockStatus.stcField.u1ilaxibridge_PrivilegeStatus)  /*@bf@*/
#define GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_FreezeStatus	(GRPSUB_SUBC.unilaxibridge_LockStatus.stcField.u1ilaxibridge_FreezeStatus)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKSTATUS_ILAXIBRIDGE_LOCKSTATUS	GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_LockStatus  /*@bf2@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKSTATUS_ILAXIBRIDGE_PRIVILEGESTATUS	GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_PrivilegeStatus  /*@bf2@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_LOCKSTATUS_ILAXIBRIDGE_FREEZESTATUS	GRPSUB_SUBC_ilaxibridge_LockStatus_ilaxibridge_FreezeStatus  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_lockstatus_field{
    uint_io32_t		u1ilaxibridge_LockStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1ilaxibridge_PrivilegeStatus:1;
    uint_io32_t		:3;
    uint_io32_t		u1ilaxibridge_FreezeStatus:1;
    uint_io32_t		:23;
}stc_grpsub_subc_ilaxibridge_lockstatus_field_t;

typedef union un_grpsub_subc_ilaxibridge_lockstatus{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_lockstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_lockstatus_t;

/* ilaxibridge_StartMaster0Region0 */
#define GRPSUB_SUBC_ilaxibridge_StartMaster0Region0	(GRPSUB_SUBC.unilaxibridge_StartMaster0Region0.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER0REGION0	(GRPSUB_SUBC_ilaxibridge_StartMaster0Region0)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_StartMaster0Region0_ilaxibridge_StartMaster0Region0	(GRPSUB_SUBC.unilaxibridge_StartMaster0Region0.stcField.u16ilaxibridge_StartMaster0Region0)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER0REGION0_ILAXIBRIDGE_STARTMASTER0REGION0	GRPSUB_SUBC_ilaxibridge_StartMaster0Region0_ilaxibridge_StartMaster0Region0  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_startmaster0region0_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_StartMaster0Region0:16;
}stc_grpsub_subc_ilaxibridge_startmaster0region0_field_t;

typedef union un_grpsub_subc_ilaxibridge_startmaster0region0{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_startmaster0region0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_startmaster0region0_t;

/* ilaxibridge_EndMaster0Region0 */
#define GRPSUB_SUBC_ilaxibridge_EndMaster0Region0	(GRPSUB_SUBC.unilaxibridge_EndMaster0Region0.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION0	(GRPSUB_SUBC_ilaxibridge_EndMaster0Region0)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_EndMaster0Region0_ilaxibridge_EndMaster0Region0	(GRPSUB_SUBC.unilaxibridge_EndMaster0Region0.stcField.u16ilaxibridge_EndMaster0Region0)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION0_ILAXIBRIDGE_ENDMASTER0REGION0	GRPSUB_SUBC_ilaxibridge_EndMaster0Region0_ilaxibridge_EndMaster0Region0  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_endmaster0region0_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_EndMaster0Region0:16;
}stc_grpsub_subc_ilaxibridge_endmaster0region0_field_t;

typedef union un_grpsub_subc_ilaxibridge_endmaster0region0{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_endmaster0region0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_endmaster0region0_t;

/* ilaxibridge_StartMaster0Region1 */
#define GRPSUB_SUBC_ilaxibridge_StartMaster0Region1	(GRPSUB_SUBC.unilaxibridge_StartMaster0Region1.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER0REGION1	(GRPSUB_SUBC_ilaxibridge_StartMaster0Region1)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_StartMaster0Region1_ilaxibridge_StartMaster0Region1	(GRPSUB_SUBC.unilaxibridge_StartMaster0Region1.stcField.u16ilaxibridge_StartMaster0Region1)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER0REGION1_ILAXIBRIDGE_STARTMASTER0REGION1	GRPSUB_SUBC_ilaxibridge_StartMaster0Region1_ilaxibridge_StartMaster0Region1  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_startmaster0region1_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_StartMaster0Region1:16;
}stc_grpsub_subc_ilaxibridge_startmaster0region1_field_t;

typedef union un_grpsub_subc_ilaxibridge_startmaster0region1{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_startmaster0region1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_startmaster0region1_t;

/* ilaxibridge_EndMaster0Region1 */
#define GRPSUB_SUBC_ilaxibridge_EndMaster0Region1	(GRPSUB_SUBC.unilaxibridge_EndMaster0Region1.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION1	(GRPSUB_SUBC_ilaxibridge_EndMaster0Region1)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_EndMaster0Region1_ilaxibridge_EndMaster0Region1	(GRPSUB_SUBC.unilaxibridge_EndMaster0Region1.stcField.u16ilaxibridge_EndMaster0Region1)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER0REGION1_ILAXIBRIDGE_ENDMASTER0REGION1	GRPSUB_SUBC_ilaxibridge_EndMaster0Region1_ilaxibridge_EndMaster0Region1  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_endmaster0region1_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_EndMaster0Region1:16;
}stc_grpsub_subc_ilaxibridge_endmaster0region1_field_t;

typedef union un_grpsub_subc_ilaxibridge_endmaster0region1{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_endmaster0region1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_endmaster0region1_t;

/* ilaxibridge_StartMaster1Region0 */
#define GRPSUB_SUBC_ilaxibridge_StartMaster1Region0	(GRPSUB_SUBC.unilaxibridge_StartMaster1Region0.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER1REGION0	(GRPSUB_SUBC_ilaxibridge_StartMaster1Region0)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_StartMaster1Region0_ilaxibridge_StartMaster1Region0	(GRPSUB_SUBC.unilaxibridge_StartMaster1Region0.stcField.u16ilaxibridge_StartMaster1Region0)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER1REGION0_ILAXIBRIDGE_STARTMASTER1REGION0	GRPSUB_SUBC_ilaxibridge_StartMaster1Region0_ilaxibridge_StartMaster1Region0  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_startmaster1region0_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_StartMaster1Region0:16;
}stc_grpsub_subc_ilaxibridge_startmaster1region0_field_t;

typedef union un_grpsub_subc_ilaxibridge_startmaster1region0{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_startmaster1region0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_startmaster1region0_t;

/* ilaxibridge_EndMaster1Region0 */
#define GRPSUB_SUBC_ilaxibridge_EndMaster1Region0	(GRPSUB_SUBC.unilaxibridge_EndMaster1Region0.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER1REGION0	(GRPSUB_SUBC_ilaxibridge_EndMaster1Region0)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_EndMaster1Region0_ilaxibridge_EndMaster1Region0	(GRPSUB_SUBC.unilaxibridge_EndMaster1Region0.stcField.u16ilaxibridge_EndMaster1Region0)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER1REGION0_ILAXIBRIDGE_ENDMASTER1REGION0	GRPSUB_SUBC_ilaxibridge_EndMaster1Region0_ilaxibridge_EndMaster1Region0  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_endmaster1region0_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_EndMaster1Region0:16;
}stc_grpsub_subc_ilaxibridge_endmaster1region0_field_t;

typedef union un_grpsub_subc_ilaxibridge_endmaster1region0{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_endmaster1region0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_endmaster1region0_t;

/* ilaxibridge_StartMaster1Region1 */
#define GRPSUB_SUBC_ilaxibridge_StartMaster1Region1	(GRPSUB_SUBC.unilaxibridge_StartMaster1Region1.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER1REGION1	(GRPSUB_SUBC_ilaxibridge_StartMaster1Region1)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_StartMaster1Region1_ilaxibridge_StartMaster1Region1	(GRPSUB_SUBC.unilaxibridge_StartMaster1Region1.stcField.u16ilaxibridge_StartMaster1Region1)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_STARTMASTER1REGION1_ILAXIBRIDGE_STARTMASTER1REGION1	GRPSUB_SUBC_ilaxibridge_StartMaster1Region1_ilaxibridge_StartMaster1Region1  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_startmaster1region1_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_StartMaster1Region1:16;
}stc_grpsub_subc_ilaxibridge_startmaster1region1_field_t;

typedef union un_grpsub_subc_ilaxibridge_startmaster1region1{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_startmaster1region1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_startmaster1region1_t;

/* ilaxibridge_EndMaster1Region1 */
#define GRPSUB_SUBC_ilaxibridge_EndMaster1Region1	(GRPSUB_SUBC.unilaxibridge_EndMaster1Region1.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER1REGION1	(GRPSUB_SUBC_ilaxibridge_EndMaster1Region1)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_EndMaster1Region1_ilaxibridge_EndMaster1Region1	(GRPSUB_SUBC.unilaxibridge_EndMaster1Region1.stcField.u16ilaxibridge_EndMaster1Region1)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_ENDMASTER1REGION1_ILAXIBRIDGE_ENDMASTER1REGION1	GRPSUB_SUBC_ilaxibridge_EndMaster1Region1_ilaxibridge_EndMaster1Region1  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_endmaster1region1_field{
    uint_io32_t		:16;
    uint_io32_t		u16ilaxibridge_EndMaster1Region1:16;
}stc_grpsub_subc_ilaxibridge_endmaster1region1_field_t;

typedef union un_grpsub_subc_ilaxibridge_endmaster1region1{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_endmaster1region1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_endmaster1region1_t;

/* ilaxibridge_InterleavingStepSize */
#define GRPSUB_SUBC_ilaxibridge_InterleavingStepSize	(GRPSUB_SUBC.unilaxibridge_InterleavingStepSize.u32Register)  /*@rg@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_INTERLEAVINGSTEPSIZE	(GRPSUB_SUBC_ilaxibridge_InterleavingStepSize)  /*@rg2@*/
#define GRPSUB_SUBC_ilaxibridge_InterleavingStepSize_ilaxibridge_InterleavingStepSize0	(GRPSUB_SUBC.unilaxibridge_InterleavingStepSize.stcField.u2ilaxibridge_InterleavingStepSize0)  /*@bf@*/
#define GRPSUB_SUBC_ilaxibridge_InterleavingStepSize_ilaxibridge_InterleavingStepSize1	(GRPSUB_SUBC.unilaxibridge_InterleavingStepSize.stcField.u2ilaxibridge_InterleavingStepSize1)  /*@bf@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_INTERLEAVINGSTEPSIZE_ILAXIBRIDGE_INTERLEAVINGSTEPSIZE0	GRPSUB_SUBC_ilaxibridge_InterleavingStepSize_ilaxibridge_InterleavingStepSize0  /*@bf2@*/
#define GRPSUB_SUBC_ILAXIBRIDGE_INTERLEAVINGSTEPSIZE_ILAXIBRIDGE_INTERLEAVINGSTEPSIZE1	GRPSUB_SUBC_ilaxibridge_InterleavingStepSize_ilaxibridge_InterleavingStepSize1  /*@bf2@*/

typedef struct stc_grpsub_subc_ilaxibridge_interleavingstepsize_field{
    uint_io32_t		u2ilaxibridge_InterleavingStepSize0:2;
    uint_io32_t		:2;
    uint_io32_t		u2ilaxibridge_InterleavingStepSize1:2;
    uint_io32_t		:26;
}stc_grpsub_subc_ilaxibridge_interleavingstepsize_field_t;

typedef union un_grpsub_subc_ilaxibridge_interleavingstepsize{
    uint_io32_t		u32Register;
    stc_grpsub_subc_ilaxibridge_interleavingstepsize_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_subc_ilaxibridge_interleavingstepsize_t;


typedef struct stc_grpsub_subc{
    un_grpsub_subc_lockunlock_t	unLockUnlock;	/* 0x00000000 */
    un_grpsub_subc_lockstatus_t	unLockStatus;	/* 0x00000004 */
    un_grpsub_subc_ipidentifier_t	unIPIdentifier;	/* 0x00000008 */
    un_grpsub_subc_configclockcontrol_t	unConfigClockControl;	/* 0x0000000C */
    un_grpsub_subc_vraminterruptenable_t	unVRamInterruptEnable;	/* 0x00000010 */
    un_grpsub_subc_vraminterruptpreset_t	unVRamInterruptPreset;	/* 0x00000014 */
    un_grpsub_subc_vraminterruptclear_t	unVRamInterruptClear;	/* 0x00000018 */
    un_grpsub_subc_vraminterruptstatus_t	unVRamInterruptStatus;	/* 0x0000001C */
    uint_io8_t	au8Reserved0[32];	/* 0x00000020 */
    un_grpsub_subc_dsp_lockunlock_t	undsp_LockUnlock;	/* 0x00000040 */
    un_grpsub_subc_dsp_lockstatus_t	undsp_LockStatus;	/* 0x00000044 */
    un_grpsub_subc_dsp0_clockdivider_t	undsp0_ClockDivider;	/* 0x00000048 */
    un_grpsub_subc_dsp0_domaincontrol_t	undsp0_DomainControl;	/* 0x0000004C */
    un_grpsub_subc_dsp0_clockshift_t	undsp0_ClockShift;	/* 0x00000050 */
    un_grpsub_subc_dsp0_clockmeasurementcontrol_t	undsp0_ClockMeasurementControl;	/* 0x00000054 */
    un_grpsub_subc_dsp0_clockmeasurementstatus_t	undsp0_ClockMeasurementStatus;	/* 0x00000058 */
    un_grpsub_subc_dsp0_clockmeasurementresult_t	undsp0_ClockMeasurementResult;	/* 0x0000005C */
    un_grpsub_subc_dsp1_clockdivider_t	undsp1_ClockDivider;	/* 0x00000060 */
    un_grpsub_subc_dsp1_domaincontrol_t	undsp1_DomainControl;	/* 0x00000064 */
    un_grpsub_subc_dsp1_clockshift_t	undsp1_ClockShift;	/* 0x00000068 */
    un_grpsub_subc_dsp1_clockmeasurementcontrol_t	undsp1_ClockMeasurementControl;	/* 0x0000006C */
    un_grpsub_subc_dsp1_clockmeasurementstatus_t	undsp1_ClockMeasurementStatus;	/* 0x00000070 */
    un_grpsub_subc_dsp1_clockmeasurementresult_t	undsp1_ClockMeasurementResult;	/* 0x00000074 */
    uint_io8_t	au8Reserved1[136];	/* 0x00000078 */
    un_grpsub_subc_vram_lockunlock_t	unvram_LockUnlock;	/* 0x00000100 */
    un_grpsub_subc_vram_lockstatus_t	unvram_LockStatus;	/* 0x00000104 */
    un_grpsub_subc_vram_sram_select_t	unvram_sram_select;	/* 0x00000108 */
    un_grpsub_subc_vram_errinj_data_s0_hi_t	unvram_errinj_data_s0_hi;	/* 0x0000010C */
    un_grpsub_subc_vram_errinj_data_s0_lo_t	unvram_errinj_data_s0_lo;	/* 0x00000110 */
    un_grpsub_subc_vram_errinj_ecc_s0_hi_t	unvram_errinj_ecc_s0_hi;	/* 0x00000114 */
    un_grpsub_subc_vram_errinj_ecc_s0_lo_t	unvram_errinj_ecc_s0_lo;	/* 0x00000118 */
    un_grpsub_subc_vram_errinj_data_s1_hi_t	unvram_errinj_data_s1_hi;	/* 0x0000011C */
    un_grpsub_subc_vram_errinj_data_s1_lo_t	unvram_errinj_data_s1_lo;	/* 0x00000120 */
    un_grpsub_subc_vram_errinj_ecc_s1_hi_t	unvram_errinj_ecc_s1_hi;	/* 0x00000124 */
    un_grpsub_subc_vram_errinj_ecc_s1_lo_t	unvram_errinj_ecc_s1_lo;	/* 0x00000128 */
    un_grpsub_subc_vram_errinj_data_s2_hi_t	unvram_errinj_data_s2_hi;	/* 0x0000012C */
    un_grpsub_subc_vram_errinj_data_s2_lo_t	unvram_errinj_data_s2_lo;	/* 0x00000130 */
    un_grpsub_subc_vram_errinj_ecc_s2_hi_t	unvram_errinj_ecc_s2_hi;	/* 0x00000134 */
    un_grpsub_subc_vram_errinj_ecc_s2_lo_t	unvram_errinj_ecc_s2_lo;	/* 0x00000138 */
    un_grpsub_subc_vram_sberraddr_s0_t	unvram_sberraddr_s0;	/* 0x0000013C */
    un_grpsub_subc_vram_sberraddr_s1_t	unvram_sberraddr_s1;	/* 0x00000140 */
    un_grpsub_subc_vram_sberraddr_s2_t	unvram_sberraddr_s2;	/* 0x00000144 */
    un_grpsub_subc_vram_arbitor_priority_t	unvram_arbitor_priority;	/* 0x00000148 */
    uint_io8_t	au8Reserved2[436];	/* 0x0000014C */
    un_grpsub_subc_hpm_lockunlock_t	unhpm_LockUnlock;	/* 0x00000300 */
    un_grpsub_subc_hpm_lockstatus_t	unhpm_LockStatus;	/* 0x00000304 */
    uint_io8_t	au8Reserved3[4];	/* 0x00000308 */
    un_grpsub_subc_cap1_bypass_en_t	uncap1_bypass_en;	/* 0x0000030C */
    uint_io8_t	au8Reserved4[112];	/* 0x00000310 */
    un_grpsub_subc_ilaxibridge_lockunlock_t	unilaxibridge_LockUnlock;	/* 0x00000380 */
    un_grpsub_subc_ilaxibridge_lockstatus_t	unilaxibridge_LockStatus;	/* 0x00000384 */
    un_grpsub_subc_ilaxibridge_startmaster0region0_t	unilaxibridge_StartMaster0Region0;	/* 0x00000388 */
    un_grpsub_subc_ilaxibridge_endmaster0region0_t	unilaxibridge_EndMaster0Region0;	/* 0x0000038C */
    un_grpsub_subc_ilaxibridge_startmaster0region1_t	unilaxibridge_StartMaster0Region1;	/* 0x00000390 */
    un_grpsub_subc_ilaxibridge_endmaster0region1_t	unilaxibridge_EndMaster0Region1;	/* 0x00000394 */
    un_grpsub_subc_ilaxibridge_startmaster1region0_t	unilaxibridge_StartMaster1Region0;	/* 0x00000398 */
    un_grpsub_subc_ilaxibridge_endmaster1region0_t	unilaxibridge_EndMaster1Region0;	/* 0x0000039C */
    un_grpsub_subc_ilaxibridge_startmaster1region1_t	unilaxibridge_StartMaster1Region1;	/* 0x000003A0 */
    un_grpsub_subc_ilaxibridge_endmaster1region1_t	unilaxibridge_EndMaster1Region1;	/* 0x000003A4 */
    un_grpsub_subc_ilaxibridge_interleavingstepsize_t	unilaxibridge_InterleavingStepSize;	/* 0x000003A8 */
    uint_io8_t	au8Reserved5[84];	/* 0x000003AC */
}stc_grpsub_subc_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_subc_t	stcGRPSUB_SUBC;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_CAP base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_CAP_1	stcGRPSUB_MPUX_CAP_1
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_CAP_1	(*((volatile stc_grpsub_mpux_cap_1_t*)0x50210C00))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_CAP_CTRL0	(GRPSUB_MPUX_CAP_1.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL0_0	(GRPSUB_MPUX_CAP_1.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_CAP_CTRL0_1	(GRPSUB_MPUX_CAP_1.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_CAP_CTRL0_2	(GRPSUB_MPUX_CAP_1.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_CAP_CTRL0_3	(GRPSUB_MPUX_CAP_1.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_CAP_CTRL0_NMI	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_NMICL	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_LST	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_MPUSTOP	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_POEN	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_PROT	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL0_AP	(GRPSUB_MPUX_CAP_1.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_cap_1_ctrl0_field_t;

typedef union un_grpsub_mpux_cap_1_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cap_1_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_CAP_NMIEN	(GRPSUB_MPUX_CAP_1.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_NMIEN_NMIEN	(GRPSUB_MPUX_CAP_1.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_cap_1_nmien_field_t;

typedef union un_grpsub_mpux_cap_1_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cap_1_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_CAP_WERRC	(GRPSUB_MPUX_CAP_1.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_WERRC_AWMPV	(GRPSUB_MPUX_CAP_1.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_CAP_WERRC_AWPROTPRIV	(GRPSUB_MPUX_CAP_1.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_CAP_WERRC_AWLEN	(GRPSUB_MPUX_CAP_1.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_WERRC_AWBURST	(GRPSUB_MPUX_CAP_1.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_CAP_WERRC_AWSIZE	(GRPSUB_MPUX_CAP_1.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_cap_1_werrc_field_t;

typedef union un_grpsub_mpux_cap_1_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cap_1_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_CAP_WERRA	(GRPSUB_MPUX_CAP_1.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_WERRA_AWADDR	GRPSUB_MPUX_CAP_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_werra_t;

/* RERRC */
#define GRPSUB_MPUX_CAP_RERRC	(GRPSUB_MPUX_CAP_1.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_RERRC_ARMPV	(GRPSUB_MPUX_CAP_1.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_CAP_RERRC_ARPROTPRIV	(GRPSUB_MPUX_CAP_1.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_CAP_RERRC_ARLEN	(GRPSUB_MPUX_CAP_1.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_RERRC_ARBURST	(GRPSUB_MPUX_CAP_1.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_CAP_RERRC_ARSIZE	(GRPSUB_MPUX_CAP_1.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_cap_1_rerrc_field_t;

typedef union un_grpsub_mpux_cap_1_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cap_1_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_CAP_RERRA	(GRPSUB_MPUX_CAP_1.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_RERRA_ARADDR	GRPSUB_MPUX_CAP_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_CAP_CTRL1_0	(GRPSUB_MPUX_CAP_1.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL1_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL1_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL2_0	(GRPSUB_MPUX_CAP_1.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL2_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL2_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL3_0	(GRPSUB_MPUX_CAP_1.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL3_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL3_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL4_0	(GRPSUB_MPUX_CAP_1.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL4_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL4_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL5_0	(GRPSUB_MPUX_CAP_1.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL5_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL5_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL6_0	(GRPSUB_MPUX_CAP_1.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL6_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL6_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL7_0	(GRPSUB_MPUX_CAP_1.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL7_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL7_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL8_0	(GRPSUB_MPUX_CAP_1.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL8_0_MPUEN	(GRPSUB_MPUX_CAP_1.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CAP_CTRL8_0_MPUENC	(GRPSUB_MPUX_CAP_1.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_cap_1_ctrln_0_field_t;

typedef union un_grpsub_mpux_cap_1_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_cap_1_ctrln_0_field_t		stcField;
}un_grpsub_mpux_cap_1_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_CAP_CTRL1_1	(GRPSUB_MPUX_CAP_1.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL1_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL2_1	(GRPSUB_MPUX_CAP_1.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL2_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL3_1	(GRPSUB_MPUX_CAP_1.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL3_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL4_1	(GRPSUB_MPUX_CAP_1.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL4_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL5_1	(GRPSUB_MPUX_CAP_1.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL5_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL6_1	(GRPSUB_MPUX_CAP_1.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL6_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL7_1	(GRPSUB_MPUX_CAP_1.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL7_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CAP_CTRL8_1	(GRPSUB_MPUX_CAP_1.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_CTRL8_1_AP	(GRPSUB_MPUX_CAP_1.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_cap_1_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_cap_1_ctrln_1_field_t;

typedef union un_grpsub_mpux_cap_1_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_cap_1_ctrln_1_field_t		stcField;
}un_grpsub_mpux_cap_1_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_CAP_SADDR1	(GRPSUB_MPUX_CAP_1.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR1_SADDR	GRPSUB_MPUX_CAP_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR2	(GRPSUB_MPUX_CAP_1.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR2_SADDR	GRPSUB_MPUX_CAP_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR3	(GRPSUB_MPUX_CAP_1.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR3_SADDR	GRPSUB_MPUX_CAP_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR4	(GRPSUB_MPUX_CAP_1.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR4_SADDR	GRPSUB_MPUX_CAP_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR5	(GRPSUB_MPUX_CAP_1.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR5_SADDR	GRPSUB_MPUX_CAP_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR6	(GRPSUB_MPUX_CAP_1.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR6_SADDR	GRPSUB_MPUX_CAP_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR7	(GRPSUB_MPUX_CAP_1.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR7_SADDR	GRPSUB_MPUX_CAP_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_SADDR8	(GRPSUB_MPUX_CAP_1.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_SADDR8_SADDR	GRPSUB_MPUX_CAP_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_CAP_EADDR1	(GRPSUB_MPUX_CAP_1.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR1_EADDR	GRPSUB_MPUX_CAP_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR2	(GRPSUB_MPUX_CAP_1.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR2_EADDR	GRPSUB_MPUX_CAP_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR3	(GRPSUB_MPUX_CAP_1.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR3_EADDR	GRPSUB_MPUX_CAP_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR4	(GRPSUB_MPUX_CAP_1.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR4_EADDR	GRPSUB_MPUX_CAP_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR5	(GRPSUB_MPUX_CAP_1.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR5_EADDR	GRPSUB_MPUX_CAP_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR6	(GRPSUB_MPUX_CAP_1.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR6_EADDR	GRPSUB_MPUX_CAP_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR7	(GRPSUB_MPUX_CAP_1.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR7_EADDR	GRPSUB_MPUX_CAP_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_CAP_EADDR8	(GRPSUB_MPUX_CAP_1.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_EADDR8_EADDR	GRPSUB_MPUX_CAP_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_CAP_UNLOCK	(GRPSUB_MPUX_CAP_1.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_UNLOCK_UNLOCK	GRPSUB_MPUX_CAP_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_unlock_t;

/* MID */
#define GRPSUB_MPUX_CAP_MID	(GRPSUB_MPUX_CAP_1.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CAP_MID_MID	GRPSUB_MPUX_CAP_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_cap_1_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cap_1_mid_t;


typedef struct stc_grpsub_mpux_cap_1{
    un_grpsub_mpux_cap_1_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_cap_1_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_cap_1_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_cap_1_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_cap_1_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_cap_1_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_cap_1_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_cap_1_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_cap_1_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_cap_1_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_cap_1_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_cap_1_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_cap_1_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_cap_1_t	stcGRPSUB_MPUX_CAP_1;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_BLT base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_BLT_2	stcGRPSUB_MPUX_BLT_2
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_BLT_2	(*((volatile stc_grpsub_mpux_blt_2_t*)0x50211000))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_BLT_CTRL0	(GRPSUB_MPUX_BLT_2.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL0_0	(GRPSUB_MPUX_BLT_2.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_BLT_CTRL0_1	(GRPSUB_MPUX_BLT_2.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_BLT_CTRL0_2	(GRPSUB_MPUX_BLT_2.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_BLT_CTRL0_3	(GRPSUB_MPUX_BLT_2.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_BLT_CTRL0_NMI	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_NMICL	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_LST	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_MPUSTOP	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_POEN	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_PROT	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL0_AP	(GRPSUB_MPUX_BLT_2.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_blt_2_ctrl0_field_t;

typedef union un_grpsub_mpux_blt_2_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_blt_2_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_BLT_NMIEN	(GRPSUB_MPUX_BLT_2.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_NMIEN_NMIEN	(GRPSUB_MPUX_BLT_2.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_blt_2_nmien_field_t;

typedef union un_grpsub_mpux_blt_2_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_blt_2_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_BLT_WERRC	(GRPSUB_MPUX_BLT_2.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_WERRC_AWMPV	(GRPSUB_MPUX_BLT_2.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_BLT_WERRC_AWPROTPRIV	(GRPSUB_MPUX_BLT_2.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_BLT_WERRC_AWLEN	(GRPSUB_MPUX_BLT_2.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_WERRC_AWBURST	(GRPSUB_MPUX_BLT_2.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_BLT_WERRC_AWSIZE	(GRPSUB_MPUX_BLT_2.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_blt_2_werrc_field_t;

typedef union un_grpsub_mpux_blt_2_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_blt_2_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_BLT_WERRA	(GRPSUB_MPUX_BLT_2.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_WERRA_AWADDR	GRPSUB_MPUX_BLT_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_werra_t;

/* RERRC */
#define GRPSUB_MPUX_BLT_RERRC	(GRPSUB_MPUX_BLT_2.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_RERRC_ARMPV	(GRPSUB_MPUX_BLT_2.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_BLT_RERRC_ARPROTPRIV	(GRPSUB_MPUX_BLT_2.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_BLT_RERRC_ARLEN	(GRPSUB_MPUX_BLT_2.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_RERRC_ARBURST	(GRPSUB_MPUX_BLT_2.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_BLT_RERRC_ARSIZE	(GRPSUB_MPUX_BLT_2.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_blt_2_rerrc_field_t;

typedef union un_grpsub_mpux_blt_2_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_blt_2_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_BLT_RERRA	(GRPSUB_MPUX_BLT_2.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_RERRA_ARADDR	GRPSUB_MPUX_BLT_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_BLT_CTRL1_0	(GRPSUB_MPUX_BLT_2.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL1_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL1_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL2_0	(GRPSUB_MPUX_BLT_2.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL2_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL2_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL3_0	(GRPSUB_MPUX_BLT_2.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL3_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL3_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL4_0	(GRPSUB_MPUX_BLT_2.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL4_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL4_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL5_0	(GRPSUB_MPUX_BLT_2.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL5_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL5_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL6_0	(GRPSUB_MPUX_BLT_2.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL6_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL6_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL7_0	(GRPSUB_MPUX_BLT_2.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL7_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL7_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL8_0	(GRPSUB_MPUX_BLT_2.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL8_0_MPUEN	(GRPSUB_MPUX_BLT_2.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_BLT_CTRL8_0_MPUENC	(GRPSUB_MPUX_BLT_2.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_blt_2_ctrln_0_field_t;

typedef union un_grpsub_mpux_blt_2_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_blt_2_ctrln_0_field_t		stcField;
}un_grpsub_mpux_blt_2_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_BLT_CTRL1_1	(GRPSUB_MPUX_BLT_2.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL1_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL2_1	(GRPSUB_MPUX_BLT_2.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL2_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL3_1	(GRPSUB_MPUX_BLT_2.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL3_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL4_1	(GRPSUB_MPUX_BLT_2.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL4_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL5_1	(GRPSUB_MPUX_BLT_2.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL5_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL6_1	(GRPSUB_MPUX_BLT_2.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL6_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL7_1	(GRPSUB_MPUX_BLT_2.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL7_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_BLT_CTRL8_1	(GRPSUB_MPUX_BLT_2.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_CTRL8_1_AP	(GRPSUB_MPUX_BLT_2.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_blt_2_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_blt_2_ctrln_1_field_t;

typedef union un_grpsub_mpux_blt_2_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_blt_2_ctrln_1_field_t		stcField;
}un_grpsub_mpux_blt_2_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_BLT_SADDR1	(GRPSUB_MPUX_BLT_2.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR1_SADDR	GRPSUB_MPUX_BLT_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR2	(GRPSUB_MPUX_BLT_2.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR2_SADDR	GRPSUB_MPUX_BLT_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR3	(GRPSUB_MPUX_BLT_2.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR3_SADDR	GRPSUB_MPUX_BLT_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR4	(GRPSUB_MPUX_BLT_2.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR4_SADDR	GRPSUB_MPUX_BLT_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR5	(GRPSUB_MPUX_BLT_2.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR5_SADDR	GRPSUB_MPUX_BLT_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR6	(GRPSUB_MPUX_BLT_2.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR6_SADDR	GRPSUB_MPUX_BLT_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR7	(GRPSUB_MPUX_BLT_2.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR7_SADDR	GRPSUB_MPUX_BLT_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_SADDR8	(GRPSUB_MPUX_BLT_2.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_SADDR8_SADDR	GRPSUB_MPUX_BLT_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_BLT_EADDR1	(GRPSUB_MPUX_BLT_2.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR1_EADDR	GRPSUB_MPUX_BLT_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR2	(GRPSUB_MPUX_BLT_2.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR2_EADDR	GRPSUB_MPUX_BLT_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR3	(GRPSUB_MPUX_BLT_2.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR3_EADDR	GRPSUB_MPUX_BLT_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR4	(GRPSUB_MPUX_BLT_2.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR4_EADDR	GRPSUB_MPUX_BLT_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR5	(GRPSUB_MPUX_BLT_2.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR5_EADDR	GRPSUB_MPUX_BLT_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR6	(GRPSUB_MPUX_BLT_2.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR6_EADDR	GRPSUB_MPUX_BLT_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR7	(GRPSUB_MPUX_BLT_2.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR7_EADDR	GRPSUB_MPUX_BLT_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_BLT_EADDR8	(GRPSUB_MPUX_BLT_2.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_EADDR8_EADDR	GRPSUB_MPUX_BLT_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_BLT_UNLOCK	(GRPSUB_MPUX_BLT_2.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_UNLOCK_UNLOCK	GRPSUB_MPUX_BLT_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_unlock_t;

/* MID */
#define GRPSUB_MPUX_BLT_MID	(GRPSUB_MPUX_BLT_2.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_BLT_MID_MID	GRPSUB_MPUX_BLT_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_blt_2_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_blt_2_mid_t;


typedef struct stc_grpsub_mpux_blt_2{
    un_grpsub_mpux_blt_2_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_blt_2_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_blt_2_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_blt_2_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_blt_2_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_blt_2_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_blt_2_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_blt_2_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_blt_2_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_blt_2_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_blt_2_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_blt_2_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_blt_2_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_blt_2_t	stcGRPSUB_MPUX_BLT_2;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_DRW base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_DRW_3	stcGRPSUB_MPUX_DRW_3
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_DRW_3	(*((volatile stc_grpsub_mpux_drw_3_t*)0x50211400))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_DRW_CTRL0	(GRPSUB_MPUX_DRW_3.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL0_0	(GRPSUB_MPUX_DRW_3.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_DRW_CTRL0_1	(GRPSUB_MPUX_DRW_3.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_DRW_CTRL0_2	(GRPSUB_MPUX_DRW_3.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_DRW_CTRL0_3	(GRPSUB_MPUX_DRW_3.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_DRW_CTRL0_NMI	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_NMICL	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_LST	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_MPUSTOP	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_POEN	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_PROT	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL0_AP	(GRPSUB_MPUX_DRW_3.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_drw_3_ctrl0_field_t;

typedef union un_grpsub_mpux_drw_3_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_drw_3_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_DRW_NMIEN	(GRPSUB_MPUX_DRW_3.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_NMIEN_NMIEN	(GRPSUB_MPUX_DRW_3.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_drw_3_nmien_field_t;

typedef union un_grpsub_mpux_drw_3_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_drw_3_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_DRW_WERRC	(GRPSUB_MPUX_DRW_3.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_WERRC_AWMPV	(GRPSUB_MPUX_DRW_3.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_DRW_WERRC_AWPROTPRIV	(GRPSUB_MPUX_DRW_3.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_DRW_WERRC_AWLEN	(GRPSUB_MPUX_DRW_3.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_WERRC_AWBURST	(GRPSUB_MPUX_DRW_3.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_DRW_WERRC_AWSIZE	(GRPSUB_MPUX_DRW_3.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_drw_3_werrc_field_t;

typedef union un_grpsub_mpux_drw_3_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_drw_3_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_DRW_WERRA	(GRPSUB_MPUX_DRW_3.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_WERRA_AWADDR	GRPSUB_MPUX_DRW_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_werra_t;

/* RERRC */
#define GRPSUB_MPUX_DRW_RERRC	(GRPSUB_MPUX_DRW_3.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_RERRC_ARMPV	(GRPSUB_MPUX_DRW_3.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_DRW_RERRC_ARPROTPRIV	(GRPSUB_MPUX_DRW_3.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_DRW_RERRC_ARLEN	(GRPSUB_MPUX_DRW_3.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_RERRC_ARBURST	(GRPSUB_MPUX_DRW_3.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_DRW_RERRC_ARSIZE	(GRPSUB_MPUX_DRW_3.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_drw_3_rerrc_field_t;

typedef union un_grpsub_mpux_drw_3_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_drw_3_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_DRW_RERRA	(GRPSUB_MPUX_DRW_3.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_RERRA_ARADDR	GRPSUB_MPUX_DRW_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_DRW_CTRL1_0	(GRPSUB_MPUX_DRW_3.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL1_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL1_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL2_0	(GRPSUB_MPUX_DRW_3.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL2_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL2_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL3_0	(GRPSUB_MPUX_DRW_3.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL3_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL3_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL4_0	(GRPSUB_MPUX_DRW_3.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL4_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL4_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL5_0	(GRPSUB_MPUX_DRW_3.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL5_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL5_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL6_0	(GRPSUB_MPUX_DRW_3.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL6_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL6_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL7_0	(GRPSUB_MPUX_DRW_3.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL7_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL7_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL8_0	(GRPSUB_MPUX_DRW_3.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL8_0_MPUEN	(GRPSUB_MPUX_DRW_3.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_DRW_CTRL8_0_MPUENC	(GRPSUB_MPUX_DRW_3.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_drw_3_ctrln_0_field_t;

typedef union un_grpsub_mpux_drw_3_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_drw_3_ctrln_0_field_t		stcField;
}un_grpsub_mpux_drw_3_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_DRW_CTRL1_1	(GRPSUB_MPUX_DRW_3.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL1_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL2_1	(GRPSUB_MPUX_DRW_3.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL2_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL3_1	(GRPSUB_MPUX_DRW_3.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL3_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL4_1	(GRPSUB_MPUX_DRW_3.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL4_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL5_1	(GRPSUB_MPUX_DRW_3.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL5_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL6_1	(GRPSUB_MPUX_DRW_3.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL6_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL7_1	(GRPSUB_MPUX_DRW_3.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL7_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_DRW_CTRL8_1	(GRPSUB_MPUX_DRW_3.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_CTRL8_1_AP	(GRPSUB_MPUX_DRW_3.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_drw_3_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_drw_3_ctrln_1_field_t;

typedef union un_grpsub_mpux_drw_3_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_drw_3_ctrln_1_field_t		stcField;
}un_grpsub_mpux_drw_3_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_DRW_SADDR1	(GRPSUB_MPUX_DRW_3.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR1_SADDR	GRPSUB_MPUX_DRW_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR2	(GRPSUB_MPUX_DRW_3.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR2_SADDR	GRPSUB_MPUX_DRW_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR3	(GRPSUB_MPUX_DRW_3.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR3_SADDR	GRPSUB_MPUX_DRW_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR4	(GRPSUB_MPUX_DRW_3.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR4_SADDR	GRPSUB_MPUX_DRW_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR5	(GRPSUB_MPUX_DRW_3.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR5_SADDR	GRPSUB_MPUX_DRW_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR6	(GRPSUB_MPUX_DRW_3.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR6_SADDR	GRPSUB_MPUX_DRW_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR7	(GRPSUB_MPUX_DRW_3.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR7_SADDR	GRPSUB_MPUX_DRW_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_SADDR8	(GRPSUB_MPUX_DRW_3.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_SADDR8_SADDR	GRPSUB_MPUX_DRW_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_DRW_EADDR1	(GRPSUB_MPUX_DRW_3.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR1_EADDR	GRPSUB_MPUX_DRW_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR2	(GRPSUB_MPUX_DRW_3.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR2_EADDR	GRPSUB_MPUX_DRW_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR3	(GRPSUB_MPUX_DRW_3.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR3_EADDR	GRPSUB_MPUX_DRW_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR4	(GRPSUB_MPUX_DRW_3.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR4_EADDR	GRPSUB_MPUX_DRW_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR5	(GRPSUB_MPUX_DRW_3.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR5_EADDR	GRPSUB_MPUX_DRW_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR6	(GRPSUB_MPUX_DRW_3.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR6_EADDR	GRPSUB_MPUX_DRW_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR7	(GRPSUB_MPUX_DRW_3.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR7_EADDR	GRPSUB_MPUX_DRW_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_DRW_EADDR8	(GRPSUB_MPUX_DRW_3.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_EADDR8_EADDR	GRPSUB_MPUX_DRW_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_DRW_UNLOCK	(GRPSUB_MPUX_DRW_3.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_UNLOCK_UNLOCK	GRPSUB_MPUX_DRW_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_unlock_t;

/* MID */
#define GRPSUB_MPUX_DRW_MID	(GRPSUB_MPUX_DRW_3.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_DRW_MID_MID	GRPSUB_MPUX_DRW_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_drw_3_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_drw_3_mid_t;


typedef struct stc_grpsub_mpux_drw_3{
    un_grpsub_mpux_drw_3_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_drw_3_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_drw_3_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_drw_3_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_drw_3_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_drw_3_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_drw_3_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_drw_3_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_drw_3_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_drw_3_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_drw_3_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_drw_3_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_drw_3_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_drw_3_t	stcGRPSUB_MPUX_DRW_3;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_DDRHSSPI base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_DDRHSSPI_4	stcGRPSUB_DDRHSSPI_4
#else /* __IO_DEFINE */
#define GRPSUB_DDRHSSPI_4	(*((volatile stc_grpsub_ddrhsspi_4_t*)0x50212000))
#endif /* __IO_DEFINE */

/* MCTRL */
#define GRPSUB_DDRHSSPI_MCTRL	(GRPSUB_DDRHSSPI_4.unMCTRL.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_MCTRL_MEN	(GRPSUB_DDRHSSPI_4.unMCTRL.stcField.u1MEN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_MCTRL_CSEN	(GRPSUB_DDRHSSPI_4.unMCTRL.stcField.u1CSEN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_MCTRL_MES	(GRPSUB_DDRHSSPI_4.unMCTRL.stcField.u1MES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_MCTRL_DLPEN	(GRPSUB_DDRHSSPI_4.unMCTRL.stcField.u1DLPEN)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_mctrl_field{
    uint_io32_t		u1MEN:1;
    uint_io32_t		u1CSEN:1;
    uint_io32_t		:2;
    uint_io32_t		u1MES:1;
    uint_io32_t		u1DLPEN:1;
    uint_io32_t		:26;
}stc_grpsub_ddrhsspi_4_mctrl_field_t;

typedef union un_grpsub_ddrhsspi_4_mctrl{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_mctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_mctrl_t;

/* PCC[0-3] */
#define GRPSUB_DDRHSSPI_PCC0	(GRPSUB_DDRHSSPI_4.unPCC0.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_PCC0_ACES	(GRPSUB_DDRHSSPI_4.unPCC0.stcField.u1ACES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC0_SS2CD	(GRPSUB_DDRHSSPI_4.unPCC0.stcField.u2SS2CD)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC0_CDRS	(GRPSUB_DDRHSSPI_4.unPCC0.stcField.u4CDRS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC0_SSELDEASRT	(GRPSUB_DDRHSSPI_4.unPCC0.stcField.u5SSELDEASRT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_PCC1	(GRPSUB_DDRHSSPI_4.unPCC1.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_PCC1_ACES	(GRPSUB_DDRHSSPI_4.unPCC1.stcField.u1ACES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC1_SS2CD	(GRPSUB_DDRHSSPI_4.unPCC1.stcField.u2SS2CD)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC1_CDRS	(GRPSUB_DDRHSSPI_4.unPCC1.stcField.u4CDRS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC1_SSELDEASRT	(GRPSUB_DDRHSSPI_4.unPCC1.stcField.u5SSELDEASRT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_PCC2	(GRPSUB_DDRHSSPI_4.unPCC2.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_PCC2_ACES	(GRPSUB_DDRHSSPI_4.unPCC2.stcField.u1ACES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC2_SS2CD	(GRPSUB_DDRHSSPI_4.unPCC2.stcField.u2SS2CD)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC2_CDRS	(GRPSUB_DDRHSSPI_4.unPCC2.stcField.u4CDRS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC2_SSELDEASRT	(GRPSUB_DDRHSSPI_4.unPCC2.stcField.u5SSELDEASRT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_PCC3	(GRPSUB_DDRHSSPI_4.unPCC3.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_PCC3_ACES	(GRPSUB_DDRHSSPI_4.unPCC3.stcField.u1ACES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC3_SS2CD	(GRPSUB_DDRHSSPI_4.unPCC3.stcField.u2SS2CD)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC3_CDRS	(GRPSUB_DDRHSSPI_4.unPCC3.stcField.u4CDRS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_PCC3_SSELDEASRT	(GRPSUB_DDRHSSPI_4.unPCC3.stcField.u5SSELDEASRT)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_pccn_field{
    uint_io32_t		:2;
    uint_io32_t		u1ACES:1;
    uint_io32_t		:2;
    uint_io32_t		u2SS2CD:2;
    uint_io32_t		:2;
    uint_io32_t		u4CDRS:4;
    uint_io32_t		:3;
    uint_io32_t		u5SSELDEASRT:5;
    uint_io32_t		:11;
}stc_grpsub_ddrhsspi_4_pccn_field_t;

typedef union un_grpsub_ddrhsspi_4_pccn{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_pccn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_pccn_t;

/* TXF */
#define GRPSUB_DDRHSSPI_TXF	(GRPSUB_DDRHSSPI_4.unTXF.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXF_TFFS	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TFFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXF_TFES	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TFES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXF_TFOS	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TFOS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXF_TFLETS	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TFLETS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXF_TFMTS	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TFMTS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXF_TSSRS	(GRPSUB_DDRHSSPI_4.unTXF.stcField.u1TSSRS)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_txf_field{
    uint_io32_t		u1TFFS:1;
    uint_io32_t		u1TFES:1;
    uint_io32_t		u1TFOS:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETS:1;
    uint_io32_t		u1TFMTS:1;
    uint_io32_t		u1TSSRS:1;
    uint_io32_t		:25;
}stc_grpsub_ddrhsspi_4_txf_field_t;

typedef union un_grpsub_ddrhsspi_4_txf{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_txf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_txf_t;

/* TXE */
#define GRPSUB_DDRHSSPI_TXE	(GRPSUB_DDRHSSPI_4.unTXE.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXE_TFFE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TFFE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXE_TFEE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TFEE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXE_TFOE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TFOE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXE_TFLETE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TFLETE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXE_TFMTE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TFMTE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXE_TSSRE	(GRPSUB_DDRHSSPI_4.unTXE.stcField.u1TSSRE)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_txe_field{
    uint_io32_t		u1TFFE:1;
    uint_io32_t		u1TFEE:1;
    uint_io32_t		u1TFOE:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETE:1;
    uint_io32_t		u1TFMTE:1;
    uint_io32_t		u1TSSRE:1;
    uint_io32_t		:25;
}stc_grpsub_ddrhsspi_4_txe_field_t;

typedef union un_grpsub_ddrhsspi_4_txe{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_txe_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_txe_t;

/* TXC */
#define GRPSUB_DDRHSSPI_TXC	(GRPSUB_DDRHSSPI_4.unTXC.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXC_TFFC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TFFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXC_TFEC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TFEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXC_TFOC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TFOC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXC_TFLETC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TFLETC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXC_TFMTC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TFMTC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_TXC_TSSRC	(GRPSUB_DDRHSSPI_4.unTXC.stcField.u1TSSRC)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_txc_field{
    uint_io32_t		u1TFFC:1;
    uint_io32_t		u1TFEC:1;
    uint_io32_t		u1TFOC:1;
    uint_io32_t		:1;
    uint_io32_t		u1TFLETC:1;
    uint_io32_t		u1TFMTC:1;
    uint_io32_t		u1TSSRC:1;
    uint_io32_t		:25;
}stc_grpsub_ddrhsspi_4_txc_field_t;

typedef union un_grpsub_ddrhsspi_4_txc{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_txc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_txc_t;

/* RXF */
#define GRPSUB_DDRHSSPI_RXF	(GRPSUB_DDRHSSPI_4.unRXF.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXF_RFFS	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RFFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_RFES	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RFES)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_RFUS	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RFUS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_RFLETS	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RFLETS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_RFMTS	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RFMTS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_RSSRS	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1RSSRS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_DLPERR	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1DLPERR)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXF_TEST	(GRPSUB_DDRHSSPI_4.unRXF.stcField.u1TEST)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_rxf_field{
    uint_io32_t		u1RFFS:1;
    uint_io32_t		u1RFES:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUS:1;
    uint_io32_t		u1RFLETS:1;
    uint_io32_t		u1RFMTS:1;
    uint_io32_t		u1RSSRS:1;
    uint_io32_t		u1DLPERR:1;
    uint_io32_t		u1TEST:1;
    uint_io32_t		:23;
}stc_grpsub_ddrhsspi_4_rxf_field_t;

typedef union un_grpsub_ddrhsspi_4_rxf{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_rxf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_rxf_t;

/* RXE */
#define GRPSUB_DDRHSSPI_RXE	(GRPSUB_DDRHSSPI_4.unRXE.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXE_RFFE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RFFE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_RFEE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RFEE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_RFUE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RFUE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_RFLETE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RFLETE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_RFMTE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RFMTE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_RSSRE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1RSSRE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXE_DLPERRE	(GRPSUB_DDRHSSPI_4.unRXE.stcField.u1DLPERRE)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_rxe_field{
    uint_io32_t		u1RFFE:1;
    uint_io32_t		u1RFEE:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUE:1;
    uint_io32_t		u1RFLETE:1;
    uint_io32_t		u1RFMTE:1;
    uint_io32_t		u1RSSRE:1;
    uint_io32_t		u1DLPERRE:1;
    uint_io32_t		:24;
}stc_grpsub_ddrhsspi_4_rxe_field_t;

typedef union un_grpsub_ddrhsspi_4_rxe{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_rxe_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_rxe_t;

/* RXC */
#define GRPSUB_DDRHSSPI_RXC	(GRPSUB_DDRHSSPI_4.unRXC.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXC_RFFC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RFFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_RFEC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RFEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_RFUC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RFUC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_RFLETC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RFLETC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_RFMTC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RFMTC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_RSSRC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1RSSRC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RXC_DLPERRC	(GRPSUB_DDRHSSPI_4.unRXC.stcField.u1DLPERRC)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_rxc_field{
    uint_io32_t		u1RFFC:1;
    uint_io32_t		u1RFEC:1;
    uint_io32_t		:1;
    uint_io32_t		u1RFUC:1;
    uint_io32_t		u1RFLETC:1;
    uint_io32_t		u1RFMTC:1;
    uint_io32_t		u1RSSRC:1;
    uint_io32_t		u1DLPERRC:1;
    uint_io32_t		:24;
}stc_grpsub_ddrhsspi_4_rxc_field_t;

typedef union un_grpsub_ddrhsspi_4_rxc{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_rxc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_rxc_t;

/* FAULTF */
#define GRPSUB_DDRHSSPI_FAULTF	(GRPSUB_DDRHSSPI_4.unFAULTF.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_FAULTF_UMAFS	(GRPSUB_DDRHSSPI_4.unFAULTF.stcField.u1UMAFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTF_PVFS	(GRPSUB_DDRHSSPI_4.unFAULTF.stcField.u1PVFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTF_DWCBSFS	(GRPSUB_DDRHSSPI_4.unFAULTF.stcField.u1DWCBSFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTF_DRCBSFS	(GRPSUB_DDRHSSPI_4.unFAULTF.stcField.u1DRCBSFS)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTF_DLPFS	(GRPSUB_DDRHSSPI_4.unFAULTF.stcField.u1DLPFS)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_faultf_field{
    uint_io32_t		u1UMAFS:1;
    uint_io32_t		:1;
    uint_io32_t		u1PVFS:1;
    uint_io32_t		u1DWCBSFS:1;
    uint_io32_t		u1DRCBSFS:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPFS:1;
    uint_io32_t		:25;
}stc_grpsub_ddrhsspi_4_faultf_field_t;

typedef union un_grpsub_ddrhsspi_4_faultf{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_faultf_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_faultf_t;

/* FAULTC */
#define GRPSUB_DDRHSSPI_FAULTC	(GRPSUB_DDRHSSPI_4.unFAULTC.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_FAULTC_UMAFC	(GRPSUB_DDRHSSPI_4.unFAULTC.stcField.u1UMAFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTC_PVFC	(GRPSUB_DDRHSSPI_4.unFAULTC.stcField.u1PVFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTC_DWCBSFC	(GRPSUB_DDRHSSPI_4.unFAULTC.stcField.u1DWCBSFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTC_DRCBSFC	(GRPSUB_DDRHSSPI_4.unFAULTC.stcField.u1DRCBSFC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_FAULTC_DLPFC	(GRPSUB_DDRHSSPI_4.unFAULTC.stcField.u1DLPFC)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_faultc_field{
    uint_io32_t		u1UMAFC:1;
    uint_io32_t		:1;
    uint_io32_t		u1PVFC:1;
    uint_io32_t		u1DWCBSFC:1;
    uint_io32_t		u1DRCBSFC:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPFC:1;
    uint_io32_t		:25;
}stc_grpsub_ddrhsspi_4_faultc_field_t;

typedef union un_grpsub_ddrhsspi_4_faultc{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_faultc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_faultc_t;

/* DMCFG */
#define GRPSUB_DDRHSSPI_DMCFG	(GRPSUB_DDRHSSPI_4.unDMCFG.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMCFG_SSDC	(GRPSUB_DDRHSSPI_4.unDMCFG.stcField.u1SSDC)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmcfg_field{
    uint_io8_t		:1;
    uint_io8_t		u1SSDC:1;
    uint_io8_t		:6;
}stc_grpsub_ddrhsspi_4_dmcfg_field_t;

typedef union un_grpsub_ddrhsspi_4_dmcfg{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_dmcfg_field_t		stcField;
}un_grpsub_ddrhsspi_4_dmcfg_t;

/* DMAEN */
#define GRPSUB_DDRHSSPI_DMAEN	(GRPSUB_DDRHSSPI_4.unDMAEN.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMAEN_RXDMAEN	(GRPSUB_DDRHSSPI_4.unDMAEN.stcField.u1RXDMAEN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMAEN_TXDMAEN	(GRPSUB_DDRHSSPI_4.unDMAEN.stcField.u1TXDMAEN)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmaen_field{
    uint_io8_t		u1RXDMAEN:1;
    uint_io8_t		u1TXDMAEN:1;
    uint_io8_t		:6;
}stc_grpsub_ddrhsspi_4_dmaen_field_t;

typedef union un_grpsub_ddrhsspi_4_dmaen{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_dmaen_field_t		stcField;
}un_grpsub_ddrhsspi_4_dmaen_t;

/* DMSTART */
#define GRPSUB_DDRHSSPI_DMSTART	(GRPSUB_DDRHSSPI_4.unDMSTART.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMSTART_START	(GRPSUB_DDRHSSPI_4.unDMSTART.stcField.u1START)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmstart_field{
    uint_io8_t		u1START:1;
    uint_io8_t		:7;
}stc_grpsub_ddrhsspi_4_dmstart_field_t;

typedef union un_grpsub_ddrhsspi_4_dmstart{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_dmstart_field_t		stcField;
}un_grpsub_ddrhsspi_4_dmstart_t;

/* DMPSEL */
#define GRPSUB_DDRHSSPI_DMPSEL	(GRPSUB_DDRHSSPI_4.unDMPSEL.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMPSEL_PSEL	(GRPSUB_DDRHSSPI_4.unDMPSEL.stcField.u2PSEL)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmpsel_field{
    uint_io8_t		u2PSEL:2;
    uint_io8_t		:6;
}stc_grpsub_ddrhsspi_4_dmpsel_field_t;

typedef union un_grpsub_ddrhsspi_4_dmpsel{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_dmpsel_field_t		stcField;
}un_grpsub_ddrhsspi_4_dmpsel_t;

/* DMTRP */
#define GRPSUB_DDRHSSPI_DMTRP	(GRPSUB_DDRHSSPI_4.unDMTRP.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMTRP_TRP	(GRPSUB_DDRHSSPI_4.unDMTRP.stcField.u4TRP)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMTRP_DDRM	(GRPSUB_DDRHSSPI_4.unDMTRP.stcField.u1DDRM)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmtrp_field{
    uint_io8_t		u4TRP:4;
    uint_io8_t		:1;
    uint_io8_t		u1DDRM:1;
    uint_io8_t		:2;
}stc_grpsub_ddrhsspi_4_dmtrp_field_t;

typedef union un_grpsub_ddrhsspi_4_dmtrp{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_dmtrp_field_t		stcField;
}un_grpsub_ddrhsspi_4_dmtrp_t;

/* DMBCC */
#define GRPSUB_DDRHSSPI_DMBCC	(GRPSUB_DDRHSSPI_4.unDMBCC.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMBCC_BCC	GRPSUB_DDRHSSPI_DMBCC  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_dmbcc{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_grpsub_ddrhsspi_4_dmbcc_t;

/* DMBCS */
#define GRPSUB_DDRHSSPI_DMBCS	(GRPSUB_DDRHSSPI_4.unDMBCS.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMBCS_BCS	GRPSUB_DDRHSSPI_DMBCS  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_dmbcs{
    uint_io16_t		u16Register;
    uint_io8_t		au8Byte[2];
}un_grpsub_ddrhsspi_4_dmbcs_t;

/* DMFIFOSTATUS */
#define GRPSUB_DDRHSSPI_DMFIFOSTATUS	(GRPSUB_DDRHSSPI_4.unDMFIFOSTATUS.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMFIFOSTATUS_RXFLEVEL	(GRPSUB_DDRHSSPI_4.unDMFIFOSTATUS.stcField.u5RXFLEVEL)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOSTATUS_TXFLEVEL	(GRPSUB_DDRHSSPI_4.unDMFIFOSTATUS.stcField.u5TXFLEVEL)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOSTATUS_SSACTIVE	(GRPSUB_DDRHSSPI_4.unDMFIFOSTATUS.stcField.u1SSACTIVE)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmfifostatus_field{
    uint_io32_t		u5RXFLEVEL:5;
    uint_io32_t		:3;
    uint_io32_t		u5TXFLEVEL:5;
    uint_io32_t		:3;
    uint_io32_t		u1SSACTIVE:1;
    uint_io32_t		:15;
}stc_grpsub_ddrhsspi_4_dmfifostatus_field_t;

typedef union un_grpsub_ddrhsspi_4_dmfifostatus{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_dmfifostatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_dmfifostatus_t;

/* DMFIFOCFG */
#define GRPSUB_DDRHSSPI_DMFIFOCFG	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_RXFTH	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u5RXFTH)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_TXFTH	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u5TXFTH)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_FWIDTH	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u2FWIDTH)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_TXCTRL	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u1TXCTRL)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_RXFLSH	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u1RXFLSH)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DMFIFOCFG_TXFLSH	(GRPSUB_DDRHSSPI_4.unDMFIFOCFG.stcField.u1TXFLSH)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dmfifocfg_field{
    uint_io32_t		u5RXFTH:5;
    uint_io32_t		:3;
    uint_io32_t		u5TXFTH:5;
    uint_io32_t		:3;
    uint_io32_t		u2FWIDTH:2;
    uint_io32_t		u1TXCTRL:1;
    uint_io32_t		u1RXFLSH:1;
    uint_io32_t		u1TXFLSH:1;
    uint_io32_t		:11;
}stc_grpsub_ddrhsspi_4_dmfifocfg_field_t;

typedef union un_grpsub_ddrhsspi_4_dmfifocfg{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_dmfifocfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_dmfifocfg_t;

/* TXFIFO[0-23] */
#define GRPSUB_DDRHSSPI_TXFIFO0	(GRPSUB_DDRHSSPI_4.unTXFIFO0.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO0_TXDATA	GRPSUB_DDRHSSPI_TXFIFO0  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO1	(GRPSUB_DDRHSSPI_4.unTXFIFO1.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO1_TXDATA	GRPSUB_DDRHSSPI_TXFIFO1  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO2	(GRPSUB_DDRHSSPI_4.unTXFIFO2.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO2_TXDATA	GRPSUB_DDRHSSPI_TXFIFO2  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO3	(GRPSUB_DDRHSSPI_4.unTXFIFO3.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO3_TXDATA	GRPSUB_DDRHSSPI_TXFIFO3  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO4	(GRPSUB_DDRHSSPI_4.unTXFIFO4.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO4_TXDATA	GRPSUB_DDRHSSPI_TXFIFO4  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO5	(GRPSUB_DDRHSSPI_4.unTXFIFO5.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO5_TXDATA	GRPSUB_DDRHSSPI_TXFIFO5  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO6	(GRPSUB_DDRHSSPI_4.unTXFIFO6.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO6_TXDATA	GRPSUB_DDRHSSPI_TXFIFO6  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO7	(GRPSUB_DDRHSSPI_4.unTXFIFO7.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO7_TXDATA	GRPSUB_DDRHSSPI_TXFIFO7  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO8	(GRPSUB_DDRHSSPI_4.unTXFIFO8.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO8_TXDATA	GRPSUB_DDRHSSPI_TXFIFO8  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO9	(GRPSUB_DDRHSSPI_4.unTXFIFO9.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO9_TXDATA	GRPSUB_DDRHSSPI_TXFIFO9  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO10	(GRPSUB_DDRHSSPI_4.unTXFIFO10.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO10_TXDATA	GRPSUB_DDRHSSPI_TXFIFO10  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO11	(GRPSUB_DDRHSSPI_4.unTXFIFO11.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO11_TXDATA	GRPSUB_DDRHSSPI_TXFIFO11  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO12	(GRPSUB_DDRHSSPI_4.unTXFIFO12.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO12_TXDATA	GRPSUB_DDRHSSPI_TXFIFO12  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO13	(GRPSUB_DDRHSSPI_4.unTXFIFO13.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO13_TXDATA	GRPSUB_DDRHSSPI_TXFIFO13  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO14	(GRPSUB_DDRHSSPI_4.unTXFIFO14.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO14_TXDATA	GRPSUB_DDRHSSPI_TXFIFO14  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO15	(GRPSUB_DDRHSSPI_4.unTXFIFO15.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO15_TXDATA	GRPSUB_DDRHSSPI_TXFIFO15  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO16	(GRPSUB_DDRHSSPI_4.unTXFIFO16.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO16_TXDATA	GRPSUB_DDRHSSPI_TXFIFO16  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO17	(GRPSUB_DDRHSSPI_4.unTXFIFO17.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO17_TXDATA	GRPSUB_DDRHSSPI_TXFIFO17  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO18	(GRPSUB_DDRHSSPI_4.unTXFIFO18.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO18_TXDATA	GRPSUB_DDRHSSPI_TXFIFO18  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO19	(GRPSUB_DDRHSSPI_4.unTXFIFO19.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO19_TXDATA	GRPSUB_DDRHSSPI_TXFIFO19  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO20	(GRPSUB_DDRHSSPI_4.unTXFIFO20.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO20_TXDATA	GRPSUB_DDRHSSPI_TXFIFO20  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO21	(GRPSUB_DDRHSSPI_4.unTXFIFO21.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO21_TXDATA	GRPSUB_DDRHSSPI_TXFIFO21  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO22	(GRPSUB_DDRHSSPI_4.unTXFIFO22.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO22_TXDATA	GRPSUB_DDRHSSPI_TXFIFO22  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_TXFIFO23	(GRPSUB_DDRHSSPI_4.unTXFIFO23.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_TXFIFO23_TXDATA	GRPSUB_DDRHSSPI_TXFIFO23  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_txfifon{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_txfifon_t;

/* RXFIFO[0-23] */
#define GRPSUB_DDRHSSPI_RXFIFO0	(GRPSUB_DDRHSSPI_4.unRXFIFO0.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO0_RXDATA	GRPSUB_DDRHSSPI_RXFIFO0  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO1	(GRPSUB_DDRHSSPI_4.unRXFIFO1.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO1_RXDATA	GRPSUB_DDRHSSPI_RXFIFO1  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO2	(GRPSUB_DDRHSSPI_4.unRXFIFO2.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO2_RXDATA	GRPSUB_DDRHSSPI_RXFIFO2  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO3	(GRPSUB_DDRHSSPI_4.unRXFIFO3.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO3_RXDATA	GRPSUB_DDRHSSPI_RXFIFO3  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO4	(GRPSUB_DDRHSSPI_4.unRXFIFO4.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO4_RXDATA	GRPSUB_DDRHSSPI_RXFIFO4  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO5	(GRPSUB_DDRHSSPI_4.unRXFIFO5.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO5_RXDATA	GRPSUB_DDRHSSPI_RXFIFO5  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO6	(GRPSUB_DDRHSSPI_4.unRXFIFO6.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO6_RXDATA	GRPSUB_DDRHSSPI_RXFIFO6  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO7	(GRPSUB_DDRHSSPI_4.unRXFIFO7.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO7_RXDATA	GRPSUB_DDRHSSPI_RXFIFO7  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO8	(GRPSUB_DDRHSSPI_4.unRXFIFO8.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO8_RXDATA	GRPSUB_DDRHSSPI_RXFIFO8  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO9	(GRPSUB_DDRHSSPI_4.unRXFIFO9.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO9_RXDATA	GRPSUB_DDRHSSPI_RXFIFO9  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO10	(GRPSUB_DDRHSSPI_4.unRXFIFO10.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO10_RXDATA	GRPSUB_DDRHSSPI_RXFIFO10  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO11	(GRPSUB_DDRHSSPI_4.unRXFIFO11.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO11_RXDATA	GRPSUB_DDRHSSPI_RXFIFO11  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO12	(GRPSUB_DDRHSSPI_4.unRXFIFO12.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO12_RXDATA	GRPSUB_DDRHSSPI_RXFIFO12  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO13	(GRPSUB_DDRHSSPI_4.unRXFIFO13.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO13_RXDATA	GRPSUB_DDRHSSPI_RXFIFO13  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO14	(GRPSUB_DDRHSSPI_4.unRXFIFO14.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO14_RXDATA	GRPSUB_DDRHSSPI_RXFIFO14  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO15	(GRPSUB_DDRHSSPI_4.unRXFIFO15.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO15_RXDATA	GRPSUB_DDRHSSPI_RXFIFO15  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO16	(GRPSUB_DDRHSSPI_4.unRXFIFO16.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO16_RXDATA	GRPSUB_DDRHSSPI_RXFIFO16  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO17	(GRPSUB_DDRHSSPI_4.unRXFIFO17.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO17_RXDATA	GRPSUB_DDRHSSPI_RXFIFO17  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO18	(GRPSUB_DDRHSSPI_4.unRXFIFO18.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO18_RXDATA	GRPSUB_DDRHSSPI_RXFIFO18  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO19	(GRPSUB_DDRHSSPI_4.unRXFIFO19.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO19_RXDATA	GRPSUB_DDRHSSPI_RXFIFO19  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO20	(GRPSUB_DDRHSSPI_4.unRXFIFO20.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO20_RXDATA	GRPSUB_DDRHSSPI_RXFIFO20  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO21	(GRPSUB_DDRHSSPI_4.unRXFIFO21.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO21_RXDATA	GRPSUB_DDRHSSPI_RXFIFO21  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO22	(GRPSUB_DDRHSSPI_4.unRXFIFO22.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO22_RXDATA	GRPSUB_DDRHSSPI_RXFIFO22  /*@bfrg@*/

#define GRPSUB_DDRHSSPI_RXFIFO23	(GRPSUB_DDRHSSPI_4.unRXFIFO23.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RXFIFO23_RXDATA	GRPSUB_DDRHSSPI_RXFIFO23  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_rxfifon{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_rxfifon_t;

/* RDCSDC[0-11] */
#define GRPSUB_DDRHSSPI_RDCSDC0	(GRPSUB_DDRHSSPI_4.unRDCSDC0.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC0_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC0.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC0_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC0.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC1	(GRPSUB_DDRHSSPI_4.unRDCSDC1.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC1_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC1.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC1_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC1.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC2	(GRPSUB_DDRHSSPI_4.unRDCSDC2.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC2_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC2.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC2_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC2.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC3	(GRPSUB_DDRHSSPI_4.unRDCSDC3.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC3_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC3.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC3_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC3.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC4	(GRPSUB_DDRHSSPI_4.unRDCSDC4.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC4_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC4.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC4_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC4.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC5	(GRPSUB_DDRHSSPI_4.unRDCSDC5.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC5_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC5.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC5_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC5.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC6	(GRPSUB_DDRHSSPI_4.unRDCSDC6.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC6_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC6.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC6_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC6.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC7	(GRPSUB_DDRHSSPI_4.unRDCSDC7.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC7_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC7.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC7_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC7.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC8	(GRPSUB_DDRHSSPI_4.unRDCSDC8.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC8_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC8.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC8_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC8.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC9	(GRPSUB_DDRHSSPI_4.unRDCSDC9.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC9_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC9.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC9_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC9.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC10	(GRPSUB_DDRHSSPI_4.unRDCSDC10.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC10_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC10.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC10_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC10.au8Byte[1])  /*@bfbyte@*/

#define GRPSUB_DDRHSSPI_RDCSDC11	(GRPSUB_DDRHSSPI_4.unRDCSDC11.u16Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_RDCSDC11_DEC	(GRPSUB_DDRHSSPI_4.unRDCSDC11.stcField.u1DEC)  /*@bf@*/
#define GRPSUB_DDRHSSPI_RDCSDC11_RDCSDATA	(GRPSUB_DDRHSSPI_4.unRDCSDC11.au8Byte[1])  /*@bfbyte@*/

typedef struct stc_grpsub_ddrhsspi_4_rdcsdcn_field{
    uint_io16_t		u1DEC:1;
    uint_io16_t		:7;
    uint_io16_t		u8RDCSDATA:8;
}stc_grpsub_ddrhsspi_4_rdcsdcn_field_t;

typedef union un_grpsub_ddrhsspi_4_rdcsdcn{
    uint_io16_t		u16Register;
    stc_grpsub_ddrhsspi_4_rdcsdcn_field_t		stcField;
    uint_io8_t		au8Byte[2];
}un_grpsub_ddrhsspi_4_rdcsdcn_t;

/* MID */
#define GRPSUB_DDRHSSPI_MID	(GRPSUB_DDRHSSPI_4.unMID.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_MID_MID	GRPSUB_DDRHSSPI_MID  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_mid_t;

/* CSPREFETCHADDR */
#define GRPSUB_DDRHSSPI_CSPREFETCHADDR	(GRPSUB_DDRHSSPI_4.unCSPREFETCHADDR.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSPREFETCHADDR_PRFADDR	GRPSUB_DDRHSSPI_CSPREFETCHADDR  /*@bfrg@*/

typedef union un_grpsub_ddrhsspi_4_csprefetchaddr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_csprefetchaddr_t;

/* SDATASAMPLEPTCNT[0-7] */
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT0	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT0.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT0_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT0.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT1	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT1.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT1_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT1.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT2	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT2.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT2_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT2.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT3	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT3.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT3_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT3.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT4	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT4.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT4_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT4.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT5	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT5.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT5_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT5.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT6	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT6.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT6_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT6.stcField.u7SDATASMPTCNT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT7	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT7.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTCNT7_SDATASMPTCNT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTCNT7.stcField.u7SDATASMPTCNT)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_sdatasampleptcntn_field{
    uint_io8_t		u7SDATASMPTCNT:7;
    uint_io8_t		:1;
}stc_grpsub_ddrhsspi_4_sdatasampleptcntn_field_t;

typedef union un_grpsub_ddrhsspi_4_sdatasampleptcntn{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_sdatasampleptcntn_field_t		stcField;
}un_grpsub_ddrhsspi_4_sdatasampleptcntn_t;

/* SDATASAMPLEPTLFT[0-7] */
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT0	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT0.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT0_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT0.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT1	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT1.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT1_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT1.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT2	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT2.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT2_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT2.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT3	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT3.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT3_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT3.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT4	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT4.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT4_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT4.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT5	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT5.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT5_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT5.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT6	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT6.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT6_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT6.stcField.u7SDATASMPTLFT)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT7	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT7.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTLFT7_SDATASMPTLFT	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTLFT7.stcField.u7SDATASMPTLFT)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_sdatasampleptlftn_field{
    uint_io8_t		u7SDATASMPTLFT:7;
    uint_io8_t		:1;
}stc_grpsub_ddrhsspi_4_sdatasampleptlftn_field_t;

typedef union un_grpsub_ddrhsspi_4_sdatasampleptlftn{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_sdatasampleptlftn_field_t		stcField;
}un_grpsub_ddrhsspi_4_sdatasampleptlftn_t;

/* SDATASAMPLEPTRGH[0-7] */
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH0	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH0.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH0_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH0.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH1	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH1.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH1_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH1.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH2	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH2.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH2_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH2.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH3	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH3.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH3_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH3.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH4	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH4.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH4_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH4.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH5	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH5.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH5_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH5.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH6	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH6.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH6_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH6.stcField.u7SDATASMPTRGH)  /*@bf@*/

#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH7	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH7.u8Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_SDATASAMPLEPTRGH7_SDATASMPTRGH	(GRPSUB_DDRHSSPI_4.unSDATASAMPLEPTRGH7.stcField.u7SDATASMPTRGH)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_sdatasampleptrghn_field{
    uint_io8_t		u7SDATASMPTRGH:7;
    uint_io8_t		:1;
}stc_grpsub_ddrhsspi_4_sdatasampleptrghn_field_t;

typedef union un_grpsub_ddrhsspi_4_sdatasampleptrghn{
    uint_io8_t		u8Register;
    stc_grpsub_ddrhsspi_4_sdatasampleptrghn_field_t		stcField;
}un_grpsub_ddrhsspi_4_sdatasampleptrghn_t;

/* DLP */
#define GRPSUB_DDRHSSPI_DLP	(GRPSUB_DDRHSSPI_4.unDLP.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DLP_DLP	(GRPSUB_DDRHSSPI_4.unDLP.au8Byte[0])  /*@bfbyte@*/

typedef struct stc_grpsub_ddrhsspi_4_dlp_field{
    uint_io32_t		u8DLP:8;
    uint_io32_t		:24;
}stc_grpsub_ddrhsspi_4_dlp_field_t;

typedef union un_grpsub_ddrhsspi_4_dlp{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_dlp_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_dlp_t;

/* DLPSAMPLESTATUS */
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST0L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST0C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST0R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST0R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST1L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST1C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST1R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST1R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST2L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST2C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST2R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST2R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST3L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST3C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST3R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST3R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST4L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST4C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST4R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST4R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST5L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST5C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST5R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST5R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST6L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST6C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST6R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST6R)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST7L	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7L)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST7C	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7C)  /*@bf@*/
#define GRPSUB_DDRHSSPI_DLPSAMPLESTATUS_DLPSMPLST7R	(GRPSUB_DDRHSSPI_4.unDLPSAMPLESTATUS.stcField.u1DLPSMPLST7R)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_dlpsamplestatus_field{
    uint_io32_t		u1DLPSMPLST0L:1;
    uint_io32_t		u1DLPSMPLST0C:1;
    uint_io32_t		u1DLPSMPLST0R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST1L:1;
    uint_io32_t		u1DLPSMPLST1C:1;
    uint_io32_t		u1DLPSMPLST1R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST2L:1;
    uint_io32_t		u1DLPSMPLST2C:1;
    uint_io32_t		u1DLPSMPLST2R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST3L:1;
    uint_io32_t		u1DLPSMPLST3C:1;
    uint_io32_t		u1DLPSMPLST3R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST4L:1;
    uint_io32_t		u1DLPSMPLST4C:1;
    uint_io32_t		u1DLPSMPLST4R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST5L:1;
    uint_io32_t		u1DLPSMPLST5C:1;
    uint_io32_t		u1DLPSMPLST5R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST6L:1;
    uint_io32_t		u1DLPSMPLST6C:1;
    uint_io32_t		u1DLPSMPLST6R:1;
    uint_io32_t		:1;
    uint_io32_t		u1DLPSMPLST7L:1;
    uint_io32_t		u1DLPSMPLST7C:1;
    uint_io32_t		u1DLPSMPLST7R:1;
    uint_io32_t		:1;
}stc_grpsub_ddrhsspi_4_dlpsamplestatus_field_t;

typedef union un_grpsub_ddrhsspi_4_dlpsamplestatus{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_dlpsamplestatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_dlpsamplestatus_t;

/* CSCFG */
#define GRPSUB_DDRHSSPI_CSCFG	(GRPSUB_DDRHSSPI_4.unCSCFG.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSCFG_MBM	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u2MBM)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_DDRMODE	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1DDRMODE)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_SSEL0EN	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1SSEL0EN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_SSEL1EN	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1SSEL1EN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_SSEL2EN	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1SSEL2EN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_SSEL3EN	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1SSEL3EN)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_MSEL	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u4MSEL)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSCFG_ITIMEREN	(GRPSUB_DDRHSSPI_4.unCSCFG.stcField.u1ITIMEREN)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_cscfg_field{
    uint_io32_t		:1;
    uint_io32_t		u2MBM:2;
    uint_io32_t		u1DDRMODE:1;
    uint_io32_t		:4;
    uint_io32_t		u1SSEL0EN:1;
    uint_io32_t		u1SSEL1EN:1;
    uint_io32_t		u1SSEL2EN:1;
    uint_io32_t		u1SSEL3EN:1;
    uint_io32_t		:4;
    uint_io32_t		u4MSEL:4;
    uint_io32_t		:3;
    uint_io32_t		u1ITIMEREN:1;
    uint_io32_t		:8;
}stc_grpsub_ddrhsspi_4_cscfg_field_t;

typedef union un_grpsub_ddrhsspi_4_cscfg{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_cscfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_cscfg_t;

/* CSITIME */
#define GRPSUB_DDRHSSPI_CSITIME	(GRPSUB_DDRHSSPI_4.unCSITIME.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSITIME_ITIME	(GRPSUB_DDRHSSPI_4.unCSITIME.au16Halfword[0])  /*@bfhword@*/

typedef struct stc_grpsub_ddrhsspi_4_csitime_field{
    uint_io32_t		u16ITIME:16;
    uint_io32_t		:16;
}stc_grpsub_ddrhsspi_4_csitime_field_t;

typedef union un_grpsub_ddrhsspi_4_csitime{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_csitime_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_csitime_t;

/* CSAEXT */
#define GRPSUB_DDRHSSPI_CSAEXT	(GRPSUB_DDRHSSPI_4.unCSAEXT.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSAEXT_AEXT	(GRPSUB_DDRHSSPI_4.unCSAEXT.stcField.u19AEXT)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_csaext_field{
    uint_io32_t		:13;
    uint_io32_t		u19AEXT:19;
}stc_grpsub_ddrhsspi_4_csaext_field_t;

typedef union un_grpsub_ddrhsspi_4_csaext{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_csaext_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_csaext_t;

/* CSPBUFFERCFG */
#define GRPSUB_DDRHSSPI_CSPBUFFERCFG	(GRPSUB_DDRHSSPI_4.unCSPBUFFERCFG.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSPBUFFERCFG_PBFLSH	(GRPSUB_DDRHSSPI_4.unCSPBUFFERCFG.stcField.u1PBFLSH)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_cspbuffercfg_field{
    uint_io32_t		:19;
    uint_io32_t		u1PBFLSH:1;
    uint_io32_t		:12;
}stc_grpsub_ddrhsspi_4_cspbuffercfg_field_t;

typedef union un_grpsub_ddrhsspi_4_cspbuffercfg{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_cspbuffercfg_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_cspbuffercfg_t;

/* CSPBUFFERSTATUS */
#define GRPSUB_DDRHSSPI_CSPBUFFERSTATUS	(GRPSUB_DDRHSSPI_4.unCSPBUFFERSTATUS.u32Register)  /*@rg@*/
#define GRPSUB_DDRHSSPI_CSPBUFFERSTATUS_PBLEVEL	(GRPSUB_DDRHSSPI_4.unCSPBUFFERSTATUS.stcField.u6PBLEVEL)  /*@bf@*/
#define GRPSUB_DDRHSSPI_CSPBUFFERSTATUS_SSACTIVE	(GRPSUB_DDRHSSPI_4.unCSPBUFFERSTATUS.stcField.u1SSACTIVE)  /*@bf@*/

typedef struct stc_grpsub_ddrhsspi_4_cspbufferstatus_field{
    uint_io32_t		u6PBLEVEL:6;
    uint_io32_t		:10;
    uint_io32_t		u1SSACTIVE:1;
    uint_io32_t		:15;
}stc_grpsub_ddrhsspi_4_cspbufferstatus_field_t;

typedef union un_grpsub_ddrhsspi_4_cspbufferstatus{
    uint_io32_t		u32Register;
    stc_grpsub_ddrhsspi_4_cspbufferstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_ddrhsspi_4_cspbufferstatus_t;


typedef struct stc_grpsub_ddrhsspi_4{
    un_grpsub_ddrhsspi_4_mctrl_t	unMCTRL;	/* 0x00000000 */
    un_grpsub_ddrhsspi_4_pccn_t	unPCC0;	/* 0x00000004 */
    un_grpsub_ddrhsspi_4_pccn_t	unPCC1;	/* 0x00000008 */
    un_grpsub_ddrhsspi_4_pccn_t	unPCC2;	/* 0x0000000C */
    un_grpsub_ddrhsspi_4_pccn_t	unPCC3;	/* 0x00000010 */
    un_grpsub_ddrhsspi_4_txf_t	unTXF;	/* 0x00000014 */
    un_grpsub_ddrhsspi_4_txe_t	unTXE;	/* 0x00000018 */
    un_grpsub_ddrhsspi_4_txc_t	unTXC;	/* 0x0000001C */
    un_grpsub_ddrhsspi_4_rxf_t	unRXF;	/* 0x00000020 */
    un_grpsub_ddrhsspi_4_rxe_t	unRXE;	/* 0x00000024 */
    un_grpsub_ddrhsspi_4_rxc_t	unRXC;	/* 0x00000028 */
    un_grpsub_ddrhsspi_4_faultf_t	unFAULTF;	/* 0x0000002C */
    un_grpsub_ddrhsspi_4_faultc_t	unFAULTC;	/* 0x00000030 */
    un_grpsub_ddrhsspi_4_dmcfg_t	unDMCFG;	/* 0x00000034 */
    un_grpsub_ddrhsspi_4_dmaen_t	unDMAEN;	/* 0x00000035 */
    uint_io8_t	au8Reserved0[2];	/* 0x00000036 */
    un_grpsub_ddrhsspi_4_dmstart_t	unDMSTART;	/* 0x00000038 */
    uint_io8_t	au8Reserved1[1];	/* 0x00000039 */
    un_grpsub_ddrhsspi_4_dmpsel_t	unDMPSEL;	/* 0x0000003A */
    un_grpsub_ddrhsspi_4_dmtrp_t	unDMTRP;	/* 0x0000003B */
    un_grpsub_ddrhsspi_4_dmbcc_t	unDMBCC;	/* 0x0000003C */
    un_grpsub_ddrhsspi_4_dmbcs_t	unDMBCS;	/* 0x0000003E */
    un_grpsub_ddrhsspi_4_dmfifostatus_t	unDMFIFOSTATUS;	/* 0x00000040 */
    un_grpsub_ddrhsspi_4_dmfifocfg_t	unDMFIFOCFG;	/* 0x00000044 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO0;	/* 0x00000048 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO1;	/* 0x0000004C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO2;	/* 0x00000050 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO3;	/* 0x00000054 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO4;	/* 0x00000058 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO5;	/* 0x0000005C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO6;	/* 0x00000060 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO7;	/* 0x00000064 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO8;	/* 0x00000068 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO9;	/* 0x0000006C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO10;	/* 0x00000070 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO11;	/* 0x00000074 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO12;	/* 0x00000078 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO13;	/* 0x0000007C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO14;	/* 0x00000080 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO15;	/* 0x00000084 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO16;	/* 0x00000088 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO17;	/* 0x0000008C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO18;	/* 0x00000090 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO19;	/* 0x00000094 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO20;	/* 0x00000098 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO21;	/* 0x0000009C */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO22;	/* 0x000000A0 */
    un_grpsub_ddrhsspi_4_txfifon_t	unTXFIFO23;	/* 0x000000A4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO0;	/* 0x000000A8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO1;	/* 0x000000AC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO2;	/* 0x000000B0 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO3;	/* 0x000000B4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO4;	/* 0x000000B8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO5;	/* 0x000000BC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO6;	/* 0x000000C0 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO7;	/* 0x000000C4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO8;	/* 0x000000C8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO9;	/* 0x000000CC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO10;	/* 0x000000D0 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO11;	/* 0x000000D4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO12;	/* 0x000000D8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO13;	/* 0x000000DC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO14;	/* 0x000000E0 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO15;	/* 0x000000E4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO16;	/* 0x000000E8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO17;	/* 0x000000EC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO18;	/* 0x000000F0 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO19;	/* 0x000000F4 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO20;	/* 0x000000F8 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO21;	/* 0x000000FC */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO22;	/* 0x00000100 */
    un_grpsub_ddrhsspi_4_rxfifon_t	unRXFIFO23;	/* 0x00000104 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC0;	/* 0x00000108 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC1;	/* 0x0000010A */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC2;	/* 0x0000010C */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC3;	/* 0x0000010E */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC4;	/* 0x00000110 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC5;	/* 0x00000112 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC6;	/* 0x00000114 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC7;	/* 0x00000116 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC8;	/* 0x00000118 */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC9;	/* 0x0000011A */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC10;	/* 0x0000011C */
    un_grpsub_ddrhsspi_4_rdcsdcn_t	unRDCSDC11;	/* 0x0000011E */
    un_grpsub_ddrhsspi_4_mid_t	unMID;	/* 0x00000120 */
    un_grpsub_ddrhsspi_4_csprefetchaddr_t	unCSPREFETCHADDR;	/* 0x00000124 */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT0;	/* 0x00000128 */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT1;	/* 0x00000129 */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT2;	/* 0x0000012A */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT3;	/* 0x0000012B */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT4;	/* 0x0000012C */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT5;	/* 0x0000012D */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT6;	/* 0x0000012E */
    un_grpsub_ddrhsspi_4_sdatasampleptcntn_t	unSDATASAMPLEPTCNT7;	/* 0x0000012F */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT0;	/* 0x00000130 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT1;	/* 0x00000131 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT2;	/* 0x00000132 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT3;	/* 0x00000133 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT4;	/* 0x00000134 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT5;	/* 0x00000135 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT6;	/* 0x00000136 */
    un_grpsub_ddrhsspi_4_sdatasampleptlftn_t	unSDATASAMPLEPTLFT7;	/* 0x00000137 */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH0;	/* 0x00000138 */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH1;	/* 0x00000139 */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH2;	/* 0x0000013A */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH3;	/* 0x0000013B */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH4;	/* 0x0000013C */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH5;	/* 0x0000013D */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH6;	/* 0x0000013E */
    un_grpsub_ddrhsspi_4_sdatasampleptrghn_t	unSDATASAMPLEPTRGH7;	/* 0x0000013F */
    uint_io8_t	au8Reserved2[4];	/* 0x00000140 */
    un_grpsub_ddrhsspi_4_dlp_t	unDLP;	/* 0x00000144 */
    un_grpsub_ddrhsspi_4_dlpsamplestatus_t	unDLPSAMPLESTATUS;	/* 0x00000148 */
    un_grpsub_ddrhsspi_4_cscfg_t	unCSCFG;	/* 0x0000014C */
    un_grpsub_ddrhsspi_4_csitime_t	unCSITIME;	/* 0x00000150 */
    un_grpsub_ddrhsspi_4_csaext_t	unCSAEXT;	/* 0x00000154 */
    un_grpsub_ddrhsspi_4_cspbuffercfg_t	unCSPBUFFERCFG;	/* 0x00000158 */
    un_grpsub_ddrhsspi_4_cspbufferstatus_t	unCSPBUFFERSTATUS;	/* 0x0000015C */
    uint_io8_t	au8Reserved3[672];	/* 0x00000160 */
}stc_grpsub_ddrhsspi_4_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_ddrhsspi_4_t	stcGRPSUB_DDRHSSPI_4;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_BUSM base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_BUSM_5	stcGRPSUB_BUSM_5
#else /* __IO_DEFINE */
#define GRPSUB_BUSM_5	(*((volatile stc_grpsub_busm_5_t*)0x50214400))
#endif /* __IO_DEFINE */

/* MonitorDisable */
#define GRPSUB_BUSM_MonitorDisable	(GRPSUB_BUSM_5.unMonitorDisable.u32Register)  /*@rg@*/
#define GRPSUB_BUSM_MONITORDISABLE	(GRPSUB_BUSM_MonitorDisable)  /*@rg2@*/
#define GRPSUB_BUSM_MonitorDisable_msm	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1msm)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_cmdseqwrite	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1cmdseqwrite)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_cmdseqread	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1cmdseqread)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchdecode9	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchdecode9)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchpersp9	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchpersp9)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetcheco9	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetcheco9)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_store9	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1store9)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchdecode0	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchdecode0)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchlayer0	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchlayer0)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchwarp1	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchwarp1)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetcheco1	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetcheco1)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchlayer1	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchlayer1)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetchdecode4	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetchdecode4)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_fetcheco4	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1fetcheco4)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_store4	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1store4)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_drawengread	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1drawengread)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_drawengwrite	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1drawengwrite)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_DLBuf	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1DLBuf)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_SceneBuf1	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1SceneBuf1)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_SceneBuf2	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1SceneBuf2)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_SceneBuf3	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1SceneBuf3)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_SceneBuf4	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1SceneBuf4)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_CopyArea	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1CopyArea)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_Texture	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1Texture)  /*@bf@*/
#define GRPSUB_BUSM_MonitorDisable_BlitOp	(GRPSUB_BUSM_5.unMonitorDisable.stcField.u1BlitOp)  /*@bf@*/
#define GRPSUB_BUSM_MONITORDISABLE_MSM	GRPSUB_BUSM_MonitorDisable_msm  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_CMDSEQWRITE	GRPSUB_BUSM_MonitorDisable_cmdseqwrite  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_CMDSEQREAD	GRPSUB_BUSM_MonitorDisable_cmdseqread  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHDECODE9	GRPSUB_BUSM_MonitorDisable_fetchdecode9  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHPERSP9	GRPSUB_BUSM_MonitorDisable_fetchpersp9  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHECO9	GRPSUB_BUSM_MonitorDisable_fetcheco9  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_STORE9	GRPSUB_BUSM_MonitorDisable_store9  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHDECODE0	GRPSUB_BUSM_MonitorDisable_fetchdecode0  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHLAYER0	GRPSUB_BUSM_MonitorDisable_fetchlayer0  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHWARP1	GRPSUB_BUSM_MonitorDisable_fetchwarp1  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHECO1	GRPSUB_BUSM_MonitorDisable_fetcheco1  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHLAYER1	GRPSUB_BUSM_MonitorDisable_fetchlayer1  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHDECODE4	GRPSUB_BUSM_MonitorDisable_fetchdecode4  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_FETCHECO4	GRPSUB_BUSM_MonitorDisable_fetcheco4  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_STORE4	GRPSUB_BUSM_MonitorDisable_store4  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_DRAWENGREAD	GRPSUB_BUSM_MonitorDisable_drawengread  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_DRAWENGWRITE	GRPSUB_BUSM_MonitorDisable_drawengwrite  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_DLBUF	GRPSUB_BUSM_MonitorDisable_DLBuf  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_SCENEBUF1	GRPSUB_BUSM_MonitorDisable_SceneBuf1  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_SCENEBUF2	GRPSUB_BUSM_MonitorDisable_SceneBuf2  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_SCENEBUF3	GRPSUB_BUSM_MonitorDisable_SceneBuf3  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_SCENEBUF4	GRPSUB_BUSM_MonitorDisable_SceneBuf4  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_COPYAREA	GRPSUB_BUSM_MonitorDisable_CopyArea  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_TEXTURE	GRPSUB_BUSM_MonitorDisable_Texture  /*@bf2@*/
#define GRPSUB_BUSM_MONITORDISABLE_BLITOP	GRPSUB_BUSM_MonitorDisable_BlitOp  /*@bf2@*/

typedef struct stc_grpsub_busm_5_monitordisable_field{
    uint_io32_t		u1msm:1;
    uint_io32_t		u1cmdseqwrite:1;
    uint_io32_t		u1cmdseqread:1;
    uint_io32_t		u1fetchdecode9:1;
    uint_io32_t		u1fetchpersp9:1;
    uint_io32_t		u1fetcheco9:1;
    uint_io32_t		u1store9:1;
    uint_io32_t		u1fetchdecode0:1;
    uint_io32_t		u1fetchlayer0:1;
    uint_io32_t		u1fetchwarp1:1;
    uint_io32_t		u1fetcheco1:1;
    uint_io32_t		u1fetchlayer1:1;
    uint_io32_t		u1fetchdecode4:1;
    uint_io32_t		u1fetcheco4:1;
    uint_io32_t		u1store4:1;
    uint_io32_t		u1drawengread:1;
    uint_io32_t		u1drawengwrite:1;
    uint_io32_t		u1DLBuf:1;
    uint_io32_t		u1SceneBuf1:1;
    uint_io32_t		u1SceneBuf2:1;
    uint_io32_t		u1SceneBuf3:1;
    uint_io32_t		u1SceneBuf4:1;
    uint_io32_t		u1CopyArea:1;
    uint_io32_t		u1Texture:1;
    uint_io32_t		u1BlitOp:1;
    uint_io32_t		:7;
}stc_grpsub_busm_5_monitordisable_field_t;

typedef union un_grpsub_busm_5_monitordisable{
    uint_io32_t		u32Register;
    stc_grpsub_busm_5_monitordisable_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_busm_5_monitordisable_t;

/* MonitorInterruptEnable */
#define GRPSUB_BUSM_MonitorInterruptEnable	(GRPSUB_BUSM_5.unMonitorInterruptEnable.u32Register)  /*@rg@*/
#define GRPSUB_BUSM_MONITORINTERRUPTENABLE	(GRPSUB_BUSM_MonitorInterruptEnable)  /*@rg2@*/
#define GRPSUB_BUSM_MonitorInterruptEnable_MonitorInterruptEnable	(GRPSUB_BUSM_5.unMonitorInterruptEnable.stcField.u1MonitorInterruptEnable)  /*@bf@*/
#define GRPSUB_BUSM_MONITORINTERRUPTENABLE_MONITORINTERRUPTENABLE	GRPSUB_BUSM_MonitorInterruptEnable_MonitorInterruptEnable  /*@bf2@*/

typedef struct stc_grpsub_busm_5_monitorinterruptenable_field{
    uint_io32_t		u1MonitorInterruptEnable:1;
    uint_io32_t		:31;
}stc_grpsub_busm_5_monitorinterruptenable_field_t;

typedef union un_grpsub_busm_5_monitorinterruptenable{
    uint_io32_t		u32Register;
    stc_grpsub_busm_5_monitorinterruptenable_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_busm_5_monitorinterruptenable_t;

/* MonitorInterruptClear */
#define GRPSUB_BUSM_MonitorInterruptClear	(GRPSUB_BUSM_5.unMonitorInterruptClear.u32Register)  /*@rg@*/
#define GRPSUB_BUSM_MONITORINTERRUPTCLEAR	(GRPSUB_BUSM_MonitorInterruptClear)  /*@rg2@*/
#define GRPSUB_BUSM_MonitorInterruptClear_MonitorInterruptClear	(GRPSUB_BUSM_5.unMonitorInterruptClear.stcField.u1MonitorInterruptClear)  /*@bf@*/
#define GRPSUB_BUSM_MONITORINTERRUPTCLEAR_MONITORINTERRUPTCLEAR	GRPSUB_BUSM_MonitorInterruptClear_MonitorInterruptClear  /*@bf2@*/

typedef struct stc_grpsub_busm_5_monitorinterruptclear_field{
    uint_io32_t		u1MonitorInterruptClear:1;
    uint_io32_t		:31;
}stc_grpsub_busm_5_monitorinterruptclear_field_t;

typedef union un_grpsub_busm_5_monitorinterruptclear{
    uint_io32_t		u32Register;
    stc_grpsub_busm_5_monitorinterruptclear_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_busm_5_monitorinterruptclear_t;

/* MonitorStatus */
#define GRPSUB_BUSM_MonitorStatus	(GRPSUB_BUSM_5.unMonitorStatus.u32Register)  /*@rg@*/
#define GRPSUB_BUSM_MONITORSTATUS	(GRPSUB_BUSM_MonitorStatus)  /*@rg2@*/
#define GRPSUB_BUSM_MonitorStatus_ErrorType	(GRPSUB_BUSM_5.unMonitorStatus.stcField.u2ErrorType)  /*@bf@*/
#define GRPSUB_BUSM_MonitorStatus_ErrorID	(GRPSUB_BUSM_5.unMonitorStatus.stcField.u6ErrorID)  /*@bf@*/
#define GRPSUB_BUSM_MonitorStatus_ErrorSubID	(GRPSUB_BUSM_5.unMonitorStatus.stcField.u8ErrorSubID)  /*@bf@*/
#define GRPSUB_BUSM_MONITORSTATUS_ERRORTYPE	GRPSUB_BUSM_MonitorStatus_ErrorType  /*@bf2@*/
#define GRPSUB_BUSM_MONITORSTATUS_ERRORID	GRPSUB_BUSM_MonitorStatus_ErrorID  /*@bf2@*/
#define GRPSUB_BUSM_MONITORSTATUS_ERRORSUBID	GRPSUB_BUSM_MonitorStatus_ErrorSubID  /*@bf2@*/

typedef struct stc_grpsub_busm_5_monitorstatus_field{
    uint_io32_t		u2ErrorType:2;
    uint_io32_t		:6;
    uint_io32_t		u6ErrorID:6;
    uint_io32_t		:2;
    uint_io32_t		u8ErrorSubID:8;
    uint_io32_t		:8;
}stc_grpsub_busm_5_monitorstatus_field_t;

typedef union un_grpsub_busm_5_monitorstatus{
    uint_io32_t		u32Register;
    stc_grpsub_busm_5_monitorstatus_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_busm_5_monitorstatus_t;


typedef struct stc_grpsub_busm_5{
    un_grpsub_busm_5_monitordisable_t	unMonitorDisable;	/* 0x00000000 */
    un_grpsub_busm_5_monitorinterruptenable_t	unMonitorInterruptEnable;	/* 0x00000004 */
    un_grpsub_busm_5_monitorinterruptclear_t	unMonitorInterruptClear;	/* 0x00000008 */
    un_grpsub_busm_5_monitorstatus_t	unMonitorStatus;	/* 0x0000000C */
    uint_io8_t	au8Reserved0[1008];	/* 0x00000010 */
}stc_grpsub_busm_5_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_busm_5_t	stcGRPSUB_BUSM_5;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_SCN1 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_SCN1_6	stcGRPSUB_MPUX_SCN1_6
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_SCN1_6	(*((volatile stc_grpsub_mpux_scn1_6_t*)0x50215000))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_SCN1_CTRL0	(GRPSUB_MPUX_SCN1_6.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL0_0	(GRPSUB_MPUX_SCN1_6.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN1_CTRL0_1	(GRPSUB_MPUX_SCN1_6.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN1_CTRL0_2	(GRPSUB_MPUX_SCN1_6.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN1_CTRL0_3	(GRPSUB_MPUX_SCN1_6.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN1_CTRL0_NMI	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_NMICL	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_LST	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_MPUSTOP	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_POEN	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_PROT	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL0_AP	(GRPSUB_MPUX_SCN1_6.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_scn1_6_ctrl0_field_t;

typedef union un_grpsub_mpux_scn1_6_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn1_6_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_SCN1_NMIEN	(GRPSUB_MPUX_SCN1_6.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_NMIEN_NMIEN	(GRPSUB_MPUX_SCN1_6.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_scn1_6_nmien_field_t;

typedef union un_grpsub_mpux_scn1_6_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn1_6_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_SCN1_WERRC	(GRPSUB_MPUX_SCN1_6.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_WERRC_AWMPV	(GRPSUB_MPUX_SCN1_6.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_WERRC_AWPROTPRIV	(GRPSUB_MPUX_SCN1_6.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_WERRC_AWLEN	(GRPSUB_MPUX_SCN1_6.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_WERRC_AWBURST	(GRPSUB_MPUX_SCN1_6.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_WERRC_AWSIZE	(GRPSUB_MPUX_SCN1_6.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_scn1_6_werrc_field_t;

typedef union un_grpsub_mpux_scn1_6_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn1_6_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_SCN1_WERRA	(GRPSUB_MPUX_SCN1_6.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_WERRA_AWADDR	GRPSUB_MPUX_SCN1_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_werra_t;

/* RERRC */
#define GRPSUB_MPUX_SCN1_RERRC	(GRPSUB_MPUX_SCN1_6.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_RERRC_ARMPV	(GRPSUB_MPUX_SCN1_6.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_RERRC_ARPROTPRIV	(GRPSUB_MPUX_SCN1_6.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_RERRC_ARLEN	(GRPSUB_MPUX_SCN1_6.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_RERRC_ARBURST	(GRPSUB_MPUX_SCN1_6.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_RERRC_ARSIZE	(GRPSUB_MPUX_SCN1_6.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_scn1_6_rerrc_field_t;

typedef union un_grpsub_mpux_scn1_6_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn1_6_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_SCN1_RERRA	(GRPSUB_MPUX_SCN1_6.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_RERRA_ARADDR	GRPSUB_MPUX_SCN1_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_SCN1_CTRL1_0	(GRPSUB_MPUX_SCN1_6.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL1_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL1_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL2_0	(GRPSUB_MPUX_SCN1_6.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL2_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL2_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL3_0	(GRPSUB_MPUX_SCN1_6.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL3_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL3_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL4_0	(GRPSUB_MPUX_SCN1_6.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL4_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL4_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL5_0	(GRPSUB_MPUX_SCN1_6.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL5_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL5_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL6_0	(GRPSUB_MPUX_SCN1_6.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL6_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL6_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL7_0	(GRPSUB_MPUX_SCN1_6.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL7_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL7_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL8_0	(GRPSUB_MPUX_SCN1_6.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL8_0_MPUEN	(GRPSUB_MPUX_SCN1_6.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN1_CTRL8_0_MPUENC	(GRPSUB_MPUX_SCN1_6.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_scn1_6_ctrln_0_field_t;

typedef union un_grpsub_mpux_scn1_6_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_scn1_6_ctrln_0_field_t		stcField;
}un_grpsub_mpux_scn1_6_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_SCN1_CTRL1_1	(GRPSUB_MPUX_SCN1_6.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL1_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL2_1	(GRPSUB_MPUX_SCN1_6.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL2_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL3_1	(GRPSUB_MPUX_SCN1_6.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL3_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL4_1	(GRPSUB_MPUX_SCN1_6.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL4_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL5_1	(GRPSUB_MPUX_SCN1_6.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL5_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL6_1	(GRPSUB_MPUX_SCN1_6.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL6_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL7_1	(GRPSUB_MPUX_SCN1_6.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL7_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN1_CTRL8_1	(GRPSUB_MPUX_SCN1_6.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_CTRL8_1_AP	(GRPSUB_MPUX_SCN1_6.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn1_6_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_scn1_6_ctrln_1_field_t;

typedef union un_grpsub_mpux_scn1_6_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_scn1_6_ctrln_1_field_t		stcField;
}un_grpsub_mpux_scn1_6_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_SCN1_SADDR1	(GRPSUB_MPUX_SCN1_6.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR1_SADDR	GRPSUB_MPUX_SCN1_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR2	(GRPSUB_MPUX_SCN1_6.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR2_SADDR	GRPSUB_MPUX_SCN1_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR3	(GRPSUB_MPUX_SCN1_6.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR3_SADDR	GRPSUB_MPUX_SCN1_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR4	(GRPSUB_MPUX_SCN1_6.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR4_SADDR	GRPSUB_MPUX_SCN1_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR5	(GRPSUB_MPUX_SCN1_6.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR5_SADDR	GRPSUB_MPUX_SCN1_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR6	(GRPSUB_MPUX_SCN1_6.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR6_SADDR	GRPSUB_MPUX_SCN1_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR7	(GRPSUB_MPUX_SCN1_6.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR7_SADDR	GRPSUB_MPUX_SCN1_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_SADDR8	(GRPSUB_MPUX_SCN1_6.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_SADDR8_SADDR	GRPSUB_MPUX_SCN1_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_SCN1_EADDR1	(GRPSUB_MPUX_SCN1_6.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR1_EADDR	GRPSUB_MPUX_SCN1_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR2	(GRPSUB_MPUX_SCN1_6.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR2_EADDR	GRPSUB_MPUX_SCN1_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR3	(GRPSUB_MPUX_SCN1_6.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR3_EADDR	GRPSUB_MPUX_SCN1_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR4	(GRPSUB_MPUX_SCN1_6.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR4_EADDR	GRPSUB_MPUX_SCN1_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR5	(GRPSUB_MPUX_SCN1_6.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR5_EADDR	GRPSUB_MPUX_SCN1_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR6	(GRPSUB_MPUX_SCN1_6.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR6_EADDR	GRPSUB_MPUX_SCN1_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR7	(GRPSUB_MPUX_SCN1_6.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR7_EADDR	GRPSUB_MPUX_SCN1_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_SCN1_EADDR8	(GRPSUB_MPUX_SCN1_6.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_EADDR8_EADDR	GRPSUB_MPUX_SCN1_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_SCN1_UNLOCK	(GRPSUB_MPUX_SCN1_6.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_UNLOCK_UNLOCK	GRPSUB_MPUX_SCN1_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_unlock_t;

/* MID */
#define GRPSUB_MPUX_SCN1_MID	(GRPSUB_MPUX_SCN1_6.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN1_MID_MID	GRPSUB_MPUX_SCN1_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_scn1_6_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn1_6_mid_t;


typedef struct stc_grpsub_mpux_scn1_6{
    un_grpsub_mpux_scn1_6_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_scn1_6_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_scn1_6_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_scn1_6_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_scn1_6_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_scn1_6_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_scn1_6_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_scn1_6_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_scn1_6_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_scn1_6_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_scn1_6_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_scn1_6_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_scn1_6_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_scn1_6_t	stcGRPSUB_MPUX_SCN1_6;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_SCN2 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_SCN2_7	stcGRPSUB_MPUX_SCN2_7
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_SCN2_7	(*((volatile stc_grpsub_mpux_scn2_7_t*)0x50215400))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_SCN2_CTRL0	(GRPSUB_MPUX_SCN2_7.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL0_0	(GRPSUB_MPUX_SCN2_7.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN2_CTRL0_1	(GRPSUB_MPUX_SCN2_7.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN2_CTRL0_2	(GRPSUB_MPUX_SCN2_7.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN2_CTRL0_3	(GRPSUB_MPUX_SCN2_7.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_SCN2_CTRL0_NMI	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_NMICL	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_LST	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_MPUSTOP	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_POEN	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_PROT	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL0_AP	(GRPSUB_MPUX_SCN2_7.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_scn2_7_ctrl0_field_t;

typedef union un_grpsub_mpux_scn2_7_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn2_7_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_SCN2_NMIEN	(GRPSUB_MPUX_SCN2_7.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_NMIEN_NMIEN	(GRPSUB_MPUX_SCN2_7.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_scn2_7_nmien_field_t;

typedef union un_grpsub_mpux_scn2_7_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn2_7_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_SCN2_WERRC	(GRPSUB_MPUX_SCN2_7.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_WERRC_AWMPV	(GRPSUB_MPUX_SCN2_7.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_WERRC_AWPROTPRIV	(GRPSUB_MPUX_SCN2_7.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_WERRC_AWLEN	(GRPSUB_MPUX_SCN2_7.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_WERRC_AWBURST	(GRPSUB_MPUX_SCN2_7.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_WERRC_AWSIZE	(GRPSUB_MPUX_SCN2_7.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_scn2_7_werrc_field_t;

typedef union un_grpsub_mpux_scn2_7_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn2_7_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_SCN2_WERRA	(GRPSUB_MPUX_SCN2_7.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_WERRA_AWADDR	GRPSUB_MPUX_SCN2_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_werra_t;

/* RERRC */
#define GRPSUB_MPUX_SCN2_RERRC	(GRPSUB_MPUX_SCN2_7.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_RERRC_ARMPV	(GRPSUB_MPUX_SCN2_7.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_RERRC_ARPROTPRIV	(GRPSUB_MPUX_SCN2_7.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_RERRC_ARLEN	(GRPSUB_MPUX_SCN2_7.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_RERRC_ARBURST	(GRPSUB_MPUX_SCN2_7.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_RERRC_ARSIZE	(GRPSUB_MPUX_SCN2_7.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_scn2_7_rerrc_field_t;

typedef union un_grpsub_mpux_scn2_7_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_scn2_7_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_SCN2_RERRA	(GRPSUB_MPUX_SCN2_7.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_RERRA_ARADDR	GRPSUB_MPUX_SCN2_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_SCN2_CTRL1_0	(GRPSUB_MPUX_SCN2_7.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL1_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL1_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL2_0	(GRPSUB_MPUX_SCN2_7.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL2_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL2_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL3_0	(GRPSUB_MPUX_SCN2_7.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL3_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL3_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL4_0	(GRPSUB_MPUX_SCN2_7.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL4_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL4_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL5_0	(GRPSUB_MPUX_SCN2_7.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL5_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL5_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL6_0	(GRPSUB_MPUX_SCN2_7.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL6_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL6_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL7_0	(GRPSUB_MPUX_SCN2_7.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL7_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL7_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL8_0	(GRPSUB_MPUX_SCN2_7.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL8_0_MPUEN	(GRPSUB_MPUX_SCN2_7.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_SCN2_CTRL8_0_MPUENC	(GRPSUB_MPUX_SCN2_7.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_scn2_7_ctrln_0_field_t;

typedef union un_grpsub_mpux_scn2_7_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_scn2_7_ctrln_0_field_t		stcField;
}un_grpsub_mpux_scn2_7_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_SCN2_CTRL1_1	(GRPSUB_MPUX_SCN2_7.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL1_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL2_1	(GRPSUB_MPUX_SCN2_7.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL2_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL3_1	(GRPSUB_MPUX_SCN2_7.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL3_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL4_1	(GRPSUB_MPUX_SCN2_7.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL4_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL5_1	(GRPSUB_MPUX_SCN2_7.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL5_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL6_1	(GRPSUB_MPUX_SCN2_7.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL6_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL7_1	(GRPSUB_MPUX_SCN2_7.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL7_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_SCN2_CTRL8_1	(GRPSUB_MPUX_SCN2_7.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_CTRL8_1_AP	(GRPSUB_MPUX_SCN2_7.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_scn2_7_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_scn2_7_ctrln_1_field_t;

typedef union un_grpsub_mpux_scn2_7_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_scn2_7_ctrln_1_field_t		stcField;
}un_grpsub_mpux_scn2_7_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_SCN2_SADDR1	(GRPSUB_MPUX_SCN2_7.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR1_SADDR	GRPSUB_MPUX_SCN2_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR2	(GRPSUB_MPUX_SCN2_7.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR2_SADDR	GRPSUB_MPUX_SCN2_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR3	(GRPSUB_MPUX_SCN2_7.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR3_SADDR	GRPSUB_MPUX_SCN2_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR4	(GRPSUB_MPUX_SCN2_7.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR4_SADDR	GRPSUB_MPUX_SCN2_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR5	(GRPSUB_MPUX_SCN2_7.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR5_SADDR	GRPSUB_MPUX_SCN2_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR6	(GRPSUB_MPUX_SCN2_7.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR6_SADDR	GRPSUB_MPUX_SCN2_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR7	(GRPSUB_MPUX_SCN2_7.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR7_SADDR	GRPSUB_MPUX_SCN2_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_SADDR8	(GRPSUB_MPUX_SCN2_7.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_SADDR8_SADDR	GRPSUB_MPUX_SCN2_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_SCN2_EADDR1	(GRPSUB_MPUX_SCN2_7.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR1_EADDR	GRPSUB_MPUX_SCN2_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR2	(GRPSUB_MPUX_SCN2_7.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR2_EADDR	GRPSUB_MPUX_SCN2_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR3	(GRPSUB_MPUX_SCN2_7.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR3_EADDR	GRPSUB_MPUX_SCN2_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR4	(GRPSUB_MPUX_SCN2_7.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR4_EADDR	GRPSUB_MPUX_SCN2_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR5	(GRPSUB_MPUX_SCN2_7.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR5_EADDR	GRPSUB_MPUX_SCN2_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR6	(GRPSUB_MPUX_SCN2_7.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR6_EADDR	GRPSUB_MPUX_SCN2_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR7	(GRPSUB_MPUX_SCN2_7.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR7_EADDR	GRPSUB_MPUX_SCN2_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_SCN2_EADDR8	(GRPSUB_MPUX_SCN2_7.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_EADDR8_EADDR	GRPSUB_MPUX_SCN2_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_SCN2_UNLOCK	(GRPSUB_MPUX_SCN2_7.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_UNLOCK_UNLOCK	GRPSUB_MPUX_SCN2_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_unlock_t;

/* MID */
#define GRPSUB_MPUX_SCN2_MID	(GRPSUB_MPUX_SCN2_7.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_SCN2_MID_MID	GRPSUB_MPUX_SCN2_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_scn2_7_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_scn2_7_mid_t;


typedef struct stc_grpsub_mpux_scn2_7{
    un_grpsub_mpux_scn2_7_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_scn2_7_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_scn2_7_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_scn2_7_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_scn2_7_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_scn2_7_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_scn2_7_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_scn2_7_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_scn2_7_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_scn2_7_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_scn2_7_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_scn2_7_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_scn2_7_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_scn2_7_t	stcGRPSUB_MPUX_SCN2_7;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_MPUX_CPY base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_MPUX_CPY_8	stcGRPSUB_MPUX_CPY_8
#else /* __IO_DEFINE */
#define GRPSUB_MPUX_CPY_8	(*((volatile stc_grpsub_mpux_cpy_8_t*)0x50215800))
#endif /* __IO_DEFINE */

/* CTRL0 */
#define GRPSUB_MPUX_CPY_CTRL0	(GRPSUB_MPUX_CPY_8.unCTRL0.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL0_0	(GRPSUB_MPUX_CPY_8.unCTRL0.au8Byte[0])  /*@arbyte@*/
#define GRPSUB_MPUX_CPY_CTRL0_1	(GRPSUB_MPUX_CPY_8.unCTRL0.au8Byte[1])  /*@arbyte@*/
#define GRPSUB_MPUX_CPY_CTRL0_2	(GRPSUB_MPUX_CPY_8.unCTRL0.au8Byte[2])  /*@arbyte@*/
#define GRPSUB_MPUX_CPY_CTRL0_3	(GRPSUB_MPUX_CPY_8.unCTRL0.au8Byte[3])  /*@arbyte@*/
#define GRPSUB_MPUX_CPY_CTRL0_NMI	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1NMI)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_NMICL	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1NMICL)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_LST	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1LST)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_MPUSTOP	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1MPUSTOP)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_MPUSTOPEN	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1MPUSTOPEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_POEN	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1POEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_PROT	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1PROT)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u1MPUENC)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL0_AP	(GRPSUB_MPUX_CPY_8.unCTRL0.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_ctrl0_field{
    uint_io32_t		u1NMI:1;
    uint_io32_t		u1NMICL:1;
    uint_io32_t		:6;
    uint_io32_t		u1LST:1;
    uint_io32_t		u1MPUSTOP:1;
    uint_io32_t		u1MPUSTOPEN:1;
    uint_io32_t		u1POEN:1;
    uint_io32_t		u1PROT:1;
    uint_io32_t		:3;
    uint_io32_t		u1MPUEN:1;
    uint_io32_t		u1MPUENC:1;
    uint_io32_t		:6;
    uint_io32_t		u3AP:3;
    uint_io32_t		:5;
}stc_grpsub_mpux_cpy_8_ctrl0_field_t;

typedef union un_grpsub_mpux_cpy_8_ctrl0{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cpy_8_ctrl0_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_ctrl0_t;

/* NMIEN */
#define GRPSUB_MPUX_CPY_NMIEN	(GRPSUB_MPUX_CPY_8.unNMIEN.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_NMIEN_NMIEN	(GRPSUB_MPUX_CPY_8.unNMIEN.stcField.u1NMIEN)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_nmien_field{
    uint_io32_t		u1NMIEN:1;
    uint_io32_t		:31;
}stc_grpsub_mpux_cpy_8_nmien_field_t;

typedef union un_grpsub_mpux_cpy_8_nmien{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cpy_8_nmien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_nmien_t;

/* WERRC */
#define GRPSUB_MPUX_CPY_WERRC	(GRPSUB_MPUX_CPY_8.unWERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_WERRC_AWMPV	(GRPSUB_MPUX_CPY_8.unWERRC.stcField.u1AWMPV)  /*@bf@*/
#define GRPSUB_MPUX_CPY_WERRC_AWPROTPRIV	(GRPSUB_MPUX_CPY_8.unWERRC.stcField.u1AWPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_CPY_WERRC_AWLEN	(GRPSUB_MPUX_CPY_8.unWERRC.stcField.u4AWLEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_WERRC_AWBURST	(GRPSUB_MPUX_CPY_8.unWERRC.stcField.u2AWBURST)  /*@bf@*/
#define GRPSUB_MPUX_CPY_WERRC_AWSIZE	(GRPSUB_MPUX_CPY_8.unWERRC.stcField.u3AWSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_werrc_field{
    uint_io32_t		u1AWMPV:1;
    uint_io32_t		u1AWPROTPRIV:1;
    uint_io32_t		u4AWLEN:4;
    uint_io32_t		u2AWBURST:2;
    uint_io32_t		u3AWSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_cpy_8_werrc_field_t;

typedef union un_grpsub_mpux_cpy_8_werrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cpy_8_werrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_werrc_t;

/* WERRA */
#define GRPSUB_MPUX_CPY_WERRA	(GRPSUB_MPUX_CPY_8.unWERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_WERRA_AWADDR	GRPSUB_MPUX_CPY_WERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_werra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_werra_t;

/* RERRC */
#define GRPSUB_MPUX_CPY_RERRC	(GRPSUB_MPUX_CPY_8.unRERRC.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_RERRC_ARMPV	(GRPSUB_MPUX_CPY_8.unRERRC.stcField.u1ARMPV)  /*@bf@*/
#define GRPSUB_MPUX_CPY_RERRC_ARPROTPRIV	(GRPSUB_MPUX_CPY_8.unRERRC.stcField.u1ARPROTPRIV)  /*@bf@*/
#define GRPSUB_MPUX_CPY_RERRC_ARLEN	(GRPSUB_MPUX_CPY_8.unRERRC.stcField.u4ARLEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_RERRC_ARBURST	(GRPSUB_MPUX_CPY_8.unRERRC.stcField.u2ARBURST)  /*@bf@*/
#define GRPSUB_MPUX_CPY_RERRC_ARSIZE	(GRPSUB_MPUX_CPY_8.unRERRC.stcField.u3ARSIZE)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_rerrc_field{
    uint_io32_t		u1ARMPV:1;
    uint_io32_t		u1ARPROTPRIV:1;
    uint_io32_t		u4ARLEN:4;
    uint_io32_t		u2ARBURST:2;
    uint_io32_t		u3ARSIZE:3;
    uint_io32_t		:21;
}stc_grpsub_mpux_cpy_8_rerrc_field_t;

typedef union un_grpsub_mpux_cpy_8_rerrc{
    uint_io32_t		u32Register;
    stc_grpsub_mpux_cpy_8_rerrc_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_rerrc_t;

/* RERRA */
#define GRPSUB_MPUX_CPY_RERRA	(GRPSUB_MPUX_CPY_8.unRERRA.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_RERRA_ARADDR	GRPSUB_MPUX_CPY_RERRA  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_rerra{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_rerra_t;

/* CTRL[1-8]_0 */
#define GRPSUB_MPUX_CPY_CTRL1_0	(GRPSUB_MPUX_CPY_8.unCTRL1_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL1_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL1_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL1_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL1_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL2_0	(GRPSUB_MPUX_CPY_8.unCTRL2_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL2_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL2_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL2_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL2_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL3_0	(GRPSUB_MPUX_CPY_8.unCTRL3_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL3_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL3_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL3_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL3_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL4_0	(GRPSUB_MPUX_CPY_8.unCTRL4_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL4_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL4_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL4_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL4_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL5_0	(GRPSUB_MPUX_CPY_8.unCTRL5_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL5_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL5_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL5_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL5_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL6_0	(GRPSUB_MPUX_CPY_8.unCTRL6_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL6_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL6_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL6_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL6_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL7_0	(GRPSUB_MPUX_CPY_8.unCTRL7_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL7_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL7_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL7_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL7_0.stcField.u1MPUENC)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL8_0	(GRPSUB_MPUX_CPY_8.unCTRL8_0.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL8_0_MPUEN	(GRPSUB_MPUX_CPY_8.unCTRL8_0.stcField.u1MPUEN)  /*@bf@*/
#define GRPSUB_MPUX_CPY_CTRL8_0_MPUENC	(GRPSUB_MPUX_CPY_8.unCTRL8_0.stcField.u1MPUENC)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_ctrln_0_field{
    uint_io8_t		u1MPUEN:1;
    uint_io8_t		u1MPUENC:1;
    uint_io8_t		:6;
}stc_grpsub_mpux_cpy_8_ctrln_0_field_t;

typedef union un_grpsub_mpux_cpy_8_ctrln_0{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_cpy_8_ctrln_0_field_t		stcField;
}un_grpsub_mpux_cpy_8_ctrln_0_t;

/* CTRL[1-8]_1 */
#define GRPSUB_MPUX_CPY_CTRL1_1	(GRPSUB_MPUX_CPY_8.unCTRL1_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL1_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL1_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL2_1	(GRPSUB_MPUX_CPY_8.unCTRL2_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL2_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL2_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL3_1	(GRPSUB_MPUX_CPY_8.unCTRL3_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL3_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL3_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL4_1	(GRPSUB_MPUX_CPY_8.unCTRL4_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL4_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL4_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL5_1	(GRPSUB_MPUX_CPY_8.unCTRL5_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL5_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL5_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL6_1	(GRPSUB_MPUX_CPY_8.unCTRL6_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL6_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL6_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL7_1	(GRPSUB_MPUX_CPY_8.unCTRL7_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL7_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL7_1.stcField.u3AP)  /*@bf@*/

#define GRPSUB_MPUX_CPY_CTRL8_1	(GRPSUB_MPUX_CPY_8.unCTRL8_1.u8Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_CTRL8_1_AP	(GRPSUB_MPUX_CPY_8.unCTRL8_1.stcField.u3AP)  /*@bf@*/

typedef struct stc_grpsub_mpux_cpy_8_ctrln_1_field{
    uint_io8_t		u3AP:3;
    uint_io8_t		:5;
}stc_grpsub_mpux_cpy_8_ctrln_1_field_t;

typedef union un_grpsub_mpux_cpy_8_ctrln_1{
    uint_io8_t		u8Register;
    stc_grpsub_mpux_cpy_8_ctrln_1_field_t		stcField;
}un_grpsub_mpux_cpy_8_ctrln_1_t;

/* SADDR[1-8] */
#define GRPSUB_MPUX_CPY_SADDR1	(GRPSUB_MPUX_CPY_8.unSADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR1_SADDR	GRPSUB_MPUX_CPY_SADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR2	(GRPSUB_MPUX_CPY_8.unSADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR2_SADDR	GRPSUB_MPUX_CPY_SADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR3	(GRPSUB_MPUX_CPY_8.unSADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR3_SADDR	GRPSUB_MPUX_CPY_SADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR4	(GRPSUB_MPUX_CPY_8.unSADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR4_SADDR	GRPSUB_MPUX_CPY_SADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR5	(GRPSUB_MPUX_CPY_8.unSADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR5_SADDR	GRPSUB_MPUX_CPY_SADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR6	(GRPSUB_MPUX_CPY_8.unSADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR6_SADDR	GRPSUB_MPUX_CPY_SADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR7	(GRPSUB_MPUX_CPY_8.unSADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR7_SADDR	GRPSUB_MPUX_CPY_SADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_SADDR8	(GRPSUB_MPUX_CPY_8.unSADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_SADDR8_SADDR	GRPSUB_MPUX_CPY_SADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_saddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_saddrn_t;

/* EADDR[1-8] */
#define GRPSUB_MPUX_CPY_EADDR1	(GRPSUB_MPUX_CPY_8.unEADDR1.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR1_EADDR	GRPSUB_MPUX_CPY_EADDR1  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR2	(GRPSUB_MPUX_CPY_8.unEADDR2.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR2_EADDR	GRPSUB_MPUX_CPY_EADDR2  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR3	(GRPSUB_MPUX_CPY_8.unEADDR3.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR3_EADDR	GRPSUB_MPUX_CPY_EADDR3  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR4	(GRPSUB_MPUX_CPY_8.unEADDR4.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR4_EADDR	GRPSUB_MPUX_CPY_EADDR4  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR5	(GRPSUB_MPUX_CPY_8.unEADDR5.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR5_EADDR	GRPSUB_MPUX_CPY_EADDR5  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR6	(GRPSUB_MPUX_CPY_8.unEADDR6.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR6_EADDR	GRPSUB_MPUX_CPY_EADDR6  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR7	(GRPSUB_MPUX_CPY_8.unEADDR7.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR7_EADDR	GRPSUB_MPUX_CPY_EADDR7  /*@bfrg@*/

#define GRPSUB_MPUX_CPY_EADDR8	(GRPSUB_MPUX_CPY_8.unEADDR8.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_EADDR8_EADDR	GRPSUB_MPUX_CPY_EADDR8  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_eaddrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_eaddrn_t;

/* UNLOCK */
#define GRPSUB_MPUX_CPY_UNLOCK	(GRPSUB_MPUX_CPY_8.unUNLOCK.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_UNLOCK_UNLOCK	GRPSUB_MPUX_CPY_UNLOCK  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_unlock{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_unlock_t;

/* MID */
#define GRPSUB_MPUX_CPY_MID	(GRPSUB_MPUX_CPY_8.unMID.u32Register)  /*@rg@*/
#define GRPSUB_MPUX_CPY_MID_MID	GRPSUB_MPUX_CPY_MID  /*@bfrg@*/

typedef union un_grpsub_mpux_cpy_8_mid{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_mpux_cpy_8_mid_t;


typedef struct stc_grpsub_mpux_cpy_8{
    un_grpsub_mpux_cpy_8_ctrl0_t	unCTRL0;	/* 0x00000000 */
    un_grpsub_mpux_cpy_8_nmien_t	unNMIEN;	/* 0x00000004 */
    un_grpsub_mpux_cpy_8_werrc_t	unWERRC;	/* 0x00000008 */
    un_grpsub_mpux_cpy_8_werra_t	unWERRA;	/* 0x0000000C */
    un_grpsub_mpux_cpy_8_rerrc_t	unRERRC;	/* 0x00000010 */
    un_grpsub_mpux_cpy_8_rerra_t	unRERRA;	/* 0x00000014 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL1_0;	/* 0x00000018 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL1_1;	/* 0x00000019 */
    uint_io8_t	au8Reserved0[2];	/* 0x0000001A */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR1;	/* 0x0000001C */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR1;	/* 0x00000020 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL2_0;	/* 0x00000024 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL2_1;	/* 0x00000025 */
    uint_io8_t	au8Reserved1[2];	/* 0x00000026 */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR2;	/* 0x00000028 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR2;	/* 0x0000002C */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL3_0;	/* 0x00000030 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL3_1;	/* 0x00000031 */
    uint_io8_t	au8Reserved2[2];	/* 0x00000032 */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR3;	/* 0x00000034 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR3;	/* 0x00000038 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL4_0;	/* 0x0000003C */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL4_1;	/* 0x0000003D */
    uint_io8_t	au8Reserved3[2];	/* 0x0000003E */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR4;	/* 0x00000040 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR4;	/* 0x00000044 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL5_0;	/* 0x00000048 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL5_1;	/* 0x00000049 */
    uint_io8_t	au8Reserved4[2];	/* 0x0000004A */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR5;	/* 0x0000004C */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR5;	/* 0x00000050 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL6_0;	/* 0x00000054 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL6_1;	/* 0x00000055 */
    uint_io8_t	au8Reserved5[2];	/* 0x00000056 */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR6;	/* 0x00000058 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR6;	/* 0x0000005C */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL7_0;	/* 0x00000060 */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL7_1;	/* 0x00000061 */
    uint_io8_t	au8Reserved6[2];	/* 0x00000062 */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR7;	/* 0x00000064 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR7;	/* 0x00000068 */
    un_grpsub_mpux_cpy_8_ctrln_0_t	unCTRL8_0;	/* 0x0000006C */
    un_grpsub_mpux_cpy_8_ctrln_1_t	unCTRL8_1;	/* 0x0000006D */
    uint_io8_t	au8Reserved7[2];	/* 0x0000006E */
    un_grpsub_mpux_cpy_8_saddrn_t	unSADDR8;	/* 0x00000070 */
    un_grpsub_mpux_cpy_8_eaddrn_t	unEADDR8;	/* 0x00000074 */
    un_grpsub_mpux_cpy_8_unlock_t	unUNLOCK;	/* 0x00000078 */
    un_grpsub_mpux_cpy_8_mid_t	unMID;	/* 0x0000007C */
    uint_io8_t	au8Reserved8[896];	/* 0x00000080 */
}stc_grpsub_mpux_cpy_8_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_mpux_cpy_8_t	stcGRPSUB_MPUX_CPY_8;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_HYPERBUSI1 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_HYPERBUSI1_9	stcGRPSUB_HYPERBUSI1_9
#else /* __IO_DEFINE */
#define GRPSUB_HYPERBUSI1_9	(*((volatile stc_grpsub_hyperbusi1_9_t*)0x50280000))
#endif /* __IO_DEFINE */

/* CSR */
#define GRPSUB_HYPERBUSI1_CSR	(GRPSUB_HYPERBUSI1_9.unCSR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_CSR_RACT	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1RACT)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_RDECERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1RDECERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_RTRSERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1RTRSERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_RRSTOERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1RRSTOERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_RDSSTALL	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1RDSSTALL)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_WACT	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1WACT)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_WDECERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1WDECERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_WTRSERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1WTRSERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_CSR_WRSTOERR	(GRPSUB_HYPERBUSI1_9.unCSR.stcField.u1WRSTOERR)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_csr_field{
    uint_io32_t		u1RACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1RDECERR:1;
    uint_io32_t		u1RTRSERR:1;
    uint_io32_t		u1RRSTOERR:1;
    uint_io32_t		u1RDSSTALL:1;
    uint_io32_t		:4;
    uint_io32_t		u1WACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1WDECERR:1;
    uint_io32_t		u1WTRSERR:1;
    uint_io32_t		u1WRSTOERR:1;
    uint_io32_t		:5;
}stc_grpsub_hyperbusi1_9_csr_field_t;

typedef union un_grpsub_hyperbusi1_9_csr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_csr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_csr_t;

/* IEN */
#define GRPSUB_HYPERBUSI1_IEN	(GRPSUB_HYPERBUSI1_9.unIEN.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_IEN_RPCINTE	(GRPSUB_HYPERBUSI1_9.unIEN.stcField.u1RPCINTE)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_IEN_INTP	(GRPSUB_HYPERBUSI1_9.unIEN.stcField.u1INTP)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_ien_field{
    uint_io32_t		u1RPCINTE:1;
    uint_io32_t		:30;
    uint_io32_t		u1INTP:1;
}stc_grpsub_hyperbusi1_9_ien_field_t;

typedef union un_grpsub_hyperbusi1_9_ien{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_ien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_ien_t;

/* ISR */
#define GRPSUB_HYPERBUSI1_ISR	(GRPSUB_HYPERBUSI1_9.unISR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_ISR_RPCINTS	(GRPSUB_HYPERBUSI1_9.unISR.stcField.u1RPCINTS)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_isr_field{
    uint_io32_t		u1RPCINTS:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi1_9_isr_field_t;

typedef union un_grpsub_hyperbusi1_9_isr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_isr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_isr_t;

/* MBR[0-1] */
#define GRPSUB_HYPERBUSI1_MBR0	(GRPSUB_HYPERBUSI1_9.unMBR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MBR0_A	GRPSUB_HYPERBUSI1_MBR0  /*@bfrg@*/

#define GRPSUB_HYPERBUSI1_MBR1	(GRPSUB_HYPERBUSI1_9.unMBR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MBR1_A	GRPSUB_HYPERBUSI1_MBR1  /*@bfrg@*/

typedef union un_grpsub_hyperbusi1_9_mbrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_mbrn_t;

/* MCR[0-1] */
#define GRPSUB_HYPERBUSI1_MCR0	(GRPSUB_HYPERBUSI1_9.unMCR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MCR0_WRAPSIZE	(GRPSUB_HYPERBUSI1_9.unMCR0.stcField.u2WRAPSIZE)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR0_DEVTYPE	(GRPSUB_HYPERBUSI1_9.unMCR0.stcField.u1DEVTYPE)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR0_CRT	(GRPSUB_HYPERBUSI1_9.unMCR0.stcField.u1CRT)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR0_ACS	(GRPSUB_HYPERBUSI1_9.unMCR0.stcField.u1ACS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR0_CRMO	(GRPSUB_HYPERBUSI1_9.unMCR0.stcField.u1CRMO)  /*@bf@*/

#define GRPSUB_HYPERBUSI1_MCR1	(GRPSUB_HYPERBUSI1_9.unMCR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MCR1_WRAPSIZE	(GRPSUB_HYPERBUSI1_9.unMCR1.stcField.u2WRAPSIZE)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR1_DEVTYPE	(GRPSUB_HYPERBUSI1_9.unMCR1.stcField.u1DEVTYPE)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR1_CRT	(GRPSUB_HYPERBUSI1_9.unMCR1.stcField.u1CRT)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR1_ACS	(GRPSUB_HYPERBUSI1_9.unMCR1.stcField.u1ACS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MCR1_CRMO	(GRPSUB_HYPERBUSI1_9.unMCR1.stcField.u1CRMO)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_mcrn_field{
    uint_io32_t		u2WRAPSIZE:2;
    uint_io32_t		:2;
    uint_io32_t		u1DEVTYPE:1;
    uint_io32_t		u1CRT:1;
    uint_io32_t		:10;
    uint_io32_t		u1ACS:1;
    uint_io32_t		u1CRMO:1;
    uint_io32_t		:14;
}stc_grpsub_hyperbusi1_9_mcrn_field_t;

typedef union un_grpsub_hyperbusi1_9_mcrn{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_mcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_mcrn_t;

/* MTR[0-1] */
#define GRPSUB_HYPERBUSI1_MTR0	(GRPSUB_HYPERBUSI1_9.unMTR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MTR0_LTCY	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4LTCY)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_WCSH	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4WCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_RCSH	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4RCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_WCSS	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4WCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_RCSS	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4RCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_WCSHI	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4WCSHI)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR0_RCSHI	(GRPSUB_HYPERBUSI1_9.unMTR0.stcField.u4RCSHI)  /*@bf@*/

#define GRPSUB_HYPERBUSI1_MTR1	(GRPSUB_HYPERBUSI1_9.unMTR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_MTR1_LTCY	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4LTCY)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_WCSH	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4WCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_RCSH	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4RCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_WCSS	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4WCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_RCSS	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4RCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_WCSHI	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4WCSHI)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_MTR1_RCSHI	(GRPSUB_HYPERBUSI1_9.unMTR1.stcField.u4RCSHI)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_mtrn_field{
    uint_io32_t		u4LTCY:4;
    uint_io32_t		:4;
    uint_io32_t		u4WCSH:4;
    uint_io32_t		u4RCSH:4;
    uint_io32_t		u4WCSS:4;
    uint_io32_t		u4RCSS:4;
    uint_io32_t		u4WCSHI:4;
    uint_io32_t		u4RCSHI:4;
}stc_grpsub_hyperbusi1_9_mtrn_field_t;

typedef union un_grpsub_hyperbusi1_9_mtrn{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_mtrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_mtrn_t;

/* GPOR */
#define GRPSUB_HYPERBUSI1_GPOR	(GRPSUB_HYPERBUSI1_9.unGPOR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_GPOR_GPO0	(GRPSUB_HYPERBUSI1_9.unGPOR.stcField.u1GPO0)  /*@bf@*/
#define GRPSUB_HYPERBUSI1_GPOR_GPO1	(GRPSUB_HYPERBUSI1_9.unGPOR.stcField.u1GPO1)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_gpor_field{
    uint_io32_t		u1GPO0:1;
    uint_io32_t		u1GPO1:1;
    uint_io32_t		:30;
}stc_grpsub_hyperbusi1_9_gpor_field_t;

typedef union un_grpsub_hyperbusi1_9_gpor{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_gpor_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_gpor_t;

/* WPR */
#define GRPSUB_HYPERBUSI1_WPR	(GRPSUB_HYPERBUSI1_9.unWPR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_WPR_WP	(GRPSUB_HYPERBUSI1_9.unWPR.stcField.u1WP)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_wpr_field{
    uint_io32_t		u1WP:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi1_9_wpr_field_t;

typedef union un_grpsub_hyperbusi1_9_wpr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_wpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_wpr_t;

/* TEST */
#define GRPSUB_HYPERBUSI1_TEST	(GRPSUB_HYPERBUSI1_9.unTEST.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI1_TEST_RVD	(GRPSUB_HYPERBUSI1_9.unTEST.stcField.u1RVD)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi1_9_test_field{
    uint_io32_t		u1RVD:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi1_9_test_field_t;

typedef union un_grpsub_hyperbusi1_9_test{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi1_9_test_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi1_9_test_t;


typedef struct stc_grpsub_hyperbusi1_9{
    un_grpsub_hyperbusi1_9_csr_t	unCSR;	/* 0x00000000 */
    un_grpsub_hyperbusi1_9_ien_t	unIEN;	/* 0x00000004 */
    un_grpsub_hyperbusi1_9_isr_t	unISR;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_grpsub_hyperbusi1_9_mbrn_t	unMBR0;	/* 0x00000010 */
    un_grpsub_hyperbusi1_9_mbrn_t	unMBR1;	/* 0x00000014 */
    uint_io8_t	au8Reserved1[8];	/* 0x00000018 */
    un_grpsub_hyperbusi1_9_mcrn_t	unMCR0;	/* 0x00000020 */
    un_grpsub_hyperbusi1_9_mcrn_t	unMCR1;	/* 0x00000024 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000028 */
    un_grpsub_hyperbusi1_9_mtrn_t	unMTR0;	/* 0x00000030 */
    un_grpsub_hyperbusi1_9_mtrn_t	unMTR1;	/* 0x00000034 */
    uint_io8_t	au8Reserved3[8];	/* 0x00000038 */
    un_grpsub_hyperbusi1_9_gpor_t	unGPOR;	/* 0x00000040 */
    un_grpsub_hyperbusi1_9_wpr_t	unWPR;	/* 0x00000044 */
    un_grpsub_hyperbusi1_9_test_t	unTEST;	/* 0x00000048 */
    uint_io8_t	au8Reserved4[948];	/* 0x0000004C */
}stc_grpsub_hyperbusi1_9_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_hyperbusi1_9_t	stcGRPSUB_HYPERBUSI1_9;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_HYPERBUSI2 base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_HYPERBUSI2_10	stcGRPSUB_HYPERBUSI2_10
#else /* __IO_DEFINE */
#define GRPSUB_HYPERBUSI2_10	(*((volatile stc_grpsub_hyperbusi2_10_t*)0x50281000))
#endif /* __IO_DEFINE */

/* CSR */
#define GRPSUB_HYPERBUSI2_CSR	(GRPSUB_HYPERBUSI2_10.unCSR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_CSR_RACT	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1RACT)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_RDECERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1RDECERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_RTRSERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1RTRSERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_RRSTOERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1RRSTOERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_RDSSTALL	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1RDSSTALL)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_WACT	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1WACT)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_WDECERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1WDECERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_WTRSERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1WTRSERR)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_CSR_WRSTOERR	(GRPSUB_HYPERBUSI2_10.unCSR.stcField.u1WRSTOERR)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_csr_field{
    uint_io32_t		u1RACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1RDECERR:1;
    uint_io32_t		u1RTRSERR:1;
    uint_io32_t		u1RRSTOERR:1;
    uint_io32_t		u1RDSSTALL:1;
    uint_io32_t		:4;
    uint_io32_t		u1WACT:1;
    uint_io32_t		:7;
    uint_io32_t		u1WDECERR:1;
    uint_io32_t		u1WTRSERR:1;
    uint_io32_t		u1WRSTOERR:1;
    uint_io32_t		:5;
}stc_grpsub_hyperbusi2_10_csr_field_t;

typedef union un_grpsub_hyperbusi2_10_csr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_csr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_csr_t;

/* IEN */
#define GRPSUB_HYPERBUSI2_IEN	(GRPSUB_HYPERBUSI2_10.unIEN.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_IEN_RPCINTE	(GRPSUB_HYPERBUSI2_10.unIEN.stcField.u1RPCINTE)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_IEN_INTP	(GRPSUB_HYPERBUSI2_10.unIEN.stcField.u1INTP)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_ien_field{
    uint_io32_t		u1RPCINTE:1;
    uint_io32_t		:30;
    uint_io32_t		u1INTP:1;
}stc_grpsub_hyperbusi2_10_ien_field_t;

typedef union un_grpsub_hyperbusi2_10_ien{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_ien_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_ien_t;

/* ISR */
#define GRPSUB_HYPERBUSI2_ISR	(GRPSUB_HYPERBUSI2_10.unISR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_ISR_RPCINTS	(GRPSUB_HYPERBUSI2_10.unISR.stcField.u1RPCINTS)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_isr_field{
    uint_io32_t		u1RPCINTS:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi2_10_isr_field_t;

typedef union un_grpsub_hyperbusi2_10_isr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_isr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_isr_t;

/* MBR[0-1] */
#define GRPSUB_HYPERBUSI2_MBR0	(GRPSUB_HYPERBUSI2_10.unMBR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MBR0_A	GRPSUB_HYPERBUSI2_MBR0  /*@bfrg@*/

#define GRPSUB_HYPERBUSI2_MBR1	(GRPSUB_HYPERBUSI2_10.unMBR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MBR1_A	GRPSUB_HYPERBUSI2_MBR1  /*@bfrg@*/

typedef union un_grpsub_hyperbusi2_10_mbrn{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_mbrn_t;

/* MCR[0-1] */
#define GRPSUB_HYPERBUSI2_MCR0	(GRPSUB_HYPERBUSI2_10.unMCR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MCR0_WRAPSIZE	(GRPSUB_HYPERBUSI2_10.unMCR0.stcField.u2WRAPSIZE)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR0_DEVTYPE	(GRPSUB_HYPERBUSI2_10.unMCR0.stcField.u1DEVTYPE)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR0_CRT	(GRPSUB_HYPERBUSI2_10.unMCR0.stcField.u1CRT)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR0_ACS	(GRPSUB_HYPERBUSI2_10.unMCR0.stcField.u1ACS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR0_CRMO	(GRPSUB_HYPERBUSI2_10.unMCR0.stcField.u1CRMO)  /*@bf@*/

#define GRPSUB_HYPERBUSI2_MCR1	(GRPSUB_HYPERBUSI2_10.unMCR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MCR1_WRAPSIZE	(GRPSUB_HYPERBUSI2_10.unMCR1.stcField.u2WRAPSIZE)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR1_DEVTYPE	(GRPSUB_HYPERBUSI2_10.unMCR1.stcField.u1DEVTYPE)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR1_CRT	(GRPSUB_HYPERBUSI2_10.unMCR1.stcField.u1CRT)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR1_ACS	(GRPSUB_HYPERBUSI2_10.unMCR1.stcField.u1ACS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MCR1_CRMO	(GRPSUB_HYPERBUSI2_10.unMCR1.stcField.u1CRMO)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_mcrn_field{
    uint_io32_t		u2WRAPSIZE:2;
    uint_io32_t		:2;
    uint_io32_t		u1DEVTYPE:1;
    uint_io32_t		u1CRT:1;
    uint_io32_t		:10;
    uint_io32_t		u1ACS:1;
    uint_io32_t		u1CRMO:1;
    uint_io32_t		:14;
}stc_grpsub_hyperbusi2_10_mcrn_field_t;

typedef union un_grpsub_hyperbusi2_10_mcrn{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_mcrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_mcrn_t;

/* MTR[0-1] */
#define GRPSUB_HYPERBUSI2_MTR0	(GRPSUB_HYPERBUSI2_10.unMTR0.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MTR0_LTCY	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4LTCY)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_WCSH	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4WCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_RCSH	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4RCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_WCSS	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4WCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_RCSS	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4RCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_WCSHI	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4WCSHI)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR0_RCSHI	(GRPSUB_HYPERBUSI2_10.unMTR0.stcField.u4RCSHI)  /*@bf@*/

#define GRPSUB_HYPERBUSI2_MTR1	(GRPSUB_HYPERBUSI2_10.unMTR1.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_MTR1_LTCY	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4LTCY)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_WCSH	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4WCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_RCSH	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4RCSH)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_WCSS	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4WCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_RCSS	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4RCSS)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_WCSHI	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4WCSHI)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_MTR1_RCSHI	(GRPSUB_HYPERBUSI2_10.unMTR1.stcField.u4RCSHI)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_mtrn_field{
    uint_io32_t		u4LTCY:4;
    uint_io32_t		:4;
    uint_io32_t		u4WCSH:4;
    uint_io32_t		u4RCSH:4;
    uint_io32_t		u4WCSS:4;
    uint_io32_t		u4RCSS:4;
    uint_io32_t		u4WCSHI:4;
    uint_io32_t		u4RCSHI:4;
}stc_grpsub_hyperbusi2_10_mtrn_field_t;

typedef union un_grpsub_hyperbusi2_10_mtrn{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_mtrn_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_mtrn_t;

/* GPOR */
#define GRPSUB_HYPERBUSI2_GPOR	(GRPSUB_HYPERBUSI2_10.unGPOR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_GPOR_GPO0	(GRPSUB_HYPERBUSI2_10.unGPOR.stcField.u1GPO0)  /*@bf@*/
#define GRPSUB_HYPERBUSI2_GPOR_GPO1	(GRPSUB_HYPERBUSI2_10.unGPOR.stcField.u1GPO1)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_gpor_field{
    uint_io32_t		u1GPO0:1;
    uint_io32_t		u1GPO1:1;
    uint_io32_t		:30;
}stc_grpsub_hyperbusi2_10_gpor_field_t;

typedef union un_grpsub_hyperbusi2_10_gpor{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_gpor_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_gpor_t;

/* WPR */
#define GRPSUB_HYPERBUSI2_WPR	(GRPSUB_HYPERBUSI2_10.unWPR.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_WPR_WP	(GRPSUB_HYPERBUSI2_10.unWPR.stcField.u1WP)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_wpr_field{
    uint_io32_t		u1WP:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi2_10_wpr_field_t;

typedef union un_grpsub_hyperbusi2_10_wpr{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_wpr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_wpr_t;

/* TEST */
#define GRPSUB_HYPERBUSI2_TEST	(GRPSUB_HYPERBUSI2_10.unTEST.u32Register)  /*@rg@*/
#define GRPSUB_HYPERBUSI2_TEST_RVD	(GRPSUB_HYPERBUSI2_10.unTEST.stcField.u1RVD)  /*@bf@*/

typedef struct stc_grpsub_hyperbusi2_10_test_field{
    uint_io32_t		u1RVD:1;
    uint_io32_t		:31;
}stc_grpsub_hyperbusi2_10_test_field_t;

typedef union un_grpsub_hyperbusi2_10_test{
    uint_io32_t		u32Register;
    stc_grpsub_hyperbusi2_10_test_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hyperbusi2_10_test_t;


typedef struct stc_grpsub_hyperbusi2_10{
    un_grpsub_hyperbusi2_10_csr_t	unCSR;	/* 0x00000000 */
    un_grpsub_hyperbusi2_10_ien_t	unIEN;	/* 0x00000004 */
    un_grpsub_hyperbusi2_10_isr_t	unISR;	/* 0x00000008 */
    uint_io8_t	au8Reserved0[4];	/* 0x0000000C */
    un_grpsub_hyperbusi2_10_mbrn_t	unMBR0;	/* 0x00000010 */
    un_grpsub_hyperbusi2_10_mbrn_t	unMBR1;	/* 0x00000014 */
    uint_io8_t	au8Reserved1[8];	/* 0x00000018 */
    un_grpsub_hyperbusi2_10_mcrn_t	unMCR0;	/* 0x00000020 */
    un_grpsub_hyperbusi2_10_mcrn_t	unMCR1;	/* 0x00000024 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000028 */
    un_grpsub_hyperbusi2_10_mtrn_t	unMTR0;	/* 0x00000030 */
    un_grpsub_hyperbusi2_10_mtrn_t	unMTR1;	/* 0x00000034 */
    uint_io8_t	au8Reserved3[8];	/* 0x00000038 */
    un_grpsub_hyperbusi2_10_gpor_t	unGPOR;	/* 0x00000040 */
    un_grpsub_hyperbusi2_10_wpr_t	unWPR;	/* 0x00000044 */
    un_grpsub_hyperbusi2_10_test_t	unTEST;	/* 0x00000048 */
    uint_io8_t	au8Reserved4[948];	/* 0x0000004C */
}stc_grpsub_hyperbusi2_10_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_hyperbusi2_10_t	stcGRPSUB_HYPERBUSI2_10;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


/* GRPSUB_HPBM base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define GRPSUB_HPBM_11	stcGRPSUB_HPBM_11
#else /* __IO_DEFINE */
#define GRPSUB_HPBM_11	(*((volatile stc_grpsub_hpbm_11_t*)0x50400000))
#endif /* __IO_DEFINE */

/* Remap */
#define GRPSUB_HPBM_Remap	(GRPSUB_HPBM_11.unRemap.u32Register)  /*@rg@*/
#define GRPSUB_HPBM_REMAP	(GRPSUB_HPBM_Remap)  /*@rg2@*/
#define GRPSUB_HPBM_Remap_remap	(GRPSUB_HPBM_11.unRemap.stcField.u1remap)  /*@bf@*/
#define GRPSUB_HPBM_REMAP_REMAP	GRPSUB_HPBM_Remap_remap  /*@bf2@*/

typedef struct stc_grpsub_hpbm_11_remap_field{
    uint_io32_t		u1remap:1;
    uint_io32_t		:31;
}stc_grpsub_hpbm_11_remap_field_t;

typedef union un_grpsub_hpbm_11_remap{
    uint_io32_t		u32Register;
    stc_grpsub_hpbm_11_remap_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_grpsub_hpbm_11_remap_t;


typedef struct stc_grpsub_hpbm_11{
    un_grpsub_hpbm_11_remap_t	unRemap;	/* 0x00000000 */
    uint_io8_t	au8Reserved0[1048572];	/* 0x00000004 */
}stc_grpsub_hpbm_11_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_grpsub_hpbm_11_t	stcGRPSUB_HPBM_11;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1048576(0x100000) bytes */


#endif /* __S6J3200_GRPSUB_H */
