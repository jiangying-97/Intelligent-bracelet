/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_GPIO_H_
#define ___S5P6818_GPIO_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define     uint32                       unsigned int

/***********GPIO*************/

/************* GPIOA register**************/
typedef struct{
	uint32 OUT;
	uint32 OUTENB;
	uint32 DETMODE0;
	uint32 DETMODE1;
	uint32 INTENB;
	uint32 DET;
	uint32 PAD;
	uint32 Reserved1;
	uint32 ALTFN0;
	uint32 ALTFN1;
	uint32 DETMODEEX;
	uint32 Reserved2;
	uint32 Reserved3;
	uint32 Reserved4;
	uint32 Reserved5;
	uint32 DETENB;
	uint32 SLEW;
	uint32 SLEW_DISABLE_DEFAULT;
	uint32 DRV1;
	uint32 DRV1_DISABLE_DEFAULT;
	uint32 DRV0;
	uint32 DRV0_DISABLE_DEFAULT;
	uint32 PULLSEL;
	uint32 PULLSEL_DISABLE_DEFAULT;
	uint32 PULLENB;
	uint32 PULLENBD_DISABLE_DEFAULT;
} gpioa;

#define  GPIOA     (* (volatile gpioa *)0xC001A000)

/************* GPIOB register**************/
typedef struct{
	uint32 OUT;
	uint32 OUTENB;
	uint32 DETMODE0;
	uint32 DETMODE1;
	uint32 INTENB;
	uint32 DET;
	uint32 PAD;
	uint32 Reserved1;
	uint32 ALTFN0;
	uint32 ALTFN1;
	uint32 DETMODEEX;
	uint32 Reserved2;
	uint32 Reserved3;
	uint32 Reserved4;
	uint32 Reserved5;
	uint32 DETENB;
	uint32 SLEW;
	uint32 SLEW_DISABLE_DEFAULT;
	uint32 DRV1;
	uint32 DRV1_DISABLE_DEFAULT;
	uint32 DRV0;
	uint32 DRV0_DISABLE_DEFAULT;
	uint32 PULLSEL;
	uint32 PULLSEL_DISABLE_DEFAULT;
	uint32 PULLENB;
	uint32 PULLENBD_DISABLE_DEFAULT;
} gpiob;

#define  GPIOB     (* (volatile gpiob *)0xC001B000)

/************* GPIOC register**************/
typedef struct{
	uint32 OUT;
	uint32 OUTENB;
	uint32 DETMODE0;
	uint32 DETMODE1;
	uint32 INTENB;
	uint32 DET;
	uint32 PAD;
	uint32 Reserved1;
	uint32 ALTFN0;
	uint32 ALTFN1;
	uint32 DETMODEEX;
	uint32 Reserved2;
	uint32 Reserved3;
	uint32 Reserved4;
	uint32 Reserved5;
	uint32 DETENB;
	uint32 SLEW;
	uint32 SLEW_DISABLE_DEFAULT;
	uint32 DRV1;
	uint32 DRV1_DISABLE_DEFAULT;
	uint32 DRV0;
	uint32 DRV0_DISABLE_DEFAULT;
	uint32 PULLSEL;
	uint32 PULLSEL_DISABLE_DEFAULT;
	uint32 PULLENB;
	uint32 PULLENBD_DISABLE_DEFAULT;
} gpioc;

#define  GPIOC     (* (volatile gpioc *)0xC001C000)

/************* GPIOD register**************/
typedef struct{
	uint32 OUT;
	uint32 OUTENB;
	uint32 DETMODE0;
	uint32 DETMODE1;
	uint32 INTENB;
	uint32 DET;
	uint32 PAD;
	uint32 Reserved1;
	uint32 ALTFN0;
	uint32 ALTFN1;
	uint32 DETMODEEX;
	uint32 Reserved2;
	uint32 Reserved3;
	uint32 Reserved4;
	uint32 Reserved5;
	uint32 DETENB;
	uint32 SLEW;
	uint32 SLEW_DISABLE_DEFAULT;
	uint32 DRV1;
	uint32 DRV1_DISABLE_DEFAULT;
	uint32 DRV0;
	uint32 DRV0_DISABLE_DEFAULT;
	uint32 PULLSEL;
	uint32 PULLSEL_DISABLE_DEFAULT;
	uint32 PULLENB;
	uint32 PULLENBD_DISABLE_DEFAULT;
} gpiod;

#define  GPIOD     (* (volatile gpiod *)0xC001D000)

/************* GPIOE register**************/
typedef struct{
	uint32 OUT;
	uint32 OUTENB;
	uint32 DETMODE0;
	uint32 DETMODE1;
	uint32 INTENB;
	uint32 DET;
	uint32 PAD;
	uint32 Reserved1;
	uint32 ALTFN0;
	uint32 ALTFN1;
	uint32 DETMODEEX;
	uint32 Reserved2;
	uint32 Reserved3;
	uint32 Reserved4;
	uint32 Reserved5;
	uint32 DETENB;
	uint32 SLEW;
	uint32 SLEW_DISABLE_DEFAULT;
	uint32 DRV1;
	uint32 DRV1_DISABLE_DEFAULT;
	uint32 DRV0;
	uint32 DRV0_DISABLE_DEFAULT;
	uint32 PULLSEL;
	uint32 PULLSEL_DISABLE_DEFAULT;
	uint32 PULLENB;
	uint32 PULLENBD_DISABLE_DEFAULT;
} gpioe;

#define  GPIOE     (* (volatile gpioe *)0xC001E000)


#endif
