/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ZENLOGO
#define LV_ATTRIBUTE_IMG_ZENLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_ZENLOGO uint8_t
    zenlogo_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xF8,0x03,0xF0,0x7F,0xE0,0x78,0x3C,0xFF,0xF8,0x03,0xFC,
0x07,0xF8,0x7F,0xF8,0x78,0x3C,0xFF,0xF8,0x07,0xFE,0x0F,0xFC,0x7F,0xFC,0x7C,0x3C,
0xFF,0xF8,0x0F,0xDF,0x1F,0xFE,0x7F,0xFE,0x7C,0x3C,0xFF,0xF8,0x0F,0x0F,0x1E,0x1E,
0x78,0x3E,0x7E,0x3C,0xF0,0x00,0x1E,0x07,0xBC,0x0F,0x78,0x1E,0x7E,0x3C,0xF0,0x00,
0x1E,0x07,0xBC,0x0F,0x78,0x1E,0x7E,0x3C,0xF0,0x00,0x1E,0x07,0xBC,0x0F,0x78,0x1E,
0x7F,0x3C,0xF0,0x00,0x1E,0x07,0xBC,0x0F,0x78,0x1E,0x7F,0x3C,0xF0,0x00,0x1E,0x00,
0x3C,0x0F,0x78,0xFE,0x77,0xBC,0xFF,0xF8,0x1E,0x00,0x3C,0x0F,0x7F,0xFC,0x7F,0xBC,
0xFF,0xF8,0x1E,0x00,0x3C,0x0F,0x7F,0xF8,0x7B,0xFC,0xFF,0xF8,0x1E,0x00,0x3C,0x0F,
0x7F,0xE0,0x7B,0xFC,0xF0,0x00,0x1E,0x07,0xBC,0x0F,0x78,0xF0,0x79,0xFC,0xF0,0x00,
0x1E,0x07,0xBC,0x0F,0x78,0xF0,0x79,0xFC,0xF0,0x00,0x1E,0x07,0xBC,0x0F,0x78,0x78,
0x79,0xFC,0xF0,0x00,0x1E,0x07,0xBC,0x1F,0x78,0x78,0x78,0xFC,0xF0,0x00,0x1F,0x0F,
0x1E,0x1E,0x78,0x3C,0x78,0xFC,0xF0,0x00,0x0F,0x9F,0x1F,0x3E,0x78,0x3C,0x78,0x7C,
0xFF,0xFC,0x07,0xFE,0x0F,0xFC,0x78,0x1E,0x78,0x7C,0xFF,0xFC,0x03,0xFC,0x07,0xF8,
0x78,0x1F,0x78,0x3C,0xFF,0xFC,0x01,0xF8,0x03,0xF0,0x78,0x0F,0x78,0x3C,0xFF,0xFC,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const lv_img_dsc_t zenlogo = {
    .header.always_zero = 0,
    .header.w = 80,
    .header.h = 38,
    .data_size = 388,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = zenlogo_map,
};
