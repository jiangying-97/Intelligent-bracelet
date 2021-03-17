
#ifndef __IRQ_H__
#define __IRQ_H__

void do_irq(void);
void hal_irq_gpio_init(void);
void hal_irq_gicd_init(void);
void hal_irq_gicc_init(void);

#endif





