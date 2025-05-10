#include "heart_rate.h"
#include "esp_log.h"

static const char *TAG = "HEART_RATE";

void heart_rate_on_notify(uint8_t *data, size_t len) {
    if (len > 1) {
        uint8_t bpm = data[1]; // Simplified parsing
        ESP_LOGI(TAG, "Heart Rate: %d bpm", bpm);
    }
}

void heart_rate_start_service_discovery(uint16_t conn_handle) {
    // TODO: implement service discovery, enable notifications
}
