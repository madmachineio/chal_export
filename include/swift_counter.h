/*
 * @Copyright (c) 2020, MADMACHINE LIMITED
 * @Author: Andy Liu,Frank Li
 * @SPDX-License-Identifier: MIT
 */

#ifndef _SWIFT_COUNTER_H_
#define _SWIFT_COUNTER_H_

/** @brief counter id number. */
enum swift_counter_id {
	SWIFT_COUNTER_ID_0,
	SWIFT_COUNTER_ID_1,
	SWIFT_COUNTER_ID_2,
	SWIFT_COUNTER_ID_3,
	SWIFT_COUNTER_ID_NUM,
} CounterId;

/** @brief counter work mode. */
enum swift_counter_mode {
	SWIFT_COUNTER_RISING_EDGE       = 1,
	SWIFT_COUNTER_BOTH_EDGE         = 2,
};

typedef enum swift_counter_mode swift_counter_mode_t;

/**
 * @brief Open counter
 *
 * @param id Counter id
 * @param mode Count mode
 * - SWIFT_COUNTER_RISING_EDGE = Count rising edges
 * - SWIFT_COUNTER_BOTH_EDGE = Count rising and falling edges
 * @return Counter handle
 */
void *swifthal_counter_open(int id, swift_counter_mode_t mode);

/**
 * @brief Close counter
 *
 * @param counter Counter handle
 *
 * @retval 0 If successful.
 * @retval Negative errno code if failure.
 */
int swifthal_counter_close(void *counter);

/**
 * @brief Read count result
 *
 * @param counter Counter Handle
 *
 * @retval Positive indicates the count result.
 * @retval Negative errno code if failure.
 */
int swifthal_counter_read(void *counter);

/**
 * @brief Start count
 *
 * @param counter Counter handle
 *
 * @retval 0 If successful.
 * @retval Negative errno code if failure.
 */
int swifthal_counter_start(void *counter);

/**
 * @brief Stop count
 *
 * @param counter Counter handle
 *
 * @retval 0 If successful.
 * @retval Negative errno code if failure.
 */
int swifthal_counter_stop(void *counter);

/**
 * @brief Reset count result to 0
 *
 * @param counter Counter handle
 *
 * @retval 0 If successful.
 * @retval Negative errno code if failure.
 */
int swifthal_counter_clear(void *counter);

#endif /*_SWIFT_COUNTER_H_*/
