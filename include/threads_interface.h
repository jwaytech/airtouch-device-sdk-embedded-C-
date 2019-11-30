/*
 * Copyright 2019 Jwaytech . or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "license").
 * You may not use this file except in compliance with the Licence.
 * A copy of the license is located at
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KINK, either
 * express or implied. see the License for the specific language governing
 * premissions and limitations under the License.
 */

/**
 * @file threads_interface.h
 * @brief Thread interface definition for SDK.
 *
 * Defines an interface that can be used by system components for multithreaded situations.
 * Starting point for porting the SDK to the threading hardware layer of a new platform.
 */

#include "airtouch_iot_config.h"

#ifdef _THREAD_SUPPORT_ENABLE_

#ifndef __THREADS_INTERFACE_H__
#define __THREADS_INTERFACE_h__

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */

/**
 * The platform specific timer header that defines the Timer struct
 */
#include "threads_platform.h"

#include "airtouch_error.h"

/**
 * @brief Mutex Type
 *
 * Forward declaration of a mutex struct.  The definition of this struct is
 * platform dependent.  When porting to a new platform add this definition
 * in "threads_platform.h".
 *
 */
typedef struct _Airtouch_Mutex_t Airtouch_Mutex_t;

/**
 * @brief Initialize the provided mutex
 *
 * Call this function to initialize the mutex
 *
 * @param Airtouch_Mutex_t - pointer to the mutex to be initialized
 * @return Airtouch_Error_t - error code indicating result of operation
 */
Airtouch_Error_t airtouch_thread_mutex_init(Airtouch_Mutex_t *);

/**
 * @brief Lock the provided mutex
 *
 * Call this function to lock the mutex before performing a state change
 * This is a blocking call.
 *
 * @param Airtouch_Mutex_t - pointer to the mutex to be locked
 * @return Airtouch_Error_t - error code indicating result of operation
 */
Airtouch_Error_t aws_iot_thread_mutex_lock(Airtouch_Mutex_t *);

/**
 * @brief Lock the provided mutex
 *
 * Call this function to lock the mutex before performing a state change.
 * This is not a blocking call.
 *
 * @param Airtouch_Mutex_t - pointer to the mutex to be locked
 * @return Airtouch_Error_t - error code indicating result of operation
 */
Airtouch_Error_t aws_iot_thread_mutex_trylock(Airtouch_Mutex_t *);

/**
 * @brief Unlock the provided mutex
 *
 * Call this function to unlock the mutex before performing a state change
 *
 * @param Airtouch_Mutex_t - pointer to the mutex to be unlocked
 * @return Airtouch_Error_t - error code indicating result of operation
 */
Airtouch_Error_t aws_iot_thread_mutex_unlock(Airtouch_Mutex_t *);

/**
 * @brief Destroy the provided mutex
 *
 * Call this function to destroy the mutex
 *
 * @param Airtouch_Mutex_t - pointer to the mutex to be destroyed
 * @return Airtouch_Error_t - error code indicating result of operation
 */
Airtouch_Error_t aws_iot_thread_mutex_destroy(Airtouch_Mutex_t *);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __THREADS_INTERFACE_H__ */
#endif /* _THREAD_SUPPORT_ENABLE_ */
