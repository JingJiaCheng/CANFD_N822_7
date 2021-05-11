/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SMIX_H
#define __S6J3200_SMIX_H

#include "s6j3200io_basetypes.h"

/* SMIX base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SMIX	stcSMIX
#else /* __IO_DEFINE */
#define SMIX	(*((volatile stc_smix_t*)0xB8020000))
#endif /* __IO_DEFINE */

/* MXCH */
#define SMIX_MXCH	(SMIX.unMXCH.u32Register)  /*@rg@*/
#define SMIX_MXCH_WFG0	(SMIX.unMXCH.stcField.u1WFG0)  /*@bf@*/
#define SMIX_MXCH_WFG1	(SMIX.unMXCH.stcField.u1WFG1)  /*@bf@*/
#define SMIX_MXCH_WFG2	(SMIX.unMXCH.stcField.u1WFG2)  /*@bf@*/
#define SMIX_MXCH_WFG3	(SMIX.unMXCH.stcField.u1WFG3)  /*@bf@*/
#define SMIX_MXCH_WFG4	(SMIX.unMXCH.stcField.u1WFG4)  /*@bf@*/
#define SMIX_MXCH_PMIS0	(SMIX.unMXCH.stcField.u1PMIS0)  /*@bf@*/
#define SMIX_MXCH_PMIS1	(SMIX.unMXCH.stcField.u1PMIS1)  /*@bf@*/
#define SMIX_MXCH_PMIS2	(SMIX.unMXCH.stcField.u1PMIS2)  /*@bf@*/
#define SMIX_MXCH_PMIS3	(SMIX.unMXCH.stcField.u1PMIS3)  /*@bf@*/
#define SMIX_MXCH_PMIS4	(SMIX.unMXCH.stcField.u1PMIS4)  /*@bf@*/

typedef struct stc_smix_mxch_field{
    uint_io32_t		u1WFG0:1;
    uint_io32_t		u1WFG1:1;
    uint_io32_t		u1WFG2:1;
    uint_io32_t		u1WFG3:1;
    uint_io32_t		u1WFG4:1;
    uint_io32_t		u1PMIS0:1;
    uint_io32_t		u1PMIS1:1;
    uint_io32_t		u1PMIS2:1;
    uint_io32_t		u1PMIS3:1;
    uint_io32_t		u1PMIS4:1;
    uint_io32_t		:22;
}stc_smix_mxch_field_t;

