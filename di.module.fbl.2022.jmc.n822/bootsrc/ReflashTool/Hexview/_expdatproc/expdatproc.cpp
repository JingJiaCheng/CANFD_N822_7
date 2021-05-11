#include <windows.h>
#include <string.h>
#include <stdio.h>

#include "expdat.h"



#define kCsumBytesum___Into16Bit_BEout          0   // VAG-style (A)
#define kCsumBytesum___Into16Bit_LEout          1   // VAG-style (B)
#define kCsumWordsumBE_Into16Bit_BEout          2
#define kCsumWordsumLE_Into16Bit_LEout          3
#define kCsumBytesum___Into2Compl16Bit_BEout    4   // GM old style
#define kCsumWordsumBE_Into2Compl16Bit_BEout    5
#define kCsumWordsumLE_Into2Compl16Bit_LEout    6
#define kCsumItems                              7   /* Total number of items in Csum */

const char *IniDefaultFile = "expdatproc.ini";
const char *IniSectionConst= "Constant";
const char *IniKeyConstNumBytes= "NumBytes";
const char *IniKeyConstHexDataString= "HexDataString";
const char *ConstDefaultString="0815";


typedef struct _tCsumConst
{
   int len;
   char *strBuffer;
   unsigned char *dataBuffer;
} tCsumConst;



const WORD CRC16CCITTtab[256] = {
#if defined ( XCP_ENABLE_CRC16CCITT_REFLECTED )
    0x0000,0x1189,0x2312,0x329B,0x4624,0x57AD,0x6536,0x74BF,
    0x8C48,0x9DC1,0xAF5A,0xBED3,0xCA6C,0xDBE5,0xE97E,0xF8F7,
    0x1081,0x0108,0x3393,0x221A,0x56A5,0x472C,0x75B7,0x643E,
    0x9CC9,0x8D40,0xBFDB,0xAE52,0xDAED,0xCB64,0xF9FF,0xE876,
    0x2102,0x308B,0x0210,0x1399,0x6726,0x76AF,0x4434,0x55BD,
    0xAD4A,0xBCC3,0x8E58,0x9FD1,0xEB6E,0xFAE7,0xC87C,0xD9F5,
    0x3183,0x200A,0x1291,0x0318,0x77A7,0x662E,0x54B5,0x453C,
    0xBDCB,0xAC42,0x9ED9,0x8F50,0xFBEF,0xEA66,0xD8FD,0xC974,
    0x4204,0x538D,0x6116,0x709F,0x0420,0x15A9,0x2732,0x36BB,
    0xCE4C,0xDFC5,0xED5E,0xFCD7,0x8868,0x99E1,0xAB7A,0xBAF3,
    0x5285,0x430C,0x7197,0x601E,0x14A1,0x0528,0x37B3,0x263A,
    0xDECD,0xCF44,0xFDDF,0xEC56,0x98E9,0x8960,0xBBFB,0xAA72,
    0x6306,0x728F,0x4014,0x519D,0x2522,0x34AB,0x0630,0x17B9,
    0xEF4E,0xFEC7,0xCC5C,0xDDD5,0xA96A,0xB8E3,0x8A78,0x9BF1,
    0x7387,0x620E,0x5095,0x411C,0x35A3,0x242A,0x16B1,0x0738,
    0xFFCF,0xEE46,0xDCDD,0xCD54,0xB9EB,0xA862,0x9AF9,0x8B70,
    0x8408,0x9581,0xA71A,0xB693,0xC22C,0xD3A5,0xE13E,0xF0B7,
    0x0840,0x19C9,0x2B52,0x3ADB,0x4E64,0x5FED,0x6D76,0x7CFF,
    0x9489,0x8500,0xB79B,0xA612,0xD2AD,0xC324,0xF1BF,0xE036,
    0x18C1,0x0948,0x3BD3,0x2A5A,0x5EE5,0x4F6C,0x7DF7,0x6C7E,
    0xA50A,0xB483,0x8618,0x9791,0xE32E,0xF2A7,0xC03C,0xD1B5,
    0x2942,0x38CB,0x0A50,0x1BD9,0x6F66,0x7EEF,0x4C74,0x5DFD,
    0xB58B,0xA402,0x9699,0x8710,0xF3AF,0xE226,0xD0BD,0xC134,
    0x39C3,0x284A,0x1AD1,0x0B58,0x7FE7,0x6E6E,0x5CF5,0x4D7C,
    0xC60C,0xD785,0xE51E,0xF497,0x8028,0x91A1,0xA33A,0xB2B3,
    0x4A44,0x5BCD,0x6956,0x78DF,0x0C60,0x1DE9,0x2F72,0x3EFB,
    0xD68D,0xC704,0xF59F,0xE416,0x90A9,0x8120,0xB3BB,0xA232,
    0x5AC5,0x4B4C,0x79D7,0x685E,0x1CE1,0x0D68,0x3FF3,0x2E7A,
    0xE70E,0xF687,0xC41C,0xD595,0xA12A,0xB0A3,0x8238,0x93B1,
    0x6B46,0x7ACF,0x4854,0x59DD,0x2D62,0x3CEB,0x0E70,0x1FF9,
    0xF78F,0xE606,0xD49D,0xC514,0xB1AB,0xA022,0x92B9,0x8330,
    0x7BC7,0x6A4E,0x58D5,0x495C,0x3DE3,0x2C6A,0x1EF1,0x0F78
#else
    0x0000,0x1021,0x2042,0x3063,0x4084,0x50a5,0x60c6,0x70e7u,
    0x8108,0x9129,0xa14a,0xb16b,0xc18c,0xd1ad,0xe1ce,0xf1efu,
    0x1231,0x0210,0x3273,0x2252,0x52b5,0x4294,0x72f7,0x62d6u,
    0x9339,0x8318,0xb37b,0xa35a,0xd3bd,0xc39c,0xf3ff,0xe3deu,
    0x2462,0x3443,0x0420,0x1401,0x64e6,0x74c7,0x44a4,0x5485u,
    0xa56a,0xb54b,0x8528,0x9509,0xe5ee,0xf5cf,0xc5ac,0xd58du,
    0x3653,0x2672,0x1611,0x0630,0x76d7,0x66f6,0x5695,0x46b4u,
    0xb75b,0xa77a,0x9719,0x8738,0xf7df,0xe7fe,0xd79d,0xc7bcu,
    0x48c4,0x58e5,0x6886,0x78a7,0x0840,0x1861,0x2802,0x3823u,
    0xc9cc,0xd9ed,0xe98e,0xf9af,0x8948,0x9969,0xa90a,0xb92bu,
    0x5af5,0x4ad4,0x7ab7,0x6a96,0x1a71,0x0a50,0x3a33,0x2a12u,
    0xdbfd,0xcbdc,0xfbbf,0xeb9e,0x9b79,0x8b58,0xbb3b,0xab1au,
    0x6ca6,0x7c87,0x4ce4,0x5cc5,0x2c22,0x3c03,0x0c60,0x1c41u,
    0xedae,0xfd8f,0xcdec,0xddcd,0xad2a,0xbd0b,0x8d68,0x9d49u,
    0x7e97,0x6eb6,0x5ed5,0x4ef4,0x3e13,0x2e32,0x1e51,0x0e70u,
    0xff9f,0xefbe,0xdfdd,0xcffc,0xbf1b,0xaf3a,0x9f59,0x8f78u,
    0x9188,0x81a9,0xb1ca,0xa1eb,0xd10c,0xc12d,0xf14e,0xe16fu,
    0x1080,0x00a1,0x30c2,0x20e3,0x5004,0x4025,0x7046,0x6067u,
    0x83b9,0x9398,0xa3fb,0xb3da,0xc33d,0xd31c,0xe37f,0xf35eu,
    0x02b1,0x1290,0x22f3,0x32d2,0x4235,0x5214,0x6277,0x7256u,
    0xb5ea,0xa5cb,0x95a8,0x8589,0xf56e,0xe54f,0xd52c,0xc50du,
    0x34e2,0x24c3,0x14a0,0x0481,0x7466,0x6447,0x5424,0x4405u,
    0xa7db,0xb7fa,0x8799,0x97b8,0xe75f,0xf77e,0xc71d,0xd73cu,
    0x26d3,0x36f2,0x0691,0x16b0,0x6657,0x7676,0x4615,0x5634u,
    0xd94c,0xc96d,0xf90e,0xe92f,0x99c8,0x89e9,0xb98a,0xa9abu,
    0x5844,0x4865,0x7806,0x6827,0x18c0,0x08e1,0x3882,0x28a3u,
    0xcb7d,0xdb5c,0xeb3f,0xfb1e,0x8bf9,0x9bd8,0xabbb,0xbb9au,
    0x4a75,0x5a54,0x6a37,0x7a16,0x0af1,0x1ad0,0x2ab3,0x3a92u,
    0xfd2e,0xed0f,0xdd6c,0xcd4d,0xbdaa,0xad8b,0x9de8,0x8dc9u,
    0x7c26,0x6c07,0x5c64,0x4c45,0x3ca2,0x2c83,0x1ce0,0x0cc1u,
    0xef1f,0xff3e,0xcf5d,0xdf7c,0xaf9b,0xbfba,0x8fd9,0x9ff8u,
    0x6e17,0x7e36,0x4e55,0x5e74,0x2e93,0x3eb2,0x0ed1,0x1ef0u
#endif /* defined ( XCP_ENABLE_CRC16CCITT_REFLECTED ) */
  };



