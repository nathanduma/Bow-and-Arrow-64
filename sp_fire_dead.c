#include "sp_fire_dead.h"

static Gfx fire_dead0_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 fire_dead0_sp[] = {
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0x0001, 0x8401, 0xfffe, 0x8401, 0x8001, 0x8401, 0x0001, 0x0001, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xf801, 0xf801, 0xf801, 0xf801, 
	0xfffe, 0x0001, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xf801, 0xf801, 0xf801, 0xffc1, 0xffc1, 0xffc1, 
	0xfffe, 0x0001, 0xfffe, 0x8401, 0x0001, 0x0001, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x8401, 0x8001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0x0401, 0xffc1, 0x0401, 0xffc1, 0xffc1, 
	0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0x0001, 0x0001, 0xfffe, 0x0001, 0x0001, 0x0001, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x0001, 0x8401, 0xfffe, 0x0001, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0x0401, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 
	0x0001, 0x8401, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 
	0x0001, 0x8001, 0x8401, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0x8401, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 
	0xfffe, 0x8401, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0x0001, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0x0401, 0xf801, 0xf801, 0xf801, 
	0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xffc1, 0xffc1, 
	0x0001, 0x8401, 0x8001, 0x8401, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0x0401, 0x0401, 0xf801, 0xf801, 0x0401, 0xf801, 
	0xfffe, 0x0001, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xffc1, 0xf801, 0xf801, 0xf801, 0xf801, 
	0xfffe, 0x0001, 0xfffe, 0x8401, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0x0001, 0x0001, 0x8401, 0x8001, 0x8401, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xffc1, 0xffc1, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0x0001, 0x0001, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0x0401, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x8401, 0xfffe, 0x8401, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0x0001, 0x0001, 0xfffe, 0xfffe, 0x0001, 0x0001, 0x0001, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
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


static Gfx fire_dead1_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 fire_dead1_sp[] = {
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf801, 0xf801, 0xf801, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xf801, 0xf801, 0xf801, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf801, 0xf801, 0xffc1, 0xffc1, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf801, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xfffe, 0xf801, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xf801, 0xf801, 0xf801, 0xf801, 0xffc1, 0xf801, 0xfffe, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf801, 0xf801, 0xffc1, 0xffc1, 0xffc1, 0x0401, 0xf801, 0xf801, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf801, 0xf801, 0xffc1, 0xfffe, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xf801, 0xf801, 0xfffe, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xffc1, 0xffc1, 0xffc1, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffc1, 0xffc1, 0xfffe, 0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xffc1, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
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




Bitmap fire_dead_bitmaps[] = {
	{fire_deadBLOCKSIZEW, fire_deadBLOCKSIZEW, 0, 0, fire_dead0_sp, fire_deadBLOCKSIZEH, 0},
	{fire_deadBLOCKSIZEW, fire_deadBLOCKSIZEW, 0, 0, fire_dead1_sp, fire_deadBLOCKSIZEH, 0},
};

Gfx fire_dead_dl[NUM_DL(NUM_fire_dead_BMS)];

Sprite fire_dead_sprite = {
	0, 0, /* Position: x,y */
	fire_deadIMAGEW, fire_deadIMAGEH, /* Sprite size in texels (x,y) */
	fire_deadSCALEX, fire_deadSCALEY, /* Sprite Scale: x,y */
	0, 0, /* Sprite Explosion Spacing: x,y */
	fire_deadMODE, /* Sprite Attributes */
	0x1234, /* Sprite Depth: Z */
	255, 255, 255, 255, /* Sprite Coloration: RGBA */
	0, 0, NULL, /* Color LookUp Table: start_index, length, address */
	0, 1, /* Sprite Bitmap index: start index, step increment */
	NUM_fire_dead_BMS, /* Number of bitmaps */
	NUM_DL(NUM_fire_dead_BMS), /* Number of display list locations allocated */
	fire_deadBLOCKSIZEH, fire_deadBLOCKSIZEH, /* Sprite Bitmap Height: Used_height, physical height */
	G_IM_FMT_RGBA, /* Sprite Bitmap Format */
	G_IM_SIZ_16b, /* Sprite Bitmap Texel Size */
	fire_dead_bitmaps, /* Pointer to bitmaps */
	fire_dead_dl, /* Display list memory */
	NULL, /* next_dl pointer */
};
