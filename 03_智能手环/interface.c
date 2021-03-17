#include "led.h"
#include "pwm.h"
#include "uart0.h"
#include "wdt.h"
#include "rtc.h"
#include "irq.h"
#include "adc.h"
#include "iic.h"
#include "mma8451.h"

short x,y,z;
int step;
void power_display(unsigned int voltage);
int main()
{
	// led灯初始化
	hal_led_init();
	// 蜂鸣器初始化
	hal_gpio_beep_init();
	// PWM定时器初始化
	hal_pwm_timer_init();
	hal_pwm_timer_open();
	// uart0初始化
	hal_uart0_init();
	// 看门狗初始化
	hal_wdt_init();
	// 时钟初始化	
	hal_rtc_init();
	// adc初始化
	hal_adc_init();
	// 按键中断初始化
	hal_irq_gpio_init();
	hal_irq_gicd_init();
	hal_irq_gicc_init();
	// MMA8451初始化
	mma8451_init();
	while(1)
	{
		power_display(hal_adc_conversion());
		x = conversion_accel(get_accel_value(0x1, 0x2));
		y = conversion_accel(get_accel_value(0x3, 0x4));
		z = conversion_accel(get_accel_value(0x5, 0x6));
	//	printf("x = %hd  y = %hd   z = %hd\n",x,y,z);
//		printf ("%d\n", sqrt(900));
		step += Step_Count(x,y,z);
		printf("current step:%d\n", step);
		delay_ms(800);
	}
	return 0;
}

void power_display(unsigned int voltage)
{
	switch(voltage / 300) {
		case 0:  // 0-299mv
		case 1:  // 300-599mv
		case 2:  // 600-899mv
		case 3:  // 899-1199mv
		case 4:  // 1200-1499mv
		case 5:  // 1500-1799mv
			hal_led_onoff(RGB_R, ON);
			hal_led_onoff(RGB_G, OFF);
			hal_led_onoff(RGB_B, OFF);
			//hal_gpio_beep_open();  //蜂鸣器报警
			break;
		case 6:  // 1800-2099mv
		case 7:  // 2100-2399mv
			hal_led_onoff(RGB_R, OFF);
			hal_led_onoff(RGB_G, ON);
			hal_led_onoff(RGB_B, OFF);
			//hal_gpio_beep_close();  // 取消蜂鸣器报警
			break;
		case 8:  // 2400-2699mv
		case 9:  // 2700-2999mv
			hal_led_onoff(RGB_R, OFF);
			hal_led_onoff(RGB_G, OFF);
			hal_led_onoff(RGB_B, ON);
			//hal_gpio_beep_close();  // 取消蜂鸣器报警
			break;
		case 10: // 3000-3299mv
		case 11: // 3000mv
			hal_led_onoff(RGB_R, ON);
			hal_led_onoff(RGB_G, ON);
			hal_led_onoff(RGB_B, ON);
			//hal_gpio_beep_open();  //蜂鸣器报警
			break;
	}
}
