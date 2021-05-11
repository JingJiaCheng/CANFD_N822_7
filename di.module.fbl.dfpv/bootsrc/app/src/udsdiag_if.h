/*****************************************************************************
*
*                            CONFIDENTIAL - Visteon
*
*   This is unpublished work, which is a trade secret, created in 2012.
*   Visteon owns all rights to this work and intends to maintain it in
*   confidence to preserve its trade secret status. Visteon reserves
*   the right to protect this work as an unpublished copyrighted work
*   in the event of an inadvertent or deliberate unauthorized publication.
*   Visteon also reserves its right under the copyright laws to protect
*   this work as a published work. Those having access to this work may
*   not copy it, use it, or disclose the information contained in it
*   without the written authorization of Visteon.
*
*                            Copyright 2012, Visteon
*
*****************************************************************************/
#ifndef UDSDIAG_PAR_H
#define UDSDIAG_PAR_H

/***************************************************************************
 *                        PROJECT INCLUDES
***************************************************************************/  
#include "system.h"

/***************************************************************************
 *                       GLOBAL FUNCTION PROTOTYPE
***************************************************************************/
extern void ApplDiagStartDiagnosticSession(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagReadDataByIdentifier(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagSecurityAccess(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagTesterPresent(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagControlDTCSetting(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagCommunicationControl(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagEcuReset(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagClearDiagnosticInformation(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagReadDTCInformation(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagWriteDataByIdentifier(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagIOControlByIdentifier(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagRoutineControl(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagRequestDownload(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagRequestTransferExit(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagReadMemoryByAddress(UINT8 p_msgdat_U8A[], UINT16 dataLen);
extern void ApplDiagWriteMemoryByAddress(UINT8 p_msgdat_U8A[], UINT16 dataLen);

extern void ApplDiagStartDiagnosticSessionPosthandler(void);
extern void ApplDiagEcuResetPostHandler(void);

extern void ApplDiagSessionTimeout(void);
extern void ApplDiagServiceTimeout(void);
extern void ApplRcrrpcallback(void);

#endif /* UDSDIAG_PAR_H */

/*****************************************************************************
*   for each change to this file, be sure to record:                         *
*      1.  who made the change and when the change was made                  *
*      2.  why the change was made and the intended result                   *
*   Following block needs to be repeated for each change                     *
******************************************************************************
*   Note: In the traceability column we need to trace back to the Design Doc.*
*   For the initial version it is traced to the Design Document section.     *
*   For further changes it shall trace to the source of the change which may *
*   be SPSS/SCR/Defect details(Defect may be Testing/validation defect)/Any  *
*   other reason                                                             *
*****************************************************************************/
/*****************************************************************************
Date              : 28/11/2013
By                : gmuthu
Traceability      : Honda Diagnostics implementation
Change Description: Initial version.
*****************************************************************************/
/*****************************************************************************
Date              : 12/7/2014
By                : mgoud
Traceability      : Honda Diagnostics implementation
Change Description: add UDS support prototypes funtions.
*****************************************************************************/
/****************************************************************************
Date              : 28/Aug/2015
By                : cvenkata
Traceability      : RTC 357331
Change Description: DMR & DMW updated.
*****************************************************************************/
