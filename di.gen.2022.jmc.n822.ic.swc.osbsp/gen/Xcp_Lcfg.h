/* ===========================================================================

                     CONFIDENTIAL VISTEON CORPORATION

  This is an unpublished work of authorship, which contains trade secrets,
  created in 2006.  Visteon Corporation owns all rights to this work and
  intends to maintain it in confidence to preserve its trade secret status.
  Visteon Corporation reserves the right, under the copyright laws of the
  United States or those of any other country that may have jurisdiction, to
  protect this work as an unpublished work, in the event of an inadvertent
  or deliberate unauthorized publication.  Visteon Corporation also reserves
  its rights under all copyright laws to protect this work as a published
  work, when appropriate.  Those having access to this work may not copy it,
  use it, modify it or disclose the information contained in it without the
  written authorization of Visteon Corporation.

 =========================================================================*/

    
#if !defined(XCP_LCFG_H)
#define XCP_LCFG_H

#include "Xcp_Types.h"

/* PRQA S 5013 1 */ /* MD_Xcp_5013 */
typedef VAR(unsigned char, XCP_VAR_NOINIT) XcpCharType;

#define XCP_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
//#include "MemMap.h"

extern CONST(Xcp_TlApiType, XCP_CONST) Xcp_TlApi[1];

/* Events */
#define XcpConf_XcpEventChannel_Dlt_EvtDem (9UL)
#define XcpConf_XcpEventChannel_Dlt_EvtMsg (10UL)
#define XcpConf_XcpEventChannel_Dlt_EvtVMsg (12UL)
#define XcpConf_XcpEventChannel_Dlt_EvtDet (11UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_2ms (13UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_10msCAN (6UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_10msEcuM (8UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_20msHP (4UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_20msMP (3UL)
#define XcpConf_XcpEventChannel_Rte_AppTask_10msLP (0UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_100ms (15UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_30ms (2UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_30msSnd (1UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_50ms (14UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_StackMesure (5UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_Gdt (16UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_RteEvent (17UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_NvmStack (18UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_8ms (7UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_LSH_16ms (19UL)
#define XcpConf_XcpEventChannel_Rte_OsTask_5ms (20UL)

/* Flash programming */
/* PRQA S 3684 4 */ /* MD_Xcp_3684 */
extern CONSTP2CONST(XcpCharType, XCP_CONST, XCP_CONST) kXcpSectorName[];
extern CONST(uint8, XCP_CONST) kXcpSectorNameLength[];
extern CONST(uint32, XCP_CONST) kXcpProgramSectorStart[];
extern CONST(uint32, XCP_CONST) kXcpProgramSectorEnd[];

#define XCP_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
//#include "MemMap.h"

/****************************HISTORY*****************************************/
/****************************************************************************
Date              : 11/21/2016
By                : cmurali1
Change Description: Migrated to BAIC requirements
*****************************************************************************/

#endif /* XCP_LCFG_H */   

