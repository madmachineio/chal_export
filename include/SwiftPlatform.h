/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFTPLATFORM_H_
#define _SWIFTPLATFORM_H_

void swiftHal_msSleep(int t);
void swiftHal_usWait(int t);
long long swiftHal_getUpTimeInMs(void);
unsigned int swiftHal_getClockCycle(void);
unsigned int swiftHal_computeNanoseconds(unsigned int);
void swiftHal_randomGet(unsigned char *buf, int length);

#endif /*_SWIFTPLATFORM_H_*/