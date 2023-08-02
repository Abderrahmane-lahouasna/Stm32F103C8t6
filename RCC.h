/*
 * RCC.h
 *
 *  Created on: Aug 2, 2023
 *      Author: T530
 */

#ifndef RCC_H_
#define RCC_H_
#define RCC_base_adrr           (0x40021000UL)
#define RCC_CR                  *((volatile unsigned int*)(RCC_base_adrr + 0x00))
#define RCC_CFGR                *((volatile unsigned int*)(RCC_base_adrr + 0x04))
#define RCC_CIR                 *((volatile unsigned int*)(RCC_base_adrr + 0x08))
#define RCC_APB2RSTR            *((volatile unsigned int*)(RCC_base_adrr + 0x0C))
#define RCC_APB1RSTR            *((volatile unsigned int*)(RCC_base_adrr + 0x10))
#define RCC_AHBENR              *((volatile unsigned int*)(RCC_base_adrr + 0x14))
#define RCC_APB2ENR             *((volatile unsigned int*)(RCC_base_adrr + 0x18))
#define RCC_APB1ENR             *((volatile unsigned int*)(RCC_base_adrr + 0x1C))
#define RCC_BDCR                *((volatile unsigned int*)(RCC_base_adrr + 0x20))
#define RCC_CSR                 *((volatile unsigned int*)(RCC_base_adrr + 0x20))








#endif /* RCC_H_ */
