/*
 * PWR.h
 *
 *  Created on: Aug 2, 2023
 *      Author: T530
 */

#ifndef PWR_H_
#define PWR_H_
#define PWR_base_adrr              (0x40007000UL)
#define PWR_CR                     *((volatile unsigned int*)(PWR_base_adrr + 0x000))
#define PWR_CSR                    *((volatile unsigned int*)(PWR_base_adrr + 0x004))



#endif /* PWR_H_ */