/* Table for 32-Bit CRC */
static const DWORD crc32Table[256] =
{
	0x00000000uL, 0x77073096uL, 0xEE0E612CuL, 0x990951BAuL,
	0x076DC419uL, 0x706AF48FuL, 0xE963A535uL, 0x9E6495A3uL,
	0x0EDB8832uL, 0x79DCB8A4uL, 0xE0D5E91EuL, 0x97D2D988uL,
	0x09B64C2BuL, 0x7EB17CBDuL, 0xE7B82D07uL, 0x90BF1D91uL,
	0x1DB71064uL, 0x6AB020F2uL, 0xF3B97148uL, 0x84BE41DEuL,
	0x1ADAD47DuL, 0x6DDDE4EBuL, 0xF4D4B551uL, 0x83D385C7uL,
	0x136C9856uL, 0x646BA8C0uL, 0xFD62F97AuL, 0x8A65C9ECuL,
	0x14015C4FuL, 0x63066CD9uL, 0xFA0F3D63uL, 0x8D080DF5uL,
	0x3B6E20C8uL, 0x4C69105EuL, 0xD56041E4uL, 0xA2677172uL,
	0x3C03E4D1uL, 0x4B04D447uL, 0xD20D85FDuL, 0xA50AB56BuL,
	0x35B5A8FAuL, 0x42B2986CuL, 0xDBBBC9D6uL, 0xACBCF940uL,
	0x32D86CE3uL, 0x45DF5C75uL, 0xDCD60DCFuL, 0xABD13D59uL,
	0x26D930ACuL, 0x51DE003AuL, 0xC8D75180uL, 0xBFD06116uL,
	0x21B4F4B5uL, 0x56B3C423uL, 0xCFBA9599uL, 0xB8BDA50FuL,
	0x2802B89EuL, 0x5F058808uL, 0xC60CD9B2uL, 0xB10BE924uL,
	0x2F6F7C87uL, 0x58684C11uL, 0xC1611DABuL, 0xB6662D3DuL,
	0x76DC4190uL, 0x01DB7106uL, 0x98D220BCuL, 0xEFD5102AuL,
	0x71B18589uL, 0x06B6B51FuL, 0x9FBFE4A5uL, 0xE8B8D433uL,
	0x7807C9A2uL, 0x0F00F934uL, 0x9609A88EuL, 0xE10E9818uL,
	0x7F6A0DBBuL, 0x086D3D2DuL, 0x91646C97uL, 0xE6635C01uL,
	0x6B6B51F4uL, 0x1C6C6162uL, 0x856530D8uL, 0xF262004EuL,
	0x6C0695EDuL, 0x1B01A57BuL, 0x8208F4C1uL, 0xF50FC457uL,
	0x65B0D9C6uL, 0x12B7E950uL, 0x8BBEB8EAuL, 0xFCB9887CuL,
	0x62DD1DDFuL, 0x15DA2D49uL, 0x8CD37CF3uL, 0xFBD44C65uL,
	0x4DB26158uL, 0x3AB551CEuL, 0xA3BC0074uL, 0xD4BB30E2uL,
	0x4ADFA541uL, 0x3DD895D7uL, 0xA4D1C46DuL, 0xD3D6F4FBuL,
	0x4369E96AuL, 0x346ED9FCuL, 0xAD678846uL, 0xDA60B8D0uL,
	0x44042D73uL, 0x33031DE5uL, 0xAA0A4C5FuL, 0xDD0D7CC9uL,
	0x5005713CuL, 0x270241AAuL, 0xBE0B1010uL, 0xC90C2086uL,
	0x5768B525uL, 0x206F85B3uL, 0xB966D409uL, 0xCE61E49FuL,
	0x5EDEF90EuL, 0x29D9C998uL, 0xB0D09822uL, 0xC7D7A8B4uL,
	0x59B33D17uL, 0x2EB40D81uL, 0xB7BD5C3BuL, 0xC0BA6CADuL,
	0xEDB88320uL, 0x9ABFB3B6uL, 0x03B6E20CuL, 0x74B1D29AuL,
	0xEAD54739uL, 0x9DD277AFuL, 0x04DB2615uL, 0x73DC1683uL,
	0xE3630B12uL, 0x94643B84uL, 0x0D6D6A3EuL, 0x7A6A5AA8uL,
	0xE40ECF0BuL, 0x9309FF9DuL, 0x0A00AE27uL, 0x7D079EB1uL,
	0xF00F9344uL, 0x8708A3D2uL, 0x1E01F268uL, 0x6906C2FEuL,
	0xF762575DuL, 0x806567CBuL, 0x196C3671uL, 0x6E6B06E7uL,
	0xFED41B76uL, 0x89D32BE0uL, 0x10DA7A5AuL, 0x67DD4ACCuL,
	0xF9B9DF6FuL, 0x8EBEEFF9uL, 0x17B7BE43uL, 0x60B08ED5uL,
	0xD6D6A3E8uL, 0xA1D1937EuL, 0x38D8C2C4uL, 0x4FDFF252uL,
	0xD1BB67F1uL, 0xA6BC5767uL, 0x3FB506DDuL, 0x48B2364BuL,
	0xD80D2BDAuL, 0xAF0A1B4CuL, 0x36034AF6uL, 0x41047A60uL,
	0xDF60EFC3uL, 0xA867DF55uL, 0x316E8EEFuL, 0x4669BE79uL,
	0xCB61B38CuL, 0xBC66831AuL, 0x256FD2A0uL, 0x5268E236uL,
	0xCC0C7795uL, 0xBB0B4703uL, 0x220216B9uL, 0x5505262FuL,
	0xC5BA3BBEuL, 0xB2BD0B28uL, 0x2BB45A92uL, 0x5CB36A04uL,
	0xC2D7FFA7uL, 0xB5D0CF31uL, 0x2CD99E8BuL, 0x5BDEAE1DuL,
	0x9B64C2B0uL, 0xEC63F226uL, 0x756AA39CuL, 0x026D930AuL,
	0x9C0906A9uL, 0xEB0E363FuL, 0x72076785uL, 0x05005713uL,
	0x95BF4A82uL, 0xE2B87A14uL, 0x7BB12BAEuL, 0x0CB61B38uL,
	0x92D28E9BuL, 0xE5D5BE0DuL, 0x7CDCEFB7uL, 0x0BDBDF21uL,
	0x86D3D2D4uL, 0xF1D4E242uL, 0x68DDB3F8uL, 0x1FDA836EuL,
	0x81BE16CDuL, 0xF6B9265BuL, 0x6FB077E1uL, 0x18B74777uL,
	0x88085AE6uL, 0xFF0F6A70uL, 0x66063BCAuL, 0x11010B5CuL,
	0x8F659EFFuL, 0xF862AE69uL, 0x616BFFD3uL, 0x166CCF45uL,
	0xA00AE278uL, 0xD70DD2EEuL, 0x4E048354uL, 0x3903B3C2uL,
	0xA7672661uL, 0xD06016F7uL, 0x4969474DuL, 0x3E6E77DBuL,
	0xAED16A4AuL, 0xD9D65ADCuL, 0x40DF0B66uL, 0x37D83BF0uL,
	0xA9BCAE53uL, 0xDEBB9EC5uL, 0x47B2CF7FuL, 0x30B5FFE9uL,
	0xBDBDF21CuL, 0xCABAC28AuL, 0x53B39330uL, 0x24B4A3A6uL,
	0xBAD03605uL, 0xCDD70693uL, 0x54DE5729uL, 0x23D967BFuL,
	0xB3667A2EuL, 0xC4614AB8uL, 0x5D681B02uL, 0x2A6F2B94uL,
	0xB40BBE37uL, 0xC30C8EA1uL, 0x5A05DF1BuL, 0x2D02EF8DuL
};


