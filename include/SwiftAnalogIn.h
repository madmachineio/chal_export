/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */


#ifndef _SWIFTANALOGIN_H_
#define _SWIFTANALOGIN_H_

typedef enum {
	AnalogInId0, AnalogInId1, AnalogInId2, AnalogInId3, AnalogInId4, AnalogInId5,
	AnalogInId6, AnalogInId7, AnalogInId8, AnalogInId9, AnalogInId10, AnalogInId11,
	AnalogInId_NUM
} AnalogInId;

typedef struct {
	int maxRawValue;
	float refVoltage;
} AnalogInInfo;

void *swiftHal_AnalogInInit(unsigned char id);
int swiftHal_AnalogInDeinit(void *ain);
int swiftHal_AnalogInRead(void *ain);
int swiftHal_AnalogGetInfo(void *ain, AnalogInInfo *info);

#endif /*_SWIFTANALOGIN_H_*/
