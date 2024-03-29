/* linux/drivers/video/samsung/ea8868_gamma.h
 *
 * Gamma level definitions.
 *
 * Copyright (c) 2009 Samsung Electronics
 * Aakash Manik <aakash.manik@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef _ea8868_BRIGHTNESS_H
#define _ea8868_BRIGHTNESS_H

int _ea8868_gamma_ctl(const unsigned int *gamma);
int ea8868_gamma_ctl(int gamma);
int ea8868_19gamma_ctl(int gamma);
int ea8868_set_elvss(int brightness);
int ea8868_set_acl(int brightness);
int ea8868_ldi_init(void);
int ea8868_ldi_enable(void);
int ea8868_ldi_disable(void);



#define MAX_GAMMA_LEVEL		25
#define GAMMA_TABLE_COUNT		21


/* OCTA 4.52 XVGA - gamma value: 2.2 */
static const unsigned int ea8868_22_300[] = {

	0x00, 0xbf, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xe8, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xe6, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_290[] = {
	0x00, 0xc0, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xe1, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xe3, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_280[] = {
	0x00, 0xbe, 0xaa, 0x8d, 0xc1, 0xab, 0xab, 
	0x55, 0x00, 0xde, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xe0, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_270[] = {
	0x00, 0xbb, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xdb, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xdd, 0xa9, 0x8c, 0xbf, 
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_260[] = {
	0x00, 0xb8, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xd7, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xd9, 0xa9, 0x8c, 0xbf, 
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_250[] = {
	0x00, 0xb5, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xd3, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xd6, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_240[] = {
	0x00, 0xb2, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xd0, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xd2, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_230[] = {
	0x00, 0xaf, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xcc, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xce, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_220[] = {
	0x00, 0xab, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xc8, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xca, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_210[] = {
	0x00, 0xa8, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xc4, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xc6, 0xa9, 0x8c, 0xbf, 
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_200[] = {
	0x00, 0xa4, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xc0, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xc2, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_190[] = {
	0x00, 0xa1, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xbc, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xbe, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_180[] = {
	0x00, 0x9e, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xb8, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xba, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_170[] = {
	0x00, 0x9a, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xb4, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xb6, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_160[] = {
	0x00, 0x97, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xb0, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xb2, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_150[] = {
	0x00, 0x93, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xab, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xad, 0xa9, 0x8c, 0xbf, 
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_140[] = {
	0x00, 0x8f, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xa7, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xa9, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_130[] = {
	0x00, 0x8b, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0xa2, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0xa4, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_120[] = {
	0x00, 0x87, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x9d, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x9f, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_110[] = {
	0x00, 0x83, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x99, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x9b, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_100[] = {
	0x00, 0x7f, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x94, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x96, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_90[] = {
	0x00, 0x7a, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x8e, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x90, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_80[] = {
	0x00, 0x75, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x88, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x8a, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_70[] = {
	0x00, 0x6f, 0xaa, 0x8d, 0xc1, 0xab, 0xab,
	0x55, 0x00, 0x81, 0xa7, 0x8c, 0xbf, 0xab,
	0xa9, 0x55, 0x00, 0x83, 0xa9, 0x8c, 0xbf,
	0xa9, 0xa6, 0x55,
};

static const unsigned int ea8868_22_60[] = {
	0x00, 0x6a, 0xb0, 0x96,	0xc5, 0xb3,	0xbc,
	0x55, 0x00,	0x7b, 0xad,	0x94, 0xc5,	0xb2,
	0xbd, 0x55,	0x00, 0x7d,	0xaf, 0x94,	0xc4,
	0xb1, 0xba,	0x55,
};

static const unsigned int ea8868_22_50[] = {
	0x00, 0x64,	0xb0, 0x96,	0xc5, 0xb3,	0xbc,
	0x55, 0x00,	0x74, 0xad,	0x94, 0xc5,	0xb2,
	0xbd, 0x55,	0x00, 0x76, 0xaf, 0x94, 0xc4,
	0xb1, 0xba,	0x55,
};


static const unsigned int ea8868_22_40[] = {
	0x00, 0x5d, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x6c, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x6e,	0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};


static const unsigned int ea8868_22_30_dimming[] = {
	0x00, 0x54, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x62, 0xad, 0x94, 0xc5, 0xb2, 
	0xbd, 0x55, 0x00, 0x63, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};


#if 1
/*  OCTA 4.52 XVGA - gamma value: 1.9 */
static const unsigned int ea8868_19_300[] = {
	0x00, 0xbf, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xe8, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xe6, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_290[] = {
	0x00, 0xc0, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xe1, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xe3, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_280[] = {
	0x00, 0xbe, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xde, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xe0, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_270[] = {
	0x00, 0xbb, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xdb, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xdd, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_260[] = {
	0x00, 0xb8, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xd7, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xd9, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_250[] = {
	0x00, 0xb5, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xd3, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xd6, 0xaf, 0x95, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_240[] = {
	0x00, 0xb2, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xd0, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xd2, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_230[] = {
	0x00, 0xaf, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xcc, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xce, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_220[] = {
	0x00, 0xab, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xc8, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xca, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_210[] = {
	0x00, 0xa8, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xc4, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xc6, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_200[] = {
	0x00, 0xa4, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xc0, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xc2, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_190[] = {
	0x00, 0xa1, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xbc, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xbe, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_180[] = {
	0x00, 0x9e, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xb8, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xba, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};


static const unsigned int ea8868_19_170[] = {
	0x00, 0x9a, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xb4, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xb6, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_160[] = {
	0x00, 0x97, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xb0, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xb2, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_150[] = {
	0x00, 0x93, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xab, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xad, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_140[] = {
	0x00, 0x8f, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xa7, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xa9, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_130[] = {
	0x00, 0x8b, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0xa2, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0xa4, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_120[] = {
	0x00, 0x87, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x9d, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x9f, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_110[] = {
	0x00, 0x83, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x99, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x9b, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_100[] = {
	0x00, 0x7f, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x94, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x96, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};


static const unsigned int ea8868_19_90[] = {
	0x00, 0x7a, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x8e, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x90, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55
};

static const unsigned int ea8868_19_80[] = {
	0x00, 0x75, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x88, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x8a, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_70[] = {
	0x00, 0x6f, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x81, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x83, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};


static const unsigned int ea8868_19_60[] = {
	0x00, 0x6a, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x7b, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x7d, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_50[] = {
	0x00, 0x64, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x74, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x76, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_40[] = {
	0x00, 0x5d, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x6c, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x6e, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};

static const unsigned int ea8868_19_30[] = {
	0x00, 0x54, 0xb0, 0x96, 0xc5, 0xb3, 0xbc,
	0x55, 0x00, 0x62, 0xad, 0x94, 0xc5, 0xb2,
	0xbd, 0x55, 0x00, 0x63, 0xaf, 0x94, 0xc4,
	0xb1, 0xba, 0x55,
};
#endif

struct ea8868_gamma {
	unsigned int *gamma_22_table[MAX_GAMMA_LEVEL];
	unsigned int *gamma_19_table[MAX_GAMMA_LEVEL];
};

static struct ea8868_gamma ea8868_gamma_table = {
	.gamma_22_table[0] = (unsigned int *)&ea8868_22_30_dimming,
	.gamma_22_table[1] = (unsigned int *)&ea8868_22_40,
	.gamma_22_table[2] = (unsigned int *)&ea8868_22_70,
	.gamma_22_table[3] = (unsigned int *)&ea8868_22_90,
	.gamma_22_table[4] = (unsigned int *)&ea8868_22_100,
	.gamma_22_table[5] = (unsigned int *)&ea8868_22_110,
	.gamma_22_table[6] = (unsigned int *)&ea8868_22_120,
	.gamma_22_table[7] = (unsigned int *)&ea8868_22_130,
	.gamma_22_table[8] = (unsigned int *)&ea8868_22_140,
	.gamma_22_table[9] = (unsigned int *)&ea8868_22_150,
	.gamma_22_table[10] = (unsigned int *)&ea8868_22_160,
	.gamma_22_table[11] = (unsigned int *)&ea8868_22_170,
	.gamma_22_table[12] = (unsigned int *)&ea8868_22_180,
	.gamma_22_table[13] = (unsigned int *)&ea8868_22_190,
	.gamma_22_table[14] = (unsigned int *)&ea8868_22_200,
	.gamma_22_table[15] = (unsigned int *)&ea8868_22_210,
	.gamma_22_table[16] = (unsigned int *)&ea8868_22_220,
	.gamma_22_table[17] = (unsigned int *)&ea8868_22_230,
	.gamma_22_table[18] = (unsigned int *)&ea8868_22_240,
	.gamma_22_table[19] = (unsigned int *)&ea8868_22_250,
	.gamma_22_table[20] = (unsigned int *)&ea8868_22_260,
	.gamma_22_table[21] = (unsigned int *)&ea8868_22_270,
	.gamma_22_table[22] = (unsigned int *)&ea8868_22_280,
	.gamma_22_table[23] = (unsigned int *)&ea8868_22_290,
	.gamma_22_table[24] = (unsigned int *)&ea8868_22_300,


#if 1
	.gamma_19_table[0] = (unsigned int *)&ea8868_19_30,
	.gamma_19_table[1] = (unsigned int *)&ea8868_19_40,
	.gamma_19_table[2] = (unsigned int *)&ea8868_19_70,
	.gamma_19_table[3] = (unsigned int *)&ea8868_19_90,
	.gamma_19_table[4] = (unsigned int *)&ea8868_19_100,
	.gamma_19_table[5] = (unsigned int *)&ea8868_19_110,
	.gamma_19_table[6] = (unsigned int *)&ea8868_19_120,
	.gamma_19_table[7] = (unsigned int *)&ea8868_19_130,
	.gamma_19_table[8] = (unsigned int *)&ea8868_19_140,
	.gamma_19_table[9] = (unsigned int *)&ea8868_19_150,
	.gamma_19_table[10] = (unsigned int *)&ea8868_19_160,
	.gamma_19_table[11] = (unsigned int *)&ea8868_19_170,
	.gamma_19_table[12] = (unsigned int *)&ea8868_19_180,
	.gamma_19_table[13] = (unsigned int *)&ea8868_19_190,
	.gamma_19_table[14] = (unsigned int *)&ea8868_19_200,
	.gamma_19_table[15] = (unsigned int *)&ea8868_19_210,
	.gamma_19_table[16] = (unsigned int *)&ea8868_19_220,
	.gamma_19_table[17] = (unsigned int *)&ea8868_19_230,
	.gamma_19_table[18] = (unsigned int *)&ea8868_19_240,
	.gamma_19_table[19] = (unsigned int *)&ea8868_19_250,
	.gamma_19_table[20] = (unsigned int *)&ea8868_19_260,
	.gamma_19_table[21] = (unsigned int *)&ea8868_19_270,
	.gamma_19_table[22] = (unsigned int *)&ea8868_19_280,
	.gamma_19_table[23] = (unsigned int *)&ea8868_19_290,
	.gamma_19_table[24] = (unsigned int *)&ea8868_19_300,
#endif
};

#endif

