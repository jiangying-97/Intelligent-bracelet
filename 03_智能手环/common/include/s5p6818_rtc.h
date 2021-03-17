/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_RTC_H_
#define ___S5P6818_RTC_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define    uint32                       unsigned int

/*************** RTC ***************/
#define   	RTCCNTWRITE				__REG(0xC0010C00)
#define  	RTCCNTREAD				__REG(0xC0010C04)
#define 	RTCALARM				__REG(0xC0010C08)
#define 	RTCCTRL 				__REG(0xC0010C0C)
#define 	RTCINTENB				__REG(0xC0010C10)
#define 	RTCINTPND				__REG(0xC0010C14)
#define 	RTCCORERSTIMESEL		__REG(0xC0010C18)
#define 	RTCSCRATCH				__REG(0xC0010C1C)

#endif
