/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2006
  * All rights reserved.
  * ========================================================================*/

/*================= File Description =======================================*/
/**
 * @file
 * 	This file is for scaler related functions.
 *
 * @author 	$Author$
 * @date		$Date$
 * @version	$Revision$
 * @ingroup	scaler
 */

/**
 * @addtogroup scaler
 * @{
 */

/*============================ Module dependency  ===========================*/
#include "sparrow.h"

UINT16 code tSU_COEF_0[] =
{
    4,    3,    2,    0,   -2,   -6,  -10,  -14,
    -20,  -26,  -32,  -39,  -46,  -54,  -61,  -69,
    -76,  -83,  -91,  -98, -104, -109, -113, -116,
    -117, -117, -115, -111, -104,  -97,  -85,  -71,
    -54,  -32,   -9,   19,   49,   84,  120,  161,
    203,  250,  296,  347,  397,  451,  503,  558,
    611,  665,  718,  771,  820,  869,  913,  957,
    994, 1031, 1061, 1088, 1109, 1128, 1138, 1145
};

UINT16 code tSU_COEF_1[] =
{
    -7,   -7,   -8,  -11,  -13,  -16,  -20,  -24,
    -30,  -35,  -41,  -47,  -54,  -60,  -66,  -73,
    -79,  -85,  -91,  -95,  -99, -101, -102, -103,
    -101,  -97,  -92,  -84,  -74,  -62,  -47,  -30,
    -10,   14,   39,   69,   99,  133,  167,  206,
    246,  288,  330,  377,  422,  470,  516,  565,
    611,  659,  705,  751,  793,  836,  873,  911,
    943,  974,  999, 1022, 1040, 1055, 1064, 1071
};

UINT16  code tSU_COEF_2[] =
{
    -19,  -19,  -21,  -23,  -26,  -29,  -33,  -37,
    -41,  -46,  -52,  -56,  -61,  -66,  -71,  -75,
    -79,  -82,  -84,  -85,  -84,  -83,  -81,  -76,
    -70,  -62,  -52,  -41,  -28,  -11,    7,   18,
    37,   66,   92,  125,  155,  189,  222,  259,
    295,  334,  372,  411,  450,  491,  529,  570,
    608,  648,  683,  720,  753,  787,  817,  846,
    872,  897,  916,  936,  950,  964,  970,  988
};

UINT16  code tSU_COEF_3[] =
{
    -32,  -23,  -25,  -25,  -29,  -30,  -34,  -37,
    -41,  -45,  -49,  -52,  -55,  -58,  -60,  -61,
    -62,  -62,  -61,  -58,  -55,  -50,  -45,  -38,
    -29,  -19,   -7,    7,   21,   37,   55,   73,
    93,  116,  141,  170,  198,  229,  260,  292,
    324,  359,  390,  425,  458,  493,  525,  558,
    589,  621,  650,  679,  706,  733,  755,  779,
    798,  817,  832,  848,  858,  871,  876,  890
};

UINT16  code tSU_COEF_4[] =
{
    -42,  -31,  -32,  -31,  -32,  -32,  -35,  -36,
    -37,  -39,  -41,  -41,  -43,  -42,  -43,  -41,
    -40,  -37,  -35,  -30,  -25,  -18,  -11,   -3,
    7,   19,   30,   43,   59,   73,   90,  107,
    127,  148,  171,  197,  222,  249,  276,  306,
    334,  364,  392,  423,  452,  482,  510,  539,
    566,  594,  619,  645,  667,  691,  710,  730,
    747,  764,  777,  791,  799,  812,  817,  832
};

UINT16  code tSU_2tap_Linear[] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 48, 80, 112, 144, 176, 208, 240, 272, 304, 336, 368, 400, 432, 464, 496,
    528, 560, 592, 624, 656, 688, 720, 752, 784, 816, 848, 880, 912, 944, 976, 1008
};

UINT16  code tSU_1_64[] =
{
    // 1/64		The blurest
    36, 80, 73, 81, 77, 81, 79, 83, 82, 86, 88, 93, 95, 100, 103, 109,
    112, 117, 121, 127, 129, 134, 137, 141, 143, 146, 149, 150, 154, 155, 161, 167,
    194, 224, 241, 263, 274, 292, 300, 316, 322, 339, 343, 359, 363, 380, 384, 400,
    403, 420, 423, 439, 443, 459, 462, 479, 482, 499, 502, 523, 526, 555, 559, 627
};

UINT16  code tSU_1_60[] =
{
    // 1/60
    1, 47, 42, 53, 50, 55, 54, 58, 58, 62, 63, 69, 71, 76, 80, 85,
    89, 95, 100, 106, 111, 118, 122, 129, 134, 139, 145, 151, 158, 164, 172, 181,
    208, 236, 253, 275, 288, 308, 317, 335, 342, 360, 366, 382, 387, 403, 407, 423,
    427, 442, 445, 460, 462, 477, 480, 495, 497, 514, 516, 535, 538, 565, 569, 634
};

