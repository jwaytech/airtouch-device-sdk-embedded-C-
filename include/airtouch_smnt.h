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
 * @file airtouch_smnt.h
 * @brief 
 * 
 */

#ifndef __AIRTOUCH_SMNT_H__
#define __AIRTOUCH_SMNT_H__

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include "airtouch_error.h"

/**
 * @brief MAJOR version, incremented when incompatible API changes are made.
 */
#define SMNT_VERSION_MAJOR (0)

/**
 * @brief MINOR version when functionality is added in a backwards-compatible manner.
 */
#define SMNT_VERSION_MINOR (0)

/**
 * @brief PATCH version when backwards-compatible bug fixes are made.
 */
#define SMNT_VERSION_PATCH (1)

/**
 * @brief TAG is an (optional) tag appended to the version if a more descriptive verion is needed.
 */
#define SMNT_VERSION_TAG ""


#define MAC_ADDRESS_LENGTH (6)
#define SSID_LENGTH        (33)
#define PSWD_LENGTH        (33)

struct dddd
{
    /* data */
} ddd_t;


typedef struct FRAME_CONTROL_T
{
    uint8_t        ProtocolVersion:2; // Protocol version
    uint8_t        Type:2;            // MSDU type
    uint8_t        SubType:4;         // MSDU subtype
    uint8_t        ToDS:1;            // To DS indication
    uint8_t        FromDS:1;          // From DS indication
    uint8_t        MoreFrag:1;        // More fragment bit
    uint8_t        Retry:1;           // Retry status bit
    uint8_t        PowerMgMT:1;       // Power management bit
    uint8_t        MoreData:1;        // More data bit
    uint8_t        protFrame:1;       // Wep data
    uint8_t        Order:1;           // Strict order expected
} FrameControl_t;

typedef struct SEQUENCE_CONTROL_T
{
    /* data */
    FramentNumber:4;
    SequenceNumber:12;
} SequenceControl_t;


typedef struct 
{
    /* data */
    FrameControl_t FrameControl;
    uint16_t DurationID;
    uint8_t address1[MAC_ADDRESS_LENGTH];
    uint8_t address2[MAC_ADDRESS_LENGTH];
    uint8_t address3[MAC_ADDRESS_LENGTH];
    SequenceControl_t SequenceControl;
    uint8_t address4[MAC_ADDRESS_LENGTH];

} *FrameHeader_t;

typedef struct AIRTOUCH_SMNT_RESULT_T
{
    /* data */
    AirtouchError_t ResultStatus;
    uint8_t SSIDLength;
    uint8_t SSID[SSID_LENGTH];
    uint8_t PSWDLength;
    uint8_t PSWD[PSWD_LENGTH];
} AirtouchSmntResult_t;



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __AIRTOUCH_SMNT_H__ */