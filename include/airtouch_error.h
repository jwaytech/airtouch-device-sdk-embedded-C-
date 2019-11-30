
/**
 * @file airtouch_error.h
 * @brief Definition of error types for the SDK
 */

#ifndef __AIRTOUCH_IOT_SDK_SRC_ERROR_H__
#define __AIRTOUCH_IOT_SDK_SRC_ERROR_H__

#ifdef __cplusplus
extern "C"{
#endif /* __cplusplus */


/**<! Used to avoid warnings in case of unused parameters in functions pointers */
#define AIRTOUCH_UNUSED(x) (void)(x)

/*! \public
 * @brief SDK Error enum
 * 
 * Enumeration of return values for the _* functions within the SDK.
 * value less than -1 are specific errir codes
 * value of -1 is a generic failure response
 * value 0f 0  is a generic success response
 * value greater than 0 are specific non-error return codes
 */
typedef enum {
    SUCCESS          = 0,  // Success return value - no error occurred
    FAILURE          = -1, // A generic error. Not enough information for a specific error code
    NULL_VALUE_ERROR = -2  // A required parameter was passed as null
}Airtouch_Error_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __AIRTOUCH_IOT_SDK_SRC_ERROR_H__ */
