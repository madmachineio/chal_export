/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Frank Li(lgl88911@163.com)
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTRGBLC_H_
#define _SWIFTRGBLC_H_

enum {
	SWIFTRGBLCD_PANEL_FIRE,
	SWIFTRGBLCD_PANEL_ATOM,
	SWIFTRGBLCD_PANEL_NUM
};

enum {
	SWIFTRGBLCD_PIXEL_FORMAT_RGB_888,
	SWIFTRGBLCD_PIXEL_FORMAT_ARGB_8888,
	SWIFTRGBLCD_PIXEL_FORMAT_RGB_565,
	SWIFTRGBLCD_PIXEL_FORMAT_RGB_8RAW,
};

int swiftHal_RGBLCDInit(int panel);
int swiftHal_RGBLCDDeInit(void);
int swiftHal_RGBLCDGetPanelParam(int *width, int *heigh, int *colorformat, int *bpp);
int swiftHal_RGBLCDStart(void *buf, u32_t size);
int swiftHal_RGBLCDStop(void);
int swiftHal_RGBLCDUpdate(void *buf, u32_t size);
int swiftHal_RGBLCDBlanking(int onoff);

#endif /* _SWIFTRGBLC_H_ */

