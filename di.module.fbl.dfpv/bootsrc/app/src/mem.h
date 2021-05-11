/******************************************************************************
 * $Revision: 8547 $
 * $Date:: 2014-12-01 09:55:03 +0100#$
 *****************************************************************************/
/* __DISCLAIMER_START__                                                      */
/******************************************************************************
* Copyright (C) 2014 Spansion LLC. All Rights Reserved.
*
* This software is owned and published by:
* Spansion LLC, 915 DeGuigne Dr. Sunnyvale, CA  94088-3453 ("Spansion").
*
* BY DOWNLOADING, INSTALLING OR USING THIS SOFTWARE, YOU AGREE TO BE BOUND
* BY ALL THE TERMS AND CONDITIONS OF THIS AGREEMENT.
*
* This software contains source code for use with Spansion
* components. This software is licensed by Spansion to be adapted only
* for use in systems utilizing Spansion components. Spansion shall not be
* responsible for misuse or illegal use of this software for devices not
* supported herein.  Spansion is providing this software "AS IS" and will
* not be responsible for issues arising from incorrect user implementation
* of the software.
*
* SPANSION MAKES NO WARRANTY, EXPRESS OR IMPLIED, ARISING BY LAW OR OTHERWISE,
* REGARDING THE SOFTWARE (INCLUDING ANY ACOOMPANYING WRITTEN MATERIALS),
* ITS PERFORMANCE OR SUITABILITY FOR YOUR INTENDED USE, INCLUDING,
* WITHOUT LIMITATION, THE IMPLIED WARRANTY OF MERCHANTABILITY, THE IMPLIED
* WARRANTY OF FITNESS FOR A PARTICULAR PURPOSE OR USE, AND THE IMPLIED
* WARRANTY OF NONINFRINGEMENT.
* SPANSION SHALL HAVE NO LIABILITY (WHETHER IN CONTRACT, WARRANTY, TORT,
* NEGLIGENCE OR OTHERWISE) FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION,
* LOSS OF BUSINESS INFORMATION, OR OTHER PECUNIARY LOSS) ARISING FROM USE OR
* INABILITY TO USE THE SOFTWARE, INCLUDING, WITHOUT LIMITATION, ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL OR CONSEQUENTIAL DAMAGES OR LOSS OF DATA,
* SAVINGS OR PROFITS,
* EVEN IF SPANSION HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* YOU ASSUME ALL RESPONSIBILITIES FOR SELECTION OF THE SOFTWARE TO ACHIEVE YOUR
* INTENDED RESULTS, AND FOR THE INSTALLATION OF, USE OF, AND RESULTS OBTAINED
* FROM, THE SOFTWARE.
*
* This software may be replicated in part or whole for the licensed use,
* with the restriction that this Disclaimer and Copyright notice must be
* included with each copy of this software, whether used in part or whole,
* at all times.
******************************************************************************/
/* __DISCLAIMER_END__                                                        */
/*****************************************************************************
 ** \file  mem.h
 **
 ** Headerfile for Mem functions
 **
 ** History:
 **   - 2014-06-02  0.01  HS   Initial version for Traveo
 **   - 2014-10-22  0.23  CEy  Added function for GFX Sub-System MPU setup,
 **                            fixed number of max. MPU regions
 **   - 2014-11-27  0.24  CEy  Typo ...NormalWtWa -> ...NormalWbWa
 *****************************************************************************/

#ifndef __MEM_H__
#define __MEM_H__

/*****************************************************************************/
/* Include files                                                             */
/*****************************************************************************/
#include "base_types.h"

