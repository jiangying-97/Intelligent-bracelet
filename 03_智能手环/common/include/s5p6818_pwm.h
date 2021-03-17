/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_PWM_H_
#define ___S5P6818_PWM_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define    uint32                       unsigned int


/************* PWM ******************/
typedef struct {
	uint32 TCFG0;
	uint32 TCFG1;
	uint32 TCON;
	uint32 TCNTB0;
	uint32 TCMPB0;
	uint32 TCNTO0;
	uint32 TCNTB1;
	uint32 TCMPB1;
	uint32 TCNTO1;
	uint32 TCNTB2;
	uint32 TCMPB2;
	uint32 TCNTO2;
	uint32 TCNTB3;
	uint32 TCMPB3;
	uint32 TCNTO3;
	uint32 TCNTB4;
	uint32 TCNTO4;
	uint32 TINT_CSTAT;
}pwm;

#define PWM       (* (volatile pwm *)0xC0018000)


#endif
