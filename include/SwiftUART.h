/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTUART_H_
#define _SWIFTUART_H_

typedef enum {
	parityNone, parityOdd, parityEven
} Parity;

typedef enum {
	stopBits1, stopBits2
} StopBits;

typedef enum {
	dataBits8
} DataBits;

typedef enum {
	UART0Id, UART1Id, UART2Id, UART3Id, UARTId_NUM
} UARTId;

typedef struct {
	unsigned char parity;
	unsigned char stopBits;
	unsigned char dataBits;
	int baudRate;
	int readBufLength;
} UARTConfig;

void *swiftHal_uartInit(unsigned char id, const UARTConfig *cfg);
int swiftHal_uartDeinit(void *uart);
int swiftHal_uartSetBaudRate(void *uart, int baudrate);
int swiftHal_uartGetBaudRate(void *uart);
int swiftHal_uartSetParity(void *uart, unsigned char parity);
int swiftHal_uartGetParity(void *uart);
int swiftHal_uartSetStopBits(void *uart, unsigned char stopBits);
int swiftHal_uartGetStopBits(void *uart);
int swiftHal_uartSetDataBits(void *uart, unsigned char dataBits);
int swiftHal_uartGetDataBits(void *uart);
int swiftHal_uartWriteChar(void *uart, unsigned char byte);
int swiftHal_uartWrite(void *uart, const char *buf, int length);
int swiftHal_uartReadChar(void *uart, unsigned char *c, int timeout);
int swiftHal_uartRead(void *uart, unsigned char *buf, int length, int timeout);
int swiftHal_uartCount(void *uart);
int swiftHal_uartClearBuffer(void *uart);

#endif /*_SWIFTUART_H_*/
