//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2017] Visteon Corporation
// All Rights Reserved.
//
// NOTICE: This is an unpublished work of authorship, which contains trade secrets.
// Visteon Corporation owns all rights to this work and intends to maintain it in confidence to preserve
// its trade secret status. Visteon Corporation reserves the right, under the copyright laws of the United States
// or those of any other country that may have jurisdiction, to protect this work as an unpublished work,
// in the event of an inadvertent or deliberate unauthorized publication. Visteon Corporation also reserves its rights
// under all copyright laws to protect this work as a published work, when appropriate.
// Those having access to this work may not copy it, use it, modify it, or disclose the information contained in it
// without the written authorization of Visteon Corporation.
//
//---------------------------------------------------------------------------------------------------------------------
//
// File generated automatically using Visteon TmExt Configurator 1.0
// Date:           Thu Feb 02 14:17:43 EET 2017
// User:           amihayl1
// Configuration:  MAZDA-J59
// Comment:
//      Configuration for TA 1.5
//
//---------------------------------------------------------------------------------------------------------------------
#include "Rte_TmExt.h"
#include "TmExt_Pulse.h"
#include "TmExt_Cfg.h"

//----------------------------------------------------------------------------------------------------------------------
// Free running counter in ms
//----------------------------------------------------------------------------------------------------------------------
static uint32 FreeRunningCounter = 0;


// <TmExt_Cfg.c - BEGIN GENERATED SECTION FOR PULSE>


//----------------------------------------------------------------------------------------------------------------------
// Definitions related to the channel TestChannel0 (For UT purposes)
//----------------------------------------------------------------------------------------------------------------------
#define cTESTCHANNEL0_PATTERN_SIZE          (0x4UL)
#define cTESTCHANNEL0_PATTERN              { cTESTCHANNEL0_PATTERN_SIZE, 0xAUL, 0x14UL, 0x1EUL, 0x28UL }

//----------------------------------------------------------------------------------------------------------------------
// Definitions related to the channel TestChannel1 (For UT purposes)
//----------------------------------------------------------------------------------------------------------------------
#define cTESTCHANNEL1_PATTERN_SIZE          (0x2UL)
#define cTESTCHANNEL1_PATTERN              { cTESTCHANNEL1_PATTERN_SIZE, 0x32UL, 0x14UL }

//----------------------------------------------------------------------------------------------------------------------
// Definitions related to the channel TestChannel2 (For UT purposes)
//----------------------------------------------------------------------------------------------------------------------
#define cTESTCHANNEL2_PATTERN_SIZE          (0x5UL)
#define cTESTCHANNEL2_PATTERN              { cTESTCHANNEL2_PATTERN_SIZE, 0x1UL, 0x5UL, 0x258UL, 0x14UL, 0xAUL }

//----------------------------------------------------------------------------------------------------------------------
// Definitions related to the channel TestChannel3 (For UT purposes)
//----------------------------------------------------------------------------------------------------------------------
#define cTESTCHANNEL3_PATTERN_SIZE          (0x3UL)
#define cTESTCHANNEL3_PATTERN              { cTESTCHANNEL3_PATTERN_SIZE, 0x64UL, 0xC8UL, 0x64UL }

//----------------------------------------------------------------------------------------------------------------------
// Definitions related to the channel Chnl1Hz (1[Hz] ON - 500[ms] OFF - 500[ms])
//----------------------------------------------------------------------------------------------------------------------
#define cCHNL1HZ_PATTERN_SIZE          (0x2UL)
#define cCHNL1HZ_PATTERN              { cCHNL1HZ_PATTERN_SIZE, 0x32UL, 0x32UL }