/* C binding of definitions if building with C++ compiler */
#ifdef __cplusplus
extern "C"
{
#endif

/**
 *****************************************************************************
 ** \defgroup MemGroup Memory Functions (MEM)
 **
 ** \brief This section describes the interface for the Memory functions.
 **
 ** Provided functions of Mem module:
 ** 
 ** - Mem_SetMpuConfig();
 ** - Mem_GetMpuConfig();
 **
 ** Mem_SetMpuConfig() and  Mem_GetMpuConfig() can be used to configure core MPU.
 ** Please see #stc_mem_mpu_config_t and Cortex-r5 technical reference manual.
 **
 *****************************************************************************/
/*!@{ */

/*****************************************************************************/
/* Global pre-processor symbols/macros ('#define')                           */
/*****************************************************************************/

/** Maximum numbers of MPU regions maintained by mem module. This number
 ** must not necessarily correspond to all MPU types. */
#define MEM_MPU_MAX_REGIONS         16

/** Number of sub-regions  **/
#define MEM_MPU_SUB_REGION_NUM  (8)

 /**
 *****************************************************************************
 ** \brief MPU access permission
 ** 
 ** MPU access permission for access in privileged and non privileged mode.
 *****************************************************************************/
typedef enum en_mem_mpu_access_permission
{
  MemMpuNoAccessPNoAccessNP1  = 0,  /*!< No access neither in privileged nor in non privileged mode. */
  MemMpuRWPNoAccessNP         = 1,  /*!< Read and write possible only in privileged mode, no access in non privileged mode. */
  MemMpuRWPOnlyRNP            = 2,  /*!< Read and write possible in privileged mode, only read allowed in non privileged mode. */
  MemMpuRWPRWNP               = 3,  /*!< Read and write possible in privileged and non privileged mode. */
  MemMpuNoAccessPNoAccessNP2  = 5,  /*!< Read only in privileged mode,no access in non privileged mode. */
  MemMpuOnlyRPNoAccessNP      = 6   /*!< Read only in privileged mode and non privileged mode. */
}en_mem_mpu_access_permission_t;


 /**
 *****************************************************************************
 ** \brief Region size definition
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/ 
typedef enum en_mem_mpu_region_size
{
    MemMpuRegionSize32Byte  = 4,    /*!< Region size 32 Byte */
    MemMpuRegionSize64Byte  = 5,    /*!< Region size 64 Byte */
    MemMpuRegionSize128Byte = 6,    /*!< Region size 128 Byte */
    MemMpuRegionSize256Byte = 7,    /*!< Region size 256 Byte */
    MemMpuRegionSize512Byte = 8,    /*!< Region size 512 Byte */
    MemMpuRegionSize1kB     = 9,    /*!< Region size 1 kB */
    MemMpuRegionSize2kB     = 10,   /*!< Region size 2 kB */
    MemMpuRegionSize4kB     = 11,   /*!< Region size 4 kB */
    MemMpuRegionSize8kB     = 12,   /*!< Region size 8 kB */
    MemMpuRegionSize16kB    = 13,   /*!< Region size 16 kB */
    MemMpuRegionSize32kB    = 14,   /*!< Region size 32 kB */
    MemMpuRegionSize64kB    = 15,   /*!< Region size 64 kB */
    MemMpuRegionSize128kB   = 16,   /*!< Region size 128 kB */
    MemMpuRegionSize256kB   = 17,   /*!< Region size 256 kB */
    MemMpuRegionSize512kB   = 18,   /*!< Region size 512 kB */
    MemMpuRegionSize1MB     = 19,   /*!< Region size 1M MB */
    MemMpuRegionSize2MB     = 20,   /*!< Region size 2 MB */
    MemMpuRegionSize4MB     = 21,   /*!< Region size 4 MB */
    MemMpuRegionSize8MB     = 22,   /*!< Region size 8 MB */
    MemMpuRegionSize16MB    = 23,   /*!< Region size 16 MB */
    MemMpuRegionSize32MB    = 24,   /*!< Region size 32 MB */
    MemMpuRegionSize64MB    = 25,   /*!< Region size 64 MB */
    MemMpuRegionSize128MB   = 26,   /*!< Region size 128 MB */
    MemMpuRegionSize256MB   = 27,   /*!< Region size 256 MB */
    MemMpuRegionSize512MB   = 28,   /*!< Region size 512 MB */
    MemMpuRegionSize1GB     = 29,   /*!< Region size 1 GB */
    MemMpuRegionSize2GB     = 30,   /*!< Region size 2 GB */
    MemMpuRegionSize4GB     = 31,   /*!< Region size 4 GB */
} en_mem_mpu_region_size_t;


 /**
 *****************************************************************************
 ** \brief Main memory attribute definition for a region, the other attributes
 **        may be dependend on what is selected here
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/ 
typedef enum en_mem_mpu_region_main_attrib
{
    MemMpuRegionMainAttribStronglyOrdered       = 0,  /*!< Strongly Ordered memory */
    MemMpuRegionMainAttribDeviceShareable       = 1,  /*!< Shareable Device memory */
    MemMpuRegionMainAttribNormalWtNoWa          = 2,  /*!< Normal memory, with outer & inner write-through, no write-allocate cache policy */
    MemMpuRegionMainAttribNormalWbNoWa          = 3,  /*!< Normal memory, with outer & inner write-back, no write-allocate cache policy */
    MemMpuRegionMainAttribNormalNonCacheable    = 4,  /*!< Normal memory, non-cacheable */
    MemMpuRegionMainAttribNormalWbWa            = 7,  /*!< Normal memory, with outer & inner write-back, write-allocate cache policy */
    MemMpuRegionMainAttribDeviceNonShareable    = 8,  /*!< Non-shareable Device memory */
    MemMpuRegionMainAttribNormalDiffCachePolicy = 16, /*!< Normal memory, that can have different outer & inner cache policies */
} en_mem_mpu_region_main_attrib_t;


/**
 *****************************************************************************
 ** \brief Shareable memory attribute definition for a region (only effective
 **        if main memory attribute defines a "Normal" memory type)
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/ 
typedef enum en_mem_mpu_region_share_attrib
{
    MemMpuRegionShareAttribNonShareable = 0,  /*!< Memory region is non-shareable */
    MemMpuRegionShareAttribShareable = 1,     /*!< Memory region is shareable */
} en_mem_mpu_region_share_attrib_t;


