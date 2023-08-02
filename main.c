

#include"GPIO.h"
#define GPIOAENR     (1U<<2)

int main(){
      RCC_APB2ENR |=GPIOAENR;
      /******Set pin 13 as output *****/
      GPIOA_CRL |=(1<<0);
      GPIOA_CRL |=(1<<1);
      /****SET OUTPUT PUSH_PULL******/
      GPIOA_CRL &=~(1<<2);
      GPIOA_CRL &=~(1<<3);
      while(1){
    	  GPIOA_ODR |=(1<<0);
    	  for(int i=0;i<100000;i++){

    	  }
    	  GPIOA_ODR &=~(1<<0);
    	      	  for(int i=0;i<100000;i++){

    	      	  }
      }
}
