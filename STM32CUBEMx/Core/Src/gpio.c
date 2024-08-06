/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, MR_1_Pin|MR_2_Pin|MR_3_Pin|DIR_OUT1_Pin
                          |DIR_OUT2_Pin|DIR_OUT3_Pin|DIR_OUT4_Pin|STCP_1_Pin
                          |SHCP_1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, DS1_Pin|DS2_Pin|STCP_2_Pin|SHCP_2_Pin
                          |IN_OE1_Pin|IN_OE2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, OE_OUT1_Pin|OE_OUT2_Pin|OE_OUT3_Pin|OE_OUT4_Pin
                          |IN_OE3_Pin|IN_OE4_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, DIR_IN_1_Pin|DIR_IN_2_Pin|PB10_Pin|STCP_4_Pin
                          |SHCP_4_Pin|MR_4_Pin|DIR_IN_3_Pin|DIR_IN_4_Pin
                          |DS3_Pin|STCP_3_Pin|SHCP_3_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, D8_Pin|D9_Pin|D10_Pin|D11_Pin
                          |D12_Pin|D13_Pin|D14_Pin|D15_Pin
                          |D1_Pin|D2_Pin|D3_Pin|D4_Pin
                          |D5_Pin|D6_Pin|D7_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PEPin PEPin PEPin PEPin
                           PEPin PEPin PEPin PEPin
                           PEPin */
  GPIO_InitStruct.Pin = MR_1_Pin|MR_2_Pin|MR_3_Pin|DIR_OUT1_Pin
                          |DIR_OUT2_Pin|DIR_OUT3_Pin|DIR_OUT4_Pin|STCP_1_Pin
                          |SHCP_1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin */
  GPIO_InitStruct.Pin = DS1_Pin|DS2_Pin|STCP_2_Pin|SHCP_2_Pin
                          |IN_OE1_Pin|IN_OE2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin */
  GPIO_InitStruct.Pin = OE_CH1_8_Pin|OE_CH9_16_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PCPin PCPin PCPin PCPin
                           PCPin PCPin */
  GPIO_InitStruct.Pin = OE_OUT1_Pin|OE_OUT2_Pin|OE_OUT3_Pin|OE_OUT4_Pin
                          |IN_OE3_Pin|IN_OE4_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin PBPin
                           PBPin PBPin PBPin */
  GPIO_InitStruct.Pin = DIR_IN_1_Pin|DIR_IN_2_Pin|PB10_Pin|STCP_4_Pin
                          |SHCP_4_Pin|MR_4_Pin|DIR_IN_3_Pin|DIR_IN_4_Pin
                          |DS3_Pin|STCP_3_Pin|SHCP_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PBPin PBPin */
  GPIO_InitStruct.Pin = OE_CH25_32_Pin|OE_CH17_24_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : PDPin PDPin PDPin PDPin
                           PDPin PDPin PDPin PDPin
                           PDPin PDPin PDPin PDPin
                           PDPin PDPin PDPin */
  GPIO_InitStruct.Pin = D8_Pin|D9_Pin|D10_Pin|D11_Pin
                          |D12_Pin|D13_Pin|D14_Pin|D15_Pin
                          |D1_Pin|D2_Pin|D3_Pin|D4_Pin
                          |D5_Pin|D6_Pin|D7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = D0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(D0_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
