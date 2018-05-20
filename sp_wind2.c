#include "sp_wind2.h"

static Gfx wind20_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 wind20_sp[] = {
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 
	0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 
	0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xffff, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xffff, 0xffff, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xf83f, 0xf83f, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 

};




Bitmap wind2_bitmaps[] = {
	{wind2BLOCKSIZEW, wind2BLOCKSIZEW, 0, 0, wind20_sp, wind2BLOCKSIZEH, 0},
};

Gfx wind2_dl[NUM_DL(NUM_wind2_BMS)];

Sprite wind2_sprite = {
	0, 0, /* Position: x,y */
	wind2IMAGEW, wind2IMAGEH, /* Sprite size in texels (x,y) */
	wind2SCALEX, wind2SCALEY, /* Sprite Scale: x,y */
	0, 0, /* Sprite Explosion Spacing: x,y */
	wind2MODE, /* Sprite Attributes */
	0x1234, /* Sprite Depth: Z */
	255, 255, 255, 255, /* Sprite Coloration: RGBA */
	0, 0, NULL, /* Color LookUp Table: start_index, length, address */
	0, 1, /* Sprite Bitmap index: start index, step increment */
	NUM_wind2_BMS, /* Number of bitmaps */
	NUM_DL(NUM_wind2_BMS), /* Number of display list locations allocated */
	wind2BLOCKSIZEH, wind2BLOCKSIZEH, /* Sprite Bitmap Height: Used_height, physical height */
	G_IM_FMT_RGBA, /* Sprite Bitmap Format */
	G_IM_SIZ_16b, /* Sprite Bitmap Texel Size */
	wind2_bitmaps, /* Pointer to bitmaps */
	wind2_dl, /* Display list memory */
	NULL, /* next_dl pointer */
};
