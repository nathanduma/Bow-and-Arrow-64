/*
	ROM spec file

	Main memory map

  	0x80000000  exception vectors, ...
  	0x80000400  zbuffer (size 320*240*2)
  	0x80025c00  codesegment
	      :  
  	0x8038F800  cfb 16b 3buffer (size 320*240*2*3)

        Copyright (C) 1997-1999, NINTENDO Co,Ltd.
*/

#include <nusys.h>

/* Use all graphic micro codes */
beginseg
	name	"code"
	flags	BOOT OBJECT
	entry 	nuBoot
	address NU_SPEC_BOOT_ADDR
        stack   NU_SPEC_BOOT_STACK
	include "codesegment.o"
	include "$(ROOT)/usr/lib/PR/aspMain.o"
	include "$(ROOT)/usr/lib/PR/n_aspMain.o"
	include "$(ROOT)/usr/lib/PR/rspboot.o"
	include "$(ROOT)/usr/lib/PR/gspF3DEX2.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspL3DEX2.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspF3DEX2.Rej.fifo.o"
        include "$(ROOT)/usr/lib/PR/gspF3DEX2.NoN.fifo.o"
        include "$(ROOT)/usr/lib/PR/gspF3DLX2.Rej.fifo.o"
	include "$(ROOT)/usr/lib/PR/gspS2DEX2.fifo.o"
endseg

// logo tune (NINTENDO SIXTY FOURRRR)
beginseg
	name "pbank"
	flags RAW
	include "drumtest.ptr"
endseg

/* sample data - wave bank */
beginseg
	name "wbank"
	flags RAW
	include "drumtest.wbk"
endseg

/* tune data */
beginseg
	name "tune1"
	flags RAW
	include "dt_song1.bin"
endseg



beginwave
	name	"nu1"
	include	"code"
	
	include "pbank"
	include "wbank"
	include "tune1"
endwave
