#ifndef __ADC_H__
#define __ADC_H__

void hal_adc_init(void);

unsigned int  hal_adc_conversion(void);

void display_voltage(unsigned int value);
#endif
