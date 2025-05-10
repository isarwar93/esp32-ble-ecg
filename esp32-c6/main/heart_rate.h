#pragma once
#include "config.h"
#ifdef __cplusplus
extern "C" {
#endif

void heart_rate_on_notify(uint8_t *data, size_t len);
void heart_rate_start_service_discovery(uint16_t conn_handle);

#ifdef __cplusplus
}
#endif
