#ifndef DEFINES_H_
#define DEFINES_H_

//defines for reset and clock control from the cube or datasheet
#define RCC_OSCILLATORTYPE    RCC_OSCILLATORTYPE_HSE /*!< Used to select system oscillator type */
#define RCC_PLLM              4                      /*!< Used for PLL M parameter */
#define RCC_PLLN              84                    /*!< Used for PLL N parameter */
#define RCC_PLLP              2                      /*!< Used for PLL P parameter */
#define RCC_PLLQ              7                      /*!< Used for PLL Q parameter */
#define RCC_PLLR              2                     /*!< Used for PLL R parameter, available on STM32F446xx */


#define STM32F401_DISCOVERY
#define STM32F4xx

#endif /* DEFINES_H_ */
