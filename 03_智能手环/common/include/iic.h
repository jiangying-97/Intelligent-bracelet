#ifndef  __IIC_H__
#define __IIC_H__
#define SET_SDA_OUT	GPIOD.OUTENB = GPIOD.OUTENB | (1 << 7)
#define SET_SDA_IN	GPIOD.OUTENB = GPIOD.OUTENB & (~(1 << 7))

#define SET_SCL_H 	GPIOD.OUT = GPIOD.OUT | (1 << 6)
#define SET_SCL_L 	GPIOD.OUT = GPIOD.OUT & (~(1 << 6))

#define SET_SDA_H 	GPIOD.OUT = GPIOD.OUT | (1 << 7)
#define SET_SDA_L 	GPIOD.OUT = GPIOD.OUT & (~(1 << 7))

#define READ_SDA 	GPIOD.PAD & (1 << 7)


void IIC_init(void);
void iic_Write_byte(char RegAddr,char Dat);
char iic_Read_byte(char RegAddr);


#endif
