/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTI2C_H_
#define _SWIFTI2C_H_

typedef enum {
	I2CId0,
	I2CId1,
	I2CId_NUM
} I2CId;

typedef enum {
	speedStandard = 100000, speedFast = 400000, speedFastPlus = 1000000,
} I2CSpeed;



void *swiftHal_i2cInit(I2CId id);
int swiftHal_i2cDeinit(void *i2c);
int swiftHal_i2cConfig(void *i2c, unsigned int speed);
int swiftHal_i2cWrite(void *i2c, unsigned char address, const unsigned char *buf, int length);
int swiftHal_i2cRead(void *i2c, unsigned char address, unsigned char *buf, int length);
int swiftHal_i2cWriteRead(void *i2c, unsigned char address, unsigned char *wBuf, int wLen, unsigned char *rBuf, int rLen);

#endif /* _SWIFTI2C_H_ */

