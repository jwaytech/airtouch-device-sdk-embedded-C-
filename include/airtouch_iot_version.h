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
 * @file airtouch_iot_version.h
 * @brief Constants defining the release Version of Airtouch_SDK
 * 
 * This file contains constants defining the release version of the Airtouch SDK.
 * This file is modified by Airtouch upon release of SDK and shoule not be modified
 * by the consumer of the SDK.
 * The provided samples show example usage of these contants.
 * 
 * Verioning of the SDK follows the MAJOR.MINOR.PATCH Semantic Versioning guidelines.
 * @see http://semver.org
 */
#ifndef __SRC_UTILS_AIRTOUCH_IOT_VERSION_H__
#define __SRC_UTILS_AIRTOUCH_IOT_VERSION_H__

/**
 * @brief MAJOR version, incremented when incompatible API changes are made.
 */
#define VERSION_MAJOR 0

/**
 * @brief MINOR version when functionality is added in a backwards-compatible manner.
 */
#define VERSION_MINOR 0

/**
 * @brief PATCH version when backwards-compatible bug fixes are made.
 */
#define VERSION_PATCH 1

/**
 * @brief TAG is an (optional) tag appended to the version if a more descriptive verion is needed.
 */
#define VERSION_TAG ""
#endif /* __SRC_UTILS_AIRTOUCH_IOT_VERSION_H__ */