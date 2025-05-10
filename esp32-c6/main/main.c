#include "config.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_log.h"

#include "esp_adc/adc_oneshot.h"
#include "hal/adc_types.h"
#include "esp_adc/adc_cali.h"


#include "sdkconfig.h"
#include "freertos/semphr.h"

#include "driver/gpio.h"

#include "esp_err.h"
#include "nvs_flash.h"

#include "esp_nimble_hci.h"
#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"
#include "host/ble_hs.h"
#include "host/util/util.h"
#include "host/ble_gap.h"

#include "ble_client.h"

static const char *TAG = "BLE_CLIENT";
/* Variable for heart beats */
uint8_t heartrate;
void app_main(void)
{
    esp_log_level_set("*", ESP_LOG_DEBUG);

    vTaskDelay(pdMS_TO_TICKS(6000));
    ble_client_init();

    
    // Configure the ADC
    adc_oneshot_unit_handle_t adc1_handle = NULL;
    adc_oneshot_unit_init_cfg_t init_config1 = {
        .unit_id = ADC_UNIT_1,
        // .clk_src = ADC_DIGI_CLK_SRC_RC_FAST,
        .ulp_mode = ADC_ULP_MODE_DISABLE,
    };
    adc_oneshot_new_unit(&init_config1, &adc1_handle);

    adc_oneshot_chan_cfg_t config = {
        .atten = ADC_ATTEN_DB_11,
        .bitwidth = ADC_BITWIDTH_DEFAULT,
    };
    adc_oneshot_config_channel(adc1_handle, ADC_CHANNEL_2, &config);

    while (true) 
    {
   
        adc_oneshot_read(adc1_handle, ADC_CHANNEL_2, &heartrate);

        // char adc_str[10];
        
        //printf(">herz:%d\r\n", adc_value);
        //snprintf(adc_str, sizeof(adc_str), "%d\n", adc_value);
        vTaskDelay(pdMS_TO_TICKS(10)); // Delay for 10000 ms
    }
}