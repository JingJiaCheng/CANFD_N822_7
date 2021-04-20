#if !defined (PDUR_DCM_H)
# define PDUR_DCM_H

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/*********************************************************************	*************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/



/**********************************************************************************************************************
\brief    The function serves to request the transmission of an upper layer I-PDU.\n
          The PDU Router evaluates the Dcm I-PDU handle and identifies the destination(s) of the PDU.\n
          The call is routed to a lower IF module using the appropriate I-PDU handle of the destination layer.
\param    id                ID of the Dcm I-PDU to be transmitted
\param    info              Payload information of the I-PDU (pointer to data and data length)
\return   Std_ReturnType\n
          E_OK              The request was accepted by the PDU Router and by the destination layer.\n
          E_NOT_OK          The PDU Router is in the PDUR_UNINIT state\n
                            or the DcmTxPduId is not valid\n
                            or the DcmTxPduId is not forwarded in this identity\n
                            or the PduInfoPtr is not valid\n
                            or the request was not accepted by the destination layer.\n
\pre      PduR_Init() is executed successfully.
\context  This function can be called on interrupt and task level and has not to be interrupted by other\n
          PduR_DcmTransmit calls for the same DcmTxPduId.
\note     The function is called by Dcm.
**********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);


#endif  /* PDUR_DCM_H */

/**********************************************************************************************************************
  END OF FILE: PduR_Dcm.h
**********************************************************************************************************************/