//----------------------------------------------------------------------------------------------------------------------
// Channels patterns
//----------------------------------------------------------------------------------------------------------------------
static VCONST uint32 TestChannel0Pattern[cTESTCHANNEL0_PATTERN_SIZE + 0x01UL] = cTESTCHANNEL0_PATTERN;
static VCONST uint32 TestChannel1Pattern[cTESTCHANNEL1_PATTERN_SIZE + 0x01UL] = cTESTCHANNEL1_PATTERN;
static VCONST uint32 TestChannel2Pattern[cTESTCHANNEL2_PATTERN_SIZE + 0x01UL] = cTESTCHANNEL2_PATTERN;
static VCONST uint32 TestChannel3Pattern[cTESTCHANNEL3_PATTERN_SIZE + 0x01UL] = cTESTCHANNEL3_PATTERN;
static VCONST uint32 Chnl1HzPattern[cCHNL1HZ_PATTERN_SIZE + 0x01UL] = cCHNL1HZ_PATTERN;

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_UnitTest1(const SPulseNotification* Notification)
{
#ifdef UTEST
    (void)Rte_Call_TITmExt_Notify_Test1(Notification);
#else
    (void)*Notification;
#endif
}

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_UnitTest2(const SPulseNotification* Notification)
{
#ifdef UTEST
    (void)Rte_Call_TITmExt_Notify_Test2(Notification);
#else
    (void)*Notification;
#endif
}

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_UnitTest3(const SPulseNotification* Notification)
{
#ifdef UTEST
    (void)Rte_Call_TITmExt_Notify_Test3(Notification);
#else
    (void)*Notification;
#endif
}

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_UnitTest4(const SPulseNotification* Notification)
{
#ifdef UTEST
    (void)Rte_Call_TITmExt_Notify_Test4(Notification);
#else
    (void)*Notification;
#endif
}


// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_GdtCtrl(const SPulseNotification* Notification)
{
    //QACJ 3417: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
    //QACJ 3426: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
    //(void)Rte_Call_tiCS_TITmExt_Notify_Notification(Notification);
}

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_SndView(const SPulseNotification* Notification)
{
    //QACJ 3417: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
    //QACJ 3426: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
//    (void)Rte_Call_rpCS_rNotify_NotifySndView_TITmExt_Notify_Notification(Notification);
}

// The following wrapper function is due to the kind of RTE macros that are generated !!
void Notify_TtView(const SPulseNotification* Notification)
{
    //QACJ 3417: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
    //QACJ 3426: rmitev: no warning here, it is from RTE generator which is MISRA 2004 based instead of MISRA 2012
//    (void)Rte_Call_rpCS_rNotify_NotifyTtView_TITmExt_Notify_Notification(Notification);
}


//----------------------------------------------------------------------------------------------------------------------
// A table of all clients with related notification functions.
//----------------------------------------------------------------------------------------------------------------------
static const p_FClientNotificationFunction ClientFunctionTable[eClientCount] =
{
    Notify_UnitTest1,
    Notify_UnitTest2,
    Notify_UnitTest3,
    Notify_UnitTest4,
    Notify_GdtCtrl,
    Notify_SndView,
    Notify_TtView,
};

//----------------------------------------------------------------------------------------------------------------------
// A table of necessary channel configuration parameters. The table is sorted by channels.
//----------------------------------------------------------------------------------------------------------------------
static STmExtChannelConfigType const ChannelConfigTable[ePulseChannelCount] =
{
    {
        TestChannel0Pattern,
        1,
    },
    {
        TestChannel1Pattern,
        1,
    },
    {
        TestChannel2Pattern,
        0,
    },
    {
        TestChannel3Pattern,
        1,
    },
    {
        Chnl1HzPattern,
        0,
    },
};


// <TmExt_Cfg.c - END GENERATED SECTION FOR PULSE>

const STmExtChannelConfigType* TmExt_GetChannelCfgTable(const TPulseChannelId ChannelId)
{
    return &ChannelConfigTable[ChannelId];
}

p_FClientNotificationFunction TmExt_GetClientFunctionCfgTable(const TPulseClientId ClientId)
{
    return ClientFunctionTable[ClientId];
}

void TmExt_UpdateFreeRunningCounter( void )
{
	FreeRunningCounter++;
}
