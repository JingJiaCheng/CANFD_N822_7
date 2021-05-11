/////////////////////////////////////////////////////////
//
//  Filename: EXPDAT.H
//
//  Descripition: Specifies the Export types.
//
//  Used for checksum and data processing during the data-export.
// This is the interface header-file between EXPDATPROC.DLL and the Hex-View Program.
// 

#ifndef __EXPDAT_H__
#define __EXPDAT_H__

typedef enum EExportType
{
   ExportTypeSRecord
  ,ExportTypeIntelHex
  ,ExportTypeFiatBinary
};

enum EInterfaceVersion {
   DllInterfaceVersion=0002
  ,DllVersionIllegal=-1
};

typedef enum EChecksumAction 
{
   CSumActionBegin,
   CSumActionDoData,
   CSumActionEnd
} EChecksumAction;

typedef enum EExportStatus
{
   ExportStateIdle=0
  ,ExportStateDllInterfaceVersionError
  ,ExportStateChecksumCalculationError
  ,ExportStateDataCompressionCalculationError
  ,ExportStateDataEncryptionError
  ,ExportStateChecksumAddressMisalignedError
  ,ExportStateChecksumLengthMisalignedError
  ,ExportStateUnknownActionItemOrActionType
  ,ExportStateParamterMissingForDataProcessing
  ,ExportStateKeyGeneralError
  ,ExportStateKeyDuplicateParamter
  ,ExportStateKeyParameterMissing
  ,ExportStateKeyIsHMAC
  ,ExportStateKeyIsRSA
  ,ExportStateWrongBytesPerBlockType
};


// Used to identify the name of the DLL in function 'LoadLibrary'.
#define EXPDAT_DLL_NAME    "EXPDATPROC.DLL"

#define EXPDAT_RESULTS_MAXSIZE      1024


typedef struct  TExportDataInfo
{
   enum EInterfaceVersion DllInterfaceVersion;

   // Input-section:
   // =============

   // Segment data information
   EExportType    exType;           // Provides information of export type (see above).
   int            index;            // Selected service index.

   BYTE           format;           // format byte (taken from the dialog).
   char          *generalParam;     // General purpose string (will be taken from the dialogs).

   DWORD          segInAddress;     // These information are not valid during Init and Deinit.
   DWORD          segInLength;
   char          *segInData;

   // Output section:
   // ==============

   // Segment data information
   DWORD          segOutAddress;    // On call to Checksum and process data, outXxx
   DWORD          segOutLength;     // and InXxx are identically. OutXxx will be
   char          *segOutData;       // taken for output data from ProcessData.

   EExportStatus  exState;          // Call function can provide more detailled 
                                    // status information here.
   DWORD          maxSegLen;        // max.number of bytes allowed for segInLength.

   void          *voidPtr;          // used for future general purpose pointer (e.g. context data).

   BYTE           expDatResults[EXPDAT_RESULTS_MAXSIZE];
   WORD           expDatResultSize;
    
} TExportDataInfo;


#define EXPNAME_CSUMFCTCOUNT  "GetChecksumFunctionCount"
#define EXPNAME_CSUMFCTNAME   "GetChecksumFunctionName"
#define EXPNAME_INITCSUM      "InitChecksum"
#define EXPNAME_DEINITCSUM    "DeinitChecksum"
#define EXPNAME_DOCSUM        "DoCalculateChecksum"

#define EXPNAME_CSUMRESULTSIZE "GetChecksumSizeOfResult"

#define EXPNAME_STATEINFO     "GetExportStateInfo"

#define EXPNAME_DPROCFCTCOUNT "GetDataProcessingFunctionCount"
#define EXPNAME_DPROCFCTNAME  "GetDataProcessingFunctionName"
#define EXPNAME_INITDPROC     "InitDataProcessing"
#define EXPNAME_DEINITDPROC   "DeinitDataProcessing"
#define EXPNAME_DODPROC       "DoDataProcessing"


#ifdef STATIC_EXPDATPROC_DLL
extern "C"  int __declspec(dllimport) __cdecl GetChecksumFunctionCount(void);
extern "C"   bool __declspec(dllimport) __cdecl GetChecksumFunctionName(int index, char * name, int size);
extern "C"   int __declspec(dllimport) __cdecl GetChecksumSizeOfResult(int index);
extern "C"   bool __declspec(dllimport) __cdecl InitChecksum( TExportDataInfo *info )  ;
extern "C"   bool __declspec(dllimport) __cdecl DeinitChecksum( TExportDataInfo *info )  ;
extern "C"   bool __declspec(dllimport) __cdecl DoCalculateChecksum(TExportDataInfo *info,
                                                       EChecksumAction actionState);

extern "C"   void __declspec(dllimport) __cdecl GetExportStateInfo(char **infoText, enum EExportStatus actionState ) ;


extern "C"   int __declspec(dllimport) __cdecl GetDataProcessingFunctionCount(void);
extern "C"   bool __declspec(dllimport) __cdecl GetDataProcessingFunctionName(int index, char * name, int size);
extern "C"   bool __declspec(dllimport) __cdecl InitDataProcessing( TExportDataInfo *info )  ;
extern "C"   bool __declspec(dllimport) __cdecl DeinitDataProcessing(TExportDataInfo *info )  ;
extern "C"   bool __declspec(dllimport) __cdecl DoDataProcessing( TExportDataInfo *info )  ;

#endif

  typedef int  (* TGetChecksumFunctionCount)(void);
  typedef bool (* TGetChecksumFunctionName)(int index, char * name, int maxNamelen);
  typedef bool (* TInitChecksum)(           TExportDataInfo *info );
  typedef bool (* TDeinitChecksum)(         TExportDataInfo *info );
  typedef bool (* TDoCalculateChecksum)(    TExportDataInfo *info, EChecksumAction actionState );

  typedef int  (* TGetChecksumSizeOfResult)( int index );

  typedef void (* TGetExportStateInfo) (    char **infoText, enum EExportStatus actionState );

  typedef int  (* TGetDataProcessingFunctionCount)(void);
  typedef bool (* TGetDataProcessingFunctionName)(int index, char * name, int maxNamelen);
  typedef bool (* TInitDataProcessing)(           TExportDataInfo *info);
  typedef bool (* TDeinitDataProcessing)(         TExportDataInfo *info);
  typedef bool (* TDoDataProcessing)(             TExportDataInfo *info);

#endif /* __EXPDAT_H__ */
