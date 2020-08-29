/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTTIMER_H_
#define _SWIFTTIMER_H_

typedef enum {
	oneShot, period
} TimerType;

void *swiftHal_timerInit(unsigned char timerType, int period);
int swiftHal_timerDeinit(void *timer);
int swiftHal_timerStart(void *timer);
int swiftHal_timerStop(void *timer);
int swiftHal_timerCount(void *timer);
int swiftHal_timerAddSwiftMember(void *timer, void *classPtr, void (*function)(void *));

#endif  /*_SWIFTTIMER_H_*/
