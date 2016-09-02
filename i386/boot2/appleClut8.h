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

#ifndef __BOOT2_APPLECLUT8_H
#define __BOOT2_APPLECLUT8_H

static const unsigned char appleClut8[ 256 * 3 ] =
{
	0xff,0xff,0xff, 0xfe,0xfe,0xfe, 0xfd,0xfd,0xfd, 0xb8,0x27,0x2b,
	0xfc,0xfc,0xfc, 0xff,0xff,0x00, 0xfa,0xfa,0xfa, 0xf9,0xf9,0xf9,
	0xf8,0xf8,0xf8, 0xf7,0xf7,0xf7, 0xf6,0xf6,0xf6, 0xf5,0xf5,0xf5,
	0xf4,0xf4,0xf4, 0xf2,0xf2,0xf2, 0xf1,0xf1,0xf1, 0x00,0x00,0x00,
	0xef,0xef,0xef, 0xee,0xee,0xee, 0xed,0xed,0xed, 0xeb,0xeb,0xeb,
	0xe8,0xe8,0xe8, 0xe7,0xe7,0xe7, 0xc9,0x38,0x3e, 0xe5,0xe5,0xe5,
	0xff,0x00,0xff, 0xfb,0xfb,0xfb, 0xde,0x6c,0x72, 0xe0,0xe0,0xe0,
	0xe8,0x86,0x90, 0xde,0xde,0xde, 0xdd,0xdd,0xdd, 0xd3,0x7e,0x8d,
	0xd9,0xd9,0xd9, 0xf3,0x96,0xa6, 0xb1,0x1c,0x39, 0xff,0x00,0x00,
	0xbe,0x5e,0x72, 0xd3,0xd3,0xd3, 0xc6,0x2e,0x67, 0xd1,0xd1,0xd1,
	0xa3,0x06,0x45, 0xce,0xce,0xce, 0xcc,0xcc,0xff, 0xcc,0xcc,0xcc,
	0xc6,0x8f,0xa7, 0xe1,0xd3,0xd9, 0xce,0x9e,0xb4, 0xca,0xca,0xca,
	0xbf,0x3f,0x7d, 0xc9,0xc9,0xc9, 0xf4,0x89,0xbe, 0xc6,0xc6,0xc6,
	0xd6,0x51,0x97, 0xc9,0x2c,0x84, 0x96,0x1a,0x6a, 0xc2,0xc2,0xc2,
	0xf3,0x6f,0xc6, 0xe5,0x4c,0xbb, 0xb7,0x5a,0x9c, 0xbf,0xbf,0xbf,
	0xbe,0xbe,0xbe, 0xbd,0xbd,0xbd, 0xb8,0x21,0xa2, 0xd3,0x44,0xc0,
	0xc2,0x66,0xb7, 0xf4,0x66,0xe6, 0xfc,0x73,0xfd, 0xb9,0xb9,0xb9,
	0xea,0xdf,0xea, 0xd4,0x71,0xd5, 0xf9,0x8b,0xff, 0xf5,0xad,0xff,
	0xbc,0x92,0xc2, 0xc7,0x4f,0xd9, 0xa0,0x44,0xaf, 0xc8,0x8c,0xd5,
	0xd7,0x74,0xf7, 0xb4,0xb4,0xb4, 0xda,0x95,0xf9, 0xed,0xcb,0xff,
	0xb2,0xb2,0xb2, 0xa1,0x61,0xd7, 0xb2,0x85,0xe2, 0x59,0x26,0x9c,
	0x7c,0x51,0xcc, 0xb0,0xb0,0xb0, 0xb4,0x8e,0xfc, 0xd5,0xc0,0xff,
	0x5d,0x32,0xcc, 0x7b,0x5c,0xe5, 0xc0,0xb0,0xfd, 0x60,0x53,0xad,
	0x12,0x0c,0x7e, 0x2e,0x29,0x99, 0x79,0x78,0xe9, 0x5b,0x5c,0xd0,
	0x69,0x6a,0xcc, 0x93,0x94,0xf8, 0x92,0x92,0xc3, 0x41,0x44,0xba,
	0xa8,0xab,0xff, 0xa3,0xa3,0xa3, 0xdb,0xdd,0xea, 0x31,0x49,0xaa,
	0x70,0x8f,0xf9, 0x48,0x66,0xc1, 0x5c,0x7e,0xe9, 0xe2,0xe5,0xeb,
	0xb0,0xcd,0xff, 0x6c,0x89,0xb7, 0x34,0x65,0xaf, 0x8c,0xb9,0xff,
	0x37,0x79,0xd4, 0x5a,0x99,0xea, 0x0e,0x4c,0x95, 0x79,0xb9,0xff,
	0x8a,0xa3,0xbc, 0x20,0x61,0x9d, 0x8f,0xae,0xca, 0x0a,0x60,0xa8,
	0x3f,0x94,0xd9, 0x63,0xb5,0xf9, 0xe2,0xe8,0xed, 0x28,0x6a,0x99,
	0x55,0xb2,0xe7, 0x32,0x89,0xa9, 0xcf,0xda,0xde, 0x29,0xa1,0xc7,
	0x86,0xa9,0xb4, 0x00,0x5f,0x79, 0x0c,0x77,0x8e, 0x12,0x8f,0xab,
	0x41,0xba,0xd5, 0x24,0x82,0x83, 0x2c,0xc4,0xc3, 0x1a,0xab,0xa6,
	0x4b,0xa8,0xa2, 0x0a,0x93,0x85, 0x0d,0xa5,0x96, 0x26,0xbc,0xac,
	0x04,0x81,0x72, 0x19,0xb3,0x86, 0x29,0xc1,0x94, 0x21,0x9c,0x71,
	0x02,0x8c,0x50, 0x35,0xd0,0x89, 0x46,0xa5,0x76, 0x02,0x7d,0x39,
	0x29,0xc9,0x71, 0x57,0xd6,0x8f, 0xa2,0xb5,0xaa, 0x01,0x88,0x2a,
	0x74,0xbe,0x8a, 0x19,0xb6,0x47, 0x2d,0xc6,0x51, 0x38,0xde,0x5d,
	0x4c,0xf4,0x6f, 0x91,0x9c,0x93, 0x00,0x8e,0x19, 0x10,0xaf,0x28,
	0xe3,0xe3,0xe3, 0x08,0xa1,0x1a, 0x59,0xc2,0x61, 0xf0,0xf0,0xf0,
	0x8f,0x9c,0x90, 0x23,0xce,0x2a, 0x12,0xba,0x17, 0x01,0x8a,0x02,
	0x03,0x9a,0x02, 0x40,0xe4,0x40, 0x08,0xb2,0x05, 0x13,0xcc,0x0f,
	0x36,0xd7,0x32, 0x28,0xe9,0x1f, 0x53,0xfb,0x4c, 0x6f,0xaf,0x6a,
	0x71,0xe0,0x67, 0x32,0xc0,0x12, 0x29,0xa5,0x08, 0x5c,0xdd,0x35,
	0x00,0xff,0xff, 0x63,0xc8,0x45, 0x86,0xfd,0x5b, 0x71,0xf6,0x39,
	0x55,0xcc,0x15, 0x00,0xff,0x00, 0x90,0xca,0x6e, 0x43,0xa7,0x01,
	0x8d,0xe4,0x37, 0xb3,0xf0,0x64, 0x85,0x8e,0x7a, 0xb0,0xfa,0x4d,
	0xd6,0xd6,0xd6, 0x88,0xd0,0x1a, 0x6a,0xa7,0x03, 0x98,0xbf,0x41,
	0xcd,0xf8,0x51, 0x94,0xa4,0x55, 0x91,0xb0,0x0a, 0xda,0xf1,0x3c,
	0xba,0xca,0x53, 0xb9,0xc3,0x28, 0xb1,0xba,0x12, 0xd2,0xd9,0x26,
	0xe8,0xec,0x2d, 0x98,0x96,0x02, 0xad,0xad,0x5c, 0xe2,0xd8,0x38,
	0xd9,0xc4,0x38, 0xa8,0x9a,0x50, 0x00,0x00,0xff, 0xbe,0xae,0x5e,
	0x9a,0x98,0x8e, 0xac,0x8d,0x0d, 0xc5,0xa0,0x2b, 0xdb,0xb5,0x48,
	0xdd,0x00,0x00, 0x9c,0x6d,0x03, 0xd4,0xa8,0x47, 0xb7,0x71,0x17,
	0xdc,0xa1,0x5a, 0xb9,0x9c,0x7c, 0xb4,0xab,0xa2, 0x9e,0x4b,0x01,
	0xc8,0x78,0x35, 0xd2,0x8d,0x51, 0xad,0x52,0x0f, 0x00,0xbb,0x00,
	0xb2,0x66,0x38, 0xb1,0xa6,0x9f, 0xb1,0x87,0x6f, 0xa4,0x34,0x03,
	0xee,0x9e,0x85, 0xc9,0x73,0x5a, 0xe6,0x94,0x7c, 0xa9,0x22,0x06,
	0xdb,0x87,0x74, 0xb0,0x2e,0x15, 0xb7,0x5a,0x50, 0xb2,0x42,0x3b,
	0xcd,0x73,0x6e, 0xd9,0x58,0x58, 0xac,0xac,0xac, 0xa0,0xa0,0xa0,
	0x9a,0x9a,0x9a, 0x92,0x92,0x92, 0x8e,0x8e,0x8e, 0xbb,0xbb,0xbb,
	0x81,0x81,0x81, 0x88,0x88,0x88, 0x77,0x77,0x77, 0x55,0x55,0x55,
	0x44,0x44,0x44, 0x22,0x22,0x22, 0x7b,0x7b,0x7b, 0x00,0x00,0x00
};

#endif /* !__BOOT2_APPLECLUT8_H */
