#ifndef __MOD_DFU_H
#define __MOD_DFU_H

#include "ble_advertising.h"
#include <stdio.h>

#define EN_DFU_SERVICE   1

uint32_t get_ble_adv_handle(ble_advertising_t **m_adv); // 在mod_ble中进行定义实现

void dfu_async_svci_init(void);

void mod_dfu_init(void);

#endif /* __MOD_DFU_H */
