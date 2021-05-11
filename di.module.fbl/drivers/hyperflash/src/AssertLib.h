//---------------------------------------------------------------------------------------------------------------------
//
// VISTEON CORPORATION CONFIDENTIAL
// ________________________________
//
// [2015] Visteon Corporation
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
#ifndef ASSERTLIB_H_
#define ASSERTLIB_H_

//=====================================================================================================================
//  CONSTANTS & TYPES
//=====================================================================================================================

#ifdef DEBUG_ASSERT_ON
/// @brief Calls project specific DebugHandler when condition evaluates to zero (usually stops at breakpoint).
///<br> Macro extends to source code in debug only, it does not exist in release.
///<br>Macro extension depends from specific pre-processor define "DEBUG_ASSERT_ON".
    #define DEBUG_ASSERT(Condition) DebugAssert((boolean)(Condition))
    void DebugAssert( const boolean Condition );
#else
    #define DEBUG_ASSERT(Condition)
#endif

/// @brief Static assert. It stops at compile time when condition evaluates to zero.
/* MISRA_PREPROCESS */ #define STATIC_ASSERT(Condition) { switch(0){ case 0: case Condition:; } }

#endif /* ASSERTLIB_H_ */
