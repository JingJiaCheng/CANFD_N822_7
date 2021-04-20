#ifndef COMM_DCM_H
#define COMM_DCM_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
//#include "ComM_Types.h"

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/
#define COMM_DCM_MAJOR_VERSION    5u
#define COMM_DCM_MINOR_VERSION    0u
#define COMM_DCM_PATCH_VERSION    0u

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CALLBACK FUNCTIONS PROTOTYPES called by Dcm
*********************************************************************************************************************/
#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
/*********************************************************************************************************************
  FUNCTION: ComM_DCM_ActiveDiagnostic
*********************************************************************************************************************/
/*! \brief       Indication of active diagnostic by the DCM.
 *  \param[in]   Channel                Index of the ComM channel
 *  \pre         ComM must be initialized
 *  \pre         Channel must be valid and active in the current variant
 *  \pre         Nm Variant of the channel must not be PASSIVE
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous FALSE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_DCM_ActiveDiagnostic(NetworkHandleType Channel);

/*********************************************************************************************************************
  FUNCTION: ComM_DCM_InactiveDiagnostic
*********************************************************************************************************************/
/*! \brief       Indication of inactive diagnostic by the DCM.
 *  \param[in]   Channel                Index of the ComM channel
 *  \pre         ComM must be initialized
 *  \pre         Channel must be valid and active in the current variant
 *  \pre         Nm Variant of the channel must not be PASSIVE
 *  \context     ANY
 *  \reentrant   TRUE
 *  \synchronous FALSE
*********************************************************************************************************************/
extern FUNC(void, COMM_CODE) ComM_DCM_InactiveDiagnostic(NetworkHandleType Channel);

#define COMM_STOP_SEC_CODE

#endif  /* COMM_DCM_H */

/**********************************************************************************************************************
  END OF FILE: ComM_Dcm.h
**********************************************************************************************************************/
/* STOPSINGLE_OF_MULTIPLE */
