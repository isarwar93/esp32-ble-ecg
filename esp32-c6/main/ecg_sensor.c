
#include "ecg_sensor.h"
#include "esp_log.h"

static const char *TAG = "ECG_SENSOR";

void ecg_sensor_on_notify(uint8_t *data, size_t len) {
    ESP_LOGI(TAG, "ECG raw data (first byte): 0x%02X", data[0]);
}

void ecg_sensor_start_service_discovery(uint16_t conn_handle) {
    // TODO: implement service discovery, enable notifications
}
