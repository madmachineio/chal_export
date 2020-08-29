/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTCOUNTER_H_
#define _SWIFTCOUNTER_H_

typedef enum {
	CounterId0, CounterId1, CounterId2, CounterId3,
	CounterId_NUM
} CounterId;

typedef enum {
	risingEdge = 1, bothEdge
} CounterMode;

void *swiftHal_CounterInit(unsigned char id, unsigned char trigger);
int swiftHal_CounterDeinit(void *counter);
int swiftHal_CounterRead(void *counter);
int swiftHal_CounterStart(void *counter);
int swiftHal_CounterStop(void *counter);
int swiftHal_CounterClear(void *counter);

#endif
