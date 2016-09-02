/*
 * Copyright (c) 1999 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * Portions Copyright (c) 1999 Apple Computer, Inc.  All Rights
 * Reserved.  This file contains Original Code and/or Modifications of
 * Original Code as defined in and that are subject to the Apple Public
 * Source License Version 1.1 (the "License").  You may not use this file
 * except in compliance with the License.  Please obtain a copy of the
 * License at http://www.apple.com/publicsource and read it before using
 * this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON- INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
#define SPIN_WIDTH 16

#define BIG_WIDTH	353
#define BIG_HEIGHT	264
#define BIG_DY	0

static char waitCursors_1[ SPIN_WIDTH * SPIN_WIDTH ] = {

        0xf9,0xf9,0x56,0xf9,0xfa,0x2c,0x32,0x2d,0x57,0x51,0x56,0x56,0x56,0xf9,0xf9,0x56,
        0x56,0xfa,0x56,0x56,0x2c,0x5e,0x58,0x5f,0x58,0x7d,0x52,0x57,0x56,0x56,0xf9,0xf9,
        0xf9,0x56,0xf9,0x33,0x3a,0x34,0x5f,0x59,0x83,0x52,0x7c,0x76,0x76,0x7b,0x5d,0x56,
        0xf9,0x56,0x0f,0x39,0x33,0x3a,0x34,0x59,0x58,0x58,0x52,0x76,0x4b,0x75,0x7b,0x56,
        0xf9,0x0e,0x15,0x0f,0x39,0x34,0x5e,0x59,0x83,0x7c,0x7c,0x4b,0x75,0x6f,0x7b,0x56,
        0x56,0x39,0x0e,0x14,0x0e,0x39,0x33,0x57,0x57,0x7c,0x4b,0x6f,0x4a,0x75,0x6e,0xa6,
        0x32,0x38,0x3f,0x39,0x39,0x0e,0x5d,0x81,0x81,0x57,0x75,0x6f,0x75,0x6e,0x75,0xa6,
        0x31,0x3e,0x38,0x3e,0x38,0x38,0x7b,0x81,0x56,0x56,0x75,0x74,0x6e,0x74,0x74,0xa5,
        0x38,0x3f,0x63,0x63,0x69,0x62,0x81,0x7b,0x56,0x56,0xa5,0x99,0x9f,0x99,0x9f,0xa6,
        0x31,0x69,0x62,0x68,0x62,0x8d,0x5c,0x5c,0x56,0xa5,0xc2,0xc2,0x98,0xc3,0x98,0xac,
        0x5c,0x62,0x69,0x68,0x8c,0x62,0x86,0x7f,0x7f,0x79,0xa4,0xc2,0xc9,0x9e,0xc9,0xac,
        0x56,0x62,0x62,0x8c,0x62,0x85,0x5b,0x7e,0x78,0x7f,0x9d,0xc8,0x9e,0xc8,0xc9,0x81,
        0xf9,0x81,0x8c,0x62,0x8c,0x85,0x85,0x7e,0x7f,0x79,0xa3,0x9d,0xa4,0xc8,0xac,0x56,
        0xf9,0xf9,0x80,0x86,0x5b,0x85,0x5a,0x7e,0x54,0x7f,0x79,0xa3,0x9d,0xd0,0x56,0xf9,
        0xf9,0xf9,0x56,0x81,0x86,0x5b,0x85,0x7e,0x7e,0x78,0xa3,0xa4,0xac,0x56,0xfa,0xf9,
        0xf9,0x56,0xf9,0xf9,0x56,0xab,0xa5,0x80,0x80,0xab,0xac,0x81,0x56,0xf9,0x56,0xf9,
};

struct bitmap wait1_bitmap = {
0,	// packed
256,	// bytes_per_plane
16,	// bytes_per_row
8,	// bits per pixel
16,	// width
16,	// height
{  256,  0, },
{  waitCursors_1,  0 }
};

static char waitCursors_2[ SPIN_WIDTH * SPIN_WIDTH ] = {

        0xf9,0xf9,0x56,0xf9,0xfa,0xf9,0x2c,0x2c,0x2d,0x2c,0x56,0x56,0x56,0xf9,0xf9,0x56,
        0x56,0xfa,0x56,0x56,0x08,0x09,0x09,0x2d,0x2d,0x58,0x52,0x7b,0x56,0x56,0xf9,0xf9,
        0xf9,0x56,0x07,0x33,0x33,0x09,0x09,0x2d,0x2e,0x52,0x7d,0x7d,0xa7,0x7b,0x5d,0x56,
        0xf9,0x56,0x39,0x3a,0x33,0x0f,0x08,0x09,0x2d,0x58,0x76,0xa7,0xa1,0xa0,0x81,0x56,
        0xf9,0x39,0x64,0x3a,0x3a,0x33,0x0f,0x09,0x58,0x7c,0xa7,0xa1,0xa1,0xa0,0xa6,0x7b,
        0x56,0x6a,0x64,0x64,0x3a,0x3a,0x0f,0x2c,0x2d,0x7d,0xa1,0xa0,0x9a,0xa0,0x99,0xac,
        0x32,0x64,0x6a,0x6a,0x6a,0x40,0x5d,0x81,0x81,0x7b,0xa1,0x9a,0xa0,0x75,0x9f,0xa6,
        0x32,0x69,0x63,0x6a,0x64,0x6a,0x7b,0x81,0x56,0x56,0x75,0x74,0x6e,0x74,0x6e,0x9f,
        0x5c,0x63,0x69,0x63,0x69,0x62,0x81,0x7b,0x56,0x56,0x74,0x6d,0x74,0x6e,0x74,0x9f,
        0x31,0x62,0x3e,0x3e,0x37,0x3d,0x55,0x5c,0x50,0xa5,0x73,0x73,0x6d,0x73,0x49,0xa5,
        0x5c,0x37,0x3e,0x37,0x3d,0x30,0x5b,0x85,0xd4,0xa4,0xa4,0x97,0x97,0x6d,0x73,0xac,
        0x56,0x37,0x36,0x37,0x30,0x36,0x5a,0x85,0xaa,0xce,0x9d,0x9e,0x73,0x73,0x74,0x81,
        0xf9,0x81,0x37,0x30,0x36,0x5b,0x85,0xa9,0xd4,0xce,0xce,0x9e,0xa4,0x9e,0xac,0x56,
        0xf9,0xf9,0x5c,0x36,0x30,0x61,0x7f,0xa9,0xa9,0xce,0xc8,0xa4,0x9e,0xd0,0x56,0xf9,
        0xf9,0xf9,0x56,0x81,0x86,0x5b,0x85,0xaa,0xd4,0xaa,0xcf,0xcf,0xd6,0x56,0xfa,0xf9,
        0xf9,0x56,0xf9,0xf9,0x7b,0xac,0xab,0xab,0xab,0xd0,0xac,0x81,0x56,0xf9,0x56,0xf9,
};

struct bitmap wait2_bitmap = {
0,	// packed
256,	// bytes_per_plane
16,	// bytes_per_row
8,	// bits per pixel
16,	// width
16,	// height
{  256,  0, },
{  waitCursors_2,  0 }
};

static char waitCursors_3[ SPIN_WIDTH * SPIN_WIDTH ] = {

        0xf9,0xf9,0x56,0xf9,0xfa,0x2c,0x2c,0x2c,0x2c,0x2c,0x56,0x56,0x56,0xf9,0xf9,0x56,
        0x56,0xfa,0x56,0x56,0x33,0x5e,0x34,0x2d,0x27,0x2d,0x26,0x50,0x56,0x56,0xf9,0xf9,
        0xf9,0x56,0x32,0x65,0x65,0x58,0x5e,0x2e,0x2d,0x27,0x2d,0x51,0x76,0x7b,0x5d,0x56,
        0xf9,0x56,0x5e,0x65,0x5f,0x5e,0x34,0x34,0x27,0x27,0x27,0x76,0x75,0x76,0x81,0x56,
        0x56,0x39,0x6a,0x64,0x6b,0x65,0x5f,0x34,0x2d,0x27,0x51,0x75,0xa0,0xa0,0xa6,0x56,
        0xf9,0x64,0x39,0x64,0x64,0x65,0x5e,0x33,0x26,0x51,0x75,0x9a,0x9a,0xc4,0xa0,0xac,
        0x32,0x39,0x3f,0x3f,0x64,0x40,0x5d,0x81,0x81,0x57,0xa0,0xa0,0xca,0xa0,0xca,0xa6,
        0xf7,0x38,0x14,0x38,0x38,0x38,0x7b,0x81,0x56,0x56,0xa0,0xc4,0xc3,0xc4,0x9f,0xca,
        0x32,0x13,0x14,0x13,0x13,0x13,0x81,0x7b,0x56,0x56,0x9f,0x9f,0x9f,0x9f,0xc3,0xca,
        0xf7,0x13,0x0d,0x13,0x13,0x3d,0x5c,0x5c,0x50,0x80,0x6d,0x97,0x98,0x9e,0x98,0xac,
        0x81,0x13,0x3d,0x37,0x61,0x61,0x8c,0xaa,0xaa,0x72,0x73,0x73,0x97,0x73,0x9e,0xac,
        0x56,0x37,0x37,0x61,0x61,0x86,0xaa,0xaa,0xa3,0x79,0x72,0x72,0x6c,0x73,0x9e,0x81,
        0xf9,0x5d,0x62,0x61,0x8c,0x8c,0xb1,0xaa,0xaa,0x7f,0x79,0x4e,0x73,0x73,0xac,0x56,
        0xf9,0xf9,0x80,0x86,0x86,0xb0,0xaa,0xaa,0xa3,0xa3,0x78,0x78,0x72,0xac,0x56,0xf9,
        0xf9,0xf9,0x56,0x81,0xb1,0xaa,0xb0,0xaa,0xaa,0x7f,0xa3,0xa4,0xac,0x56,0xfa,0xf9,
        0xf9,0x56,0xf9,0xf9,0x56,0x87,0xac,0xab,0xab,0xac,0xa5,0x81,0x56,0xf9,0x56,0xf9
};

struct bitmap wait3_bitmap = {
0,	// packed
256,	// bytes_per_plane
16,	// bytes_per_row
8,	// bits per pixel
16,	// width
16,	// height
{  256,  0, },
{  waitCursors_3,  0 }
};

