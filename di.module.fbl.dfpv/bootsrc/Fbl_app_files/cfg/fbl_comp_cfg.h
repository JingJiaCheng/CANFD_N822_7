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

File Name        :  fbl_comp_cfg.h
Module Short Name:  fbl.main.df91
VOBName          :  fbl.main.df91\cfg\fbl_comp_cfg.h
Author           :  kshanmu4
Description      :  FBL Configuration File
Organization     :  Driver Information Software Section,
                    Visteon Corporation
----------------------------------------------------------------------------
Compiler Name    :  Renesas SH Compiler v.9.02 and v.9.03
Target Processor :  Renesas SH7269
******************************************************************************/
#ifndef FBL_COMP_CFG_H
#define FBL_COMP_CFG_H

//#define FBL_COMP_0					((UINT8)0)
//#define FBL_COMP_1					((UINT8)1)
//#define FBL_COMP_MAX				((UINT8)3)

//#define FBL_COMP_APP				FBL_COMP_0
//#define FBL_COMP_HF0				FBL_COMP_1

typedef enum FBL_COMP_ID    /* The assignment here must refer to FBL_APP_COMP_INFO_CFG */
{
    FBL_COMP_APP = 0,
    FBL_COMP_HF0 = 1,
    FBL_COMP_RAM = 2,       /*Must be before "FBL_COMP_MAX". This variable is used in the macro(FINGERPRINT_BLOCK_MAX_ID) */
    FBL_COMP_MAX
}FBL_COMP_ID_STRU;

/* Component Header Offset */
#define COMP_0_HEADER_OFFSET			(0x00000000u)
#define COMP_1_HEADER_OFFSET			(0x00000000u)

/* Component Part No Size */
#define FBL_COMP_PART_NO_BYTES		8u

/* Tester ID Size */
#define FBL_COMP_TESTER_ID_BYTES	48u

/* Expanded Version Information */
#define FBL_COMP_VERSION_INFO_FULL

#define HYPERFLASH0_START_ADDRESS 0x48000000u
#define HYPERFLASH0_END_ADDRESS   0x4BFFFFFFu
#define HYPERFLASH1_START_ADDRESS 0x4C000000u
#define HYPERFLASH1_END_ADDRESS   0x4DFFFFFFu

#define HF0_AXI_START_MASTER_ADDR_REG 0x40000000u
#define HF0_AXI_END_MASTER_ADDR_REG   0x43FFFFFFu
#define HF1_AXI_START_MASTER_ADDR_REG 0x44000000u
#define HF1_AXI_END_MASTER_ADDR_REG   0x45FFFFFFu


#define FBL_APP_COMP_INFO_CFG	\
{	/* Main Application Logic */								\
	0x01A00000u,			/* Memory Start */					\
	0x01BFFFFFu,			/* Memory End */					\
	MEMDRV_FLASH_ID,		/* Memory Driver */ 				\
	0x0000000u,				/* Memory Offset */ 				\
	0x0005u,				/* Max Reprogramming Attempts */ 	\
	COMP_0_HEADER_OFFSET	/* Memory offset to APP Header */	\
},																\
{	/* Hyper Flash 0 Data */									\
	HYPERFLASH0_START_ADDRESS,			/* Memory Start */		\
	HYPERFLASH0_END_ADDRESS,			/* Memory End */		\
	MEMDRV_HYPERFLASH0_ID,		/* Memory Driver */ 			\
	0x00000000u,			/* Memory Offset */ 				\
	0x0005u,				/* Max Reprogramming Attempts */ 	\
	COMP_1_HEADER_OFFSET	/* Memory offset to NVM Header */	\
},																\
{   /* Main RAM */                                \
    0x00010000u,            /* RAM Start */                  \
    0x0001FFFFu,            /* RAM End */                    \
    MEMDRV_RAM_ID,        /* RAM Driver */                 \
    0x0000000u,             /* RAM Offset */                 \
    0x0005u,                /* Max Reprogramming Attempts */    \
    COMP_0_HEADER_OFFSET    /* RAM offset to APP Header */   \
}                                                              \

#endif /* FBL_COMP_CFG_H */
