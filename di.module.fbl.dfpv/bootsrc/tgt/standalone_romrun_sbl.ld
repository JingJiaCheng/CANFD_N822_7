
MEMORY
{
    tcmram			: ORIGIN = 0x00005000, LENGTH = 0x1000  // TC RAM = 64KB => SBL - 4K
}
    

// Program layout for running out of TCFLASH
SECTIONS
{
	.signature								  ALIGN(16) : > tcmram
    .text                                     ALIGN(16) : > .
	.sbl                                      ALIGN(16) : > .
	.data                                     ALIGN(16) : > .
    .bss                                      ALIGN(16) : > .
	.rodata									  ALIGN(16) : > .
}

