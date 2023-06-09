/*
 *  Copyright (C) 2020, Samsung Electronics Co. Ltd. All Rights Reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef __SHUB_WAKELOCK_H_
#define __SHUB_WAKELOCK_H_

#include <linux/version.h>
#include "../sensorhub/shub_device.h"

void shub_wake_lock_register(void);
void shub_wake_lock_unregister(void);
void shub_wake_lock(void);
void shub_wake_lock_timeout(unsigned int msec);
void shub_wake_unlock(void);

#endif /* __SHUB_WAKELOCK_H_ */