typedef union un_smix_mxch{
    uint_io32_t		u32Register;
    stc_smix_mxch_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxch_t;

/* MXOCTRL */
#define SMIX_MXOCTRL	(SMIX.unMXOCTRL.u32Register)  /*@rg@*/
#define SMIX_MXOCTRL_MACRO	(SMIX.unMXOCTRL.stcField.u3MACRO)  /*@bf@*/
#define SMIX_MXOCTRL_DATATN	(SMIX.unMXOCTRL.stcField.u4DATATN)  /*@bf@*/

typedef struct stc_smix_mxoctrl_field{
    uint_io32_t		u3MACRO:3;
    uint_io32_t		:5;
    uint_io32_t		u4DATATN:4;
    uint_io32_t		:20;
}stc_smix_mxoctrl_field_t;

typedef union un_smix_mxoctrl{
    uint_io32_t		u32Register;
    stc_smix_mxoctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxoctrl_t;

/* MXDRQCTRL */
#define SMIX_MXDRQCTRL	(SMIX.unMXDRQCTRL.u32Register)  /*@rg@*/
#define SMIX_MXDRQCTRL_FESTCH0	(SMIX.unMXDRQCTRL.stcField.u4FESTCH0)  /*@bf@*/
#define SMIX_MXDRQCTRL_FESTCH1	(SMIX.unMXDRQCTRL.stcField.u4FESTCH1)  /*@bf@*/
#define SMIX_MXDRQCTRL_FESTCH2	(SMIX.unMXDRQCTRL.stcField.u4FESTCH2)  /*@bf@*/
#define SMIX_MXDRQCTRL_FESTCH3	(SMIX.unMXDRQCTRL.stcField.u4FESTCH3)  /*@bf@*/
#define SMIX_MXDRQCTRL_FESTCH4	(SMIX.unMXDRQCTRL.stcField.u4FESTCH4)  /*@bf@*/
#define SMIX_MXDRQCTRL_DMAENCH0	(SMIX.unMXDRQCTRL.stcField.u1DMAENCH0)  /*@bf@*/
#define SMIX_MXDRQCTRL_DMAENCH1	(SMIX.unMXDRQCTRL.stcField.u1DMAENCH1)  /*@bf@*/
#define SMIX_MXDRQCTRL_DMAENCH2	(SMIX.unMXDRQCTRL.stcField.u1DMAENCH2)  /*@bf@*/
#define SMIX_MXDRQCTRL_DMAENCH3	(SMIX.unMXDRQCTRL.stcField.u1DMAENCH3)  /*@bf@*/
#define SMIX_MXDRQCTRL_DMAENCH4	(SMIX.unMXDRQCTRL.stcField.u1DMAENCH4)  /*@bf@*/

typedef struct stc_smix_mxdrqctrl_field{
    uint_io32_t		u4FESTCH0:4;
    uint_io32_t		u4FESTCH1:4;
    uint_io32_t		u4FESTCH2:4;
    uint_io32_t		u4FESTCH3:4;
    uint_io32_t		u4FESTCH4:4;
    uint_io32_t		:4;
    uint_io32_t		u1DMAENCH0:1;
    uint_io32_t		u1DMAENCH1:1;
    uint_io32_t		u1DMAENCH2:1;
    uint_io32_t		u1DMAENCH3:1;
    uint_io32_t		u1DMAENCH4:1;
    uint_io32_t		:3;
}stc_smix_mxdrqctrl_field_t;

typedef union un_smix_mxdrqctrl{
    uint_io32_t		u32Register;
    stc_smix_mxdrqctrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxdrqctrl_t;

/* MXICTRL */
#define SMIX_MXICTRL	(SMIX.unMXICTRL.u32Register)  /*@rg@*/
#define SMIX_MXICTRL_PMIS0FREQ	(SMIX.unMXICTRL.stcField.u3PMIS0FREQ)  /*@bf@*/
#define SMIX_MXICTRL_PMIS1FREQ	(SMIX.unMXICTRL.stcField.u3PMIS1FREQ)  /*@bf@*/
#define SMIX_MXICTRL_PMIS2FREQ	(SMIX.unMXICTRL.stcField.u3PMIS2FREQ)  /*@bf@*/
#define SMIX_MXICTRL_PMIS3FREQ	(SMIX.unMXICTRL.stcField.u3PMIS3FREQ)  /*@bf@*/
#define SMIX_MXICTRL_PMIS4FREQ	(SMIX.unMXICTRL.stcField.u3PMIS4FREQ)  /*@bf@*/

typedef struct stc_smix_mxictrl_field{
    uint_io32_t		u3PMIS0FREQ:3;
    uint_io32_t		:1;
    uint_io32_t		u3PMIS1FREQ:3;
    uint_io32_t		:1;
    uint_io32_t		u3PMIS2FREQ:3;
    uint_io32_t		:1;
    uint_io32_t		u3PMIS3FREQ:3;
    uint_io32_t		:1;
    uint_io32_t		u3PMIS4FREQ:3;
    uint_io32_t		:13;
}stc_smix_mxictrl_field_t;

typedef union un_smix_mxictrl{
    uint_io32_t		u32Register;
    stc_smix_mxictrl_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxictrl_t;

/* MXCHMONO */
#define SMIX_MXCHMONO	(SMIX.unMXCHMONO.u32Register)  /*@rg@*/
#define SMIX_MXCHMONO_PMIS0MONO	(SMIX.unMXCHMONO.stcField.u2PMIS0MONO)  /*@bf@*/
#define SMIX_MXCHMONO_PMIS1MONO	(SMIX.unMXCHMONO.stcField.u2PMIS1MONO)  /*@bf@*/
#define SMIX_MXCHMONO_PMIS2MONO	(SMIX.unMXCHMONO.stcField.u2PMIS2MONO)  /*@bf@*/
#define SMIX_MXCHMONO_PMIS3MONO	(SMIX.unMXCHMONO.stcField.u2PMIS3MONO)  /*@bf@*/
#define SMIX_MXCHMONO_PMIS4MONO	(SMIX.unMXCHMONO.stcField.u2PMIS4MONO)  /*@bf@*/

typedef struct stc_smix_mxchmono_field{
    uint_io32_t		u2PMIS0MONO:2;
    uint_io32_t		u2PMIS1MONO:2;
    uint_io32_t		u2PMIS2MONO:2;
    uint_io32_t		u2PMIS3MONO:2;
    uint_io32_t		u2PMIS4MONO:2;
    uint_io32_t		:22;
}stc_smix_mxchmono_field_t;

typedef union un_smix_mxchmono{
    uint_io32_t		u32Register;
    stc_smix_mxchmono_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchmono_t;

/* MXCHVOL1 */
#define SMIX_MXCHVOL1	(SMIX.unMXCHVOL1.u32Register)  /*@rg@*/
#define SMIX_MXCHVOL1_WFG0VOL	(SMIX.unMXCHVOL1.au8Byte[0])  /*@bfbyte@*/
#define SMIX_MXCHVOL1_WFG1VOL	(SMIX.unMXCHVOL1.au8Byte[1])  /*@bfbyte@*/
#define SMIX_MXCHVOL1_WFG2VOL	(SMIX.unMXCHVOL1.au8Byte[2])  /*@bfbyte@*/
#define SMIX_MXCHVOL1_WFG3VOL	(SMIX.unMXCHVOL1.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_smix_mxchvol1_field{
    uint_io32_t		u8WFG0VOL:8;
    uint_io32_t		u8WFG1VOL:8;
    uint_io32_t		u8WFG2VOL:8;
    uint_io32_t		u8WFG3VOL:8;
}stc_smix_mxchvol1_field_t;

typedef union un_smix_mxchvol1{
    uint_io32_t		u32Register;
    stc_smix_mxchvol1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchvol1_t;

/* MXCHVOL2 */
#define SMIX_MXCHVOL2	(SMIX.unMXCHVOL2.u32Register)  /*@rg@*/
#define SMIX_MXCHVOL2_WFG4VOL	(SMIX.unMXCHVOL2.au8Byte[0])  /*@bfbyte@*/
#define SMIX_MXCHVOL2_PMIS0VOL	(SMIX.unMXCHVOL2.au8Byte[1])  /*@bfbyte@*/
#define SMIX_MXCHVOL2_PMIS1VOL	(SMIX.unMXCHVOL2.au8Byte[2])  /*@bfbyte@*/
#define SMIX_MXCHVOL2_PMIS2VOL	(SMIX.unMXCHVOL2.au8Byte[3])  /*@bfbyte@*/

typedef struct stc_smix_mxchvol2_field{
    uint_io32_t		u8WFG4VOL:8;
    uint_io32_t		u8PMIS0VOL:8;
    uint_io32_t		u8PMIS1VOL:8;
    uint_io32_t		u8PMIS2VOL:8;
}stc_smix_mxchvol2_field_t;

typedef union un_smix_mxchvol2{
    uint_io32_t		u32Register;
    stc_smix_mxchvol2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchvol2_t;

/* MXCHVOL3 */
#define SMIX_MXCHVOL3	(SMIX.unMXCHVOL3.u32Register)  /*@rg@*/
#define SMIX_MXCHVOL3_PMIS3VOL	(SMIX.unMXCHVOL3.au8Byte[0])  /*@bfbyte@*/
#define SMIX_MXCHVOL3_PMIS4VOL	(SMIX.unMXCHVOL3.au8Byte[1])  /*@bfbyte@*/
#define SMIX_MXCHVOL3_MXDVOL	(SMIX.unMXCHVOL3.au8Byte[2])  /*@bfbyte@*/

typedef struct stc_smix_mxchvol3_field{
    uint_io32_t		u8PMIS3VOL:8;
    uint_io32_t		u8PMIS4VOL:8;
    uint_io32_t		u8MXDVOL:8;
    uint_io32_t		:8;
}stc_smix_mxchvol3_field_t;

typedef union un_smix_mxchvol3{
    uint_io32_t		u32Register;
    stc_smix_mxchvol3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchvol3_t;

/* MXCHMUTE */
#define SMIX_MXCHMUTE	(SMIX.unMXCHMUTE.u32Register)  /*@rg@*/
#define SMIX_MXCHMUTE_WFG0MUTE	(SMIX.unMXCHMUTE.stcField.u1WFG0MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_WFG1MUTE	(SMIX.unMXCHMUTE.stcField.u1WFG1MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_WFG2MUTE	(SMIX.unMXCHMUTE.stcField.u1WFG2MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_WFG3MUTE	(SMIX.unMXCHMUTE.stcField.u1WFG3MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_WFG4MUTE	(SMIX.unMXCHMUTE.stcField.u1WFG4MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_PMIS0MUTE	(SMIX.unMXCHMUTE.stcField.u1PMIS0MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_PMIS1MUTE	(SMIX.unMXCHMUTE.stcField.u1PMIS1MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_PMIS2MUTE	(SMIX.unMXCHMUTE.stcField.u1PMIS2MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_PMIS3MUTE	(SMIX.unMXCHMUTE.stcField.u1PMIS3MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_PMIS4MUTE	(SMIX.unMXCHMUTE.stcField.u1PMIS4MUTE)  /*@bf@*/
#define SMIX_MXCHMUTE_MXDMUTE	(SMIX.unMXCHMUTE.stcField.u1MXDMUTE)  /*@bf@*/

typedef struct stc_smix_mxchmute_field{
    uint_io32_t		u1WFG0MUTE:1;
    uint_io32_t		u1WFG1MUTE:1;
    uint_io32_t		u1WFG2MUTE:1;
    uint_io32_t		u1WFG3MUTE:1;
    uint_io32_t		u1WFG4MUTE:1;
    uint_io32_t		u1PMIS0MUTE:1;
    uint_io32_t		u1PMIS1MUTE:1;
    uint_io32_t		u1PMIS2MUTE:1;
    uint_io32_t		u1PMIS3MUTE:1;
    uint_io32_t		u1PMIS4MUTE:1;
    uint_io32_t		u1MXDMUTE:1;
    uint_io32_t		:21;
}stc_smix_mxchmute_field_t;

typedef union un_smix_mxchmute{
    uint_io32_t		u32Register;
    stc_smix_mxchmute_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchmute_t;

/* MXCHFADE1 */
#define SMIX_MXCHFADE1	(SMIX.unMXCHFADE1.u32Register)  /*@rg@*/
#define SMIX_MXCHFADE1_WFG0FADEIN	(SMIX.unMXCHFADE1.stcField.u5WFG0FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE1_WFG0FADEOUT	(SMIX.unMXCHFADE1.stcField.u5WFG0FADEOUT)  /*@bf@*/
#define SMIX_MXCHFADE1_WFG1FADEIN	(SMIX.unMXCHFADE1.stcField.u5WFG1FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE1_WFG1FADEOUT	(SMIX.unMXCHFADE1.stcField.u5WFG1FADEOUT)  /*@bf@*/

typedef struct stc_smix_mxchfade1_field{
    uint_io32_t		u5WFG0FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG0FADEOUT:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG1FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG1FADEOUT:5;
    uint_io32_t		:3;
}stc_smix_mxchfade1_field_t;

typedef union un_smix_mxchfade1{
    uint_io32_t		u32Register;
    stc_smix_mxchfade1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfade1_t;

/* MXCHFADE2 */
#define SMIX_MXCHFADE2	(SMIX.unMXCHFADE2.u32Register)  /*@rg@*/
#define SMIX_MXCHFADE2_WFG2FADEIN	(SMIX.unMXCHFADE2.stcField.u5WFG2FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE2_WFG2FADEOUT	(SMIX.unMXCHFADE2.stcField.u5WFG2FADEOUT)  /*@bf@*/
#define SMIX_MXCHFADE2_WFG3FADEIN	(SMIX.unMXCHFADE2.stcField.u5WFG3FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE2_WFG3FADEOUT	(SMIX.unMXCHFADE2.stcField.u5WFG3FADEOUT)  /*@bf@*/

typedef struct stc_smix_mxchfade2_field{
    uint_io32_t		u5WFG2FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG2FADEOUT:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG3FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG3FADEOUT:5;
    uint_io32_t		:3;
}stc_smix_mxchfade2_field_t;

typedef union un_smix_mxchfade2{
    uint_io32_t		u32Register;
    stc_smix_mxchfade2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfade2_t;

/* MXCHFADE3 */
#define SMIX_MXCHFADE3	(SMIX.unMXCHFADE3.u32Register)  /*@rg@*/
#define SMIX_MXCHFADE3_WFG4FADEIN	(SMIX.unMXCHFADE3.stcField.u5WFG4FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE3_WFG4FADEOUT	(SMIX.unMXCHFADE3.stcField.u5WFG4FADEOUT)  /*@bf@*/
#define SMIX_MXCHFADE3_PMIS0FADEIN	(SMIX.unMXCHFADE3.stcField.u5PMIS0FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE3_PMIS0FADEOUT	(SMIX.unMXCHFADE3.stcField.u5PMIS0FADEOUT)  /*@bf@*/

typedef struct stc_smix_mxchfade3_field{
    uint_io32_t		u5WFG4FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5WFG4FADEOUT:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS0FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS0FADEOUT:5;
    uint_io32_t		:3;
}stc_smix_mxchfade3_field_t;

typedef union un_smix_mxchfade3{
    uint_io32_t		u32Register;
    stc_smix_mxchfade3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfade3_t;

/* MXCHFADE4 */
#define SMIX_MXCHFADE4	(SMIX.unMXCHFADE4.u32Register)  /*@rg@*/
#define SMIX_MXCHFADE4_PMIS1FADEIN	(SMIX.unMXCHFADE4.stcField.u5PMIS1FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE4_PMIS1FADEOUT	(SMIX.unMXCHFADE4.stcField.u5PMIS1FADEOUT)  /*@bf@*/
#define SMIX_MXCHFADE4_PMIS2FADEIN	(SMIX.unMXCHFADE4.stcField.u5PMIS2FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE4_PMIS2FADEOUT	(SMIX.unMXCHFADE4.stcField.u5PMIS2FADEOUT)  /*@bf@*/

typedef struct stc_smix_mxchfade4_field{
    uint_io32_t		u5PMIS1FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS1FADEOUT:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS2FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS2FADEOUT:5;
    uint_io32_t		:3;
}stc_smix_mxchfade4_field_t;

typedef union un_smix_mxchfade4{
    uint_io32_t		u32Register;
    stc_smix_mxchfade4_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfade4_t;

/* MXCHFADE5 */
#define SMIX_MXCHFADE5	(SMIX.unMXCHFADE5.u32Register)  /*@rg@*/
#define SMIX_MXCHFADE5_PMIS3FADEIN	(SMIX.unMXCHFADE5.stcField.u5PMIS3FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE5_PMIS3FADEOUT	(SMIX.unMXCHFADE5.stcField.u5PMIS3FADEOUT)  /*@bf@*/
#define SMIX_MXCHFADE5_PMIS4FADEIN	(SMIX.unMXCHFADE5.stcField.u5PMIS4FADEIN)  /*@bf@*/
#define SMIX_MXCHFADE5_PMIS4FADEOUT	(SMIX.unMXCHFADE5.stcField.u5PMIS4FADEOUT)  /*@bf@*/

typedef struct stc_smix_mxchfade5_field{
    uint_io32_t		u5PMIS3FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS3FADEOUT:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS4FADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5PMIS4FADEOUT:5;
    uint_io32_t		:3;
}stc_smix_mxchfade5_field_t;

typedef union un_smix_mxchfade5{
    uint_io32_t		u32Register;
    stc_smix_mxchfade5_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfade5_t;

/* MXMXDFADE */
#define SMIX_MXMXDFADE	(SMIX.unMXMXDFADE.u32Register)  /*@rg@*/
#define SMIX_MXMXDFADE_MXDFADEIN	(SMIX.unMXMXDFADE.stcField.u5MXDFADEIN)  /*@bf@*/
#define SMIX_MXMXDFADE_MXDFADEOUT	(SMIX.unMXMXDFADE.stcField.u5MXDFADEOUT)  /*@bf@*/

typedef struct stc_smix_mxmxdfade_field{
    uint_io32_t		u5MXDFADEIN:5;
    uint_io32_t		:3;
    uint_io32_t		u5MXDFADEOUT:5;
    uint_io32_t		:19;
}stc_smix_mxmxdfade_field_t;

typedef union un_smix_mxmxdfade{
    uint_io32_t		u32Register;
    stc_smix_mxmxdfade_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxmxdfade_t;

/* MXCHFADEEN */
#define SMIX_MXCHFADEEN	(SMIX.unMXCHFADEEN.u32Register)  /*@rg@*/
#define SMIX_MXCHFADEEN_WFG0FADEEN	(SMIX.unMXCHFADEEN.stcField.u2WFG0FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_WFG1FADEEN	(SMIX.unMXCHFADEEN.stcField.u2WFG1FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_WFG2FADEEN	(SMIX.unMXCHFADEEN.stcField.u2WFG2FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_WFG3FADEEN	(SMIX.unMXCHFADEEN.stcField.u2WFG3FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_WFG4FADEEN	(SMIX.unMXCHFADEEN.stcField.u2WFG4FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_PMIS0FADEEN	(SMIX.unMXCHFADEEN.stcField.u2PMIS0FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_PMIS1FADEEN	(SMIX.unMXCHFADEEN.stcField.u2PMIS1FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_PMIS2FADEEN	(SMIX.unMXCHFADEEN.stcField.u2PMIS2FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_PMIS3FADEEN	(SMIX.unMXCHFADEEN.stcField.u2PMIS3FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_PMIS4FADEEN	(SMIX.unMXCHFADEEN.stcField.u2PMIS4FADEEN)  /*@bf@*/
#define SMIX_MXCHFADEEN_MXDFADEEN	(SMIX.unMXCHFADEEN.stcField.u2MXDFADEEN)  /*@bf@*/

typedef struct stc_smix_mxchfadeen_field{
    uint_io32_t		u2WFG0FADEEN:2;
    uint_io32_t		u2WFG1FADEEN:2;
    uint_io32_t		u2WFG2FADEEN:2;
    uint_io32_t		u2WFG3FADEEN:2;
    uint_io32_t		u2WFG4FADEEN:2;
    uint_io32_t		u2PMIS0FADEEN:2;
    uint_io32_t		u2PMIS1FADEEN:2;
    uint_io32_t		u2PMIS2FADEEN:2;
    uint_io32_t		u2PMIS3FADEEN:2;
    uint_io32_t		u2PMIS4FADEEN:2;
    uint_io32_t		u2MXDFADEEN:2;
    uint_io32_t		:10;
}stc_smix_mxchfadeen_field_t;

typedef union un_smix_mxchfadeen{
    uint_io32_t		u32Register;
    stc_smix_mxchfadeen_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchfadeen_t;

/* MXBUFFCLR */
#define SMIX_MXBUFFCLR	(SMIX.unMXBUFFCLR.u32Register)  /*@rg@*/
#define SMIX_MXBUFFCLR_WFG0BCLR	(SMIX.unMXBUFFCLR.stcField.u1WFG0BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_WFG1BCLR	(SMIX.unMXBUFFCLR.stcField.u1WFG1BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_WFG2BCLR	(SMIX.unMXBUFFCLR.stcField.u1WFG2BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_WFG3BCLR	(SMIX.unMXBUFFCLR.stcField.u1WFG3BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_WFG4BCLR	(SMIX.unMXBUFFCLR.stcField.u1WFG4BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_PMIS0BCLR	(SMIX.unMXBUFFCLR.stcField.u1PMIS0BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_PMIS1BCLR	(SMIX.unMXBUFFCLR.stcField.u1PMIS1BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_PMIS2BCLR	(SMIX.unMXBUFFCLR.stcField.u1PMIS2BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_PMIS3BCLR	(SMIX.unMXBUFFCLR.stcField.u1PMIS3BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_PMIS4BCLR	(SMIX.unMXBUFFCLR.stcField.u1PMIS4BCLR)  /*@bf@*/
#define SMIX_MXBUFFCLR_OUTBCLR	(SMIX.unMXBUFFCLR.stcField.u1OUTBCLR)  /*@bf@*/

typedef struct stc_smix_mxbuffclr_field{
    uint_io32_t		u1WFG0BCLR:1;
    uint_io32_t		u1WFG1BCLR:1;
    uint_io32_t		u1WFG2BCLR:1;
    uint_io32_t		u1WFG3BCLR:1;
    uint_io32_t		u1WFG4BCLR:1;
    uint_io32_t		u1PMIS0BCLR:1;
    uint_io32_t		u1PMIS1BCLR:1;
    uint_io32_t		u1PMIS2BCLR:1;
    uint_io32_t		u1PMIS3BCLR:1;
    uint_io32_t		u1PMIS4BCLR:1;
    uint_io32_t		u1OUTBCLR:1;
    uint_io32_t		:21;
}stc_smix_mxbuffclr_field_t;

typedef union un_smix_mxbuffclr{
    uint_io32_t		u32Register;
    stc_smix_mxbuffclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxbuffclr_t;

/* MXFADECLR */
#define SMIX_MXFADECLR	(SMIX.unMXFADECLR.u32Register)  /*@rg@*/
#define SMIX_MXFADECLR_WFG0CLR	(SMIX.unMXFADECLR.stcField.u1WFG0CLR)  /*@bf@*/
#define SMIX_MXFADECLR_WFG1CLR	(SMIX.unMXFADECLR.stcField.u1WFG1CLR)  /*@bf@*/
#define SMIX_MXFADECLR_WFG2CLR	(SMIX.unMXFADECLR.stcField.u1WFG2CLR)  /*@bf@*/
#define SMIX_MXFADECLR_WFG3CLR	(SMIX.unMXFADECLR.stcField.u1WFG3CLR)  /*@bf@*/
#define SMIX_MXFADECLR_WFG4CLR	(SMIX.unMXFADECLR.stcField.u1WFG4CLR)  /*@bf@*/
#define SMIX_MXFADECLR_PMIS0CLR	(SMIX.unMXFADECLR.stcField.u1PMIS0CLR)  /*@bf@*/
#define SMIX_MXFADECLR_PMIS1CLR	(SMIX.unMXFADECLR.stcField.u1PMIS1CLR)  /*@bf@*/
#define SMIX_MXFADECLR_PMIS2CLR	(SMIX.unMXFADECLR.stcField.u1PMIS2CLR)  /*@bf@*/
#define SMIX_MXFADECLR_PMIS3CLR	(SMIX.unMXFADECLR.stcField.u1PMIS3CLR)  /*@bf@*/
#define SMIX_MXFADECLR_PMIS4CLR	(SMIX.unMXFADECLR.stcField.u1PMIS4CLR)  /*@bf@*/
#define SMIX_MXFADECLR_MIXCLR	(SMIX.unMXFADECLR.stcField.u1MIXCLR)  /*@bf@*/

typedef struct stc_smix_mxfadeclr_field{
    uint_io32_t		u1WFG0CLR:1;
    uint_io32_t		u1WFG1CLR:1;
    uint_io32_t		u1WFG2CLR:1;
    uint_io32_t		u1WFG3CLR:1;
    uint_io32_t		u1WFG4CLR:1;
    uint_io32_t		u1PMIS0CLR:1;
    uint_io32_t		u1PMIS1CLR:1;
    uint_io32_t		u1PMIS2CLR:1;
    uint_io32_t		u1PMIS3CLR:1;
    uint_io32_t		u1PMIS4CLR:1;
    uint_io32_t		u1MIXCLR:1;
    uint_io32_t		:21;
}stc_smix_mxfadeclr_field_t;

typedef union un_smix_mxfadeclr{
    uint_io32_t		u32Register;
    stc_smix_mxfadeclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxfadeclr_t;

/* MXINTREN */
#define SMIX_MXINTREN	(SMIX.unMXINTREN.u32Register)  /*@rg@*/
#define SMIX_MXINTREN_PMIS0BUFDREQ	(SMIX.unMXINTREN.stcField.u1PMIS0BUFDREQ)  /*@bf@*/
#define SMIX_MXINTREN_PMIS1BUFDREQ	(SMIX.unMXINTREN.stcField.u1PMIS1BUFDREQ)  /*@bf@*/
#define SMIX_MXINTREN_PMIS2BUFDREQ	(SMIX.unMXINTREN.stcField.u1PMIS2BUFDREQ)  /*@bf@*/
#define SMIX_MXINTREN_PMIS3BUFDREQ	(SMIX.unMXINTREN.stcField.u1PMIS3BUFDREQ)  /*@bf@*/
#define SMIX_MXINTREN_PMIS4BUFDREQ	(SMIX.unMXINTREN.stcField.u1PMIS4BUFDREQ)  /*@bf@*/
#define SMIX_MXINTREN_PMIS0BUFOVFL	(SMIX.unMXINTREN.stcField.u1PMIS0BUFOVFL)  /*@bf@*/
#define SMIX_MXINTREN_PMIS1BUFOVFL	(SMIX.unMXINTREN.stcField.u1PMIS1BUFOVFL)  /*@bf@*/
#define SMIX_MXINTREN_PMIS2BUFOVFL	(SMIX.unMXINTREN.stcField.u1PMIS2BUFOVFL)  /*@bf@*/
#define SMIX_MXINTREN_PMIS3BUFOVFL	(SMIX.unMXINTREN.stcField.u1PMIS3BUFOVFL)  /*@bf@*/
#define SMIX_MXINTREN_PMIS4BUFOVFL	(SMIX.unMXINTREN.stcField.u1PMIS4BUFOVFL)  /*@bf@*/
#define SMIX_MXINTREN_PMIS0DMAERR	(SMIX.unMXINTREN.stcField.u1PMIS0DMAERR)  /*@bf@*/
#define SMIX_MXINTREN_PMIS1DMAERR	(SMIX.unMXINTREN.stcField.u1PMIS1DMAERR)  /*@bf@*/
#define SMIX_MXINTREN_PMIS2DMAERR	(SMIX.unMXINTREN.stcField.u1PMIS2DMAERR)  /*@bf@*/
#define SMIX_MXINTREN_PMIS3DMAERR	(SMIX.unMXINTREN.stcField.u1PMIS3DMAERR)  /*@bf@*/
#define SMIX_MXINTREN_PMIS4DMAERR	(SMIX.unMXINTREN.stcField.u1PMIS4DMAERR)  /*@bf@*/
#define SMIX_MXINTREN_AHBERR	(SMIX.unMXINTREN.stcField.u1AHBERR)  /*@bf@*/

typedef struct stc_smix_mxintren_field{
    uint_io32_t		u1PMIS0BUFDREQ:1;
    uint_io32_t		u1PMIS1BUFDREQ:1;
    uint_io32_t		u1PMIS2BUFDREQ:1;
    uint_io32_t		u1PMIS3BUFDREQ:1;
    uint_io32_t		u1PMIS4BUFDREQ:1;
    uint_io32_t		:3;
    uint_io32_t		u1PMIS0BUFOVFL:1;
    uint_io32_t		u1PMIS1BUFOVFL:1;
    uint_io32_t		u1PMIS2BUFOVFL:1;
    uint_io32_t		u1PMIS3BUFOVFL:1;
    uint_io32_t		u1PMIS4BUFOVFL:1;
    uint_io32_t		:11;
    uint_io32_t		u1PMIS0DMAERR:1;
    uint_io32_t		u1PMIS1DMAERR:1;
    uint_io32_t		u1PMIS2DMAERR:1;
    uint_io32_t		u1PMIS3DMAERR:1;
    uint_io32_t		u1PMIS4DMAERR:1;
    uint_io32_t		:2;
    uint_io32_t		u1AHBERR:1;
}stc_smix_mxintren_field_t;

typedef union un_smix_mxintren{
    uint_io32_t		u32Register;
    stc_smix_mxintren_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxintren_t;

/* MXINTRSTATE */
#define SMIX_MXINTRSTATE	(SMIX.unMXINTRSTATE.u32Register)  /*@rg@*/
#define SMIX_MXINTRSTATE_PMIS0BUFDREQ	(SMIX.unMXINTRSTATE.stcField.u1PMIS0BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS1BUFDREQ	(SMIX.unMXINTRSTATE.stcField.u1PMIS1BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS2BUFDREQ	(SMIX.unMXINTRSTATE.stcField.u1PMIS2BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS3BUFDREQ	(SMIX.unMXINTRSTATE.stcField.u1PMIS3BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS4BUFDREQ	(SMIX.unMXINTRSTATE.stcField.u1PMIS4BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS0BUFOVFL	(SMIX.unMXINTRSTATE.stcField.u1PMIS0BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS1BUFOVFL	(SMIX.unMXINTRSTATE.stcField.u1PMIS1BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS2BUFOVFL	(SMIX.unMXINTRSTATE.stcField.u1PMIS2BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS3BUFOVFL	(SMIX.unMXINTRSTATE.stcField.u1PMIS3BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS4BUFOVFL	(SMIX.unMXINTRSTATE.stcField.u1PMIS4BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS0DMAERR	(SMIX.unMXINTRSTATE.stcField.u1PMIS0DMAERR)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS1DMAERR	(SMIX.unMXINTRSTATE.stcField.u1PMIS1DMAERR)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS2DMAERR	(SMIX.unMXINTRSTATE.stcField.u1PMIS2DMAERR)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS3DMAERR	(SMIX.unMXINTRSTATE.stcField.u1PMIS3DMAERR)  /*@bf@*/
#define SMIX_MXINTRSTATE_PMIS4DMAERR	(SMIX.unMXINTRSTATE.stcField.u1PMIS4DMAERR)  /*@bf@*/
#define SMIX_MXINTRSTATE_AHBERR	(SMIX.unMXINTRSTATE.stcField.u1AHBERR)  /*@bf@*/

typedef struct stc_smix_mxintrstate_field{
    uint_io32_t		u1PMIS0BUFDREQ:1;
    uint_io32_t		u1PMIS1BUFDREQ:1;
    uint_io32_t		u1PMIS2BUFDREQ:1;
    uint_io32_t		u1PMIS3BUFDREQ:1;
    uint_io32_t		u1PMIS4BUFDREQ:1;
    uint_io32_t		:3;
    uint_io32_t		u1PMIS0BUFOVFL:1;
    uint_io32_t		u1PMIS1BUFOVFL:1;
    uint_io32_t		u1PMIS2BUFOVFL:1;
    uint_io32_t		u1PMIS3BUFOVFL:1;
    uint_io32_t		u1PMIS4BUFOVFL:1;
    uint_io32_t		:11;
    uint_io32_t		u1PMIS0DMAERR:1;
    uint_io32_t		u1PMIS1DMAERR:1;
    uint_io32_t		u1PMIS2DMAERR:1;
    uint_io32_t		u1PMIS3DMAERR:1;
    uint_io32_t		u1PMIS4DMAERR:1;
    uint_io32_t		:2;
    uint_io32_t		u1AHBERR:1;
}stc_smix_mxintrstate_field_t;

typedef union un_smix_mxintrstate{
    uint_io32_t		u32Register;
    stc_smix_mxintrstate_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxintrstate_t;

/* MXINTRCLR */
#define SMIX_MXINTRCLR	(SMIX.unMXINTRCLR.u32Register)  /*@rg@*/
#define SMIX_MXINTRCLR_PMIS0BUFDREQ	(SMIX.unMXINTRCLR.stcField.u1PMIS0BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS1BUFDREQ	(SMIX.unMXINTRCLR.stcField.u1PMIS1BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS2BUFDREQ	(SMIX.unMXINTRCLR.stcField.u1PMIS2BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS3BUFDREQ	(SMIX.unMXINTRCLR.stcField.u1PMIS3BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS4BUFDREQ	(SMIX.unMXINTRCLR.stcField.u1PMIS4BUFDREQ)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS0BUFOVFL	(SMIX.unMXINTRCLR.stcField.u1PMIS0BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS1BUFOVFL	(SMIX.unMXINTRCLR.stcField.u1PMIS1BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS2BUFOVFL	(SMIX.unMXINTRCLR.stcField.u1PMIS2BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS3BUFOVFL	(SMIX.unMXINTRCLR.stcField.u1PMIS3BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS4BUFOVFL	(SMIX.unMXINTRCLR.stcField.u1PMIS4BUFOVFL)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS0DMAERR	(SMIX.unMXINTRCLR.stcField.u1PMIS0DMAERR)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS1DMAERR	(SMIX.unMXINTRCLR.stcField.u1PMIS1DMAERR)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS2DMAERR	(SMIX.unMXINTRCLR.stcField.u1PMIS2DMAERR)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS3DMAERR	(SMIX.unMXINTRCLR.stcField.u1PMIS3DMAERR)  /*@bf@*/
#define SMIX_MXINTRCLR_PMIS4DMAERR	(SMIX.unMXINTRCLR.stcField.u1PMIS4DMAERR)  /*@bf@*/
#define SMIX_MXINTRCLR_AHBERR	(SMIX.unMXINTRCLR.stcField.u1AHBERR)  /*@bf@*/

typedef struct stc_smix_mxintrclr_field{
    uint_io32_t		u1PMIS0BUFDREQ:1;
    uint_io32_t		u1PMIS1BUFDREQ:1;
    uint_io32_t		u1PMIS2BUFDREQ:1;
    uint_io32_t		u1PMIS3BUFDREQ:1;
    uint_io32_t		u1PMIS4BUFDREQ:1;
    uint_io32_t		:3;
    uint_io32_t		u1PMIS0BUFOVFL:1;
    uint_io32_t		u1PMIS1BUFOVFL:1;
    uint_io32_t		u1PMIS2BUFOVFL:1;
    uint_io32_t		u1PMIS3BUFOVFL:1;
    uint_io32_t		u1PMIS4BUFOVFL:1;
    uint_io32_t		:11;
    uint_io32_t		u1PMIS0DMAERR:1;
    uint_io32_t		u1PMIS1DMAERR:1;
    uint_io32_t		u1PMIS2DMAERR:1;
    uint_io32_t		u1PMIS3DMAERR:1;
    uint_io32_t		u1PMIS4DMAERR:1;
    uint_io32_t		:2;
    uint_io32_t		u1AHBERR:1;
}stc_smix_mxintrclr_field_t;

typedef union un_smix_mxintrclr{
    uint_io32_t		u32Register;
    stc_smix_mxintrclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxintrclr_t;

/* MXINBUFFCNT1 */
#define SMIX_MXINBUFFCNT1	(SMIX.unMXINBUFFCNT1.u32Register)  /*@rg@*/
#define SMIX_MXINBUFFCNT1_WFG0C	(SMIX.unMXINBUFFCNT1.stcField.u1WFG0C)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_WFG1C	(SMIX.unMXINBUFFCNT1.stcField.u1WFG1C)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_WFG2C	(SMIX.unMXINBUFFCNT1.stcField.u1WFG2C)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_WFG3C	(SMIX.unMXINBUFFCNT1.stcField.u1WFG3C)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_WFG4C	(SMIX.unMXINBUFFCNT1.stcField.u1WFG4C)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_PMIS0CNT	(SMIX.unMXINBUFFCNT1.stcField.u6PMIS0CNT)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_PMIS1CNT	(SMIX.unMXINBUFFCNT1.stcField.u6PMIS1CNT)  /*@bf@*/
#define SMIX_MXINBUFFCNT1_PMIS2CNT	(SMIX.unMXINBUFFCNT1.stcField.u6PMIS2CNT)  /*@bf@*/

typedef struct stc_smix_mxinbuffcnt1_field{
    uint_io32_t		u1WFG0C:1;
    uint_io32_t		u1WFG1C:1;
    uint_io32_t		u1WFG2C:1;
    uint_io32_t		u1WFG3C:1;
    uint_io32_t		u1WFG4C:1;
    uint_io32_t		:3;
    uint_io32_t		u6PMIS0CNT:6;
    uint_io32_t		:2;
    uint_io32_t		u6PMIS1CNT:6;
    uint_io32_t		:2;
    uint_io32_t		u6PMIS2CNT:6;
    uint_io32_t		:2;
}stc_smix_mxinbuffcnt1_field_t;

typedef union un_smix_mxinbuffcnt1{
    uint_io32_t		u32Register;
    stc_smix_mxinbuffcnt1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxinbuffcnt1_t;

/* MXINBUFFCNT2 */
#define SMIX_MXINBUFFCNT2	(SMIX.unMXINBUFFCNT2.u32Register)  /*@rg@*/
#define SMIX_MXINBUFFCNT2_PMIS3CNT	(SMIX.unMXINBUFFCNT2.stcField.u6PMIS3CNT)  /*@bf@*/
#define SMIX_MXINBUFFCNT2_PMIS4CNT	(SMIX.unMXINBUFFCNT2.stcField.u6PMIS4CNT)  /*@bf@*/

typedef struct stc_smix_mxinbuffcnt2_field{
    uint_io32_t		u6PMIS3CNT:6;
    uint_io32_t		:2;
    uint_io32_t		u6PMIS4CNT:6;
    uint_io32_t		:18;
}stc_smix_mxinbuffcnt2_field_t;

typedef union un_smix_mxinbuffcnt2{
    uint_io32_t		u32Register;
    stc_smix_mxinbuffcnt2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxinbuffcnt2_t;

/* MXCHBUFFCNT */
#define SMIX_MXCHBUFFCNT	(SMIX.unMXCHBUFFCNT.u32Register)  /*@rg@*/
#define SMIX_MXCHBUFFCNT_WFG0C	(SMIX.unMXCHBUFFCNT.stcField.u1WFG0C)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_WFG1C	(SMIX.unMXCHBUFFCNT.stcField.u1WFG1C)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_WFG2C	(SMIX.unMXCHBUFFCNT.stcField.u1WFG2C)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_WFG3C	(SMIX.unMXCHBUFFCNT.stcField.u1WFG3C)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_WFG4C	(SMIX.unMXCHBUFFCNT.stcField.u1WFG4C)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_PMIS0CNT	(SMIX.unMXCHBUFFCNT.stcField.u4PMIS0CNT)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_PMIS1CNT	(SMIX.unMXCHBUFFCNT.stcField.u4PMIS1CNT)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_PMIS2CNT	(SMIX.unMXCHBUFFCNT.stcField.u4PMIS2CNT)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_PMIS3CNT	(SMIX.unMXCHBUFFCNT.stcField.u4PMIS3CNT)  /*@bf@*/
#define SMIX_MXCHBUFFCNT_PMIS4CNT	(SMIX.unMXCHBUFFCNT.stcField.u4PMIS4CNT)  /*@bf@*/

typedef struct stc_smix_mxchbuffcnt_field{
    uint_io32_t		u1WFG0C:1;
    uint_io32_t		u1WFG1C:1;
    uint_io32_t		u1WFG2C:1;
    uint_io32_t		u1WFG3C:1;
    uint_io32_t		u1WFG4C:1;
    uint_io32_t		:3;
    uint_io32_t		u4PMIS0CNT:4;
    uint_io32_t		u4PMIS1CNT:4;
    uint_io32_t		u4PMIS2CNT:4;
    uint_io32_t		u4PMIS3CNT:4;
    uint_io32_t		u4PMIS4CNT:4;
    uint_io32_t		:4;
}stc_smix_mxchbuffcnt_field_t;

typedef union un_smix_mxchbuffcnt{
    uint_io32_t		u32Register;
    stc_smix_mxchbuffcnt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxchbuffcnt_t;

/* MXOUTBUFFCNT */
#define SMIX_MXOUTBUFFCNT	(SMIX.unMXOUTBUFFCNT.u32Register)  /*@rg@*/
#define SMIX_MXOUTBUFFCNT_OUTCNT	(SMIX.unMXOUTBUFFCNT.stcField.u6OUTCNT)  /*@bf@*/

typedef struct stc_smix_mxoutbuffcnt_field{
    uint_io32_t		u6OUTCNT:6;
    uint_io32_t		:26;
}stc_smix_mxoutbuffcnt_field_t;

typedef union un_smix_mxoutbuffcnt{
    uint_io32_t		u32Register;
    stc_smix_mxoutbuffcnt_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxoutbuffcnt_t;

/* MXAHBERR */
#define SMIX_MXAHBERR	(SMIX.unMXAHBERR.u32Register)  /*@rg@*/
#define SMIX_MXAHBERR_WFG0ERR	(SMIX.unMXAHBERR.stcField.u2WFG0ERR)  /*@bf@*/
#define SMIX_MXAHBERR_WFG1ERR	(SMIX.unMXAHBERR.stcField.u2WFG1ERR)  /*@bf@*/
#define SMIX_MXAHBERR_WFG2ERR	(SMIX.unMXAHBERR.stcField.u2WFG2ERR)  /*@bf@*/
#define SMIX_MXAHBERR_WFG3ERR	(SMIX.unMXAHBERR.stcField.u2WFG3ERR)  /*@bf@*/
#define SMIX_MXAHBERR_WFG4ERR	(SMIX.unMXAHBERR.stcField.u2WFG4ERR)  /*@bf@*/
#define SMIX_MXAHBERR_PMIS0ERR	(SMIX.unMXAHBERR.stcField.u2PMIS0ERR)  /*@bf@*/
#define SMIX_MXAHBERR_PMIS1ERR	(SMIX.unMXAHBERR.stcField.u2PMIS1ERR)  /*@bf@*/
#define SMIX_MXAHBERR_PMIS2ERR	(SMIX.unMXAHBERR.stcField.u2PMIS2ERR)  /*@bf@*/
#define SMIX_MXAHBERR_PMIS3ERR	(SMIX.unMXAHBERR.stcField.u2PMIS3ERR)  /*@bf@*/
#define SMIX_MXAHBERR_PMIS4ERR	(SMIX.unMXAHBERR.stcField.u2PMIS4ERR)  /*@bf@*/
#define SMIX_MXAHBERR_CNTREGERR	(SMIX.unMXAHBERR.stcField.u2CNTREGERR)  /*@bf@*/

typedef struct stc_smix_mxahberr_field{
    uint_io32_t		u2WFG0ERR:2;
    uint_io32_t		u2WFG1ERR:2;
    uint_io32_t		u2WFG2ERR:2;
    uint_io32_t		u2WFG3ERR:2;
    uint_io32_t		u2WFG4ERR:2;
    uint_io32_t		u2PMIS0ERR:2;
    uint_io32_t		u2PMIS1ERR:2;
    uint_io32_t		u2PMIS2ERR:2;
    uint_io32_t		u2PMIS3ERR:2;
    uint_io32_t		u2PMIS4ERR:2;
    uint_io32_t		u2CNTREGERR:2;
    uint_io32_t		:10;
}stc_smix_mxahberr_field_t;

typedef union un_smix_mxahberr{
    uint_io32_t		u32Register;
    stc_smix_mxahberr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxahberr_t;

/* MXWFG0DADR */
#define SMIX_MXWFG0DADR	(SMIX.unMXWFG0DADR.u32Register)  /*@rg@*/
#define SMIX_MXWFG0DADR_WFG0DADR	SMIX_MXWFG0DADR  /*@bfrg@*/

typedef union un_smix_mxwfg0dadr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxwfg0dadr_t;

/* MXWFG1DADR */
#define SMIX_MXWFG1DADR	(SMIX.unMXWFG1DADR.u32Register)  /*@rg@*/
#define SMIX_MXWFG1DADR_WFG1DADR	SMIX_MXWFG1DADR  /*@bfrg@*/

typedef union un_smix_mxwfg1dadr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxwfg1dadr_t;

/* MXWFG2DADR */
#define SMIX_MXWFG2DADR	(SMIX.unMXWFG2DADR.u32Register)  /*@rg@*/
#define SMIX_MXWFG2DADR_WFG2DADR	SMIX_MXWFG2DADR  /*@bfrg@*/

typedef union un_smix_mxwfg2dadr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxwfg2dadr_t;

/* MXWFG3DADR */
#define SMIX_MXWFG3DADR	(SMIX.unMXWFG3DADR.u32Register)  /*@rg@*/
#define SMIX_MXWFG3DADR_WFG3DADR	SMIX_MXWFG3DADR  /*@bfrg@*/

typedef union un_smix_mxwfg3dadr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxwfg3dadr_t;

/* MXWFG4DADR */
#define SMIX_MXWFG4DADR	(SMIX.unMXWFG4DADR.u32Register)  /*@rg@*/
#define SMIX_MXWFG4DADR_WFG4DADR	SMIX_MXWFG4DADR  /*@bfrg@*/

typedef union un_smix_mxwfg4dadr{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxwfg4dadr_t;

/* MXPMIS0DADR0 */
#define SMIX_MXPMIS0DADR0	(SMIX.unMXPMIS0DADR0.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR0_PMIS0DADR0	SMIX_MXPMIS0DADR0  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr0_t;

/* MXPMIS0DADR1 */
#define SMIX_MXPMIS0DADR1	(SMIX.unMXPMIS0DADR1.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR1_PMIS0DADR1	SMIX_MXPMIS0DADR1  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr1_t;

/* MXPMIS0DADR2 */
#define SMIX_MXPMIS0DADR2	(SMIX.unMXPMIS0DADR2.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR2_PMIS0DADR2	SMIX_MXPMIS0DADR2  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr2_t;

/* MXPMIS0DADR3 */
#define SMIX_MXPMIS0DADR3	(SMIX.unMXPMIS0DADR3.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR3_PMIS0DADR3	SMIX_MXPMIS0DADR3  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr3_t;

/* MXPMIS0DADR4 */
#define SMIX_MXPMIS0DADR4	(SMIX.unMXPMIS0DADR4.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR4_PMIS0DADR4	SMIX_MXPMIS0DADR4  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr4_t;

/* MXPMIS0DADR5 */
#define SMIX_MXPMIS0DADR5	(SMIX.unMXPMIS0DADR5.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR5_PMIS0DADR5	SMIX_MXPMIS0DADR5  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr5{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr5_t;

/* MXPMIS0DADR6 */
#define SMIX_MXPMIS0DADR6	(SMIX.unMXPMIS0DADR6.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR6_PMIS0DADR6	SMIX_MXPMIS0DADR6  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr6_t;

/* MXPMIS0DADR7 */
#define SMIX_MXPMIS0DADR7	(SMIX.unMXPMIS0DADR7.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR7_PMIS0DADR7	SMIX_MXPMIS0DADR7  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr7_t;

/* MXPMIS0DADR8 */
#define SMIX_MXPMIS0DADR8	(SMIX.unMXPMIS0DADR8.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR8_PMIS0DADR8	SMIX_MXPMIS0DADR8  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr8{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr8_t;

/* MXPMIS0DADR9 */
#define SMIX_MXPMIS0DADR9	(SMIX.unMXPMIS0DADR9.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR9_PMIS0DADR9	SMIX_MXPMIS0DADR9  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr9{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr9_t;

/* MXPMIS0DADR10 */
#define SMIX_MXPMIS0DADR10	(SMIX.unMXPMIS0DADR10.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR10_PMIS0DADR10	SMIX_MXPMIS0DADR10  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr10{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr10_t;

/* MXPMIS0DADR11 */
#define SMIX_MXPMIS0DADR11	(SMIX.unMXPMIS0DADR11.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR11_PMIS0DADR11	SMIX_MXPMIS0DADR11  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr11{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr11_t;

/* MXPMIS0DADR12 */
#define SMIX_MXPMIS0DADR12	(SMIX.unMXPMIS0DADR12.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR12_PMIS0DADR12	SMIX_MXPMIS0DADR12  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr12{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr12_t;

/* MXPMIS0DADR13 */
#define SMIX_MXPMIS0DADR13	(SMIX.unMXPMIS0DADR13.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR13_PMIS0DADR13	SMIX_MXPMIS0DADR13  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr13{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr13_t;

/* MXPMIS0DADR14 */
#define SMIX_MXPMIS0DADR14	(SMIX.unMXPMIS0DADR14.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR14_PMIS0DADR14	SMIX_MXPMIS0DADR14  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr14{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr14_t;

/* MXPMIS0DADR15 */
#define SMIX_MXPMIS0DADR15	(SMIX.unMXPMIS0DADR15.u32Register)  /*@rg@*/
#define SMIX_MXPMIS0DADR15_PMIS0DADR15	SMIX_MXPMIS0DADR15  /*@bfrg@*/

typedef union un_smix_mxpmis0dadr15{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis0dadr15_t;

/* MXPMIS1DADR0 */
#define SMIX_MXPMIS1DADR0	(SMIX.unMXPMIS1DADR0.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR0_PMIS1DADR0	SMIX_MXPMIS1DADR0  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr0_t;

/* MXPMIS1DADR1 */
#define SMIX_MXPMIS1DADR1	(SMIX.unMXPMIS1DADR1.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR1_PMIS1DADR1	SMIX_MXPMIS1DADR1  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr1_t;

/* MXPMIS1DADR2 */
#define SMIX_MXPMIS1DADR2	(SMIX.unMXPMIS1DADR2.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR2_PMIS1DADR2	SMIX_MXPMIS1DADR2  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr2_t;

/* MXPMIS1DADR3 */
#define SMIX_MXPMIS1DADR3	(SMIX.unMXPMIS1DADR3.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR3_PMIS1DADR3	SMIX_MXPMIS1DADR3  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr3_t;

/* MXPMIS1DADR4 */
#define SMIX_MXPMIS1DADR4	(SMIX.unMXPMIS1DADR4.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR4_PMIS1DADR4	SMIX_MXPMIS1DADR4  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr4_t;

/* MXPMIS1DADR5 */
#define SMIX_MXPMIS1DADR5	(SMIX.unMXPMIS1DADR5.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR5_PMIS1DADR5	SMIX_MXPMIS1DADR5  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr5{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr5_t;

/* MXPMIS1DADR6 */
#define SMIX_MXPMIS1DADR6	(SMIX.unMXPMIS1DADR6.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR6_PMIS1DADR6	SMIX_MXPMIS1DADR6  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr6_t;

/* MXPMIS1DADR7 */
#define SMIX_MXPMIS1DADR7	(SMIX.unMXPMIS1DADR7.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR7_PMIS1DADR7	SMIX_MXPMIS1DADR7  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr7_t;

/* MXPMIS1DADR8 */
#define SMIX_MXPMIS1DADR8	(SMIX.unMXPMIS1DADR8.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR8_PMIS1DADR8	SMIX_MXPMIS1DADR8  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr8{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr8_t;

/* MXPMIS1DADR9 */
#define SMIX_MXPMIS1DADR9	(SMIX.unMXPMIS1DADR9.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR9_PMIS1DADR9	SMIX_MXPMIS1DADR9  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr9{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr9_t;

/* MXPMIS1DADR10 */
#define SMIX_MXPMIS1DADR10	(SMIX.unMXPMIS1DADR10.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR10_PMIS1DADR10	SMIX_MXPMIS1DADR10  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr10{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr10_t;

/* MXPMIS1DADR11 */
#define SMIX_MXPMIS1DADR11	(SMIX.unMXPMIS1DADR11.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR11_PMIS1DADR11	SMIX_MXPMIS1DADR11  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr11{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr11_t;

/* MXPMIS1DADR12 */
#define SMIX_MXPMIS1DADR12	(SMIX.unMXPMIS1DADR12.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR12_PMIS1DADR12	SMIX_MXPMIS1DADR12  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr12{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr12_t;

/* MXPMIS1DADR13 */
#define SMIX_MXPMIS1DADR13	(SMIX.unMXPMIS1DADR13.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR13_PMIS1DADR13	SMIX_MXPMIS1DADR13  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr13{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr13_t;

/* MXPMIS1DADR14 */
#define SMIX_MXPMIS1DADR14	(SMIX.unMXPMIS1DADR14.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR14_PMIS1DADR14	SMIX_MXPMIS1DADR14  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr14{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr14_t;

/* MXPMIS1DADR15 */
#define SMIX_MXPMIS1DADR15	(SMIX.unMXPMIS1DADR15.u32Register)  /*@rg@*/
#define SMIX_MXPMIS1DADR15_PMIS1DADR15	SMIX_MXPMIS1DADR15  /*@bfrg@*/

typedef union un_smix_mxpmis1dadr15{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis1dadr15_t;

/* MXPMIS2DADR0 */
#define SMIX_MXPMIS2DADR0	(SMIX.unMXPMIS2DADR0.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR0_PMIS2DADR0	SMIX_MXPMIS2DADR0  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr0_t;

/* MXPMIS2DADR1 */
#define SMIX_MXPMIS2DADR1	(SMIX.unMXPMIS2DADR1.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR1_PMIS2DADR1	SMIX_MXPMIS2DADR1  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr1_t;

/* MXPMIS2DADR2 */
#define SMIX_MXPMIS2DADR2	(SMIX.unMXPMIS2DADR2.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR2_PMIS2DADR2	SMIX_MXPMIS2DADR2  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr2_t;

/* MXPMIS2DADR3 */
#define SMIX_MXPMIS2DADR3	(SMIX.unMXPMIS2DADR3.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR3_PMIS2DADR3	SMIX_MXPMIS2DADR3  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr3_t;

/* MXPMIS2DADR4 */
#define SMIX_MXPMIS2DADR4	(SMIX.unMXPMIS2DADR4.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR4_PMIS2DADR4	SMIX_MXPMIS2DADR4  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr4_t;

/* MXPMIS2DADR5 */
#define SMIX_MXPMIS2DADR5	(SMIX.unMXPMIS2DADR5.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR5_PMIS2DADR5	SMIX_MXPMIS2DADR5  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr5{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr5_t;

/* MXPMIS2DADR6 */
#define SMIX_MXPMIS2DADR6	(SMIX.unMXPMIS2DADR6.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR6_PMIS2DADR6	SMIX_MXPMIS2DADR6  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr6_t;

/* MXPMIS2DADR7 */
#define SMIX_MXPMIS2DADR7	(SMIX.unMXPMIS2DADR7.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR7_PMIS2DADR7	SMIX_MXPMIS2DADR7  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr7_t;

/* MXPMIS2DADR8 */
#define SMIX_MXPMIS2DADR8	(SMIX.unMXPMIS2DADR8.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR8_PMIS2DADR8	SMIX_MXPMIS2DADR8  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr8{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr8_t;

/* MXPMIS2DADR9 */
#define SMIX_MXPMIS2DADR9	(SMIX.unMXPMIS2DADR9.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR9_PMIS2DADR9	SMIX_MXPMIS2DADR9  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr9{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr9_t;

/* MXPMIS2DADR10 */
#define SMIX_MXPMIS2DADR10	(SMIX.unMXPMIS2DADR10.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR10_PMIS2DADR10	SMIX_MXPMIS2DADR10  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr10{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr10_t;

/* MXPMIS2DADR11 */
#define SMIX_MXPMIS2DADR11	(SMIX.unMXPMIS2DADR11.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR11_PMIS2DADR11	SMIX_MXPMIS2DADR11  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr11{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr11_t;

/* MXPMIS2DADR12 */
#define SMIX_MXPMIS2DADR12	(SMIX.unMXPMIS2DADR12.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR12_PMIS2DADR12	SMIX_MXPMIS2DADR12  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr12{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr12_t;

/* MXPMIS2DADR13 */
#define SMIX_MXPMIS2DADR13	(SMIX.unMXPMIS2DADR13.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR13_PMIS2DADR13	SMIX_MXPMIS2DADR13  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr13{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr13_t;

/* MXPMIS2DADR14 */
#define SMIX_MXPMIS2DADR14	(SMIX.unMXPMIS2DADR14.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR14_PMIS2DADR14	SMIX_MXPMIS2DADR14  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr14{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr14_t;

/* MXPMIS2DADR15 */
#define SMIX_MXPMIS2DADR15	(SMIX.unMXPMIS2DADR15.u32Register)  /*@rg@*/
#define SMIX_MXPMIS2DADR15_PMIS2DADR15	SMIX_MXPMIS2DADR15  /*@bfrg@*/

typedef union un_smix_mxpmis2dadr15{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis2dadr15_t;

/* MXPMIS3DADR0 */
#define SMIX_MXPMIS3DADR0	(SMIX.unMXPMIS3DADR0.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR0_PMIS3DADR0	SMIX_MXPMIS3DADR0  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr0_t;

/* MXPMIS3DADR1 */
#define SMIX_MXPMIS3DADR1	(SMIX.unMXPMIS3DADR1.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR1_PMIS3DADR1	SMIX_MXPMIS3DADR1  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr1_t;

/* MXPMIS3DADR2 */
#define SMIX_MXPMIS3DADR2	(SMIX.unMXPMIS3DADR2.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR2_PMIS3DADR2	SMIX_MXPMIS3DADR2  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr2_t;

/* MXPMIS3DADR3 */
#define SMIX_MXPMIS3DADR3	(SMIX.unMXPMIS3DADR3.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR3_PMIS3DADR3	SMIX_MXPMIS3DADR3  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr3_t;

/* MXPMIS3DADR4 */
#define SMIX_MXPMIS3DADR4	(SMIX.unMXPMIS3DADR4.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR4_PMIS3DADR4	SMIX_MXPMIS3DADR4  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr4_t;

/* MXPMIS3DADR5 */
#define SMIX_MXPMIS3DADR5	(SMIX.unMXPMIS3DADR5.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR5_PMIS3DADR5	SMIX_MXPMIS3DADR5  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr5{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr5_t;

/* MXPMIS3DADR6 */
#define SMIX_MXPMIS3DADR6	(SMIX.unMXPMIS3DADR6.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR6_PMIS3DADR6	SMIX_MXPMIS3DADR6  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr6_t;

/* MXPMIS3DADR7 */
#define SMIX_MXPMIS3DADR7	(SMIX.unMXPMIS3DADR7.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR7_PMIS3DADR7	SMIX_MXPMIS3DADR7  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr7_t;

/* MXPMIS3DADR8 */
#define SMIX_MXPMIS3DADR8	(SMIX.unMXPMIS3DADR8.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR8_PMIS3DADR8	SMIX_MXPMIS3DADR8  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr8{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr8_t;

/* MXPMIS3DADR9 */
#define SMIX_MXPMIS3DADR9	(SMIX.unMXPMIS3DADR9.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR9_PMIS3DADR9	SMIX_MXPMIS3DADR9  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr9{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr9_t;

/* MXPMIS3DADR10 */
#define SMIX_MXPMIS3DADR10	(SMIX.unMXPMIS3DADR10.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR10_PMIS3DADR10	SMIX_MXPMIS3DADR10  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr10{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr10_t;

/* MXPMIS3DADR11 */
#define SMIX_MXPMIS3DADR11	(SMIX.unMXPMIS3DADR11.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR11_PMIS3DADR11	SMIX_MXPMIS3DADR11  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr11{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr11_t;

/* MXPMIS3DADR12 */
#define SMIX_MXPMIS3DADR12	(SMIX.unMXPMIS3DADR12.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR12_PMIS3DADR12	SMIX_MXPMIS3DADR12  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr12{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr12_t;

/* MXPMIS3DADR13 */
#define SMIX_MXPMIS3DADR13	(SMIX.unMXPMIS3DADR13.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR13_PMIS3DADR13	SMIX_MXPMIS3DADR13  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr13{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr13_t;

/* MXPMIS3DADR14 */
#define SMIX_MXPMIS3DADR14	(SMIX.unMXPMIS3DADR14.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR14_PMIS3DADR14	SMIX_MXPMIS3DADR14  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr14{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr14_t;

/* MXPMIS3DADR15 */
#define SMIX_MXPMIS3DADR15	(SMIX.unMXPMIS3DADR15.u32Register)  /*@rg@*/
#define SMIX_MXPMIS3DADR15_PMIS3DADR15	SMIX_MXPMIS3DADR15  /*@bfrg@*/

typedef union un_smix_mxpmis3dadr15{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis3dadr15_t;

/* MXPMIS4DADR0 */
#define SMIX_MXPMIS4DADR0	(SMIX.unMXPMIS4DADR0.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR0_PMIS4DADR0	SMIX_MXPMIS4DADR0  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr0{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr0_t;

/* MXPMIS4DADR1 */
#define SMIX_MXPMIS4DADR1	(SMIX.unMXPMIS4DADR1.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR1_PMIS4DADR1	SMIX_MXPMIS4DADR1  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr1{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr1_t;

/* MXPMIS4DADR2 */
#define SMIX_MXPMIS4DADR2	(SMIX.unMXPMIS4DADR2.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR2_PMIS4DADR2	SMIX_MXPMIS4DADR2  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr2{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr2_t;

/* MXPMIS4DADR3 */
#define SMIX_MXPMIS4DADR3	(SMIX.unMXPMIS4DADR3.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR3_PMIS4DADR3	SMIX_MXPMIS4DADR3  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr3{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr3_t;

/* MXPMIS4DADR4 */
#define SMIX_MXPMIS4DADR4	(SMIX.unMXPMIS4DADR4.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR4_PMIS4DADR4	SMIX_MXPMIS4DADR4  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr4{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr4_t;

/* MXPMIS4DADR5 */
#define SMIX_MXPMIS4DADR5	(SMIX.unMXPMIS4DADR5.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR5_PMIS4DADR5	SMIX_MXPMIS4DADR5  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr5{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr5_t;

/* MXPMIS4DADR6 */
#define SMIX_MXPMIS4DADR6	(SMIX.unMXPMIS4DADR6.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR6_PMIS4DADR6	SMIX_MXPMIS4DADR6  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr6{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr6_t;

/* MXPMIS4DADR7 */
#define SMIX_MXPMIS4DADR7	(SMIX.unMXPMIS4DADR7.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR7_PMIS4DADR7	SMIX_MXPMIS4DADR7  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr7{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr7_t;

/* MXPMIS4DADR8 */
#define SMIX_MXPMIS4DADR8	(SMIX.unMXPMIS4DADR8.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR8_PMIS4DADR8	SMIX_MXPMIS4DADR8  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr8{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr8_t;

/* MXPMIS4DADR9 */
#define SMIX_MXPMIS4DADR9	(SMIX.unMXPMIS4DADR9.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR9_PMIS4DADR9	SMIX_MXPMIS4DADR9  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr9{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr9_t;

/* MXPMIS4DADR10 */
#define SMIX_MXPMIS4DADR10	(SMIX.unMXPMIS4DADR10.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR10_PMIS4DADR10	SMIX_MXPMIS4DADR10  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr10{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr10_t;

/* MXPMIS4DADR11 */
#define SMIX_MXPMIS4DADR11	(SMIX.unMXPMIS4DADR11.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR11_PMIS4DADR11	SMIX_MXPMIS4DADR11  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr11{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr11_t;

/* MXPMIS4DADR12 */
#define SMIX_MXPMIS4DADR12	(SMIX.unMXPMIS4DADR12.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR12_PMIS4DADR12	SMIX_MXPMIS4DADR12  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr12{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr12_t;

/* MXPMIS4DADR13 */
#define SMIX_MXPMIS4DADR13	(SMIX.unMXPMIS4DADR13.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR13_PMIS4DADR13	SMIX_MXPMIS4DADR13  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr13{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr13_t;

/* MXPMIS4DADR14 */
#define SMIX_MXPMIS4DADR14	(SMIX.unMXPMIS4DADR14.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR14_PMIS4DADR14	SMIX_MXPMIS4DADR14  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr14{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr14_t;

/* MXPMIS4DADR15 */
#define SMIX_MXPMIS4DADR15	(SMIX.unMXPMIS4DADR15.u32Register)  /*@rg@*/
#define SMIX_MXPMIS4DADR15_PMIS4DADR15	SMIX_MXPMIS4DADR15  /*@bfrg@*/

typedef union un_smix_mxpmis4dadr15{
    uint_io32_t		u32Register;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_smix_mxpmis4dadr15_t;


typedef struct stc_smix{
    un_smix_mxch_t	unMXCH;	/* 0x00000000 */
    un_smix_mxoctrl_t	unMXOCTRL;	/* 0x00000004 */
    un_smix_mxdrqctrl_t	unMXDRQCTRL;	/* 0x00000008 */
    un_smix_mxictrl_t	unMXICTRL;	/* 0x0000000C */
    un_smix_mxchmono_t	unMXCHMONO;	/* 0x00000010 */
    uint_io8_t	au8Reserved0[12];	/* 0x00000014 */
    un_smix_mxchvol1_t	unMXCHVOL1;	/* 0x00000020 */
    un_smix_mxchvol2_t	unMXCHVOL2;	/* 0x00000024 */
    un_smix_mxchvol3_t	unMXCHVOL3;	/* 0x00000028 */
    un_smix_mxchmute_t	unMXCHMUTE;	/* 0x0000002C */
    un_smix_mxchfade1_t	unMXCHFADE1;	/* 0x00000030 */
    un_smix_mxchfade2_t	unMXCHFADE2;	/* 0x00000034 */
    un_smix_mxchfade3_t	unMXCHFADE3;	/* 0x00000038 */
    un_smix_mxchfade4_t	unMXCHFADE4;	/* 0x0000003C */
    un_smix_mxchfade5_t	unMXCHFADE5;	/* 0x00000040 */
    un_smix_mxmxdfade_t	unMXMXDFADE;	/* 0x00000044 */
    un_smix_mxchfadeen_t	unMXCHFADEEN;	/* 0x00000048 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000004C */
    un_smix_mxbuffclr_t	unMXBUFFCLR;	/* 0x00000050 */
    un_smix_mxfadeclr_t	unMXFADECLR;	/* 0x00000054 */
    uint_io8_t	au8Reserved2[8];	/* 0x00000058 */
    un_smix_mxintren_t	unMXINTREN;	/* 0x00000060 */
    un_smix_mxintrstate_t	unMXINTRSTATE;	/* 0x00000064 */
    un_smix_mxintrclr_t	unMXINTRCLR;	/* 0x00000068 */
    uint_io8_t	au8Reserved3[4];	/* 0x0000006C */
    un_smix_mxinbuffcnt1_t	unMXINBUFFCNT1;	/* 0x00000070 */
    un_smix_mxinbuffcnt2_t	unMXINBUFFCNT2;	/* 0x00000074 */
    un_smix_mxchbuffcnt_t	unMXCHBUFFCNT;	/* 0x00000078 */
    un_smix_mxoutbuffcnt_t	unMXOUTBUFFCNT;	/* 0x0000007C */
    un_smix_mxahberr_t	unMXAHBERR;	/* 0x00000080 */
    uint_io8_t	au8Reserved4[124];	/* 0x00000084 */
    un_smix_mxwfg0dadr_t	unMXWFG0DADR;	/* 0x00000100 */
    un_smix_mxwfg1dadr_t	unMXWFG1DADR;	/* 0x00000104 */
    un_smix_mxwfg2dadr_t	unMXWFG2DADR;	/* 0x00000108 */
    un_smix_mxwfg3dadr_t	unMXWFG3DADR;	/* 0x0000010C */
    un_smix_mxwfg4dadr_t	unMXWFG4DADR;	/* 0x00000110 */
    uint_io8_t	au8Reserved5[236];	/* 0x00000114 */
    un_smix_mxpmis0dadr0_t	unMXPMIS0DADR0;	/* 0x00000200 */
    un_smix_mxpmis0dadr1_t	unMXPMIS0DADR1;	/* 0x00000204 */
    un_smix_mxpmis0dadr2_t	unMXPMIS0DADR2;	/* 0x00000208 */
    un_smix_mxpmis0dadr3_t	unMXPMIS0DADR3;	/* 0x0000020C */
    un_smix_mxpmis0dadr4_t	unMXPMIS0DADR4;	/* 0x00000210 */
    un_smix_mxpmis0dadr5_t	unMXPMIS0DADR5;	/* 0x00000214 */
    un_smix_mxpmis0dadr6_t	unMXPMIS0DADR6;	/* 0x00000218 */
    un_smix_mxpmis0dadr7_t	unMXPMIS0DADR7;	/* 0x0000021C */
    un_smix_mxpmis0dadr8_t	unMXPMIS0DADR8;	/* 0x00000220 */
    un_smix_mxpmis0dadr9_t	unMXPMIS0DADR9;	/* 0x00000224 */
    un_smix_mxpmis0dadr10_t	unMXPMIS0DADR10;	/* 0x00000228 */
    un_smix_mxpmis0dadr11_t	unMXPMIS0DADR11;	/* 0x0000022C */
    un_smix_mxpmis0dadr12_t	unMXPMIS0DADR12;	/* 0x00000230 */
    un_smix_mxpmis0dadr13_t	unMXPMIS0DADR13;	/* 0x00000234 */
    un_smix_mxpmis0dadr14_t	unMXPMIS0DADR14;	/* 0x00000238 */
    un_smix_mxpmis0dadr15_t	unMXPMIS0DADR15;	/* 0x0000023C */
    un_smix_mxpmis1dadr0_t	unMXPMIS1DADR0;	/* 0x00000240 */
    un_smix_mxpmis1dadr1_t	unMXPMIS1DADR1;	/* 0x00000244 */
    un_smix_mxpmis1dadr2_t	unMXPMIS1DADR2;	/* 0x00000248 */
    un_smix_mxpmis1dadr3_t	unMXPMIS1DADR3;	/* 0x0000024C */
    un_smix_mxpmis1dadr4_t	unMXPMIS1DADR4;	/* 0x00000250 */
    un_smix_mxpmis1dadr5_t	unMXPMIS1DADR5;	/* 0x00000254 */
    un_smix_mxpmis1dadr6_t	unMXPMIS1DADR6;	/* 0x00000258 */
    un_smix_mxpmis1dadr7_t	unMXPMIS1DADR7;	/* 0x0000025C */
    un_smix_mxpmis1dadr8_t	unMXPMIS1DADR8;	/* 0x00000260 */
    un_smix_mxpmis1dadr9_t	unMXPMIS1DADR9;	/* 0x00000264 */
    un_smix_mxpmis1dadr10_t	unMXPMIS1DADR10;	/* 0x00000268 */
    un_smix_mxpmis1dadr11_t	unMXPMIS1DADR11;	/* 0x0000026C */
    un_smix_mxpmis1dadr12_t	unMXPMIS1DADR12;	/* 0x00000270 */
    un_smix_mxpmis1dadr13_t	unMXPMIS1DADR13;	/* 0x00000274 */
    un_smix_mxpmis1dadr14_t	unMXPMIS1DADR14;	/* 0x00000278 */
    un_smix_mxpmis1dadr15_t	unMXPMIS1DADR15;	/* 0x0000027C */
    un_smix_mxpmis2dadr0_t	unMXPMIS2DADR0;	/* 0x00000280 */
    un_smix_mxpmis2dadr1_t	unMXPMIS2DADR1;	/* 0x00000284 */
    un_smix_mxpmis2dadr2_t	unMXPMIS2DADR2;	/* 0x00000288 */
    un_smix_mxpmis2dadr3_t	unMXPMIS2DADR3;	/* 0x0000028C */
    un_smix_mxpmis2dadr4_t	unMXPMIS2DADR4;	/* 0x00000290 */
    un_smix_mxpmis2dadr5_t	unMXPMIS2DADR5;	/* 0x00000294 */
    un_smix_mxpmis2dadr6_t	unMXPMIS2DADR6;	/* 0x00000298 */
    un_smix_mxpmis2dadr7_t	unMXPMIS2DADR7;	/* 0x0000029C */
    un_smix_mxpmis2dadr8_t	unMXPMIS2DADR8;	/* 0x000002A0 */
    un_smix_mxpmis2dadr9_t	unMXPMIS2DADR9;	/* 0x000002A4 */
    un_smix_mxpmis2dadr10_t	unMXPMIS2DADR10;	/* 0x000002A8 */
    un_smix_mxpmis2dadr11_t	unMXPMIS2DADR11;	/* 0x000002AC */
    un_smix_mxpmis2dadr12_t	unMXPMIS2DADR12;	/* 0x000002B0 */
    un_smix_mxpmis2dadr13_t	unMXPMIS2DADR13;	/* 0x000002B4 */
    un_smix_mxpmis2dadr14_t	unMXPMIS2DADR14;	/* 0x000002B8 */
    un_smix_mxpmis2dadr15_t	unMXPMIS2DADR15;	/* 0x000002BC */
    un_smix_mxpmis3dadr0_t	unMXPMIS3DADR0;	/* 0x000002C0 */
    un_smix_mxpmis3dadr1_t	unMXPMIS3DADR1;	/* 0x000002C4 */
    un_smix_mxpmis3dadr2_t	unMXPMIS3DADR2;	/* 0x000002C8 */
    un_smix_mxpmis3dadr3_t	unMXPMIS3DADR3;	/* 0x000002CC */
    un_smix_mxpmis3dadr4_t	unMXPMIS3DADR4;	/* 0x000002D0 */
    un_smix_mxpmis3dadr5_t	unMXPMIS3DADR5;	/* 0x000002D4 */
    un_smix_mxpmis3dadr6_t	unMXPMIS3DADR6;	/* 0x000002D8 */
    un_smix_mxpmis3dadr7_t	unMXPMIS3DADR7;	/* 0x000002DC */
    un_smix_mxpmis3dadr8_t	unMXPMIS3DADR8;	/* 0x000002E0 */
    un_smix_mxpmis3dadr9_t	unMXPMIS3DADR9;	/* 0x000002E4 */
    un_smix_mxpmis3dadr10_t	unMXPMIS3DADR10;	/* 0x000002E8 */
    un_smix_mxpmis3dadr11_t	unMXPMIS3DADR11;	/* 0x000002EC */
    un_smix_mxpmis3dadr12_t	unMXPMIS3DADR12;	/* 0x000002F0 */
    un_smix_mxpmis3dadr13_t	unMXPMIS3DADR13;	/* 0x000002F4 */
    un_smix_mxpmis3dadr14_t	unMXPMIS3DADR14;	/* 0x000002F8 */
    un_smix_mxpmis3dadr15_t	unMXPMIS3DADR15;	/* 0x000002FC */
    un_smix_mxpmis4dadr0_t	unMXPMIS4DADR0;	/* 0x00000300 */
    un_smix_mxpmis4dadr1_t	unMXPMIS4DADR1;	/* 0x00000304 */
    un_smix_mxpmis4dadr2_t	unMXPMIS4DADR2;	/* 0x00000308 */
    un_smix_mxpmis4dadr3_t	unMXPMIS4DADR3;	/* 0x0000030C */
    un_smix_mxpmis4dadr4_t	unMXPMIS4DADR4;	/* 0x00000310 */
    un_smix_mxpmis4dadr5_t	unMXPMIS4DADR5;	/* 0x00000314 */
    un_smix_mxpmis4dadr6_t	unMXPMIS4DADR6;	/* 0x00000318 */
    un_smix_mxpmis4dadr7_t	unMXPMIS4DADR7;	/* 0x0000031C */
    un_smix_mxpmis4dadr8_t	unMXPMIS4DADR8;	/* 0x00000320 */
    un_smix_mxpmis4dadr9_t	unMXPMIS4DADR9;	/* 0x00000324 */
    un_smix_mxpmis4dadr10_t	unMXPMIS4DADR10;	/* 0x00000328 */
    un_smix_mxpmis4dadr11_t	unMXPMIS4DADR11;	/* 0x0000032C */
    un_smix_mxpmis4dadr12_t	unMXPMIS4DADR12;	/* 0x00000330 */
    un_smix_mxpmis4dadr13_t	unMXPMIS4DADR13;	/* 0x00000334 */
    un_smix_mxpmis4dadr14_t	unMXPMIS4DADR14;	/* 0x00000338 */
    un_smix_mxpmis4dadr15_t	unMXPMIS4DADR15;	/* 0x0000033C */
    uint_io8_t	au8Reserved6[192];	/* 0x00000340 */
}stc_smix_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_smix_t	stcSMIX;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SMIX_H */
