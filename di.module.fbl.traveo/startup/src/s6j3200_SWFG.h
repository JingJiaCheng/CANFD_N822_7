/* S6J3200 SERIES I/O REGISTER FILE V01L01
 *
 * Copyright (C) 2014 Spansion LLC. All Rights Reserved.
 */

#ifndef __S6J3200_SWFG_H
#define __S6J3200_SWFG_H

#include "s6j3200io_basetypes.h"

/* SWFG base pointer */
#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
#define SWFG	stcSWFG
#else /* __IO_DEFINE */
#define SWFG	(*((volatile stc_swfg_t*)0xB8028000))
#endif /* __IO_DEFINE */

/* WGCHEN */
#define SWFG_WGCHEN	(SWFG.unWGCHEN.u32Register)  /*@rg@*/
#define SWFG_WGCHEN_CH0EN	(SWFG.unWGCHEN.stcField.u1CH0EN)  /*@bf@*/
#define SWFG_WGCHEN_CH1EN	(SWFG.unWGCHEN.stcField.u1CH1EN)  /*@bf@*/
#define SWFG_WGCHEN_CH2EN	(SWFG.unWGCHEN.stcField.u1CH2EN)  /*@bf@*/
#define SWFG_WGCHEN_CH3EN	(SWFG.unWGCHEN.stcField.u1CH3EN)  /*@bf@*/
#define SWFG_WGCHEN_CH4EN	(SWFG.unWGCHEN.stcField.u1CH4EN)  /*@bf@*/

typedef struct stc_swfg_wgchen_field{
    uint_io32_t		u1CH0EN:1;
    uint_io32_t		u1CH1EN:1;
    uint_io32_t		u1CH2EN:1;
    uint_io32_t		u1CH3EN:1;
    uint_io32_t		u1CH4EN:1;
    uint_io32_t		:27;
}stc_swfg_wgchen_field_t;

