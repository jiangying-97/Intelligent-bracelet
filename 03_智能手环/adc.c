#include "s5p6818.h"
#include "adc.h"

void hal_adc_init(void)
{
	// ADC通道的选择
	ADCCON = ADCCON & (~(0x7 << 3));		
	// ADC控制器电源开启
	ADCCON = ADCCON & (~(0x1 << 2));
	// 时钟的分频值
	PRESCALERCON = PRESCALERCON & (~(0x3FF << 0)) | (199 << 0);
	// 分频器的使能
	PRESCALERCON = PRESCALERCON | (1 << 15);
	// ADC转换结束之后，几个周期之后开始读数据
	ADCCON = ADCCON & (~(0xF << 10));
	// ADC上电之后，延时几个周期之后在开启ADC转换,最小为6个周期 
	ADCCON = ADCCON & (~(0xF << 6)) | (0x7 << 6);
}

unsigned int  hal_adc_conversion(void)
{
	unsigned int value = 0;
	ADCCON = ADCCON | 1;
	while(ADCCON & 0x1);
	value = ADCDAT & 0xFFF;
	value = 2 * value * 1800 / 4096;
//	printf("voltage = %d%\n", value);
//	delay_ms(100);	
	return value;
}

void display_voltage(unsigned int value)
{	
	printf("voltage = %d%\n", value * 100 / 3300);
}
