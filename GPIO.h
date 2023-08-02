/*
 * GPIO.h
 *
 *  Created on: Aug 2, 2023
 *      Author: T530
 */
#include"RCC.h"
#include"PWR.h"
#ifndef GPIO_H_
#define GPIO_H_
/**********************GPIOA_register***********************************/
#define GPIOA_Base_Adrr                         (0x40010800UL)
#define GPIOA_CRL                               *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x00))
#define GPIOA_CRH                               *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x04))
#define GPIOA_IDR                               *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x08))
#define GPIOA_ODR                               *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x0C))
#define GPIOA_BSRR                              *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x10))
#define GPIOA_BRR                               *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x14))
#define GPIOA_LCKR                              *((volatile unsigned int*)(GPIOA_Base_Adrr + 0x18))
/**********************GPIOB_register***********************************/
#define GPIOB_Base_Adrr                         (0x40010C00UL)
#define GPIOB_CRL                               *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x00))
#define GPIOB_CRH                               *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x04))
#define GPIOB_IDR                               *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x08))
#define GPIOB_ODR                               *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x0C))
#define GPIOB_BSRR                              *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x10))
#define GPIOB_BRR                               *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x14))
#define GPIOB_LCKR                              *((volatile unsigned int*)(GPIOB_Base_Adrr + 0x18))
/**********************GPIOC_register***********************************/
#define GPIOC_Base_Adrr                         (0x40011000UL)
#define GPIOC_CRL                               *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x00))
#define GPIOC_CRH                               *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x04))
#define GPIOC_IDR                               *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x08))
#define GPIOC_ODR                               *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x0C))
#define GPIOC_BSRR                              *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x10))
#define GPIOC_BRR                               *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x14))
#define GPIOC_LCKR                              *((volatile unsigned int*)(GPIOC_Base_Adrr + 0x18))
/**********************GPIOD_register***********************************/
#define GPIOD_Base_Adrr                         (0x40011400UL)
#define GPIOD_CRL                               *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x00))
#define GPIOD_CRH                               *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x04))
#define GPIOD_IDR                               *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x08))
#define GPIOD_ODR                               *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x0C))
#define GPIOD_BSRR                              *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x10))
#define GPIOD_BRR                               *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x14))
#define GPIOD_LCKR                              *((volatile unsigned int*)(GPIOD_Base_Adrr + 0x18))
/**********************GPIOE_register***********************************/
#define GPIOE_Base_Adrr                         (0x40011800UL)
#define GPIOE_CRL                               *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x00))
#define GPIOE_CRH                               *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x04))
#define GPIOE_IDR                               *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x08))
#define GPIOE_ODR                               *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x0C))
#define GPIOE_BSRR                              *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x10))
#define GPIOE_BRR                               *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x14))
#define GPIOE_LCKR                              *((volatile unsigned int*)(GPIOE_Base_Adrr + 0x18))
/**********************GPIOF_register***********************************/
#define GPIOF_Base_Adrr                         (0x40011C00UL)
#define GPIOF_CRL                               *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x00))
#define GPIOF_CRH                               *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x04))
#define GPIOF_IDR                               *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x08))
#define GPIOF_ODR                               *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x0C))
#define GPIOF_BSRR                              *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x10))
#define GPIOF_BRR                               *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x14))
#define GPIOF_LCKR                              *((volatile unsigned int*)(GPIOF_Base_Adrr + 0x18))
/**********************GPIOG_register***********************************/
#define GPIOG_Base_Adrr                         (0x40012000UL)
#define GPIOG_CRL                               *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x00))
#define GPIOG_CRH                               *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x04))
#define GPIOG_IDR                               *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x08))
#define GPIOG_ODR                               *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x0C))
#define GPIOG_BSRR                              *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x10))
#define GPIOG_BRR                               *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x14))
#define GPIOG_LCKR                              *((volatile unsigned int*)(GPIOG_Base_Adrr + 0x18))










#endif /* GPIO_H_ */
