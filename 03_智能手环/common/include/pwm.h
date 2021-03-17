#ifndef __PWM_H__
#define __PWM_H__

extern void hal_pwm_init(void);
extern void hal_pwm_open(void);
extern void hal_pwm_close(void);


extern void hal_pwm_timer_init(void);
extern void hal_pwm_timer_open(void);

extern void hal_gpio_beep_init(void);
extern void hal_gpio_beep_open(void);
extern void hal_gpio_beep_close(void);
#endif
