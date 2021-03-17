#ifndef __LED_H__
#define __LED_H__
/*
typedef struct{
	unsigned int xOUT;
	unsigned int xOUTENB;
	unsigned char res[24];
	unsigned int xALTFN0;
	unsigned int xALTFN1;
}gpiox;
#define  GPIOAA (*(volatile gpiox *)0xc001a000)
#define  GPIOBB (*(volatile gpiox *)0xc001b000)
#define  GPIOCC (*(volatile gpiox *)0xc001c000)
#define  GPIODD (*(volatile gpiox *)0xc001d000)
#define  GPIOEE (*(volatile gpiox *)0xc001e000)
*/
#define  RGB_R   1    // 红灯
#define  RGB_G   2 	  // 绿灯
#define  RGB_B   3    // 蓝灯
#define  RGB_ALL 4    // 所有的灯

#define  ON      1    // 亮
#define  OFF     0    // 灭

void hal_led_init(void);
void hal_led_flash(void);
void delay_ms(unsigned int ms);
void hal_led_onoff(char leds, char onoff);

#endif

