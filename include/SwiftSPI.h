/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTSPI_H_
#define _SWIFTSPI_H_

typedef enum {
	SPIId0, SPIId1, SPIId_NUM
} SPIId;

void *swiftHal_spiInit(unsigned char id, int speed, void (*w_nodify)(void *), void (*r_nodify)(void *));
int swiftHal_spiDeinit(void *spi);
int swiftHal_spiWrite(void *spi, const unsigned char *buf, int length);
int swiftHal_spiRead(void *spi, unsigned char *buf, int length);
int swiftHal_spiAsyncWrite(void *spi, const unsigned char *buf, int length);
int swiftHal_spiAsyncRead(void *spi, unsigned char *buf, int length);

#endif /*_SWIFTSPI_H_*/







