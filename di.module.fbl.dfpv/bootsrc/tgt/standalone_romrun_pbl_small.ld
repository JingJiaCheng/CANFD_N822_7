
MEMORY 
{
	tcmram_start       	   : ORIGIN = 0x00000000, 	LENGTH = 0
	tcmram_res             : ORIGIN = ., 		    LENGTH = 4
	tcmram             	   : ORIGIN = ., 		    LENGTH = 20K-4
	sbl		               : ORIGIN = 0x00005000,   LENGTH = 4K
	tcmram_end         	   : ORIGIN = ., 		    LENGTH = 0

	axiflash_ssect0        : ORIGIN = 0x019F0000,   LENGTH = 0x1000
	axiflash_start         : ORIGIN = .,            LENGTH = 0
	axiflash               : ORIGIN = .,            LENGTH = 32K
	sbl_ROM                : ORIGIN = 0x019F9000,   LENGTH = 4K
	axiflash_end           : ORIGIN = .,            LENGTH = 0

	tcmflash_start         : ORIGIN = 0x009F1000, 	LENGTH = 0
	tcmflash               : ORIGIN = ., 		    LENGTH = 32k
	tcmflash_end		   : ORIGIN = ., 		    LENGTH = 0


	tcmflash_appl_start    : ORIGIN = 0x00A00000, 	LENGTH = 4
	tcmflash_appl          : ORIGIN = ., 	        LENGTH = 2M-8
	tcmflash_appl_end      : ORIGIN = ., 	        LENGTH = 4

    // bootloader magic flag and should not be changed
	bl_magic_flag          : ORIGIN = 0x0E800000,   LENGTH = 16
}

DEFAULTS 
{
    heap_reserve    = 0x2000

    // Security marker start address
    MK_BASE_ADDRESS = 0x019F0000

    // BootROM marker start address
    DDR_BASE_ADDRESS = 0x019F0080
    BDR_BASE_ADDRESS = 0x019F00C0
    WDR_BASE_ADDRESS = 0x019F0100
}

// Program layout for starting in ROM, copying data to RAM, and continuing to execute out of ROM

SECTIONS
{
    // ROM SECTIONS
    .MK                     MK_BASE_ADDRESS     ABS     : > axiflash_ssect0
    .DDR                    DDR_BASE_ADDRESS    ABS     : > .
    .BDR                    BDR_BASE_ADDRESS    ABS     : > .
    .WDR                    WDR_BASE_ADDRESS    ABS     : > .

	.BOOTSTART              ALIGN(16) : > tcmflash
    .text 					ALIGN(16) : > .
    .syscall				ALIGN(16) : > .
    .rodata 				ALIGN(16) : > .
    .sdata2 				ALIGN(16) : > .

    .secinfo 				ALIGN(16) : > .
    .fixaddr 				ALIGN(16) : > .
    .fixtype 				ALIGN(16) : > .
	    
    .CROM.sdata  	        CROM(.sdata)  : > .
    .CROM.data 	            CROM(.data)   : > .

    // bootloader application validity flags and should not be changed
	V_APPLVAL_1A            :	> tcmflash_appl_start
	V_APPLVAL_1B            :	> tcmflash_appl_end
    
    // RAM SECTIONS
	.fbl_magic_flag         ALIGN(16) : > bl_magic_flag
    .sdabase 			    ALIGN(16) : > tcmram	
    .sbss 				  	ALIGN(16) : > .
    .sdata 				   	ALIGN(16) : > .
    .data 				   	ALIGN(16) : > .
    .bss 				   	ALIGN(16) : > .
	
    .stack		            ALIGN(16) PAD(4K) : > .
    
    .sbl_section            ALIGN(16)  : > sbl
    
// These special symbols mark the bounds of RAM and ROM memory. They are used by the MULTI debugger.
    __ghs_romstart  = MEMADDR(axiflash_start);
    __ghs_romend    = MEMENDADDR(axiflash_end);
    __ghs_ramstart  = MEMADDR(tcmram_start);
    __ghs_ramend    = MEMENDADDR(tcmram_end);
	
//  __ghsbegin_HEAP  = ADDR(.heap);
//  __ghsend_HEAP    = ENDADDR(.heap);

    __ghsbegin_USR_STACK  = ADDR(.stack);
    __ghsend_USR_STACK    = ENDADDR(.stack);	

// These special symbols mark the bounds of RAM and ROM images of boot code.
// They are used by the GHS startup code (_start and __ghs_ind_crt0).
    __ghs_rombootcodestart  = ADDR(.BOOTSTART);
    __ghs_rombootcodeend    = ENDADDR(.fixtype);
    __ghs_rambootcodestart  = 0;
    __ghs_rambootcodeend    = 0;
	

// agorchv: These symbols are defined, to satisfy linker error for them. They shall not
// be considered as correct, since no analysis for their usage is made.
	_osCodeStart 			= __ghs_romstart;
	_osAllDataStart 		= __ghs_ramstart;
	_osConstStart 			= __ghs_romstart;
	_osAllStacksStart 		= __ghs_ramstart;
	
  
	.signature								  ALIGN(16) : > sbl
  .sbl                        : 
	
// Create a copy of .sbl in ROM and
// create an entry in the run-time ROM copy table
  .ROM.signature ROM(.signature) : > sbl_ROM
  .ROM.sbl ROM(.sbl) :
	
}
