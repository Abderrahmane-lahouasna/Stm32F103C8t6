/*
 * Configuration.c
 *
 *  Created on: Jul 21, 2023
 *      Author: Lahouasna abderrahmane
 */
#include"Stm32F103C8T6.h"
#include"Clock_stm32.h"
void HSE_PLL_Clock(unsigned char Input_clock,unsigned char value_fr,unsigned char Frequency_output ){
	switch (Input_clock){
	case 0:
	    switch(value_fr){
			case 8:
		switch(Frequency_output){
		case 72:
	// enable HSE
		RCC_CR |=(1<<16);
		// waiting HSE as ready
		while(!(RCC_CR &(1<<17)));
		// CSSON enable
		RCC_CR |=(1<<19);
		// enable PWR clock
		RCC_APB1ENR |=(1<<28);

	// PLL ON
		RCC_CR |=(1<<24);
		// waiting PLL ON ready
		while(!(RCC_CR &(1<<25)));
		// Pll input clock HSE
		RCC_CFGR |=(1<<16);
		// PLL factor X9
		RCC_CFGR |=(1<<18);
		RCC_CFGR |=(1<<19);
		RCC_CFGR |=(1<<20);
		RCC_CFGR &=~(1<<21);
		// choose system clock source
		RCC_CFGR |=(1<<1);
		RCC_CFGR &=~(1<<0);
		while(!(RCC_CFGR &((1<<3)&&(1<<2))));
		break;
		case 64:
			// enable HSE
		RCC_CR |=(1<<16);
		// waiting HSE as ready
		while(!(RCC_CR &(1<<17)));
		// CSSON enable
		RCC_CR |=(1<<19);
		// enable PWR clock
		RCC_APB1ENR |=(1<<28);

	// PLL ON
		RCC_CR |=(1<<24);
		// waiting PLL ON ready
		while(!(RCC_CR &(1<<25)));
		// Pll input clock HSE
		RCC_CFGR |=(1<<16);
		// PLL factor X8
		RCC_CFGR &=~(1<<18);
		RCC_CFGR |=(1<<19);
		RCC_CFGR |=(1<<20);
		RCC_CFGR &=~(1<<21);
		// choose system clock source
		RCC_CFGR |=(1<<1);
		RCC_CFGR &=~(1<<0);
		while(!(RCC_CFGR &((1<<3)&&(1<<2))));
		break;
		case 56:
	// enable HSE
		RCC_CR |=(1<<16);
		// waiting HSE as ready
		while(!(RCC_CR &(1<<17)));
		// CSSON enable
		RCC_CR |=(1<<19);
		// enable PWR clock
		RCC_APB1ENR |=(1<<28);

	// PLL ON
		RCC_CR |=(1<<24);
		// waiting PLL ON ready
		while(!(RCC_CR &(1<<25)));
		// Pll input clock HSE
		RCC_CFGR |=(1<<16);
		// PLL factor X7
		RCC_CFGR |=(1<<18);
		RCC_CFGR &=~(1<<19);
		RCC_CFGR |=(1<<20);
		RCC_CFGR &=~(1<<21);
		// choose system clock source
		RCC_CFGR |=(1<<1);
		RCC_CFGR &=~(1<<0);
		while(!(RCC_CFGR &((1<<3)&&(1<<2))));

		break;
		case 48:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X6
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;

		case 40:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X5
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 32:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X4
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 24:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X3
				RCC_CFGR |=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 16:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X2
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
				
		    }
			break;
		case 4:
		    switch(Frequency_output){
				case 64:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X16
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
			case 60:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X15
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
		case 56:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X14
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
		case 52:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X13
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 48:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X12
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
	case 44:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X11
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
		case 40:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X10
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
		case 36:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X9
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
		case 32:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X8
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
	case 28:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X7
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
	case 24:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X6
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;	
	case 20:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
			// PLL factor X5
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 16:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
			// PLL factor X4
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 12:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X3
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
			case 8:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X2
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
			
			}
			break;
		case 16:
		 switch (Frequency_output){
			 
			 case 32:
			
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X2
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
	case 48:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X3
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 64:
			// enable HSE
				RCC_CR |=(1<<16);
				// waiting HSE as ready
				while(!(RCC_CR &(1<<17)));
				// CSSON enable
				RCC_CR |=(1<<19);
				// enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X4
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		 }
		 break;
		
		}
		break;
		case 1:
		switch(value_fr){
			case 8:
			switch(Frequency_output){
		case 64:
		  // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X16
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
			case 60:
	 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X15
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 56:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X14
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 52:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X13
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 48:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X12
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
		case 44:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X11
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
				case 40:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X10
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR |=(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 36:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X9
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
			case 32:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X8
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 28:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X7
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 24:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X6
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR |=(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
						case 20:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X5
				RCC_CFGR |=(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 16:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X4
				RCC_CFGR &=~(1<<18);
				RCC_CFGR |=(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 12:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		   // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			// PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X3
				RCC_CFGR |=(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
					case 8:
		 // enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		      // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			  // PLL ON
				RCC_CR |=(1<<24);
				// waiting PLL ON ready
				while(!(RCC_CR &(1<<25)));
				// Pll input clock HSE
				RCC_CFGR |=(1<<16);
				// PLL factor X2
				RCC_CFGR &=~(1<<18);
				RCC_CFGR &=~(1<<19);
				RCC_CFGR &=~(1<<20);
				RCC_CFGR &=~(1<<21);
				// choose system clock source
				RCC_CFGR |=(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
			}
			break;
		}
		break;
		case 2:
		    switch(value_fr){
				case 8:
				switch(Frequency_output){
					
				case 8:
                  				
					// enable HSI
		   RCC_CR |=(1<<0);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<1)));
		      // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			  
				// choose system clock source
				RCC_CFGR &=~(1<<1);
				RCC_CFGR &=~(1<<0);
				while(!(RCC_CFGR &((1<<3)&&(1<<2))));
				break;
				}
				break;
			}
			break;
			case 3:
			switch(value_fr){
				
				case 4:
				switch(Frequency_output){
					case 4:
				// enable HSE
		   RCC_CR |=(1<<16);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<17)));
		      // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			  
				// choose system clock source
				RCC_CFGR &=~(1<<1);
				RCC_CFGR |=(1<<0);
				while(!(RCC_CFGR &((1<<2)&&(1<<3))));
				break;
		case 8:

				// enable HSE
		   RCC_CR |=(1<<16);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<17)));
		      // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			  
				// choose system clock source
				RCC_CFGR &=~(1<<1);
				RCC_CFGR |=(1<<0);
				while(!(RCC_CFGR &((1<<2)&&(1<<3))));
				break;
     case 16:

				// enable HSE
		   RCC_CR |=(1<<16);
		   // wating HSI is ready
		   while(!(RCC_CR &(1<<17)));
		      // enable PWR clock
				RCC_APB1ENR |=(1<<28);

			  
				// choose system clock source
				RCC_CFGR &=~(1<<1);
				RCC_CFGR |=(1<<0);
				while(!(RCC_CFGR &((1<<2)&&(1<<3))));
				break;	 
				}
				break;
			}
			break;
	}
}
void AHB_PR_DIV(unsigned int Div){
	switch(Div){
	case 0:
		//AHB PR not divide
		RCC_CFGR &=~(1<<4);
		RCC_CFGR &=~(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR &=~(1<<7);
		break;
	case 2:
		//AHB PR divide by 2
		RCC_CFGR &=~(1<<4);
		RCC_CFGR &=~(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<7);
		break;
	case 4:
		//AHB PR divide by 4
		RCC_CFGR |=(1<<4);
		RCC_CFGR &=~(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<7);
		break;
	case 8:
		//AHB PR divide by 8
		RCC_CFGR &=~(1<<4);
		RCC_CFGR |=(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<7);
		break;
	case 16:
		//AHB PR divide by 16
		RCC_CFGR |=(1<<4);
		RCC_CFGR |=(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<7);
		break;
	case 64:
		//AHB PR divide by 64
		RCC_CFGR &=~(1<<4);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<5);
		RCC_CFGR |=(1<<7);
		break;
	case 128:
		//AHB PR divide by 128
		RCC_CFGR |=(1<<4);
		RCC_CFGR |=(1<<5);
		RCC_CFGR &=~(1<<6);
		RCC_CFGR |=(1<<7);
		break;
	case 256:
		//AHB PR divide by 256
		RCC_CFGR |=(1<<6);
		RCC_CFGR |=(1<<5);
		RCC_CFGR &=~(1<<4);
		RCC_CFGR |=(1<<7);
		break;
	case 512:
		//AHB PR divide by 512
		RCC_CFGR |=(1<<4);
		RCC_CFGR |=(1<<5);
		RCC_CFGR |=(1<<6);
		RCC_CFGR |=(1<<7);
		break;

	}
}
void APB1_PR_DIV(unsigned char Div1){
	switch(Div1){
	case 0:
		//APB1 PR not divide
		RCC_CFGR &=~(1<<8);
		RCC_CFGR &=~(1<<9);
		RCC_CFGR &=~(1<<10);
		break;
	case 2:
		//APB1 PR  divide by 2
		RCC_CFGR &=~(1<<8);
		RCC_CFGR &=~(1<<9);
		RCC_CFGR |=(1<<10);
		break;
	case 4:
		//APB1 PR divide by 4
		RCC_CFGR |=(1<<8);
		RCC_CFGR &=~(1<<9);
		RCC_CFGR |=(1<<10);
		break;
	case 8:
		//APB1 PR divide by 8
		RCC_CFGR &=~(1<<8);
		RCC_CFGR |=(1<<9);
		RCC_CFGR |=~(1<<10);
		break;
	case 16:
		//APB1 PR not divide
		RCC_CFGR |=(1<<8);
		RCC_CFGR |=(1<<9);
		RCC_CFGR |=(1<<10);
		break;
	}
}
void APB2_PR_DIV(unsigned char Div2){
	switch(Div2){
	case 0:
		//APB2 PR  not divide
		RCC_CFGR &=~(1<<11);
		RCC_CFGR &=~(1<<12);
		RCC_CFGR &=~(1<<13);
		break;
	case 2:
		//APB2 PR divide by 2
		RCC_CFGR &=~(1<<11);
		RCC_CFGR &=~(1<<12);
		RCC_CFGR |=(1<<13);
		break;
	case 4:
		//APB2 PR divide by 4
		RCC_CFGR |=(1<<11);
		RCC_CFGR &=~(1<<12);
		RCC_CFGR |=(1<<13);
		break;
	case 8:
		//APB2 PR divide by 8
		RCC_CFGR &=~(1<<11);
		RCC_CFGR |=(1<<12);
		RCC_CFGR |=(1<<13);
		break;
	case 16:
		//APB2 PR divide by 16
		RCC_CFGR |=(1<<11);
		RCC_CFGR |=(1<<12);
		RCC_CFGR |=(1<<13);
		break;
	}
}
void GPIO_Clock(unsigned char GPIO){
	switch(GPIO){
	case 1:
	// enable clock GPIOA
	RCC_APB2ENR |=(1<<2);
	break;
	case 2:
	RCC_APB2ENR |=(1<<3);
	break;
	case 3:
	RCC_APB2ENR |=(1<<4);
	break;

	}
}