/**
 *****************************************************************************
 ** \brief Cacheable memory attribute definition for a region (only effective
 **        if main memory attribute defines a "Normal" memory type with
 **        different outer & inner cache policies)
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/ 
typedef enum en_mem_mpu_region_cache_attrib
{
    MemMpuRegionCacheAttribNonCacheable             = 0,  /*!< Non-cacheable */
    MemMpuRegionCacheAttribWriteBackWriteAlloc      = 1,  /*!< Write-back, write-allocate */
    MemMpuRegionCacheAttribWriteThroughNoWriteAlloc = 2,  /*!< Write-through, no write-allocate */
    MemMpuRegionCacheAttribWriteBackNoWriteAlloc    = 3,  /*!< Write-back, no write-allocate */
} en_mem_mpu_region_cache_attrib_t;


/**
 *****************************************************************************
 ** \brief Execute Never. Determines if a region of memory is executable.
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/
typedef enum en_mem_mpu_region_exec_never
{
    MemMpuRegionExecEnable = 0,   /*!< all instruction fetches enabled */
    MemMpuRegionExecDisable = 1   /*!< no instruction fetches enabled. */
} en_mem_mpu_region_exec_never_t;


/**
 *****************************************************************************
 ** \brief Sub-region disable
 **
 ** For further information refer to ARM Cortex-R5 Technical Reference Manual.
 *****************************************************************************/
typedef enum en_mem_mpu_region_sub_disable
{
    MemMpuRegionSubEnable = 0,   /*!< address range is part of this region */
    MemMpuRegionSubDisable = 1   /*!< address range is not part of this region. */
} en_mem_mpu_region_sub_disable_t;


 /**
 *****************************************************************************
 ** \brief MPU memory attribute structure
 **
 ** Memory attribute configuration for a single memory region.  
 *****************************************************************************/ 
typedef struct stc_mem_mpu_memory_region_attributes
{
    en_mem_mpu_region_main_attrib_t  enMainMemAttribute;  /*!< Main memory attribute */
    en_mem_mpu_region_share_attrib_t enShareAttribute;    /*!< Defines shareability in case main memory attribute specifies "Normal" memory */
    en_mem_mpu_region_cache_attrib_t enInnerCachePolicy;  /*!< Defines inner cache policy in case main memory attribute specifies "Normal" memory with different cache policies */
    en_mem_mpu_region_cache_attrib_t enOuterCachePolicy;  /*!< Defines inner cache policy in case main memory attribute specifies "Normal" memory with different cache policies */
} stc_mem_mpu_memory_region_attributes_t;

/**
 *****************************************************************************
 ** \brief MPU region structure
 **
 ** Configuration for a single memory region.  
 *****************************************************************************/ 
typedef struct stc_mem_mpu_memory_region
{
    boolean_t                              bEnable;             /*!< Enable or disable memory region. */
    en_mem_mpu_access_permission_t         enAccessPermission;  /*!< See definition of #en_mem_mpu_access_permission_t. */
    en_mem_mpu_region_sub_disable_t        aenSubDisables[MEM_MPU_SUB_REGION_NUM];  /* See description of #en_mem_mpu_region_sub_disable_t. */
    en_mem_mpu_region_exec_never_t         enExecNever;         /*!< See definition of #en_mem_mpu_region_exec_never_t.*/
    uint32_t                               u32StartAddress;     /*!< 32 bit Start address. */
    en_mem_mpu_region_size_t               enRegionSize;        /*!< Region Size (see #en_mem_mpu_region_size_t) */
    stc_mem_mpu_memory_region_attributes_t stcRegionAttributes; /*!< Memory attributes of the region (see #stc_mem_mpu_memory_region_attributes_t) */
} stc_mem_mpu_memory_region_t;


/**
 *****************************************************************************
 ** \brief  MPU configuration structure.
 **
 ** \note The number of available regions depends on the selected MPU type
 **       (i.e. en_mem_mpu_id_t).
 *****************************************************************************/
typedef struct stc_mem_mpu_config
{
    boolean_t bEnableMpu;                               /*!<  Enable or disable protection and monitoring unit. */
    boolean_t bEnableBackgroundRegion;                  /*!<  Enable or disable MPU background region. */
    stc_mem_mpu_memory_region_t astcRegion[MEM_MPU_MAX_REGIONS];  /*!<  See description of #stc_mem_mpu_memory_region_t. */
} stc_mem_mpu_config_t;

/*****************************************************************************/
/* Global function prototypes ('extern', definition in C source)             */
/*****************************************************************************/
extern en_result_t Mem_SetMpuConfig(const stc_mem_mpu_config_t* pstcConfig);
extern en_result_t Mem_GetMpuConfig(stc_mem_mpu_config_t* pstcConfig);
extern en_result_t Mem_SetMpuForGfxSubSystem(void);

/*!@} */

#ifdef __cplusplus
}
#endif

#endif /* __MEM_H__ */
