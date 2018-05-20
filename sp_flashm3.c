#include "sp_flashm3.h"

static Gfx flashm30_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 flashm30_sp[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 

};


static Gfx flashm31_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 flashm31_sp[] = {
	0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xffc1, 0xffc1, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffc1, 0xffc1, 0xffc1, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 

};




Bitmap flashm3_bitmaps[] = {
	{flashm3BLOCKSIZEW, flashm3BLOCKSIZEW, 0, 0, flashm30_sp, flashm3BLOCKSIZEH, 0},
	{flashm3BLOCKSIZEW, flashm3BLOCKSIZEW, 0, 0, flashm31_sp, flashm3BLOCKSIZEH, 0},
};

Gfx flashm3_dl[NUM_DL(NUM_flashm3_BMS)];

Sprite flashm3_sprite = {
	0, 0, /* Position: x,y */
	flashm3IMAGEW, flashm3IMAGEH, /* Sprite size in texels (x,y) */
	flashm3SCALEX, flashm3SCALEY, /* Sprite Scale: x,y */
	0, 0, /* Sprite Explosion Spacing: x,y */
	flashm3MODE, /* Sprite Attributes */
	0x1234, /* Sprite Depth: Z */
	255, 255, 255, 255, /* Sprite Coloration: RGBA */
	0, 0, NULL, /* Color LookUp Table: start_index, length, address */
	0, 1, /* Sprite Bitmap index: start index, step increment */
	NUM_flashm3_BMS, /* Number of bitmaps */
	NUM_DL(NUM_flashm3_BMS), /* Number of display list locations allocated */
	flashm3BLOCKSIZEH, flashm3BLOCKSIZEH, /* Sprite Bitmap Height: Used_height, physical height */
	G_IM_FMT_RGBA, /* Sprite Bitmap Format */
	G_IM_SIZ_16b, /* Sprite Bitmap Texel Size */
	flashm3_bitmaps, /* Pointer to bitmaps */
	flashm3_dl, /* Display list memory */
	NULL, /* next_dl pointer */
};