UINT16  code tSU_1_56[] =
{
    // 1/56
    -47, 0, -3, 10, 9, 16, 17, 23, 25, 31, 34, 41, 45, 52, 57, 64,
    71, 78, 85, 93, 100, 109, 117, 125, 134, 143, 152, 160, 170, 179, 190, 201,
    225, 251, 268, 290, 303, 322, 332, 351, 359, 377, 384, 401, 406, 422, 427, 443,
    446, 462, 465, 480, 482, 497, 499, 515, 516, 532, 534, 552, 554, 580, 583, 645
};

UINT16  code tSU_1_48[] =
{
    // 1/48
    -135, -89, -87, -73, -70, -60, -56, -47, -41, -32, -25, -15, -7, 3, 12, 24,
    33, 46, 55, 69, 80, 93, 105, 118, 131, 144, 157, 170, 185, 197, 213, 226,
    248, 269, 284, 305, 318, 338, 350, 370, 380, 400, 409, 428, 436, 455, 462, 480,
    487, 504, 511, 526, 531, 547, 551, 567, 570, 586, 589, 606, 607, 630, 631, 685
};

UINT16  code tSU_1_40[] =
{
    // 1/40
    -122, -90, -87, -76, -75, -69, -66, -60, -58, -52, -49, -43, -39, -33, -28, -21,
    -14, -6, 2, 11, 19, 31, 41, 53, 64, 77, 91, 105, 120, 135, 153, 168,
    186, 207, 224, 247, 266, 291, 310, 336, 355, 382, 402, 429, 448, 475, 494, 521,
    538, 564, 580, 604, 619, 640, 653, 674, 684, 703, 711, 728, 733, 752, 754, 792
};

//20091209 jason9.ccc
UINT16 code tSU_cnst_table2[] = // blur
{
    18,	20,	23,	26,	29,	31,	37,	41,	45,	50,	55,	62,	68,	74,	81,	88,
    97,	105,	113,	121,	130,	141,	150,	161,	170,	179,	191,	202,	213,	225,	237,	248,
    259,	269,	281,	292,	303,	314,	325,	335,	346,	357,	366,	377,	387,	397,	406,	415,
    424,	432,	440,	448,	455,	462,	467,	472,	478,	484,	488,	490,	494,	495,	498,	499
};

/*//20091209 jason9.ccc marked
UINT16  code *tSU_COEF_TABLE[] =
{
    tSU_COEF_0,     tSU_COEF_1,     tSU_COEF_2,     tSU_COEF_3,     tSU_COEF_4,
      tSU_2tap_Linear,    tSU_1_40,	tSU_1_48,	tSU_1_56,	tSU_1_60,	tSU_1_64
};
*/
UINT16  code *tSU_COEF_TABLE[] =
{
    tSU_COEF_0,     tSU_COEF_1,     tSU_COEF_2,     tSU_COEF_3,     tSU_COEF_4,
    tSU_2tap_Linear,    tSU_1_40,	tSU_1_48,	tSU_1_56,	tSU_1_60,	tSU_cnst_table2
};


UINT8  code tsub_su_coef1[] =
{
    0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70,
    0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0,
};
UINT8  code tsub_su_coef2[] =
{
    0, 1, 5, 11, 19, 30, 43, 58,
    75, 94, 114, 135, 158, 182, 206, 231
};

UINT8  code *tsub_SU_COEF_TABLE[] =
{
    tsub_su_coef1, tsub_su_coef2
};

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

UINT16 code  tScale_Down_Coef_2tap[] =
{
    0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,
    31,  95, 159, 223, 287, 351, 415, 479,
    543, 607, 671, 735, 799, 863, 927, 991,
};

INT16  code tScale_Down_Coef_Blur[] =
{
    2,   3,   5,   7,  10,  15,  20,  28,  38,  49,  64,  81, 101, 124, 150, 178,
    209, 242, 277, 314, 351, 389, 426, 462, 496, 529, 556, 582, 602, 618, 629, 635,
};

INT16 code  tScale_Down_Coef_Mid[] =
{
    -4,  -2,   0,   2,   5,   9,  15,  22,  32,  45,  60,  77,  98, 122, 149, 179,
    211, 245, 281, 318, 356, 394, 431, 468, 502, 533, 561, 586, 606, 621, 632, 638,
};

INT16  code tScale_Down_Coef_Sharp[] =
{
    -2,   0,   1,   3,   6,  10,  15,  22,  32,  43,  58,  75,  95, 119, 145, 174,
    206, 240, 276, 314, 353, 391, 430, 467, 503, 536, 565, 590, 612, 628, 639, 646,
};

INT16  code  *tScaleDown_COEF_TAB[] =
{
    tScale_Down_Coef_Blur,     tScale_Down_Coef_Mid,     tScale_Down_Coef_Sharp,     tScale_Down_Coef_2tap
};