/* Table for 16-Bit CRC */
static const unsigned short crc16Table[256] = /* CRC lookup table */
{
	0x0000u, 0xC0C1u, 0xC181u, 0x0140u, 0xC301u, 0x03C0u, 0x0280u, 0xC241u,
	0xC601u, 0x06C0u, 0x0780u, 0xC741u, 0x0500u, 0xC5C1u, 0xC481u, 0x0440u,
	0xCC01u, 0x0CC0u, 0x0D80u, 0xCD41u, 0x0F00u, 0xCFC1u, 0xCE81u, 0x0E40u,
	0x0A00u, 0xCAC1u, 0xCB81u, 0x0B40u, 0xC901u, 0x09C0u, 0x0880u, 0xC841u,
	0xD801u, 0x18C0u, 0x1980u, 0xD941u, 0x1B00u, 0xDBC1u, 0xDA81u, 0x1A40u,
	0x1E00u, 0xDEC1u, 0xDF81u, 0x1F40u, 0xDD01u, 0x1DC0u, 0x1C80u, 0xDC41u,
	0x1400u, 0xD4C1u, 0xD581u, 0x1540u, 0xD701u, 0x17C0u, 0x1680u, 0xD641u,
	0xD201u, 0x12C0u, 0x1380u, 0xD341u, 0x1100u, 0xD1C1u, 0xD081u, 0x1040u,
	0xF001u, 0x30C0u, 0x3180u, 0xF141u, 0x3300u, 0xF3C1u, 0xF281u, 0x3240u,
	0x3600u, 0xF6C1u, 0xF781u, 0x3740u, 0xF501u, 0x35C0u, 0x3480u, 0xF441u,
	0x3C00u, 0xFCC1u, 0xFD81u, 0x3D40u, 0xFF01u, 0x3FC0u, 0x3E80u, 0xFE41u,
	0xFA01u, 0x3AC0u, 0x3B80u, 0xFB41u, 0x3900u, 0xF9C1u, 0xF881u, 0x3840u,
	0x2800u, 0xE8C1u, 0xE981u, 0x2940u, 0xEB01u, 0x2BC0u, 0x2A80u, 0xEA41u,
	0xEE01u, 0x2EC0u, 0x2F80u, 0xEF41u, 0x2D00u, 0xEDC1u, 0xEC81u, 0x2C40u,
	0xE401u, 0x24C0u, 0x2580u, 0xE541u, 0x2700u, 0xE7C1u, 0xE681u, 0x2640u,
	0x2200u, 0xE2C1u, 0xE381u, 0x2340u, 0xE101u, 0x21C0u, 0x2080u, 0xE041u,
	0xA001u, 0x60C0u, 0x6180u, 0xA141u, 0x6300u, 0xA3C1u, 0xA281u, 0x6240u,
	0x6600u, 0xA6C1u, 0xA781u, 0x6740u, 0xA501u, 0x65C0u, 0x6480u, 0xA441u,
	0x6C00u, 0xACC1u, 0xAD81u, 0x6D40u, 0xAF01u, 0x6FC0u, 0x6E80u, 0xAE41u,
	0xAA01u, 0x6AC0u, 0x6B80u, 0xAB41u, 0x6900u, 0xA9C1u, 0xA881u, 0x6840u,
	0x7800u, 0xB8C1u, 0xB981u, 0x7940u, 0xBB01u, 0x7BC0u, 0x7A80u, 0xBA41u,
	0xBE01u, 0x7EC0u, 0x7F80u, 0xBF41u, 0x7D00u, 0xBDC1u, 0xBC81u, 0x7C40u,
	0xB401u, 0x74C0u, 0x7580u, 0xB541u, 0x7700u, 0xB7C1u, 0xB681u, 0x7640u,
	0x7200u, 0xB2C1u, 0xB381u, 0x7340u, 0xB101u, 0x71C0u, 0x7080u, 0xB041u,
	0x5000u, 0x90C1u, 0x9181u, 0x5140u, 0x9301u, 0x53C0u, 0x5280u, 0x9241u,
	0x9601u, 0x56C0u, 0x5780u, 0x9741u, 0x5500u, 0x95C1u, 0x9481u, 0x5440u,
	0x9C01u, 0x5CC0u, 0x5D80u, 0x9D41u, 0x5F00u, 0x9FC1u, 0x9E81u, 0x5E40u,
	0x5A00u, 0x9AC1u, 0x9B81u, 0x5B40u, 0x9901u, 0x59C0u, 0x5880u, 0x9841u,
	0x8801u, 0x48C0u, 0x4980u, 0x8941u, 0x4B00u, 0x8BC1u, 0x8A81u, 0x4A40u,
	0x4E00u, 0x8EC1u, 0x8F81u, 0x4F40u, 0x8D01u, 0x4DC0u, 0x4C80u, 0x8C41u,
	0x4400u, 0x84C1u, 0x8581u, 0x4540u, 0x8701u, 0x47C0u, 0x4680u, 0x8641u,
	0x8201u, 0x42C0u, 0x4380u, 0x8341u, 0x4100u, 0x81C1u, 0x8081u, 0x4040u
};


