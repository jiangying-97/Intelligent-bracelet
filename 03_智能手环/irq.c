#include "irq.h"
#include "rtc.h"
#include "s5p6818.h"

void do_irq(void)
{
	unsigned int irq_num;
	// 获取中断号
	irq_num = GICC_IAR & 0x3FF;
	switch(irq_num){
		case 61:
			hal_rtc_convert();
			hal_feed_dog();
			PWM.TINT_CSTAT |= (1 << 7);
			GICD_ICPENDER.ICPENDER1 |= (1 << 29);
			break;
		case 86:
			if(GPIOB.DET & (1 << 8))
			{
				while (!(GPIOB.PAD & (1 << 8)))  // 检查到按键按下
				{
					delay_ms(5);  // 消抖
					while(!(GPIOB.PAD & (1 << 8)))  // 再次确认按键是否按下
					{
						while(!(GPIOB.PAD & (1 << 8)));  // 松手检测
						// 中断处理程序  打印字符串
						printf("GPIOB8 interrupt!\n");
						print_time();  // 打印当前时间
			
					}
				}
				// 清除GPIO层的中断挂起标志位 GPIOBDET[8]
				GPIOB.DET |= (1 << 8);
			}
			else if(GPIOB.DET & (1 << 16))
			{
				while (!(GPIOB.PAD & (1 << 16)))  // 检查到按键按下
				{
					delay_ms(5);  // 消抖
					while(!(GPIOB.PAD & (1 << 16)))  // 再次确认按键是否按下
					{
						while(!(GPIOB.PAD & (1 << 16)));  // 松手检测
						// 中断处理程序  打印字符串
						printf("GPIOB16 interrupt!\n");
						// 打印电压值
						display_voltage(hal_adc_conversion());

			
					}
				}
				// 清除GPIO层的中断挂起标志位 GPIOBDET[8]
				GPIOB.DET |= (1 << 16);
			}
			// 清除GICD层的中断挂起标志位 GICD_ICPENDER2[22]
			GICD_ICPENDER.ICPENDER2 |= (1 << 22);
			GICD_ISCCTIVER.ISCCTIVER2 |= (1 << 22);
			break;
		case 87:
			break;
		default:
			break;
	}
	// 清除中断号  GICC_EOIR
	GICC_EOIR = GICC_EOIR & (~0x3FF) | irq_num;
	
}

void hal_irq_gpio_init(void)
{
	// 设置为GPIO功能
	GPIOB.ALTFN0 = GPIOB.ALTFN0 & (~(3 << 16)); 	
	GPIOB.ALTFN1 = GPIOB.ALTFN1 & (~(3 << 0)) | (2 << 0); 	
	//GPIOB.ALTFN1 = GPIOB.ALTFN1 & (~(3 << 0)); 	
	// 设置为输入模式
	GPIOB.OUTENB = GPIOB.OUTENB & (~(1 << 8));
	GPIOB.OUTENB = GPIOB.OUTENB & (~(1 << 16));
	// 设置中断的触发方式，设置为下降沿触发
	GPIOB.DETMODE0 = GPIOB.DETMODE0 & (~(3 << 16)) | (2 << 16);
	GPIOB.DETMODEEX = GPIOB.DETMODEEX & (~(1 << 8));
	GPIOB.DETMODE1 = GPIOB.DETMODE1 & (~(3 << 0)) | (2 << 0);
	GPIOB.DETMODEEX = GPIOB.DETMODEEX & (~(1 << 16));
	// 设置中断使能位
	GPIOB.INTENB = GPIOB.INTENB | (1 << 8);
	GPIOB.INTENB = GPIOB.INTENB | (1 << 16);
	// 设置检测模式的使能位
	GPIOB.DETENB = GPIOB.DETENB | (1 << 8);
	GPIOB.DETENB = GPIOB.DETENB | (1 << 16);
}
void hal_irq_gicd_init(void)
{
	// 设置GICD中断使能寄存器 GICD_ISENABLER2[22] = 0x1
	GICD_ISENABLER.ISENABLER2 |= (1 << 22);
	GICD_ISENABLER.ISENABLER1 |= (1 << 29);
	// 设置中断目标配置寄存器 GICD_ITARGETSR21[23:16] = 0x1
	GICD_ITARGETSR.ITARGETSR21 &= (~(0xFF << 16));
	GICD_ITARGETSR.ITARGETSR21 |= (0x1 << 16);
	GICD_ITARGETSR.ITARGETSR15 &= (~(0xFF << 8));
	GICD_ITARGETSR.ITARGETSR15 |= (0x1 << 8);

	// 设置中断的优先等级寄存器 GICD_IPRIORITYR21[23:16] = 86
	GICD_IPRIORITYR.IPRIORITYR21 &= (~(0xFF << 16));
	GICD_IPRIORITYR.IPRIORITYR21 |= (86 << 16);
	GICD_IPRIORITYR.IPRIORITYR15 &= (~(0xFF << 8));
	GICD_IPRIORITYR.IPRIORITYR15 |= (61 << 8);

	// 设置GICD全局使能寄存器  GICD_CTRL[0] = 0x1
	GICD_CTRL |= 0x1;

}
void hal_irq_gicc_init(void)
{
	// 设置GICC中断优先级过滤器  GICC_PMR[7:0] = 255
	GICC_PMR |= 0xFF;
	// 设置GICC层中断使能寄存器  GICC_CTRL[0] = 0x1
	GICC_CTRL |= 0x1;
}
