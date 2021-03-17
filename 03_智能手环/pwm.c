#include "pwm.h"
#include "s5p6818.h"

void hal_pwm_init(void)
{
	//1. 设置GPIOC14引脚为PWM功能
	GPIOC.ALTFN0 = GPIOC.ALTFN0 & (~(0x3 << 28))  \
				   | (0x2 << 28);
	//2. 设置PWM的一级分频值  TCFG0[15:8]
	PWM.TCFG0 = PWM.TCFG0 & (~(0xFF << 8))   \
				| (249 << 8);  // 600000Hz
	//3. 设置PWM的二级分频值  TCFG1[11:8]
	PWM.TCFG1 = PWM.TCFG1 & (~(0xF << 8))   \
				| (0x1 << 8);  // 300000Hz
	//4. 给TCNTB2赋初始值 设置周期
	PWM.TCNTB2 = 300;
	//5. 给TCMPB2赋初始值 设置占空比
	PWM.TCMPB2 = 150;
	// 6. 开启翻转  TCON[14] = 1
	PWM.TCON = PWM.TCON | (1 << 14);
	//PWM.TCON = PWM.TCON & (~(1 << 14));
}

void hal_pwm_open(void)
{
	//7. 开启手动加载  TCON[13] = 1
	PWM.TCON = PWM.TCON | (1 << 13);
	//8. 开启自动加载  TCON[15] = 1
	PWM.TCON = PWM.TCON | (1 << 15);	
	//9. 关闭手动加载  TCON[13] = 0
	PWM.TCON = PWM.TCON & (~(1 << 13));
	//10. 开启PWM的定时器 TCON[12] = 1
	PWM.TCON = PWM.TCON | (1 << 12);
}

void hal_pwm_close(void)
{
	//10. 禁止PWM的定时器 TCON[12] = 0
	PWM.TCON = PWM.TCON & (~(1 << 12));
}

void hal_pwm_timer_init(void)
{
	//2. 设置PWM的一级分频值  TCFG0[15:8]
	PWM.TCFG0 = PWM.TCFG0 & (~(0xFF << 8))   \
				| (249 << 8);  // 600000Hz
	//3. 设置PWM的二级分频值  TCFG1[11:8]
	PWM.TCFG1 = PWM.TCFG1 & (~(0xF << 8))   \
				| (0x1 << 8);  // 300000Hz
	//4. 给TCNTB2赋初始值 设置周期
	PWM.TCNTB2 = 300000;
}
void hal_pwm_timer_open(void)
{
	//7. 开启手动加载  TCON[13] = 1
	PWM.TCON = PWM.TCON | (1 << 13);
	//8. 开启自动加载  TCON[15] = 1
	PWM.TCON = PWM.TCON | (1 << 15);	
	//9. 关闭手动加载  TCON[13] = 0
	PWM.TCON = PWM.TCON & (~(1 << 13));
	//10. 开启PWM的定时器 TCON[12] = 1
	PWM.TCON = PWM.TCON | (1 << 12);
	// 开启PWM定时器
	PWM.TINT_CSTAT |= (1 << 2);
}




void hal_gpio_beep_init(void)
{
	GPIOC.ALTFN0 = GPIOC.ALTFN0 & (~(3 << 28)) | (1 << 28);
	GPIOC.OUTENB = GPIOC.OUTENB | (1 << 14);
}
void hal_gpio_beep_open(void)
{
	GPIOC.OUT = GPIOC.OUT | (1 << 14);
}
void hal_gpio_beep_close(void)
{
	GPIOC.OUT = GPIOC.OUT & (~(1 << 14));
}
