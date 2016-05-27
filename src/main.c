/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/
#include "attributes.h"
#include "stm32fxxx_hal.h"
#include "defines.h"
#include "tm_stm32_disco.h"
#include "tm_stm32_delay.h"

int main(void) {
    /* Init system clock for maximum system speed */
    TM_RCC_InitSystem();

    /* Init HAL layer */
    HAL_Init();

    /* Init leds */
    TM_DISCO_LedInit();

    /* Init button */
    TM_DISCO_ButtonInit();

    /* Init delay */
    TM_DELAY_Init();

    while (1) {
        /* Turn off ALL leds */
        TM_DISCO_LedToggle(LED_ALL);

        /* If button pressed */
        if (TM_DISCO_ButtonPressed()) {
            /* Delayms */
            Delayms(1000);
        } else {
            /* Delayus */
            Delay(100000);
        }
    }
}
