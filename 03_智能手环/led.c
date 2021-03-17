#include "s5p6818.h"
#include "led.h"



void delay_ms(unsigned int ms)
{
	unsigned int i,j;
	for(i = 0; i < ms; i++)
		for(j = 0; j < 1800; j++);
}

void hal_led_init(void)
{
	GPIOA.ALTFN1 = GPIOA.ALTFN1 & (~(0x3 << 24));
	GPIOE.ALTFN0 = GPIOE.ALTFN0 & (~(0x3 << 26));
	GPIOB.ALTFN0 = GPIOB.ALTFN0 & (~(0x3 << 24)) \
					 | (0x2 << 24);

	GPIOA.OUTENB = GPIOA.OUTENB | (1 << 28);
	GPIOE.OUTENB = GPIOE.OUTENB | (1 << 13);
	GPIOB.OUTENB = GPIOB.OUTENB | (1 << 12);
}

void hal_led_flash(void)
{
	GPIOA.OUT = GPIOA.OUT | (1 << 28);
	delay_ms(500);
	GPIOA.OUT = GPIOA.OUT & (~(1 << 28));
	delay_ms(500);
	
	GPIOE.OUT = GPIOE.OUT | (1 << 13);
	delay_ms(500);
	GPIOE.OUT = GPIOE.OUT & (~(1 << 13));
	delay_ms(500);
	
	GPIOB.OUT = GPIOB.OUT | (1 << 12);
	delay_ms(500);
	GPIOB.OUT = GPIOB.OUT & (~(1 << 12));
	delay_ms(500);
}
// leds : 哪个led灯
// onoff：led灯状态
void hal_led_onoff(char leds, char onoff)
{
	switch(leds){
	case 1:
		if(onoff == ON)
			GPIOA.OUT = GPIOA.OUT | (1 << 28);
		else
			GPIOA.OUT = GPIOA.OUT & (~(1 << 28));
		break;
	case 2:
		if(onoff == ON)
			GPIOE.OUT = GPIOE.OUT | (1 << 13);	
		else
			GPIOE.OUT = GPIOE.OUT & (~(1 << 13));
		break;
	case 3:
		if(onoff == ON)
			GPIOB.OUT = GPIOB.OUT | (1 << 12);
		else
			GPIOB.OUT = GPIOB.OUT & (~(1 << 12));
		break;
	case 4:
		if(onoff == ON){
			GPIOA.OUT = GPIOA.OUT | (1 << 28);
			GPIOE.OUT = GPIOE.OUT | (1 << 13);	
			GPIOB.OUT = GPIOB.OUT | (1 << 12);	
		}
		else {
			GPIOA.OUT = GPIOA.OUT & (~(1 << 28));
			GPIOE.OUT = GPIOE.OUT & (~(1 << 13));
			GPIOB.OUT = GPIOB.OUT & (~(1 << 12));
		}
		break;
	}
}



