/*
 * Do not edit this file.  It was automatically generated
 * by "rgb2c" from the file "letters.rgb".
 *
 *   Size: 64 x 128
 *   Number of channels: 3
 *   Number of bits per texel: 4 (G_IM_SIZ_4b)
 *   Format of texel: G_IM_FMT_I
 *
 * Example usage:
 *
 *   gsDPPipeSync (),
 *   gsDPSetCombineMode (G_CC_DECALRGB, G_CC_DECALRGB),
 *   gsDPSetTexturePersp (G_TP_PERSP),
 *   gsDPSetTextureLOD (G_TL_TILE),
 *   gsDPSetTextureFilter (G_TF_BILERP),
 *   gsDPSetTextureConvert(G_TC_FILT),
 *   gsDPSetTextureLUT (G_TT_NONE),
 *   gsDPLoadTextureBlock_4b (letters_img, G_IM_FMT_I, 64, 128, 0,
 *     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
 *     G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
 */

#if 0	/* Image preview */
	+----------------------------------------------------------------+
	|................................................................|
	|.........#....................#.............###..#..........#...|
	|.........#....................#............#.....#..........#...|
	|.........#....................#............#.....#..............|
	|..###....#.###....####....###.#...####...#####...#.###....###...|
	|.#...#...##...#..#....#..#...##..#....#....#.....##...#.....#...|
	|.....#...#....#..#.......#....#..#....#....#.....#....#.....#...|
	|..####...#....#..#.......#....#..######....#.....#....#.....#...|
	|.#...#...#....#..#.......#....#..#.........#.....#....#.....#...|
	|.#...#...##...#..#....#..#...##..#....#....#.....#....#.....#...|
	|..###.#..#.###....####....###.#...####.....#.....#....#.....#...|
	|................................................................|
	|................................................................|
	|................................................................|
	|................................................................|
	|................................................................|
	|.#....#..#....#...####...#.###....####...#.###...###.##.........|
	|.#....#..#....#..#....#..##...#..#....#..##...#..#..#..#........|
	|.#....#..#....#..#.......#....#..#....#..#.......#..#..#........|
	|.#....#...#..#....####...#....#..#....#..#.......#..#..#........|
	|.#....#...#..#........#..#....#..#....#..#.......#..#..#........|
	|.#...##....##....#....#..#....#..#....#..#.......#.....#...##...|
	|..###.#....##.....####...#....#...####...#.......#.....#...##...|
	|................................................................|
	|................................................................|
	|.#........###........................#....####....####......#...|
	|.#..........#.......................##...#....#..#....#....##...|
	|.#..........#......................#.#........#..#....#.....#...|
	|.#...#......#....#....#..######...#..#........#.......#.....#...|
	|.#..#.......#....#....#......#....#..#.....###.......#......#...|
	|.#.#........#.....#..#......#....#...#........#.....#.......#...|
	|.###........#......##......#.....######.......#....#........#...|
	|.#..#.......#.....#..#....#..........#........#...#.........#...|
	|.#...#......#....#....#..#...........#...#....#..#..........#...|
	|.#....#.....#....#....#..######......#....####...######....###..|
	|................................................................|
	|................................................................|
	|.######...####...######...####....####....####....##.......#....|
	|.#.......#....#.......#..#....#..#....#..#....#...##.......#....|
	|.#.......#............#..#....#..#....#..#....#....#.......#....|
	|.#.......#...........#...#....#..#....#..#...##.....#......#....|
	|.#####...#####.......#....####...#....#..#..#.#............#....|
	|......#..#....#.....#....#....#...#####..#.#..#............#....|
	|......#..#....#.....#....#....#.......#..##...#............#....|
	|......#..#....#....#.....#....#.......#..#....#.................|
	|.#....#..#....#....#.....#....#..#....#..#....#............#....|
	|..####....####.....#......####....####....####.............#....|
	|................................................................|
	|................................................................|
	|.............#..................................................|
	|.............#.............................#....................|
	|...........................................#....................|
	|..###.#....###...#.###....###.#..#....#..#####...#.....#........|
	|.#...##......#...##...#..#...##..#....#....#.....#.....#........|
	|.#....#......#...#....#..#....#..#....#....#.....#..#..#........|
	|.#....#......#...#....#..#....#..#....#....#.....#..#..#........|
	|.#....#......#...#....#..#....#..#....#....#.....#..#..#........|
	|.#...##......#...##...#..#...##..#...##....#.....#..#..#...##...|
	|..###.#......#...#.###....###.#...###.#.....###...##.##....##...|
	|......#......#...#............#.......#.....................#...|
	|......#......#...#............#.......#....................#....|
	|.#....#..#...#...#............#..#....#...................#.....|
	|..####....###....#............#...####..........................|
	|................................................................|
	|................................................................|
	|.######..######...####...#....#..#....#..#.......#....#...####..|
	|.#.......#.......#....#..#....#..#...#...#.......##...#..#....#.|
	|.#.......#.......#.......#....#..#..#....#.......##...#..#....#.|
	|.#.......#.......#.......#....#..#.#.....#.......#.#..#..#....#.|
	|.#####...#####...#..###..######..##......#.......#.#..#..#....#.|
	|.#.......#.......#....#..#....#..#.#.....#.......#..#.#..#....#.|
	|.#.......#.......#....#..#....#..#..#....#.......#..#.#..#....#.|
	|.#.......#.......#....#..#....#..#...#...#.......#...##..#....#.|
	|.#.......#.......#...##..#....#..#....#..#.......#...##..#....#.|
	|.######..#........###.#..#....#..#....#..######..#....#...####..|
	|................................................................|
	|................................................................|
	|.#####...#####....####...#....#..#....#..#....#..######....##...|
	|.#....#..#....#..#....#..#....#..#....#..#....#.......#...#..#..|
	|.#....#..#....#..#....#..#....#..#....#...#..#.......#...#....#.|
	|.#....#..#....#..#.......#....#..#....#...#..#.......#...#..###.|
	|.#....#..#....#...##.....#....#...#..#.....##.......#....#.#..#.|
	|.#####...#####......##...#....#...#..#.....##......#.....#.#..#.|
	|.#.......#..#.........#..#....#...#..#....#..#....#......#..##..|
	|.#.......#...#...#....#..#....#....##.....#..#....#......#......|
	|.#.......#....#..#....#..#....#....##....#....#..#........#...#.|
	|.#.......#....#...####....####.....##....#....#..######....###..|
	|................................................................|
	|................................................................|
	|.....#..#.....#.........#.....#...###...#.....#....##....#####..|
	|.....#..#.....#.........#..#..#....#....#.....#....##....#....#.|
	|.....#..##...##.........#..#..#....#.....#...#.....##....#....#.|
	|.....#..##...##....##...#..#..#....#.....#...#....#..#...#....#.|
	|.....#..#.#.#.#....##...#.#.#.#....#......#.#.....#..#...#####..|
	|.....#..#.#.#.#.........#.#.#.#....#.......#......#..#...#....#.|
	|.....#..#..#..#.........#.#.#.#....#.......#.....#....#..#....#.|
	|.#...#..#..#..#..........#...#.....#.......#.....######..#....#.|
	|.#...#..#.....#....##....#...#.....#.......#.....#....#..#....#.|
	|..###...#.....#....##....#...#....###......#.....#....#..#####..|
	|................................................................|
	|................................................................|
	|..####...####......##...#######...#..#..........................|
	|.#....#..#...#.....##......#......#..#..........................|
	|.#....#..#....#....#.......#......#..#.....#....................|
	|.#.......#....#...#........#......#..#.....#.............######.|
	|.#.......#....#............#...............#....................|
	|.#.......#....#............#............#######..######.........|
	|.#.......#....#............#...............#.............######.|
	|.#....#..#....#............#...............#....................|
	|.#....#..#...#.............#...............#....................|
	|..####...####..............#....................................|
	|................................................................|
	|................................................................|
	|......................#..............#....#.......####....####..|
	|..####................#...####......#......#......#..........#..|
	|.#....#..............#...#....#....#........#.....#..........#..|
	|.#....#..............#...#....#....#........#.....#..........#..|
	|.#....#.............#.........#...#..........#....#..........#..|
	|.#....#.............#........#....#..........#....#..........#..|
	|.#....#............#........#.....#..........#....#..........#..|
	|.#....#............#........#.....#..........#....#..........#..|
	|.#....#...........#...............#..........#....#..........#..|
	|.#.#..#...........#.........#......#........#.....#..........#..|
	|..####...........#..........#......#........#.....#..........#..|
	|....#............#..................#......#......#..........#..|
	|.....#...............................#....#.......####....####..|
	|......#.########................................................|
	|................................................................|
	+----------------------------------------------------------------+
