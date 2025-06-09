/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f3xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BTN_Pin GPIO_PIN_13
#define BTN_GPIO_Port GPIOC
#define BTN_EXTI_IRQn EXTI15_10_IRQn
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define IN4_Pin GPIO_PIN_6
#define IN4_GPIO_Port GPIOA
#define IN3_Pin GPIO_PIN_7
#define IN3_GPIO_Port GPIOA
#define IN1_Pin GPIO_PIN_7
#define IN1_GPIO_Port GPIOC
#define ENA_Pin GPIO_PIN_8
#define ENA_GPIO_Port GPIOA
#define ENB_Pin GPIO_PIN_9
#define ENB_GPIO_Port GPIOA
#define SENSOR_L_Pin GPIO_PIN_10
#define SENSOR_L_GPIO_Port GPIOA
#define SENSOR_F_ECHO_Pin GPIO_PIN_3
#define SENSOR_F_ECHO_GPIO_Port GPIOB
#define SENSOR_F_TRIG_Pin GPIO_PIN_4
#define SENSOR_F_TRIG_GPIO_Port GPIOB
#define SENSOR_R_Pin GPIO_PIN_5
#define SENSOR_R_GPIO_Port GPIOB
#define IN2_Pin GPIO_PIN_6
#define IN2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
