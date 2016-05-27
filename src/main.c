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

    /* Init delay */
    TM_DELAY_Init();

    while (1) {
    	Delay(500000);

    	TM_DISCO_LedToggle(LED_ALL);
        /* Each 500ms */
        /*if (TM_DELAY_Time() >= 500) {
            TM_DELAY_SetTime(0);


            TM_DISCO_LedToggle(LED_ALL);
        }*/
    }
}
