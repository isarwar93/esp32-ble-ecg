#pragma once
#include "config.h"
#ifdef __cplusplus
extern "C" {
#endif

void ecg_sensor_on_notify(uint8_t *data, size_t len);
void ecg_sensor_start_service_discovery(uint16_t conn_handle);

#ifdef __cplusplus
}
#endif
