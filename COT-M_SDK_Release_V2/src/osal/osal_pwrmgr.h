#ifndef OSAL_PWRMGR_H
#define OSAL_PWRMGR_H

/*********************************************************************
    Filename:       OSAL_PwrMgr.h
    Revised:        $Date: 2006-10-27 16:25:55 -0700 (Fri, 27 Oct 2006) $
    Revision:       $Revision: 12442 $

    Description:

       This file contains the OSAL Power Management API.

    Notes:

    Copyright (c) 2006 by Texas Instruments, Inc.
    All Rights Reserved.  Permission to use, reproduce, copy, prepare
    derivative works, modify, distribute, perform, display or sell this
    software and/or its documentation for any purpose is prohibited
    without the express written consent of Texas Instruments, Inc.
*********************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDES
 */
 #include <stdint.h>

/*********************************************************************
 * MACROS
 */

/*********************************************************************
 * TYPEDEFS
 */

/* These attributes define sleep beheaver. The attributes can be changed
 * for each sleep cycle or when the device characteristic change.
 */
typedef struct
{
    uint16_t pwrmgr_task_state;
    uint16_t pwrmgr_next_timeout;
    uint16_t accumulated_sleep_time;
    uint8_t  pwrmgr_device;
} pwrmgr_attribute_t;

/* With PWRMGR_ALWAYS_ON selection, there is no power savings and the
 * device is most likely on mains power. The PWRMGR_BATTERY selection allows
 * the HAL sleep manager to enter SLEEP LITE state or SLEEP DEEP state.
 */
#define PWRMGR_ALWAYS_ON  0
#define PWRMGR_BATTERY    1

/* The PWRMGR_CONSERVE selection turns power savings on, all tasks have to
 * agree. The PWRMGR_HOLD selection turns power savings off.
 */
#define PWRMGR_CONSERVE 0
#define PWRMGR_HOLD     1


/*********************************************************************
 * GLOBAL VARIABLES
 */

/* This global variable stores the power management attributes.
 */
extern pwrmgr_attribute_t pwrmgr_attribute;

/*********************************************************************
 * FUNCTIONS
 */

/*
* Initialize the power management system.
*   This function is called from OSAL.
*
*/
extern void osal_pwrmgr_init( void );

/*
* This function is called by each task to state whether or not this
* task wants to conserve power. The task will call this function to
* vote whether it wants the OSAL to conserve power or it wants to
* hold off on the power savings. By default, when a task is created,
* its own power state is set to conserve. If the task always wants
* to converse power, it doesn't need to call this function at all.
* It is important for the task that changed the power manager task
* state to PWRMGR_HOLD to switch back to PWRMGR_CONSERVE when the
* hold period ends.
*/
extern uint8_t osal_pwrmgr_task_state( uint8_t task_id, uint8_t state );

/*
* This function is called on power-up, whenever the device characteristic
* change (ex. Battery backed coordinator). This function works with the timer
* to set HAL's power manager sleep state when power saving is entered.
* This function should be called form HAL initialization. After power up
* initialization, it should only be called from NWK or ZDO.
*/
extern void osal_pwrmgr_device( uint8_t pwrmgr_device );

/*
* This function is called from the main OSAL loop when there are
* no events scheduled and shouldn't be called from anywhere else.
*/
extern void osal_pwrmgr_powerconserve( void );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* OSAL_PWRMGR_H */
