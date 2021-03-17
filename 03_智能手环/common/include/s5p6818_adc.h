/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_ADC_H_
#define ___S5P6818_ADC_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define    uint32                       unsigned int

/************** ADC ****************/
#define 	ADCCON  		__REG(0xC0053000)
#define 	ADCDAT  		__REG(0xC0053004)
#define 	ADCINTENB  		__REG(0xC0053008)
#define 	ADCINTCLR  		__REG(0xC005300C)
#define 	PRESCALERCON  	__REG(0xC0053010)

#endif