#endif

static Gfx letters_img_C_dummy_aligner1[] = { gsSPEndDisplayList() };

unsigned char letters_img[] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xff, 0xf0, 0x0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xf0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0x0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xf0, 0x0, 
	0xf, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0xff, 0xf0, 0xf0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xf0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0xf, 0xff, 0x0, 0xf, 0xff, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0xf, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 
	0x0, 0xff, 0xf0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0xf, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0xf0, 0xf, 0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xff, 0xf0, 0xf0, 0x0, 0xf, 0xff, 0x0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xf0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xf0, 0x0, 
	0x0, 0xff, 0xf0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf, 0xff, 0x0, 0x0, 0xff, 0xf0, 0xf0, 0x0, 0xff, 0xf0, 0xf0, 0x0, 0x0, 0xff, 0xf0, 0x0, 0xff, 0xf, 0xf0, 0x0, 0xf, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0x0, 0xf, 0x0, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0xf, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0xff, 0xff, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xf0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0xff, 0xf0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf, 0x0, 0xf0, 
	0xf, 0xff, 0xff, 0x0, 0xf, 0xff, 0xff, 0x0, 0x0, 0x0, 0xff, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0xf, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0xff, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0xf, 0xff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0xff, 0xff, 0x0, 
	0x0, 0x0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 
	0x0, 0x0, 0xf, 0x0, 0xff, 0x0, 0xf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf0, 
	0x0, 0x0, 0xf, 0x0, 0xff, 0x0, 0xf, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 
	0x0, 0x0, 0xf, 0x0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0xf0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0xff, 0xff, 0x0, 
	0x0, 0x0, 0xf, 0x0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 
	0x0, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf0, 0xf0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0xf, 0x0, 0xf, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 
	0x0, 0xff, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0xf, 0xf0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0xf, 0xff, 0xff, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0xf, 0xff, 0xf0, 0x0, 0x0, 0xf, 0xf0, 0x0, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xf0, 0xf, 0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xf0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0xf, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0xf, 0xf, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0x0, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 
	0x0, 0x0, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x0, 0x0, 0xff, 0xff, 0x0, 
	0x0, 0x0, 0x0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
};

