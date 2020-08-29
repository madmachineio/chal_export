/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTPWMOUT_H_
#define _SWIFTPWMOUT_H_

typedef enum {
	PWMOutId0A, PWMOutId1A, PWMOutId2B, PWMOutId2A, PWMOutId3B, PWMOutId3A, PWMOutId4A,
	PWMOutId5A, PWMOutId6A, PWMOutId6B, PWMOutId7A, PWMOutId7B, PWMOutId8A, PWMOutId8B,
	PWMOutId_NUM
} PWMOutId;

void *swiftHal_PWMOutInit(unsigned char id);
int swiftHal_PWMOutDeinit(void *pwm);
int swiftHal_PWMOutSetUsec(void *pwm, int period, int pulse);
int swiftHal_PWMOutSuspend(void *pwm);
int swiftHal_PWMOutResume(void *pwm);

#endif /*_SWIFTPWMOUT_H_*/