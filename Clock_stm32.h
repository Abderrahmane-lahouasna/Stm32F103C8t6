/*
 * Clock_stm32.h
 *
 *  Created on: Jul 21, 2023
 *      Author: T530
 */

#ifndef CLOCK_STM32_H_
#define CLOCK_STM32_H_
void HSE_PLL_Clock(unsigned char Input_clock,unsigned char value_fr,unsigned char Frequency_output );
void GPIO_Clock(unsigned char GPIO);
void AHB_PR_DIV(unsigned int Div);
void APB1_PR_DIV(unsigned char Div1);
void APB2_PR_DIV(unsigned char Div2);
void GPIO_input_output(unsigned char Port,unsigned char pin, unsigned char io);
void GPIO_set_pin(unsigned char port , unsigned char pin);
void GPIO_reset_pin(unsigned char port , unsigned char pin);
void GPIO_set_reg(unsigned char port);
void GPIO_reset_reg(unsigned char port);
void delay_us(unsigned long int time);
void delay_ms(unsigned long int time);
#define GPIOA   1
#define GPIOB   2
#define GPIOC   3
#define Output  1
#define Input   0
#define High    1
#define Low     0
#define X_TAL_FREQ    72000000
#define HSE     3
#define HSI     2
#define PLL_HSE 0
#define PLL_HSI 1

#endif /* CLOCK_STM32_H_ */
