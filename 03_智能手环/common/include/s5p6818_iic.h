#ifndef		__S5P6818_IIC_H__
#define		__S5P6818_IIC_H__

#define  	__REG(x)					(*(volatile unsigned int *)(x))
#define    uint32                       unsigned int

/***********IIC*************/

/************* IIC register**************/

/************* IIC0 **************/
typedef struct{
	uint32 I2CCON0;				// I2C-Bus control register
	uint32 I2CSTAT0;				// I2C-Bus control-status register
	uint32 I2CADD0;				// I2C-Bus address register
	uint32 I2CDS0;				// I2C-Bus transmit-receive data shift register
	uint32 I2CLC0;				// I2C-bus line control register
} iic;
#define  IIC0     		(* (volatile iic0 *)0xC00A4000)
#define  I2CVR0			__REG(0xC00A4040)   // I2C-bus version register

/************* IIC1 **************/
typedef struct{
	uint32 I2CCON1;				// I2C-Bus control register
	uint32 I2CSTAT1;				// I2C-Bus control-status register
	uint32 I2CADD1;				// I2C-Bus address register
	uint32 I2CDS1;				// I2C-Bus transmit-receive data shift register
	uint32 I2CLC1;				// I2C-bus line control register
} iic1;
#define  IIC1     		(* (volatile iic1 *)0xC00A5000)
#define  I2CVR1			__REG(0xC00A5040)

/************* IIC2 **************/
typedef struct{
	uint32 I2CCON2;				// I2C-Bus control register
	uint32 I2CSTAT2;				// I2C-Bus control-status register
	uint32 I2CADD2;				// I2C-Bus address register
	uint32 I2CDS2;				// I2C-Bus transmit-receive data shift register
	uint32 I2CLC2;				// I2C-bus line control register
} iic2;
#define  IIC2     		(* (volatile iic2 *)0xC00A6000)
#define  I2CVR2			__REG(0xC00A6040)

#endif		// __S5P6818_IIC_H__
