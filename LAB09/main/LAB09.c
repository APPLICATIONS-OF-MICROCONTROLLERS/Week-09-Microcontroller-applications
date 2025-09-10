#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
void app_main(void)

{
    gpio_set_direction(2, GPIO_MODE_OUTPUT);
    gpio_set_direction(4, GPIO_MODE_OUTPUT);
    gpio_set_direction(17, GPIO_MODE_OUTPUT);


    

    while (1) {
       
    gpio_set_level(2, 1);
    gpio_set_level(4, 0);
    gpio_set_level(17, 0);
    vTaskDelay(pdMS_TO_TICKS(500));
    gpio_set_level(2, 0);
    gpio_set_level(4, 1);
    gpio_set_level(17, 0);
    vTaskDelay(pdMS_TO_TICKS(500));
    gpio_set_level(2, 0);
    gpio_set_level(4, 0);
    gpio_set_level(17, 1);
    vTaskDelay(pdMS_TO_TICKS(500));

    }
}