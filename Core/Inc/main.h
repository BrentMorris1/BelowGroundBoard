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
#include "stm32c0xx_hal.h"

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
#define Thrust_Sense_A_Pin GPIO_PIN_0
#define Thrust_Sense_A_GPIO_Port GPIOA
#define Thrust_Sense_B_Pin GPIO_PIN_1
#define Thrust_Sense_B_GPIO_Port GPIOA
#define Thrust_Sense_C_Pin GPIO_PIN_2
#define Thrust_Sense_C_GPIO_Port GPIOA
#define Motor_Temp_Pin GPIO_PIN_3
#define Motor_Temp_GPIO_Port GPIOA
#define Earth_Pressure_Pin GPIO_PIN_4
#define Earth_Pressure_GPIO_Port GPIOA
#define Flame_Sensor_Pin GPIO_PIN_5
#define Flame_Sensor_GPIO_Port GPIOA
#define Actuator_A_Pos_Pin GPIO_PIN_6
#define Actuator_A_Pos_GPIO_Port GPIOA
#define Actuator_B_Pos_Pin GPIO_PIN_7
#define Actuator_B_Pos_GPIO_Port GPIOA
#define Actuator_Pos_C_Pin GPIO_PIN_8
#define Actuator_Pos_C_GPIO_Port GPIOA
#define Encoder_Pulse_B_Pin GPIO_PIN_1
#define Encoder_Pulse_B_GPIO_Port GPIOD
#define Encoder_Pulse_A_Pin GPIO_PIN_2
#define Encoder_Pulse_A_GPIO_Port GPIOD
#define SS_C_Pin GPIO_PIN_7
#define SS_C_GPIO_Port GPIOB
#define SS_B_Pin GPIO_PIN_8
#define SS_B_GPIO_Port GPIOB
#define SS_A_Pin GPIO_PIN_9
#define SS_A_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
