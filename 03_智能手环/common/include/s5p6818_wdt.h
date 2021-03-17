/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_WDT_H_
#define ___S5P6818_WDT_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define     uint32                       unsigned int


/*************** WDT ***************/
#define   	WTCON 			__REG(0xC0019000)
#define  	WTDAT			__REG(0xC0019004)
#define 	WTCNT			__REG(0xC0019008)
#define 	WTCLRINT		__REG(0xC001900C)

#endif