void GPIO_input_output( unsigned char Port,unsigned char pin,unsigned char io){

switch(Port){
case 1:
	switch(io){
	case 1:
		switch(pin){
		case 0:
			GPIOA_CRL |=(1<<0);
			GPIOA_CRL &=~(1<<1);
			GPIOA_CRL &=~(1<<2);
			GPIOA_CRL &=~(1<<3);
			break;
		case 1:
			GPIOA_CRL |=(1<<4);
			GPIOA_CRL &=~(1<<5);
			GPIOA_CRL &=~(1<<6);
			GPIOA_CRL &=~(1<<7);
			break;
		case 2:
			GPIOA_CRL |=(1<<8);
			GPIOA_CRL &=~(1<<9);
			GPIOA_CRL &=~(1<<10);
			GPIOA_CRL &=~(1<<11);
			break;
		case 3:
			GPIOA_CRL |=(1<<12);
			GPIOA_CRL &=~(1<<13);
			GPIOA_CRL &=~(1<<14);
			GPIOA_CRL &=~(1<<15);
			break;
		case 4:
			GPIOA_CRL |=(1<<16);
			GPIOA_CRL &=~(1<<17);
			GPIOA_CRL &=~(1<<18);
			GPIOA_CRL &=~(1<<19);
			break;
		case 5:
			GPIOA_CRL |=(1<<20);
			GPIOA_CRL &=~(1<<21);
			GPIOA_CRL &=~(1<<22);
			GPIOA_CRL &=~(1<<23);
			break;
		case 6:
			GPIOA_CRL |=(1<<24);
			GPIOA_CRL &=~(1<<25);
			GPIOA_CRL &=~(1<<26);
			GPIOA_CRL &=~(1<<27);
			break;
		case 7:
			GPIOA_CRL |=(1<<28);
			GPIOA_CRL &=~(1<<29);
			GPIOA_CRL &=~(1<<30);
			GPIOA_CRL &=~(1<<31);
			break;
		case 8:
			GPIOA_CRH |=(1<<0);
			GPIOA_CRH &=~(1<<1);
			GPIOA_CRH &=~(1<<2);
			GPIOA_CRH &=~(1<<3);
			break;
		case 9:
			GPIOA_CRH |=(1<<4);
			GPIOA_CRH &=~(1<<5);
			GPIOA_CRH &=~(1<<6);
			GPIOA_CRH &=~(1<<7);
			break;
		case 10:
			GPIOA_CRH |=(1<<8);
			GPIOA_CRH &=~(1<<9);
			GPIOA_CRH &=~(1<<10);
			GPIOA_CRH &=~(1<<11);
			break;
		case 11:
			GPIOA_CRH |=(1<<12);
			GPIOA_CRH &=~(1<<13);
			GPIOA_CRH &=~(1<<14);
			GPIOA_CRH &=~(1<<15);
			break;
		case 12:
			GPIOA_CRH |=(1<<16);
			GPIOA_CRH &=~(1<<17);
			GPIOA_CRH &=~(1<<18);
			GPIOA_CRH &=~(1<<19);
			break;
		case 13:
			GPIOA_CRH |=(1<<20);
			GPIOA_CRH &=~(1<<21);
			GPIOA_CRH &=~(1<<22);
			GPIOA_CRH &=~(1<<23);
			break;
		case 14:
			GPIOA_CRH |=(1<<24);
			GPIOA_CRH &=~(1<<25);
			GPIOA_CRH &=~(1<<26);
			GPIOA_CRH &=~(1<<27);
			break;
		case 15:
			GPIOA_CRH |=(1<<28);
			GPIOA_CRH &=~(1<<29);
			GPIOA_CRH &=~(1<<30);
			GPIOA_CRH &=~(1<<31);
			break;

		}
	}
	switch(io){
	case 0:
		switch(pin){
		case 0:
			GPIOA_CRL &=~(1<<0);
			GPIOA_CRL &=~(1<<1);
			GPIOA_CRL &=~(1<<2);
			GPIOA_CRL |=(1<<3);
			break;
		case 1:
			GPIOA_CRL &=~(1<<4);
			GPIOA_CRL &=~(1<<5);
			GPIOA_CRL &=~(1<<6);
			GPIOA_CRL |=(1<<7);
			break;
		case 2:
			GPIOA_CRL &=~(1<<8);
			GPIOA_CRL &=~(1<<9);
			GPIOA_CRL &=~(1<<10);
			GPIOA_CRL |=(1<<11);
			break;
		case 3:
			GPIOA_CRL &=~(1<<12);
			GPIOA_CRL &=~(1<<13);
			GPIOA_CRL &=~(1<<14);
			GPIOA_CRL |=(1<<15);
			break;
		case 4:
			GPIOA_CRL &=~(1<<16);
			GPIOA_CRL &=~(1<<17);
			GPIOA_CRL &=~(1<<18);
			GPIOA_CRL |=(1<<19);
			break;
		case 5:
			GPIOA_CRL &=~(1<<20);
			GPIOA_CRL &=~(1<<21);
			GPIOA_CRL &=~(1<<22);
			GPIOA_CRL |=(1<<23);
			break;
		case 6:
			GPIOA_CRL &=~(1<<24);
			GPIOA_CRL &=~(1<<25);
			GPIOA_CRL &=~(1<<26);
			GPIOA_CRL |=(1<<27);
			break;
		case 7:
			GPIOA_CRL &=~(1<<28);
			GPIOA_CRL &=~(1<<29);
			GPIOA_CRL &=~(1<<30);
			GPIOA_CRL |=(1<<31);
			break;
		case 8:
			GPIOA_CRH &=~(1<<0);
			GPIOA_CRH &=~(1<<1);
			GPIOA_CRH &=~(1<<2);
			GPIOA_CRH |=(1<<3);
			break;
		case 9:
			GPIOA_CRH &=~(1<<4);
			GPIOA_CRH &=~(1<<5);
			GPIOA_CRH &=~(1<<6);
			GPIOA_CRH |=(1<<7);
			break;
		case 10:
			GPIOA_CRH |=(1<<11);
			GPIOA_CRH &=~(1<<9);
			GPIOA_CRH &=~(1<<10);
			GPIOA_CRH &=~(1<<8);
			break;
		case 11:
			GPIOA_CRH |=(1<<15);
			GPIOA_CRH &=~(1<<13);
			GPIOA_CRH &=~(1<<14);
			GPIOA_CRH &=~(1<<12);
			break;
		case 12:
			GPIOA_CRH |=(1<<19);
			GPIOA_CRH &=~(1<<17);
			GPIOA_CRH &=~(1<<18);
			GPIOA_CRH &=~(1<<16);
			break;
		case 13:
			GPIOA_CRH |=(1<<23);
			GPIOA_CRH &=~(1<<21);
			GPIOA_CRH &=~(1<<22);
			GPIOA_CRH &=~(1<<20);
			break;
		case 14:
			GPIOA_CRH |=(1<<27);
			GPIOA_CRH &=~(1<<25);
			GPIOA_CRH &=~(1<<26);
			GPIOA_CRH &=~(1<<24);
			break;
		case 15:
			GPIOA_CRH |=(1<<31);
			GPIOA_CRH &=~(1<<29);
			GPIOA_CRH &=~(1<<30);
			GPIOA_CRH &=~(1<<28);
			break;

		}

	}
}
switch(Port){
case 2:
	switch(io){
	case 1:
		switch(pin){
		case 0:
			GPIOB_CRL |=(1<<0);
			GPIOB_CRL &=~(1<<1);
			GPIOB_CRL &=~(1<<2);
			GPIOB_CRL &=~(1<<3);
			break;
		case 1:
			GPIOB_CRL |=(1<<4);
			GPIOB_CRL &=~(1<<5);
			GPIOB_CRL &=~(1<<6);
			GPIOB_CRL &=~(1<<7);
			break;
		case 2:
			GPIOB_CRL |=(1<<8);
			GPIOB_CRL &=~(1<<9);
			GPIOB_CRL &=~(1<<10);
			GPIOB_CRL &=~(1<<11);
			break;
		case 3:
			GPIOB_CRL |=(1<<12);
			GPIOB_CRL &=~(1<<13);
			GPIOB_CRL &=~(1<<14);
			GPIOB_CRL &=~(1<<15);
			break;
		case 4:
			GPIOB_CRL |=(1<<16);
			GPIOB_CRL &=~(1<<17);
			GPIOB_CRL &=~(1<<18);
			GPIOB_CRL &=~(1<<19);
			break;
		case 5:
			GPIOB_CRL |=(1<<20);
			GPIOB_CRL &=~(1<<21);
			GPIOB_CRL &=~(1<<22);
			GPIOB_CRL &=~(1<<23);
			break;
		case 6:
			GPIOB_CRL |=(1<<24);
			GPIOB_CRL &=~(1<<25);
			GPIOB_CRL &=~(1<<26);
			GPIOB_CRL &=~(1<<27);
			break;
		case 7:
			GPIOB_CRL |=(1<<28);
			GPIOB_CRL &=~(1<<29);
			GPIOB_CRL &=~(1<<30);
			GPIOB_CRL &=~(1<<31);
			break;
		case 8:
			GPIOB_CRH |=(1<<0);
			GPIOB_CRH &=~(1<<1);
			GPIOB_CRH &=~(1<<2);
			GPIOB_CRH &=~(1<<3);
			break;
		case 9:
			GPIOB_CRH |=(1<<4);
			GPIOB_CRH &=~(1<<5);
			GPIOB_CRH &=~(1<<6);
			GPIOB_CRH &=~(1<<7);
			break;
		case 10:
			GPIOB_CRH |=(1<<8);
			GPIOB_CRH &=~(1<<9);
			GPIOB_CRH &=~(1<<10);
			GPIOB_CRH &=~(1<<11);
			break;
		case 11:
			GPIOB_CRH |=(1<<12);
			GPIOB_CRH &=~(1<<13);
			GPIOB_CRH &=~(1<<14);
			GPIOB_CRH &=~(1<<15);
			break;
		case 12:
			GPIOB_CRH |=(1<<16);
			GPIOB_CRH &=~(1<<17);
			GPIOB_CRH &=~(1<<18);
			GPIOB_CRH &=~(1<<19);
			break;
		case 13:
			GPIOB_CRH |=(1<<20);
			GPIOB_CRH &=~(1<<21);
			GPIOB_CRH &=~(1<<22);
			GPIOB_CRH &=~(1<<23);
			break;
		case 14:
			GPIOB_CRH |=(1<<24);
			GPIOB_CRH &=~(1<<25);
			GPIOB_CRH &=~(1<<26);
			GPIOB_CRH &=~(1<<27);
			break;
		case 15:
			GPIOB_CRH |=(1<<28);
			GPIOB_CRH &=~(1<<29);
			GPIOB_CRH &=~(1<<30);
			GPIOB_CRH &=~(1<<31);
			break;

		}
	}
	switch(io){
	case 0:
		switch(pin){
		case 0:
			GPIOB_CRL &=~(1<<0);
			GPIOB_CRL &=~(1<<1);
			GPIOB_CRL &=~(1<<2);
			GPIOB_CRL |=(1<<3);
			break;
		case 1:
			GPIOB_CRL &=~(1<<4);
			GPIOB_CRL &=~(1<<5);
			GPIOB_CRL &=~(1<<6);
			GPIOB_CRL |=(1<<7);
			break;
		case 2:
			GPIOB_CRL &=~(1<<8);
			GPIOB_CRL &=~(1<<9);
			GPIOB_CRL &=~(1<<10);
			GPIOB_CRL |=(1<<11);
			break;
		case 3:
			GPIOB_CRL &=~(1<<12);
			GPIOB_CRL &=~(1<<13);
			GPIOB_CRL &=~(1<<14);
			GPIOB_CRL |=(1<<15);
			break;
		case 4:
			GPIOB_CRL &=~(1<<16);
			GPIOB_CRL &=~(1<<17);
			GPIOB_CRL &=~(1<<18);
			GPIOB_CRL |=(1<<19);
			break;
		case 5:
			GPIOB_CRL &=~(1<<20);
			GPIOB_CRL &=~(1<<21);
			GPIOB_CRL &=~(1<<22);
			GPIOB_CRL |=(1<<23);
			break;
		case 6:
			GPIOB_CRL &=~(1<<24);
			GPIOB_CRL &=~(1<<25);
			GPIOB_CRL &=~(1<<26);
			GPIOB_CRL |=(1<<27);
			break;
		case 7:
			GPIOB_CRL &=~(1<<28);
			GPIOB_CRL &=~(1<<29);
			GPIOB_CRL &=~(1<<30);
			GPIOB_CRL |=(1<<31);
			break;
		case 8:
			GPIOB_CRH &=~(1<<0);
			GPIOB_CRH &=~(1<<1);
			GPIOB_CRH &=~(1<<2);
			GPIOB_CRH |=(1<<3);
			break;
		case 9:
			GPIOB_CRH &=~(1<<4);
			GPIOB_CRH &=~(1<<5);
			GPIOB_CRH &=~(1<<6);
			GPIOB_CRH |=(1<<7);
			break;
		case 10:
			GPIOB_CRH |=(1<<11);
			GPIOB_CRH &=~(1<<9);
			GPIOB_CRH &=~(1<<10);
			GPIOB_CRH &=~(1<<8);
			break;
		case 11:
			GPIOB_CRH |=(1<<15);
			GPIOB_CRH &=~(1<<13);
			GPIOB_CRH &=~(1<<14);
			GPIOB_CRH &=~(1<<12);
			break;
		case 12:
			GPIOB_CRH |=(1<<19);
			GPIOB_CRH &=~(1<<17);
			GPIOB_CRH &=~(1<<18);
			GPIOB_CRH &=~(1<<16);
			break;
		case 13:
			GPIOB_CRH |=(1<<23);
			GPIOB_CRH &=~(1<<21);
			GPIOB_CRH &=~(1<<22);
			GPIOB_CRH &=~(1<<20);
			break;
		case 14:
			GPIOB_CRH |=(1<<27);
			GPIOB_CRH &=~(1<<25);
			GPIOB_CRH &=~(1<<26);
			GPIOB_CRH &=~(1<<24);
			break;
		case 15:
			GPIOB_CRH |=(1<<31);
			GPIOB_CRH &=~(1<<29);
			GPIOB_CRH &=~(1<<30);
			GPIOB_CRH &=~(1<<28);
			break;

		}

	}
}
switch(Port){
case 3:
	switch(io){
	case 1:
		switch(pin){
		case 13:
			GPIOC_CRH |=(1<<20);
			GPIOC_CRH &=~(1<<21);
			GPIOC_CRH &=~(1<<22);
			GPIOC_CRH &=~(1<<23);
			break;
		case 14:
			GPIOC_CRH |=(1<<24);
			GPIOC_CRH &=~(1<<25);
			GPIOC_CRH &=~(1<<26);
			GPIOC_CRH &=~(1<<27);
			break;
		case 15:
			GPIOC_CRH |=(1<<28);
			GPIOC_CRH &=~(1<<29);
			GPIOC_CRH &=~(1<<30);
			GPIOC_CRH &=~(1<<31);
			break;

		}
	}
	switch(io){
	case 0:
		switch(pin){
		case 13:
			GPIOC_CRH |=(1<<23);
			GPIOC_CRH &=~(1<<21);
			GPIOC_CRH &=~(1<<22);
			GPIOC_CRH &=~(1<<20);
			break;
		case 14:
			GPIOC_CRH |=(1<<27);
			GPIOC_CRH &=~(1<<25);
			GPIOC_CRH &=~(1<<26);
			GPIOC_CRH &=~(1<<24);
			break;
		case 15:
			GPIOC_CRH |=(1<<31);
			GPIOC_CRH &=~(1<<29);
			GPIOC_CRH &=~(1<<30);
			GPIOC_CRH &=~(1<<28);
			break;

		}

	}
}
}
void GPIO_set_pin(unsigned char port , unsigned char pin){
	switch (port){
	case 1:
		switch(pin){
		case 0:
			GPIOA_BSRR |=(1<<0);break;
		case 1:
			GPIOA_BSRR |=(1<<1);break;
		case 2:
			GPIOA_BSRR |=(1<<2);break;
		case 3:
			GPIOA_BSRR |=(1<<3);break;
		case 4:
			GPIOA_BSRR |=(1<<4);break;
	    case 5:
			GPIOA_BSRR |=(1<<5);break;
		case 6:
			GPIOA_BSRR |=(1<<6);
			break;
		case 7:
			GPIOA_BSRR |=(1<<7);break;
		case 8:
			GPIOA_BSRR |=(1<<8);break;
		case 9:
			GPIOA_BSRR |=(1<<9);break;
		case 10:
			GPIOA_BSRR |=(1<<10);break;
		case 11:
			GPIOA_BSRR |=(1<<11);break;
		case 12:
			GPIOA_BSRR |=(1<<12);break;
		case 13:
			GPIOA_BSRR |=(1<<13);break;
		case 14:
			GPIOA_BSRR |=(1<<14);break;
		case 15:
			GPIOA_BSRR |=(1<<15);break;
			
		}
		break;
	case 2:
		switch(pin){
		case 0:
			GPIOB_BSRR |=(1<<0);break;
		case 1: 
			GPIOB_BSRR |=(1<<1);break;
		case 2: 
			GPIOB_BSRR |=(1<<2);break;
		case 3: 
			GPIOB_BSRR |=(1<<3);break;
		case 4: 
			GPIOB_BSRR |=(1<<4);break;
	    case 5: 
			GPIOB_BSRR |=(1<<5);break;
		case 6: 
			GPIOB_BSRR |=(1<<6);break;
		case 7: 
			GPIOB_BSRR |=(1<<7);break;
		case 8: 
			GPIOB_BSRR |=(1<<8);break;
		case 9: 
			GPIOB_BSRR |=(1<<9);break;
		case 10:
			GPIOB_BSRR |=(1<<10);break;
		case 11:
			GPIOB_BSRR |=(1<<11);break;
		case 12:
			GPIOB_BSRR |=(1<<12);break;
		case 13:
			GPIOB_BSRR |=(1<<13);break;
		case 14:
			GPIOB_BSRR |=(1<<14);break;
		case 15:
			GPIOB_BSRR |=(1<<15);break;
			
		}
		break;
	case 3:
		switch(pin){
		case 13:
			GPIOC_BSRR |=(1<<13);break;
		case 14:
			GPIOC_BSRR |=(1<<14);break;
		case 15:
			GPIOC_BSRR |=(1<<15);break;
			
		}
	}
}
void GPIO_reset_pin(unsigned char port , unsigned char pin)
{
		switch (port){
	case 1:
		switch(pin){
		case 0:
			GPIOA_BSRR |=(1<<16);break;
		case 1:
			GPIOA_BSRR |=(1<<17);break;
		case 2:
			GPIOA_BSRR |=(1<<18);break;
		case 3:
			GPIOA_BSRR |=(1<<19);break;
		case 4:
			GPIOA_BSRR |=(1<<20);break;
	    case 5:
			GPIOA_BSRR |=(1<<21);break;
		case 6:
			GPIOA_BSRR |=(1<<22);break;
		case 7:
			GPIOA_BSRR |=(1<<23);break;
		case 8:
			GPIOA_BSRR |=(1<<24);break;
		case 9:
			GPIOA_BSRR |=(1<<25);break;
		case 10:
			GPIOA_BSRR |=(1<<26);break;
		case 11:
			GPIOA_BSRR |=(1<<27);break;
		case 12:
			GPIOA_BSRR |=(1<<28);break;
		case 13:
			GPIOA_BSRR |=(1<<29);break;
		case 14:
			GPIOA_BSRR |=(1<<30);break;
		case 15:
			GPIOA_BSRR |=(1<<31);break;
			
		}
		break;
	case 2:
		switch(pin){
		case 0:
			GPIOB_BSRR |=(1<<16);break;
		case 1: 
			GPIOB_BSRR |=(1<<17);break;
		case 2: 
			GPIOB_BSRR |=(1<<18);break;
		case 3: 
			GPIOB_BSRR |=(1<<19);break;
		case 4: 
			GPIOB_BSRR |=(1<<20);break;
	    case 5: 
			GPIOB_BSRR |=(1<<21);break;
		case 6: 
			GPIOB_BSRR |=(1<<22);break;
		case 7: 
			GPIOB_BSRR |=(1<<23);break;
		case 8: 
			GPIOB_BSRR |=(1<<24);break;
		case 9: 
			GPIOB_BSRR |=(1<<25);break;
		case 10:
			GPIOB_BSRR |=(1<<26);break;
		case 11:
			GPIOB_BSRR |=(1<<27);break;
		case 12:
			GPIOB_BSRR |=(1<<28);break;
		case 13:
			GPIOB_BSRR |=(1<<29);break;
		case 14:
			GPIOB_BSRR |=(1<<30);break;
		case 15:
			GPIOB_BSRR |=(1<<31);break;
			
		}
		break;
		
	case 3:
		switch(pin){
		case 13:
			GPIOC_BSRR |=(1<<29);break;
		case 14:
			GPIOC_BSRR |=(1<<30);break;
		case 15:
			GPIOC_BSRR |=(1<<31);break;
			
		}
	}
}
void GPIO_set_reg(unsigned char port)
{
	switch(port){
	case 1:
		GPIOA_BSRR =0x0000FFFF;break;
	case 2:
		GPIOB_BSRR =0x0000FFFF;break;
	case 3:
	    GPIOC_BSRR =0x0000FFFF;break;


	}
}
void GPIO_reset_reg(unsigned char port){
	switch (port){
	case 1:
		GPIOA_BSRR =0xFFFF0000;break;
	case 2:
		GPIOB_BSRR =0xFFFF0000;break;
	case 3:
		GPIOC_BSRR =0xFFFF0000;break;
	}
}
void delay_ms(unsigned long int time){
	unsigned long int  ms;
	ms=time*(X_TAL_FREQ/64000);
	while(ms--);
}
void delay_us(unsigned long int time)
{
	unsigned long int  ms;
	ms=time*(X_TAL_FREQ/64000000);
	while(ms--);
}