typedef union un_swfg_wgchen{
    uint_io32_t		u32Register;
    stc_swfg_wgchen_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchen_t;

/* WGCHSTART */
#define SWFG_WGCHSTART	(SWFG.unWGCHSTART.u32Register)  /*@rg@*/
#define SWFG_WGCHSTART_CH0START	(SWFG.unWGCHSTART.stcField.u1CH0START)  /*@bf@*/
#define SWFG_WGCHSTART_CH1START	(SWFG.unWGCHSTART.stcField.u1CH1START)  /*@bf@*/
#define SWFG_WGCHSTART_CH2START	(SWFG.unWGCHSTART.stcField.u1CH2START)  /*@bf@*/
#define SWFG_WGCHSTART_CH3START	(SWFG.unWGCHSTART.stcField.u1CH3START)  /*@bf@*/
#define SWFG_WGCHSTART_CH4START	(SWFG.unWGCHSTART.stcField.u1CH4START)  /*@bf@*/

typedef struct stc_swfg_wgchstart_field{
    uint_io32_t		u1CH0START:1;
    uint_io32_t		u1CH1START:1;
    uint_io32_t		u1CH2START:1;
    uint_io32_t		u1CH3START:1;
    uint_io32_t		u1CH4START:1;
    uint_io32_t		:27;
}stc_swfg_wgchstart_field_t;

typedef union un_swfg_wgchstart{
    uint_io32_t		u32Register;
    stc_swfg_wgchstart_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchstart_t;

/* WGCHADD1 */
#define SWFG_WGCHADD1	(SWFG.unWGCHADD1.u32Register)  /*@rg@*/
#define SWFG_WGCHADD1_CH0ADD	(SWFG.unWGCHADD1.stcField.u13CH0ADD)  /*@bf@*/
#define SWFG_WGCHADD1_CH1ADD	(SWFG.unWGCHADD1.stcField.u13CH1ADD)  /*@bf@*/

typedef struct stc_swfg_wgchadd1_field{
    uint_io32_t		u13CH0ADD:13;
    uint_io32_t		:3;
    uint_io32_t		u13CH1ADD:13;
    uint_io32_t		:3;
}stc_swfg_wgchadd1_field_t;

typedef union un_swfg_wgchadd1{
    uint_io32_t		u32Register;
    stc_swfg_wgchadd1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchadd1_t;

/* WGCHADD2 */
#define SWFG_WGCHADD2	(SWFG.unWGCHADD2.u32Register)  /*@rg@*/
#define SWFG_WGCHADD2_CH2ADD	(SWFG.unWGCHADD2.stcField.u13CH2ADD)  /*@bf@*/
#define SWFG_WGCHADD2_CH3ADD	(SWFG.unWGCHADD2.stcField.u13CH3ADD)  /*@bf@*/

typedef struct stc_swfg_wgchadd2_field{
    uint_io32_t		u13CH2ADD:13;
    uint_io32_t		:3;
    uint_io32_t		u13CH3ADD:13;
    uint_io32_t		:3;
}stc_swfg_wgchadd2_field_t;

typedef union un_swfg_wgchadd2{
    uint_io32_t		u32Register;
    stc_swfg_wgchadd2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchadd2_t;

/* WGCHADD3 */
#define SWFG_WGCHADD3	(SWFG.unWGCHADD3.u32Register)  /*@rg@*/
#define SWFG_WGCHADD3_CH4ADD	(SWFG.unWGCHADD3.stcField.u13CH4ADD)  /*@bf@*/

typedef struct stc_swfg_wgchadd3_field{
    uint_io32_t		u13CH4ADD:13;
    uint_io32_t		:19;
}stc_swfg_wgchadd3_field_t;

typedef union un_swfg_wgchadd3{
    uint_io32_t		u32Register;
    stc_swfg_wgchadd3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchadd3_t;

/* WGCHMONO */
#define SWFG_WGCHMONO	(SWFG.unWGCHMONO.u32Register)  /*@rg@*/
#define SWFG_WGCHMONO_CH0MONO	(SWFG.unWGCHMONO.stcField.u2CH0MONO)  /*@bf@*/
#define SWFG_WGCHMONO_CH1MONO	(SWFG.unWGCHMONO.stcField.u2CH1MONO)  /*@bf@*/
#define SWFG_WGCHMONO_CH2MONO	(SWFG.unWGCHMONO.stcField.u2CH2MONO)  /*@bf@*/
#define SWFG_WGCHMONO_CH3MONO	(SWFG.unWGCHMONO.stcField.u2CH3MONO)  /*@bf@*/
#define SWFG_WGCHMONO_CH4MONO	(SWFG.unWGCHMONO.stcField.u2CH4MONO)  /*@bf@*/

typedef struct stc_swfg_wgchmono_field{
    uint_io32_t		u2CH0MONO:2;
    uint_io32_t		u2CH1MONO:2;
    uint_io32_t		u2CH2MONO:2;
    uint_io32_t		u2CH3MONO:2;
    uint_io32_t		u2CH4MONO:2;
    uint_io32_t		:22;
}stc_swfg_wgchmono_field_t;

typedef union un_swfg_wgchmono{
    uint_io32_t		u32Register;
    stc_swfg_wgchmono_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchmono_t;

/* WGCH[0-4]CTRL1 */
#define SWFG_WGCH0CTRL1	(SWFG.unWGCH0CTRL1.u32Register)  /*@rg@*/
#define SWFG_WGCH0CTRL1_FSFREQ	(SWFG.unWGCH0CTRL1.stcField.u6FSFREQ)  /*@bf@*/
#define SWFG_WGCH0CTRL1_FSINF	(SWFG.unWGCH0CTRL1.stcField.u2FSINF)  /*@bf@*/
#define SWFG_WGCH0CTRL1_FSLEN	(SWFG.unWGCH0CTRL1.stcField.u5FSLEN)  /*@bf@*/

#define SWFG_WGCH1CTRL1	(SWFG.unWGCH1CTRL1.u32Register)  /*@rg@*/
#define SWFG_WGCH1CTRL1_FSFREQ	(SWFG.unWGCH1CTRL1.stcField.u6FSFREQ)  /*@bf@*/
#define SWFG_WGCH1CTRL1_FSINF	(SWFG.unWGCH1CTRL1.stcField.u2FSINF)  /*@bf@*/
#define SWFG_WGCH1CTRL1_FSLEN	(SWFG.unWGCH1CTRL1.stcField.u5FSLEN)  /*@bf@*/

#define SWFG_WGCH2CTRL1	(SWFG.unWGCH2CTRL1.u32Register)  /*@rg@*/
#define SWFG_WGCH2CTRL1_FSFREQ	(SWFG.unWGCH2CTRL1.stcField.u6FSFREQ)  /*@bf@*/
#define SWFG_WGCH2CTRL1_FSINF	(SWFG.unWGCH2CTRL1.stcField.u2FSINF)  /*@bf@*/
#define SWFG_WGCH2CTRL1_FSLEN	(SWFG.unWGCH2CTRL1.stcField.u5FSLEN)  /*@bf@*/

#define SWFG_WGCH3CTRL1	(SWFG.unWGCH3CTRL1.u32Register)  /*@rg@*/
#define SWFG_WGCH3CTRL1_FSFREQ	(SWFG.unWGCH3CTRL1.stcField.u6FSFREQ)  /*@bf@*/
#define SWFG_WGCH3CTRL1_FSINF	(SWFG.unWGCH3CTRL1.stcField.u2FSINF)  /*@bf@*/
#define SWFG_WGCH3CTRL1_FSLEN	(SWFG.unWGCH3CTRL1.stcField.u5FSLEN)  /*@bf@*/

#define SWFG_WGCH4CTRL1	(SWFG.unWGCH4CTRL1.u32Register)  /*@rg@*/
#define SWFG_WGCH4CTRL1_FSFREQ	(SWFG.unWGCH4CTRL1.stcField.u6FSFREQ)  /*@bf@*/
#define SWFG_WGCH4CTRL1_FSINF	(SWFG.unWGCH4CTRL1.stcField.u2FSINF)  /*@bf@*/
#define SWFG_WGCH4CTRL1_FSLEN	(SWFG.unWGCH4CTRL1.stcField.u5FSLEN)  /*@bf@*/

typedef struct stc_swfg_wgchnctrl1_field{
    uint_io32_t		u6FSFREQ:6;
    uint_io32_t		:2;
    uint_io32_t		u2FSINF:2;
    uint_io32_t		:6;
    uint_io32_t		u5FSLEN:5;
    uint_io32_t		:11;
}stc_swfg_wgchnctrl1_field_t;

typedef union un_swfg_wgchnctrl1{
    uint_io32_t		u32Register;
    stc_swfg_wgchnctrl1_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchnctrl1_t;

/* WGCH[0-4]CTRL2 */
#define SWFG_WGCH0CTRL2	(SWFG.unWGCH0CTRL2.u32Register)  /*@rg@*/
#define SWFG_WGCH0CTRL2_ITVAL1	(SWFG.unWGCH0CTRL2.stcField.u5ITVAL1)  /*@bf@*/
#define SWFG_WGCH0CTRL2_ITVAL2	(SWFG.unWGCH0CTRL2.stcField.u5ITVAL2)  /*@bf@*/

#define SWFG_WGCH1CTRL2	(SWFG.unWGCH1CTRL2.u32Register)  /*@rg@*/
#define SWFG_WGCH1CTRL2_ITVAL1	(SWFG.unWGCH1CTRL2.stcField.u5ITVAL1)  /*@bf@*/
#define SWFG_WGCH1CTRL2_ITVAL2	(SWFG.unWGCH1CTRL2.stcField.u5ITVAL2)  /*@bf@*/

#define SWFG_WGCH2CTRL2	(SWFG.unWGCH2CTRL2.u32Register)  /*@rg@*/
#define SWFG_WGCH2CTRL2_ITVAL1	(SWFG.unWGCH2CTRL2.stcField.u5ITVAL1)  /*@bf@*/
#define SWFG_WGCH2CTRL2_ITVAL2	(SWFG.unWGCH2CTRL2.stcField.u5ITVAL2)  /*@bf@*/

#define SWFG_WGCH3CTRL2	(SWFG.unWGCH3CTRL2.u32Register)  /*@rg@*/
#define SWFG_WGCH3CTRL2_ITVAL1	(SWFG.unWGCH3CTRL2.stcField.u5ITVAL1)  /*@bf@*/
#define SWFG_WGCH3CTRL2_ITVAL2	(SWFG.unWGCH3CTRL2.stcField.u5ITVAL2)  /*@bf@*/

#define SWFG_WGCH4CTRL2	(SWFG.unWGCH4CTRL2.u32Register)  /*@rg@*/
#define SWFG_WGCH4CTRL2_ITVAL1	(SWFG.unWGCH4CTRL2.stcField.u5ITVAL1)  /*@bf@*/
#define SWFG_WGCH4CTRL2_ITVAL2	(SWFG.unWGCH4CTRL2.stcField.u5ITVAL2)  /*@bf@*/

typedef struct stc_swfg_wgchnctrl2_field{
    uint_io32_t		u5ITVAL1:5;
    uint_io32_t		:11;
    uint_io32_t		u5ITVAL2:5;
    uint_io32_t		:11;
}stc_swfg_wgchnctrl2_field_t;

typedef union un_swfg_wgchnctrl2{
    uint_io32_t		u32Register;
    stc_swfg_wgchnctrl2_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchnctrl2_t;

/* WGCH[0-4]CTRL3 */
#define SWFG_WGCH0CTRL3	(SWFG.unWGCH0CTRL3.u32Register)  /*@rg@*/
#define SWFG_WGCH0CTRL3_ATTACK	(SWFG.unWGCH0CTRL3.stcField.u5ATTACK)  /*@bf@*/
#define SWFG_WGCH0CTRL3_RELEASE	(SWFG.unWGCH0CTRL3.stcField.u5RELEASE)  /*@bf@*/
#define SWFG_WGCH0CTRL3_FILTER	(SWFG.unWGCH0CTRL3.stcField.u2FILTER)  /*@bf@*/

#define SWFG_WGCH1CTRL3	(SWFG.unWGCH1CTRL3.u32Register)  /*@rg@*/
#define SWFG_WGCH1CTRL3_ATTACK	(SWFG.unWGCH1CTRL3.stcField.u5ATTACK)  /*@bf@*/
#define SWFG_WGCH1CTRL3_RELEASE	(SWFG.unWGCH1CTRL3.stcField.u5RELEASE)  /*@bf@*/
#define SWFG_WGCH1CTRL3_FILTER	(SWFG.unWGCH1CTRL3.stcField.u2FILTER)  /*@bf@*/

#define SWFG_WGCH2CTRL3	(SWFG.unWGCH2CTRL3.u32Register)  /*@rg@*/
#define SWFG_WGCH2CTRL3_ATTACK	(SWFG.unWGCH2CTRL3.stcField.u5ATTACK)  /*@bf@*/
#define SWFG_WGCH2CTRL3_RELEASE	(SWFG.unWGCH2CTRL3.stcField.u5RELEASE)  /*@bf@*/
#define SWFG_WGCH2CTRL3_FILTER	(SWFG.unWGCH2CTRL3.stcField.u2FILTER)  /*@bf@*/

#define SWFG_WGCH3CTRL3	(SWFG.unWGCH3CTRL3.u32Register)  /*@rg@*/
#define SWFG_WGCH3CTRL3_ATTACK	(SWFG.unWGCH3CTRL3.stcField.u5ATTACK)  /*@bf@*/
#define SWFG_WGCH3CTRL3_RELEASE	(SWFG.unWGCH3CTRL3.stcField.u5RELEASE)  /*@bf@*/
#define SWFG_WGCH3CTRL3_FILTER	(SWFG.unWGCH3CTRL3.stcField.u2FILTER)  /*@bf@*/

#define SWFG_WGCH4CTRL3	(SWFG.unWGCH4CTRL3.u32Register)  /*@rg@*/
#define SWFG_WGCH4CTRL3_ATTACK	(SWFG.unWGCH4CTRL3.stcField.u5ATTACK)  /*@bf@*/
#define SWFG_WGCH4CTRL3_RELEASE	(SWFG.unWGCH4CTRL3.stcField.u5RELEASE)  /*@bf@*/
#define SWFG_WGCH4CTRL3_FILTER	(SWFG.unWGCH4CTRL3.stcField.u2FILTER)  /*@bf@*/

typedef struct stc_swfg_wgchnctrl3_field{
    uint_io32_t		u5ATTACK:5;
    uint_io32_t		:3;
    uint_io32_t		u5RELEASE:5;
    uint_io32_t		:3;
    uint_io32_t		u2FILTER:2;
    uint_io32_t		:14;
}stc_swfg_wgchnctrl3_field_t;

typedef union un_swfg_wgchnctrl3{
    uint_io32_t		u32Register;
    stc_swfg_wgchnctrl3_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchnctrl3_t;

/* WGCHCLR */
#define SWFG_WGCHCLR	(SWFG.unWGCHCLR.u32Register)  /*@rg@*/
#define SWFG_WGCHCLR_CH0CL	(SWFG.unWGCHCLR.stcField.u1CH0CL)  /*@bf@*/
#define SWFG_WGCHCLR_CH1CL	(SWFG.unWGCHCLR.stcField.u1CH1CL)  /*@bf@*/
#define SWFG_WGCHCLR_CH2CL	(SWFG.unWGCHCLR.stcField.u1CH2CL)  /*@bf@*/
#define SWFG_WGCHCLR_CH3CL	(SWFG.unWGCHCLR.stcField.u1CH3CL)  /*@bf@*/
#define SWFG_WGCHCLR_CH4CL	(SWFG.unWGCHCLR.stcField.u1CH4CL)  /*@bf@*/

typedef struct stc_swfg_wgchclr_field{
    uint_io32_t		u1CH0CL:1;
    uint_io32_t		u1CH1CL:1;
    uint_io32_t		u1CH2CL:1;
    uint_io32_t		u1CH3CL:1;
    uint_io32_t		u1CH4CL:1;
    uint_io32_t		:27;
}stc_swfg_wgchclr_field_t;

typedef union un_swfg_wgchclr{
    uint_io32_t		u32Register;
    stc_swfg_wgchclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgchclr_t;

/* WGINTREN */
#define SWFG_WGINTREN	(SWFG.unWGINTREN.u32Register)  /*@rg@*/
#define SWFG_WGINTREN_AHBERR	(SWFG.unWGINTREN.stcField.u1AHBERR)  /*@bf@*/
#define SWFG_WGINTREN_CH0END	(SWFG.unWGINTREN.stcField.u1CH0END)  /*@bf@*/
#define SWFG_WGINTREN_CH1END	(SWFG.unWGINTREN.stcField.u1CH1END)  /*@bf@*/
#define SWFG_WGINTREN_CH2END	(SWFG.unWGINTREN.stcField.u1CH2END)  /*@bf@*/
#define SWFG_WGINTREN_CH3END	(SWFG.unWGINTREN.stcField.u1CH3END)  /*@bf@*/
#define SWFG_WGINTREN_CH4END	(SWFG.unWGINTREN.stcField.u1CH4END)  /*@bf@*/

typedef struct stc_swfg_wgintren_field{
    uint_io32_t		u1AHBERR:1;
    uint_io32_t		:7;
    uint_io32_t		u1CH0END:1;
    uint_io32_t		u1CH1END:1;
    uint_io32_t		u1CH2END:1;
    uint_io32_t		u1CH3END:1;
    uint_io32_t		u1CH4END:1;
    uint_io32_t		:19;
}stc_swfg_wgintren_field_t;

typedef union un_swfg_wgintren{
    uint_io32_t		u32Register;
    stc_swfg_wgintren_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgintren_t;

/* WGINTRSTATE */
#define SWFG_WGINTRSTATE	(SWFG.unWGINTRSTATE.u32Register)  /*@rg@*/
#define SWFG_WGINTRSTATE_AHBERR	(SWFG.unWGINTRSTATE.stcField.u1AHBERR)  /*@bf@*/
#define SWFG_WGINTRSTATE_CH0END	(SWFG.unWGINTRSTATE.stcField.u1CH0END)  /*@bf@*/
#define SWFG_WGINTRSTATE_CH1END	(SWFG.unWGINTRSTATE.stcField.u1CH1END)  /*@bf@*/
#define SWFG_WGINTRSTATE_CH2END	(SWFG.unWGINTRSTATE.stcField.u1CH2END)  /*@bf@*/
#define SWFG_WGINTRSTATE_CH3END	(SWFG.unWGINTRSTATE.stcField.u1CH3END)  /*@bf@*/
#define SWFG_WGINTRSTATE_CH4END	(SWFG.unWGINTRSTATE.stcField.u1CH4END)  /*@bf@*/

typedef struct stc_swfg_wgintrstate_field{
    uint_io32_t		u1AHBERR:1;
    uint_io32_t		:7;
    uint_io32_t		u1CH0END:1;
    uint_io32_t		u1CH1END:1;
    uint_io32_t		u1CH2END:1;
    uint_io32_t		u1CH3END:1;
    uint_io32_t		u1CH4END:1;
    uint_io32_t		:19;
}stc_swfg_wgintrstate_field_t;

typedef union un_swfg_wgintrstate{
    uint_io32_t		u32Register;
    stc_swfg_wgintrstate_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgintrstate_t;

/* WGINTRCLR */
#define SWFG_WGINTRCLR	(SWFG.unWGINTRCLR.u32Register)  /*@rg@*/
#define SWFG_WGINTRCLR_AHBERR	(SWFG.unWGINTRCLR.stcField.u1AHBERR)  /*@bf@*/
#define SWFG_WGINTRCLR_CH0END	(SWFG.unWGINTRCLR.stcField.u1CH0END)  /*@bf@*/
#define SWFG_WGINTRCLR_CH1END	(SWFG.unWGINTRCLR.stcField.u1CH1END)  /*@bf@*/
#define SWFG_WGINTRCLR_CH2END	(SWFG.unWGINTRCLR.stcField.u1CH2END)  /*@bf@*/
#define SWFG_WGINTRCLR_CH3END	(SWFG.unWGINTRCLR.stcField.u1CH3END)  /*@bf@*/
#define SWFG_WGINTRCLR_CH4END	(SWFG.unWGINTRCLR.stcField.u1CH4END)  /*@bf@*/

typedef struct stc_swfg_wgintrclr_field{
    uint_io32_t		u1AHBERR:1;
    uint_io32_t		:7;
    uint_io32_t		u1CH0END:1;
    uint_io32_t		u1CH1END:1;
    uint_io32_t		u1CH2END:1;
    uint_io32_t		u1CH3END:1;
    uint_io32_t		u1CH4END:1;
    uint_io32_t		:19;
}stc_swfg_wgintrclr_field_t;

typedef union un_swfg_wgintrclr{
    uint_io32_t		u32Register;
    stc_swfg_wgintrclr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgintrclr_t;

/* WGAHBERR */
#define SWFG_WGAHBERR	(SWFG.unWGAHBERR.u32Register)  /*@rg@*/
#define SWFG_WGAHBERR_AHBSERR	(SWFG.unWGAHBERR.stcField.u2AHBSERR)  /*@bf@*/

typedef struct stc_swfg_wgahberr_field{
    uint_io32_t		u2AHBSERR:2;
    uint_io32_t		:30;
}stc_swfg_wgahberr_field_t;

typedef union un_swfg_wgahberr{
    uint_io32_t		u32Register;
    stc_swfg_wgahberr_field_t		stcField;
    uint_io8_t		au8Byte[4];
    uint_io16_t		au16Halfword[2];
}un_swfg_wgahberr_t;


typedef struct stc_swfg{
    un_swfg_wgchen_t	unWGCHEN;	/* 0x00000000 */
    un_swfg_wgchstart_t	unWGCHSTART;	/* 0x00000004 */
    uint_io8_t	au8Reserved0[8];	/* 0x00000008 */
    un_swfg_wgchadd1_t	unWGCHADD1;	/* 0x00000010 */
    un_swfg_wgchadd2_t	unWGCHADD2;	/* 0x00000014 */
    un_swfg_wgchadd3_t	unWGCHADD3;	/* 0x00000018 */
    un_swfg_wgchmono_t	unWGCHMONO;	/* 0x0000001C */
    un_swfg_wgchnctrl1_t	unWGCH0CTRL1;	/* 0x00000020 */
    un_swfg_wgchnctrl2_t	unWGCH0CTRL2;	/* 0x00000024 */
    un_swfg_wgchnctrl3_t	unWGCH0CTRL3;	/* 0x00000028 */
    uint_io8_t	au8Reserved1[4];	/* 0x0000002C */
    un_swfg_wgchnctrl1_t	unWGCH1CTRL1;	/* 0x00000030 */
    un_swfg_wgchnctrl2_t	unWGCH1CTRL2;	/* 0x00000034 */
    un_swfg_wgchnctrl3_t	unWGCH1CTRL3;	/* 0x00000038 */
    uint_io8_t	au8Reserved2[4];	/* 0x0000003C */
    un_swfg_wgchnctrl1_t	unWGCH2CTRL1;	/* 0x00000040 */
    un_swfg_wgchnctrl2_t	unWGCH2CTRL2;	/* 0x00000044 */
    un_swfg_wgchnctrl3_t	unWGCH2CTRL3;	/* 0x00000048 */
    uint_io8_t	au8Reserved3[4];	/* 0x0000004C */
    un_swfg_wgchnctrl1_t	unWGCH3CTRL1;	/* 0x00000050 */
    un_swfg_wgchnctrl2_t	unWGCH3CTRL2;	/* 0x00000054 */
    un_swfg_wgchnctrl3_t	unWGCH3CTRL3;	/* 0x00000058 */
    uint_io8_t	au8Reserved4[4];	/* 0x0000005C */
    un_swfg_wgchnctrl1_t	unWGCH4CTRL1;	/* 0x00000060 */
    un_swfg_wgchnctrl2_t	unWGCH4CTRL2;	/* 0x00000064 */
    un_swfg_wgchnctrl3_t	unWGCH4CTRL3;	/* 0x00000068 */
    uint_io8_t	au8Reserved5[4];	/* 0x0000006C */
    un_swfg_wgchclr_t	unWGCHCLR;	/* 0x00000070 */
    uint_io8_t	au8Reserved6[12];	/* 0x00000074 */
    un_swfg_wgintren_t	unWGINTREN;	/* 0x00000080 */
    un_swfg_wgintrstate_t	unWGINTRSTATE;	/* 0x00000084 */
    un_swfg_wgintrclr_t	unWGINTRCLR;	/* 0x00000088 */
    uint_io8_t	au8Reserved7[4];	/* 0x0000008C */
    un_swfg_wgahberr_t	unWGAHBERR;	/* 0x00000090 */
    uint_io8_t	au8Reserved8[876];	/* 0x00000094 */
}stc_swfg_t;

#if defined(__IO_DEFINE) || defined(__IO_EXTERN)
__IO_DECLARATOR stc_swfg_t	stcSWFG;
#endif /* __IO_DEFINE */

/* Total size of each unit/channel: 1024(0x400) bytes */


#endif /* __S6J3200_SWFG_H */
