/*
 * flash_config.h
 *
 *  Created on: 2018Äê9ÔÂ22ÈÕ
 *      Author: G
 */

#ifndef _FLASH_CONFIG_H_
#define _FLASH_CONFIG_H_
#include "ets_sys.h"
ETSTimer os_timer;
typedef void (*cinfiflback)(void);
void hw_test_timer_cb(cinfiflback cb);
void flash_flag_init(cinfiflback cb1);


#endif /* APP_INCLUDE_MODULES_FLASH_CONFIG_H_ */