BOOL WINAPI DllEntryPoint(HINSTANCE hInstance, DWORD dwReason, LPVOID /*plvReserved*/)
{
  switch(dwReason) {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
       break;
    case DLL_PROCESS_DETACH: break;
    case DLL_THREAD_DETACH:  break;
  }

  return true;
}

extern "C" {


static int StringToBytes(const char *textBuffer, unsigned char *data, const int maxDataLen);

/* Defines *******************************************************************/

/*
 * Description: Build Number
 *             
 */





  int __declspec(dllexport) __cdecl GetChecksumFunctionCount() { return kCsumItems; }

  bool __declspec(dllexport) __cdecl GetChecksumFunctionName(int index, char * name, int size)
  {
    sprintf(name, "%2d:", index);
    size -= strlen(name);
    switch (index) {

      case kCsumBytesum___Into16Bit_BEout:  
               strncat(name, "ByteSum into 16-Bit, BE-out", size);
               return true;
               break;

      case kCsumBytesum___Into16Bit_LEout:  
               strncat(name, "ByteSum into 16-Bit, LE-out", size);
               return true;
               break;

      case kCsumWordsumBE_Into16Bit_BEout:  
               strncat(name, "Wordsum BE into 16-Bit, BE-Out", size);
               return true;
               break;

      case kCsumWordsumLE_Into16Bit_LEout:  
               strncat(name, "Wordsum LE into 16-Bit, LE-Out", size);
               return true;
               break;

      case kCsumBytesum___Into2Compl16Bit_BEout:  
               strncat(name, "ByteSum w/ 2s complement into 16-Bit BE (GM old-style)", size);
               return true;
               break;

      case kCsumWordsumBE_Into2Compl16Bit_BEout:  
               strncat(name, "Wordsum BE into 16-Bit, 2's Compl BE-Out (GM new style)", size);
               return true;
               break;
      
      case kCsumWordsumLE_Into2Compl16Bit_LEout:  
               strncat(name, "Wordsum LE into 16-Bit, 2's Compl LE-Out (GM new style)", size);
               return true;
               break;

      default: return false;
    }
  }
 
  int __declspec(dllexport) __cdecl GetChecksumSizeOfResult(int index)
  {
    switch (index) {

      case kCsumBytesum___Into16Bit_BEout:  
      case kCsumBytesum___Into16Bit_LEout:  
      case kCsumWordsumBE_Into16Bit_BEout:  
      case kCsumWordsumLE_Into16Bit_LEout:  
      case kCsumBytesum___Into2Compl16Bit_BEout:  
      case kCsumWordsumBE_Into2Compl16Bit_BEout:  
      case kCsumWordsumLE_Into2Compl16Bit_LEout:  
               return 2;
               break;

      default: return 0;
    }
  }
 

  bool __declspec(dllexport) __cdecl InitChecksum( TExportDataInfo *info )  
  {
    bool rval=false;

      
    /* Check for interface version */
    if (info->DllInterfaceVersion < DllInterfaceVersion)
    {
       info->exState = ExportStateDllInterfaceVersionError;
       return false;
    }

    // Default error info.
    info->exState = ExportStateUnknownActionItemOrActionType;
    info->expDatResultSize = 0;


    // -----------------------------------------
    // Create the context pointer to data memory.
    // -----------------------------------------
    switch (info->index) 
    {
      case kCsumBytesum___Into16Bit_BEout:
      case kCsumBytesum___Into16Bit_LEout:  
      case kCsumWordsumBE_Into16Bit_BEout:
      case kCsumWordsumLE_Into16Bit_LEout:
      case kCsumBytesum___Into2Compl16Bit_BEout:
      case kCsumWordsumBE_Into2Compl16Bit_BEout:
      case kCsumWordsumLE_Into2Compl16Bit_LEout:
               info->voidPtr =  (void *)new unsigned short;
               rval = true;
              break;

      default:
              break;
    } 

    return rval;
  }
  
  bool __declspec(dllexport) __cdecl DeinitChecksum( TExportDataInfo *info )  
  {
    bool rval=false;

    // Default error info.
    info->exState = ExportStateUnknownActionItemOrActionType;

    // -----------------------------------------
    // Delete the context data memory
    // -----------------------------------------
    switch (info->index) {

      case kCsumBytesum___Into16Bit_BEout:
      case kCsumBytesum___Into16Bit_LEout:  
      case kCsumWordsumBE_Into16Bit_BEout:
      case kCsumWordsumLE_Into16Bit_LEout:
      case kCsumBytesum___Into2Compl16Bit_BEout:
      case kCsumWordsumBE_Into2Compl16Bit_BEout:
      case kCsumWordsumLE_Into2Compl16Bit_LEout:
               delete info->voidPtr; 
               rval = true;
              break;
    } 

    return rval;
  }
  


  bool __declspec(dllexport) __cdecl DoCalculateChecksum(TExportDataInfo *info,
                                                       EChecksumAction actionState)
  {
    bool result=false;
    unsigned short *pwCS;
    DWORD           i;


    // Default error info.
    info->exState = ExportStateUnknownActionItemOrActionType;

    if (actionState==CSumActionBegin)
    {
       // -------------------------------------
       // Action item: Initialize system layer.
       // -------------------------------------
       switch (info->index) {

         // 2-Complement without carry -> unsigned short
         case kCsumBytesum___Into16Bit_BEout:
         case kCsumBytesum___Into16Bit_LEout: 
         case kCsumWordsumBE_Into16Bit_BEout:
         case kCsumWordsumLE_Into16Bit_LEout:
         case kCsumBytesum___Into2Compl16Bit_BEout:
         case kCsumWordsumBE_Into2Compl16Bit_BEout:
         case kCsumWordsumLE_Into2Compl16Bit_LEout:
               pwCS = (unsigned short *)info->voidPtr;
               *pwCS = 0;

               result = true;
            break;

       } 
    }
    else if (actionState==CSumActionDoData)
    {
       // ---------------------------------------
       // Action item: Actual processing of data.
       // ---------------------------------------
       switch (info->index) 
       {
         case kCsumBytesum___Into16Bit_BEout:
         case kCsumBytesum___Into16Bit_LEout:
               pwCS = (unsigned short *)info->voidPtr;
               for (i=0l; i < info->segInLength; i++) 
               {
                  *pwCS += (UCHAR) (((unsigned char)info->segInData[i])&0xff);
               }

               result = true;
            break;

         case kCsumWordsumBE_Into16Bit_BEout: 
         case kCsumWordsumBE_Into2Compl16Bit_BEout:
               pwCS = (unsigned short *)info->voidPtr;
               // if address/length correction necessary 
               // do this here in segOutLength and segOutAddress.
               if (info->segInAddress&(DWORD)1)
               {
                  info->exState = ExportStateChecksumAddressMisalignedError;
                  return false;
               }
               if (info->segInLength&(DWORD)1)
               {
                  info->exState = ExportStateChecksumLengthMisalignedError;
                  return false;
               }
               for (i=0l; i < info->segInLength; i+=2) 
               {
                  WORD tmp;

                  /* This is big endian summary of 16-bit values */
                  tmp  = (WORD)info->segInData[i+1] & 0x00ff;
                  tmp |= (((WORD)info->segInData[i])*256) & 0xff00;

                  *pwCS += tmp;
               }
               result = true;
            break;

         case kCsumBytesum___Into2Compl16Bit_BEout:
               pwCS = (unsigned short *)info->voidPtr;
               for (i=0l; i < info->segInLength; i++) 
               {
                  *pwCS += (UCHAR) (((~(unsigned char)info->segInData[i])&0xff) + 1);
               }
               result = true;
            break;

         case kCsumWordsumLE_Into16Bit_LEout:
         case kCsumWordsumLE_Into2Compl16Bit_LEout: 
         default:
            break;
       } 
    }
    else if (actionState==CSumActionEnd)
    {
       // --------------------------------------------------------------------
       // Action item: Conclude processing data and pass result-data to caller.
       // --------------------------------------------------------------------
       switch (info->index) {

         case kCsumBytesum___Into16Bit_LEout:
         case kCsumWordsumLE_Into16Bit_LEout:
               info->segOutData = (char *)info->voidPtr;
               info->segOutLength = 2;  // 2 byte data in output.
               result = true;
            break;

         case kCsumWordsumBE_Into16Bit_BEout: 
         case kCsumBytesum___Into16Bit_BEout:
               pwCS = (unsigned short *)info->voidPtr;
               {
                  int tmp;

                  // swap lo- and hi-byte-
                  tmp  = (*pwCS>>8)&0xff;
                  *pwCS <<= 8;
                  *pwCS &= 0xff00;
                  *pwCS |= tmp;
            
                  info->segOutData = (char *)info->voidPtr;
                  info->segOutLength = 2;  // 2 byte data in output.
               }
               result = true;
            break;

         case kCsumBytesum___Into2Compl16Bit_BEout:
               pwCS = (unsigned short *)info->voidPtr;
               {
                  int tmp;

                  // swap lo- and hi-byte-
                  tmp  = (*pwCS>>8)&0xff;
                  *pwCS <<= 8;
                  *pwCS &= 0xff00;
                  *pwCS |= tmp;

                  info->segOutData = (char *)info->voidPtr;
                  info->segOutLength = 2;  // 2 byte data in output.
               }
               result = true;
            break;
         case kCsumWordsumBE_Into2Compl16Bit_BEout:
               pwCS = (unsigned short *)info->voidPtr;
               {
                  int tmp;

                  // Make 2's complement.
                  *pwCS = ~*pwCS + 1;
                  // swap lo- and hi-byte-
                  tmp  = (*pwCS>>8)&0xff;
                  *pwCS <<= 8;
                  *pwCS &= 0xff00;
                  *pwCS |= tmp;
            
                  info->segOutData = (char *)info->voidPtr;
                  info->segOutLength = 2;  // 2 byte data in output.
               }
               result = true;
            break;
         case kCsumWordsumLE_Into2Compl16Bit_LEout:
               pwCS = (unsigned short *)info->voidPtr;
               // Make 2's complement.
               *pwCS = ~*pwCS + 1;
         
               info->segOutData = (char *)info->voidPtr;
               info->segOutLength = 2;  // 2 byte data in output.
               result = true;
            break;

         default:
            break;
       }
       if (result==true)
       {
          for (i=0 ; ((i < info->segOutLength) && (i < EXPDAT_RESULTS_MAXSIZE)) ; i++)
          {
             info->expDatResultSize++;
             info->expDatResults[i] = info->segOutData[i];
          }

       }
    }


    return result;
  }



  void __declspec(dllexport) __cdecl GetExportStateInfo(char **infoText, enum EExportStatus actionState ) 
  {
     static const char *sInfoText[] = {
        "Interface state is idle or not initialized"
       ,"Incompatible version of EXPDATPROC.DLL"
       ,"General checksum calculation error"
       ,"Data compression calculation error"
       ,"Data encryption error"
       ,"Base address mis-alignment"
       ,"Data length mis-alignment"
       ,"Internal error: Unknown action item or action state"
       ,"Parameter missing or wrong for data processing"
       ,"General failure on reading key"
       ,"Key parameter duplicate defined"
       ,"Key parameter is missing"
       ,"Key parameter contains HMAC information"
       ,"Key parameter contains RSA information"
       ,"Block size must be between 128 bytes and 70000000 bytes for compression"
     };
     static const char *generalFailure = "General unknown error";


     switch (actionState) 
     {
       case ExportStateIdle:
       case ExportStateDllInterfaceVersionError:
       case ExportStateChecksumCalculationError:
       case ExportStateDataCompressionCalculationError:
       case ExportStateDataEncryptionError:
       case ExportStateChecksumAddressMisalignedError:
       case ExportStateChecksumLengthMisalignedError:
       case ExportStateUnknownActionItemOrActionType:
       case ExportStateParamterMissingForDataProcessing:
       case ExportStateKeyGeneralError:
       case ExportStateKeyDuplicateParamter:
       case ExportStateKeyParameterMissing:
       case ExportStateKeyIsHMAC:
       case ExportStateKeyIsRSA:
       case ExportStateWrongBytesPerBlockType:
         *infoText = (char *)sInfoText[actionState];
        break;
       default:
          *infoText = (char *)generalFailure;
        break;
     }
  }


//===========================================================================================
//
//  Encryption section starts here
//
//===========================================================================================
#define kDatProcNoAction                     0
#define kDatProcXoring                       1
#define kDatProcItems                        2   /* Total number of items in Csum */


  // Translates readkey-errors to expdatproc errors
  const int readkey_error[] = {
    ExportStateKeyGeneralError         // EKeyTypeFailure=0,
   ,ExportStateKeyParameterMissing     // EKeyTypeMissing,
   ,ExportStateKeyDuplicateParamter    // EKeyTypeDuplicate,
   ,ExportStateKeyIsHMAC               // EKeyTypeHmac,
   ,ExportStateKeyIsRSA               // EKeyTypeRSA
  };


  int __declspec(dllexport) __cdecl GetDataProcessingFunctionCount() { return kDatProcItems; }


  bool __declspec(dllexport) __cdecl GetDataProcessingFunctionName(int index, char * name, int size)
  {
    sprintf(name, "%2d:", index);
    size -= strlen(name);
    switch (index) {

      case kDatProcNoAction:  
               strncat(name, "No action", size );
               return true;
               break;
      
      case kDatProcXoring:  
               strncat(name, "XOR data with byte parameter", size);
               return true;
               break;

      default: return false;
    }
  }

/**********************************************************************************
 * 
 * Section with Utility-Routines for DataProcessing.
 *
 **********************************************************************************/


  /********************************************************/
  
  // Converts the string table into a byte array.
  static int StringToBytes(const char *textBuffer, unsigned char *data, const int maxDataLen)
  {
      char tempStr[5];
      int rc=0;

      while (*textBuffer)
      {
         // Skip any blanks or commas.
         if (*textBuffer == ' ' || *textBuffer == ',')
         {
            textBuffer++;
            continue;
         }
         if (rc == maxDataLen) return rc;

         // If hex-byte starts with '0x'
         if ((textBuffer[0]=='0') && (textBuffer[1]=='x'))
         {
            textBuffer++;
            textBuffer++;
         }

         // make the byte a hex string.
         tempStr[0] = '0';
         tempStr[1] = 'x';
         tempStr[2] = *textBuffer++;
         if (*textBuffer)  tempStr[3] = *textBuffer++;
         else              tempStr[3] = '\0';
         tempStr[4] = '\0';
         data[rc] = (unsigned char)strtoul(tempStr, NULL, 0);
         rc++;
      }
      return rc;
  }


  /********************************************************/

typedef struct tXorParam
{
  int xorLen;
  int xorCurrent;
  BYTE *xorData;
} tXorParam;

  /********************************************************/


   int ishexstring(char *buffer)
   {
      while(*buffer)
      {
         if (*buffer == ' ' || *buffer == ',')
         {
            buffer++;
            continue;
         }
         if (buffer[0] == '0' && buffer[1] == 'x')
         {
            buffer++;
            buffer++;
            continue;
         }
         if (!isxdigit(*buffer)) return 0;
         buffer++;
      }
      return 1;
   }

   // Function scans the following data format:
   //   infile,section,sectionkey;outfilename
   // This string must be in strbuffer. 
   // The results will be placed into in_fname, out_fname, sectname and sectkeyname.
   // If sectname and sect_keyname is found, a string is read from the INI-file specified by in_fname.
   // This string is placed into key_buffer[kay_maxlen];
   bool ScanDataProcessingInputString(char *strbuffer, char *key_buffer, int key_maxlen, char *out_fname, int *outFileFormat)
   {
      int      slen;
      bool     keyFromIni=false;
      char    *ps=strbuffer;
      char    *psTmp, *psTmpAlloc;
      //CString  str(strbuffer);

      *outFileFormat = 0;

      // pre-set all output strings to zero-length 
      if (key_buffer != (char *)NULL)
         key_buffer[0] = '\0';

      if (out_fname != (char *)NULL)
         out_fname[0] = '\0';

      if (strbuffer==(char *)NULL) return false;

      slen=strlen(strbuffer);

      // Allocate a temporary buffer ;
      psTmpAlloc = new char[slen+2];

      // Copy original buffer to free the allocated space from its original location.
      psTmp = psTmpAlloc;
      // Need to operate on a copy of strbuffer, because string will be destroyed.
      strcpy(psTmp, strbuffer);

      // Check for the output filename. Reverse find for the out-filename separator.
      ps=strrchr(psTmp, ';');  //str.Find(':');
      if (ps != (char *)NULL)
      {
         // out filename specified. 
         // Copy the outfilename and remove it from the string
         if (strlen(ps+1) > 0)
         {
            // Copy max. of data to out_fname[].
            if (out_fname != (char *)NULL)
            {
               strncpy(out_fname, (ps+1), _MAX_PATH );

               // Ensure a NULL terminated string (max-buffer).
               out_fname[_MAX_PATH-1]='\0';
            }
         }

         // Remove the text following the ':' from the string.
         *ps = '\0';
      }

      if ((ishexstring((char *)psTmp)==0) || (psTmp[0] == '@'))
      {
         // Advance to next char. if the first char is the filename marker.
         if (*psTmp == '@') psTmp++;

         // Check for key-section name
         ps=strchr(psTmp, ',');
         if (ps != (char *)NULL)
         {
            char *ps2;

            // Terminate the first string and advance pointer to the beginning of the section name;
            *ps++ = '\0';

            // Search for 2nd occurrance of ';' for the key section
            ps2 = strchr(ps, ',' );

            if (ps2!=(char *)NULL)
            {
               // now, we have found the token ';' two times.
               // Section and key properly defined.

               // Terminate the second string and advance pointer to the beginning of the section name;
               *ps2++ = '\0';

               // Section and key-name properly extracted. Copy now.
               if (strlen(ps)>0 && strlen(ps2) > 0 && (key_buffer != (char *)NULL))
               {
                  char iniFile[_MAX_PATH];

                  _fullpath(iniFile, psTmp, _MAX_PATH);
                  GetPrivateProfileString(ps, ps2, "", key_buffer, key_maxlen, iniFile);
                  *outFileFormat = GetPrivateProfileInt(ps, "OutputFormat", 0, iniFile);

                  // key and section found. key comes from INI-file (even if read operation has failed).
                  keyFromIni = true;
               }

            }

         }
         // inbuffer is remaining.

         if (keyFromIni==false && (key_buffer != (char *)NULL))
         {
            FILE *fp;
            if ((fp=fopen(psTmp,"r"))!=(FILE *)NULL)
            {
               fgets(key_buffer, key_maxlen,fp);
               fclose(fp);
            }
         }
      }
      else
      {
         if (key_buffer != (char *)NULL)
            strncpy(key_buffer, psTmp, key_maxlen);
      }
      if (key_buffer != (char *)NULL)
         key_buffer[key_maxlen-1] = '\0';

      delete [] psTmpAlloc;

      if (key_buffer != (char *)NULL)
         return( strlen(key_buffer) > 0 );
      else
         return false;
   }

  /**********************************************************/

  /* Utility functions for RSA-encryption/decryption */
   static void copyBytesToLong(unsigned char *keyData, int tagdatalen, unsigned long a[])
   {
      int idx_w=0, idx_b=0;


      while((tagdatalen>0))
      {
         if (idx_b==0) 
         {
            a[idx_w] = (unsigned long)(*keyData++ & 0x000000fful);
         }
         else
         {
            a[idx_w] <<= 8;
            a[idx_w]  += (unsigned long)(*keyData++ & 0x000000fful);
         }

         idx_b++;
         if (idx_b==4)
         {
            idx_b=0;
            idx_w++;
         }
         tagdatalen--;
      }
   }


   static void copyLongToBytes(unsigned char *dst, int tagdatalen, unsigned long src[])
   {
      int idx_l=0, idx_b=0;
      unsigned long l;


      l = src[idx_l];
      while((tagdatalen>0))
      {
         *dst++  = (unsigned char)((l>>24) & 0x000000fful);
         l <<= 8;

         idx_b++;
         if (idx_b==4)
         {
            idx_b=0;
            idx_l++;
            l = src[idx_l];
         }
         tagdatalen--;
      }
   }



 



/**********************************************************************************
 * 
 * Section with Utility-Routines for DataProcessing.
 *
 **********************************************************************************/
  bool __declspec(dllexport) __cdecl InitDataProcessing( TExportDataInfo *info )  
  {
    bool rval=false;

    
    /* Check for interface version */
    if (info->DllInterfaceVersion < DllInterfaceVersion)
    {
       info->exState = ExportStateDllInterfaceVersionError;
       return false;
    }
    
    
    info->expDatResultSize = 0;
    info->exState = ExportStateDataEncryptionError;    // General failure.

    switch (info->index) {

      // 
      case kDatProcNoAction:   
              rval = true;
              break;

      case kDatProcXoring:
         {
            char     keyBuffer[1024];
            int      maxLen=0, dummy;
            tXorParam *xorParam = new (tXorParam);


            info->voidPtr = (void *)xorParam;
            ScanDataProcessingInputString((char *)info->generalParam, keyBuffer, 128, NULL, &dummy );

            maxLen = strlen(keyBuffer);

            if (maxLen == 0)  // No data in buffer or NULL-string
            {
               maxLen = 1;
               xorParam->xorData = new unsigned char [1];
               xorParam->xorData[0] = 0xFF;
            }
            else
            {
               xorParam->xorData = new unsigned char [maxLen];
               xorParam->xorLen = StringToBytes(keyBuffer,xorParam->xorData,maxLen);
            }
            xorParam->xorCurrent=0;     /* Begin with first byte */
         }
         rval = true;
         break;
    } 

    return rval;
  }


  bool __declspec(dllexport) __cdecl DeinitDataProcessing(TExportDataInfo *info )  
  {
    bool rval=false;
    info->exState = ExportStateDataEncryptionError;    // General failure.

    switch (info->index) {

      // No action
      case kDatProcNoAction:   
               rval = true;
              break;

      // Increment by 1
      case kDatProcXoring:   
               delete [] ((tXorParam *)(info->voidPtr))->xorData;
               delete info->voidPtr;
               rval = true;
              break;

    } 

    return rval;
  }

  bool __declspec(dllexport) __cdecl DoDataProcessing( TExportDataInfo *info )  
  {
    bool rval=false;
    info->exState = ExportStateDataEncryptionError;    // General failure.

    switch (info->index) {

      // 2-Complement without carry -> unsigned short
      case kDatProcNoAction: 
                rval = true;
       break;

      case kDatProcXoring: 
         {
#if (1)
            char *pcBuf=info->segInData;


             // By default, in- and out-data are identically.
            // If nothing's changed here, in could be used for out.
            // Otherwise, adapt segOutXxx values in info-struct.
            for (DWORD i=0l ; i < info->segInLength ; i++)
            {
               *pcBuf = *pcBuf ^ ((tXorParam *)(info->voidPtr))->xorData[((tXorParam *)(info->voidPtr))->xorCurrent++];
               pcBuf++;
               if (((tXorParam *)(info->voidPtr))->xorCurrent >= ((tXorParam *)(info->voidPtr))->xorLen) ((tXorParam *)(info->voidPtr))->xorCurrent=0;
            }
#else
            // Demo shows buffer handling with swapping buffers.
            // -------------------------------------------------
            char *pcBuf=info->segInData;
            char *pcBufOut=new char [info->segInLength];

            info->segOutData = pcBufOut;

            // By default, in- and out-data are identically.
            // If nothing's changed here, in could be used for out.
            // Otherwise, adapt segOutXxx values in info-struct.
            for (DWORD i=0l ; i < info->segInLength ; i++)
            {
               *pcBufOut = *pcBuf ^ ((tXorParam *)(info->voidPtr))->xorData[((tXorParam *)(info->voidPtr))->xorCurrent++];
               pcBuf++;
               pcBufOut++;
               if (((tXorParam *)(info->voidPtr))->xorCurrent >= ((tXorParam *)(info->voidPtr))->xorLen) ((tXorParam *)(info->voidPtr))->xorCurrent=0;
            }
#endif
         }
         rval = true;
       break;

    } 

    return rval;
  }
}


