/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MR_1_Pin GPIO_PIN_2
#define MR_1_GPIO_Port GPIOE
#define MR_2_Pin GPIO_PIN_3
#define MR_2_GPIO_Port GPIOE
#define MR_3_Pin GPIO_PIN_4
#define MR_3_GPIO_Port GPIOE
#define DS1_Pin GPIO_PIN_0
#define DS1_GPIO_Port GPIOA
#define OE_CH1_8_Pin GPIO_PIN_1
#define OE_CH1_8_GPIO_Port GPIOA
#define DS2_Pin GPIO_PIN_5
#define DS2_GPIO_Port GPIOA
#define OE_CH9_16_Pin GPIO_PIN_6
#define OE_CH9_16_GPIO_Port GPIOA
#define STCP_2_Pin GPIO_PIN_7
#define STCP_2_GPIO_Port GPIOA
#define OE_OUT1_Pin GPIO_PIN_4
#define OE_OUT1_GPIO_Port GPIOC
#define OE_OUT2_Pin GPIO_PIN_5
#define OE_OUT2_GPIO_Port GPIOC
#define DIR_IN_1_Pin GPIO_PIN_0
#define DIR_IN_1_GPIO_Port GPIOB
#define DIR_IN_2_Pin GPIO_PIN_1
#define DIR_IN_2_GPIO_Port GPIOB
#define DIR_OUT1_Pin GPIO_PIN_7
#define DIR_OUT1_GPIO_Port GPIOE
#define DIR_OUT2_Pin GPIO_PIN_8
#define DIR_OUT2_GPIO_Port GPIOE
#define DIR_OUT3_Pin GPIO_PIN_9
#define DIR_OUT3_GPIO_Port GPIOE
#define DIR_OUT4_Pin GPIO_PIN_10
#define DIR_OUT4_GPIO_Port GPIOE
#define STCP_1_Pin GPIO_PIN_13
#define STCP_1_GPIO_Port GPIOE
#define SHCP_1_Pin GPIO_PIN_14
#define SHCP_1_GPIO_Port GPIOE
#define PB10_Pin GPIO_PIN_10
#define PB10_GPIO_Port GPIOB
#define OE_CH25_32_Pin GPIO_PIN_11
#define OE_CH25_32_GPIO_Port GPIOB
#define STCP_4_Pin GPIO_PIN_12
#define STCP_4_GPIO_Port GPIOB
#define SHCP_4_Pin GPIO_PIN_13
#define SHCP_4_GPIO_Port GPIOB
#define MR_4_Pin GPIO_PIN_14
#define MR_4_GPIO_Port GPIOB
#define D8_Pin GPIO_PIN_8
#define D8_GPIO_Port GPIOD
#define D9_Pin GPIO_PIN_9
#define D9_GPIO_Port GPIOD
#define D10_Pin GPIO_PIN_10
#define D10_GPIO_Port GPIOD
#define D11_Pin GPIO_PIN_11
#define D11_GPIO_Port GPIOD
#define D12_Pin GPIO_PIN_12
#define D12_GPIO_Port GPIOD
#define D13_Pin GPIO_PIN_13
#define D13_GPIO_Port GPIOD
#define D14_Pin GPIO_PIN_14
#define D14_GPIO_Port GPIOD
#define D15_Pin GPIO_PIN_15
#define D15_GPIO_Port GPIOD
#define OE_OUT3_Pin GPIO_PIN_6
#define OE_OUT3_GPIO_Port GPIOC
#define OE_OUT4_Pin GPIO_PIN_7
#define OE_OUT4_GPIO_Port GPIOC
#define SHCP_2_Pin GPIO_PIN_8
#define SHCP_2_GPIO_Port GPIOA
#define IN_OE1_Pin GPIO_PIN_11
#define IN_OE1_GPIO_Port GPIOA
#define IN_OE2_Pin GPIO_PIN_12
#define IN_OE2_GPIO_Port GPIOA
#define IN_OE3_Pin GPIO_PIN_10
#define IN_OE3_GPIO_Port GPIOC
#define IN_OE4_Pin GPIO_PIN_11
#define IN_OE4_GPIO_Port GPIOC
#define D0_Pin GPIO_PIN_0
#define D0_GPIO_Port GPIOD
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOD
#define D2_Pin GPIO_PIN_2
#define D2_GPIO_Port GPIOD
#define D3_Pin GPIO_PIN_3
#define D3_GPIO_Port GPIOD
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOD
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOD
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOD
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOD
#define DIR_IN_3_Pin GPIO_PIN_3
#define DIR_IN_3_GPIO_Port GPIOB
#define DIR_IN_4_Pin GPIO_PIN_4
#define DIR_IN_4_GPIO_Port GPIOB
#define DS3_Pin GPIO_PIN_6
#define DS3_GPIO_Port GPIOB
#define OE_CH17_24_Pin GPIO_PIN_7
#define OE_CH17_24_GPIO_Port GPIOB
#define STCP_3_Pin GPIO_PIN_8
#define STCP_3_GPIO_Port GPIOB
#define SHCP_3_Pin GPIO_PIN_9
#define SHCP_3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
