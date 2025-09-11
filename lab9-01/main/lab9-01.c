#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define LED1 2
#define LED2 4
#define LED3 17
#define DELAY_MS 500   // หน่วงเวลา (0.5 วินาที)

void app_main(void)
{
    // ตั้งขา GPIO เป็น output
    gpio_set_direction(LED1, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED2, GPIO_MODE_OUTPUT);
    gpio_set_direction(LED3, GPIO_MODE_OUTPUT);

    while (1) {
        // ลำดับไปข้างหน้า 1 → 2 → 3
        gpio_set_level(LED1, 1); gpio_set_level(LED2, 0); gpio_set_level(LED3, 0);
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));

        gpio_set_level(LED1, 0); gpio_set_level(LED2, 1); gpio_set_level(LED3, 0);
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));

        gpio_set_level(LED1, 0); gpio_set_level(LED2, 0); gpio_set_level(LED3, 1);
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));

        // ลำดับย้อนกลับ 2 → 1
        gpio_set_level(LED1, 0); gpio_set_level(LED2, 1); gpio_set_level(LED3, 0);
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));

        gpio_set_level(LED1, 1); gpio_set_level(LED2, 0); gpio_set_level(LED3, 0);
        vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
    }
}