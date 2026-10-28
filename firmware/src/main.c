#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"

#define BLINK_GPIO 2
static const char *TAG = "APPLICATION_LED";

void app_main(void){
    gpio_reset_pin(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    int led_state = 0;

    printf("--- Demarrage du programme de clignotement ---\n");
    ESP_LOGI(TAG, "L'ESP32 est bien initialise.");

    while (1)
    {
        gpio_set_level(BLINK_GPIO, led_state);

        if (led_state == 1){
            printf("Hello World : La LED est ALLUMEE\n");
            ESP_LOGE("ERREUR", "Test");
        } else {
            ESP_LOGI(TAG, "Hello World : La LED est ETEINTE");
        }

        led_state = !led_state;
        vTaskDelay(10000 / portTICK_PERIOD_MS);
        ESP_LOGW("AVERTISSEMENT", "Passage au cycle suivant");
    }
}