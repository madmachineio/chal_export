/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTDIGITALIO_H_
#define _SWIFTDIGITALIO_H_

typedef enum {
	D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13,
	D14, D15, D16, D17, D18, D19, D20, D21, D22, D23, D24, D25,
	D26, D27, D28, D29, D30, D31, D32, D33, D34, D35, D36, D37,
	D38, D39, D40, D41, D42, D43, D44, D45, RED, GREEN, BLUE,
	DigitalIOId_NUM
} DigitalIOId;

typedef enum {
	dirOutput = 1, dirInput
} DigitalIODirection;

typedef enum {
	pushPull = 1, openDrain
} DigitalOutMode;

typedef enum {
	pullDown = 1, pullUp, pullNone
} DigitalInMode;

typedef enum {
	risingEdge = 1, fallingEdge, bothEdge, highLevel, lowLevel
} DigitalIOInterruptMode;

typedef enum {
	callbackDisable = 0, callbackEnable = 1
} DigitalIOInterruptState;


void *swiftHal_gpioInit(unsigned char id, unsigned char direction, unsigned char iomode);
int swiftHal_gpioDeinit(void *gpio);
int swiftHal_gpioConfig(void *gpio, unsigned char direction, unsigned char iomode);
int swiftHal_gpioInterruptConfig(void *gpio, unsigned char interruptMode, unsigned char interruptState);
int swiftHal_gpioWrite(void *gpio, int level);
int swiftHal_gpioRead(void *gpio);
int swiftHal_gpioAddCallback(void *gpio, void *classPtr, void (*function)(void *));
int swiftHal_gpioRemoveCallback(void *gpio);
int swiftHal_gpioEnableCallback(void *gpio);
int swiftHal_gpioDisableCallback(void *gpio);
int swiftHal_gpioAddSwiftMember(void *gpio, void *classPtr, void (*function)(void *));

#endif /* _SWIFTDIGITALIO_H_ */

