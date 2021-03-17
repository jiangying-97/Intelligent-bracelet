
#ifndef  __S5P6818_SYS_H__
#define  __S5P6818_SYS_H__

#define  	__REG(x)					(*(volatile unsigned int *)(x))
#define     uint32                       unsigned int

#define  	CLKMODEREG0 		__REG(0xC0010000)		// Clock Mode register0		 	0x0000_0000
#define  	CLKMODEREG1 		__REG(0xC0010004)		// Clock mode register1 		0x0000_0000
#define  	PLLSETREG0 			__REG(0xC0010008)		// PLL0 setting register 		0x101A_2602
#define  	PLLSETREG1 			__REG(0xC001000C)		// PLL1 setting register 		0x101A_4E04
#define  	PLLSETREG2 			__REG(0xC0010010)		// PLL2 setting register 		0x100C_C004
#define  	PLLSETREG3 			__REG(0xC0010014)		// PLL3 setting register 		0x100C_FA04

#define  	CLKDIVREG0 			__REG(0xC0010020)		// FCLKCPU0 setting register 	0x0000_8208
#define  	CLKDIVREG1 			__REG(0xC0010024)		// BCLK setting register 		0x0000_8208
#define  	CLKDIVREG2 			__REG(0xC0010028)		// MDCLK setting register 		0x0020_8000
#define  	CLKDIVREG3 			__REG(0xC001002C)		// GR3DBCLK setting register 	0x0000_8208
#define  	CLKDIVREG4 			__REG(0xC0010030)		// MPEGBCLK setting register 	0x0000_8208
#define  	CLKDIVREG5 			__REG(0xC0010034)		// DISPBCLK setting register 	0x0000_8208
#define  	CLKDIVREG6 			__REG(0xC0010038)		// HDMIPCLK setting register 	0x0000_8208
#define  	CLKDIVREG7 			__REG(0xC001003C)		// FCLKCPU1 setting register 	0x0000_8208
#define  	CLKDIVREG8 			__REG(0xC0010040)		// FASTBCLK setting register 	0x0000_8208

#define  	PLLSETREG0_SSCG 	__REG(0xC0010048)		// PLL0 setting register for spread spectrum 	0x0000_0000
#define  	PLLSETREG1_SSCG 	__REG(0xC001004C)		// PLL1 setting register for spread spectrum 	0x0000_0000
#define  	PLLSETREG2_SSCG 	__REG(0xC0010050)		// PLL2 setting register for spread spectrum 	0x0000_0000
#define  	PLLSETREG3_SSCG 	__REG(0xC0010054)		// PLL3 setting register for spread spectrum 	0x0000_0000
#define  	GPIOWAKEUPRISEENB 	__REG(0xC0010200)		// Rising edge detect enable register 			0x0000_0003
#define  	GPIOWAKEUPFALLENB 	__REG(0xC0010204)		// Falling edge detect enable register 			0x0000_0003
#define  	GPIORSTENB 			__REG(0xC0010208)		// GPIO reset enable register 					0x0000_0000
#define  	GPIOWKENB 			__REG(0xC001020C)		// GPIO wakeup enable register 					0x0000_0003
#define  	GPIOINTENB 				__REG(0xC0010210)		// GPIO interrupt enable register 				0x0000_0003
#define  	GPIOINTPEND 		__REG(0xC0010214)		// GPIO interrupt pending register 				0x0000_0000
#define  	RESETSTATUS 		__REG(0xC0010218)		// Reset status register 						0x0000_0001
#define  	INTENABLE 			__REG(0xC001021C)		// Interrupt enable register 					0x0000_0000
#define  	INTPEND 			__REG(0xC0010220)		// Interrupt pending register 					0x0000_0000
#define  	PWRCONT 			__REG(0xC0010224)		// Power management control register 			0x0000_FF00
#define  	PWRMODE 			__REG(0xC0010228)		// Power management mode register 				0x0000_0000

#define		PADSTRENGTHGPIOAL0 	__REG(0xC0010230)		// Scratch register 							0x0000_0000
#define		PADSTRENGTHGPIOAL1 	__REG(0xC0010234)		// Scratch register 							0x0000_0000
#define		PADSTRENGTHGPIOAL2 	__REG(0xC0010238)		// Scratch register 							0x0000_0000
#define		SYSRSTCONFIG 		__REG(0xC001023C)		// System reset configuration register 			Undefined

// Iieoff

#define		TIEOFFREG00 		__REG(0xC0011004)		// Reserved					 					0x0000_0000
#define		TIEOFFREG01 		__REG(0xC0011004)		// AXI Configuration Register 					0x1E0D_800C
#define		TIEOFFREG02 		__REG(0xC0011008)		// HDMI/ De-Interlace Configuration Register 	0xFDB6_C78F
#define		TIEOFFREG03 		__REG(0xC001100C)		// DREX/ DISPLAY/ HDMI Configuration Register 	0x98C1_B6C6
#define		TIEOFFREG04 		__REG(0xC0011010)		// UART/ SCALER/ MIPI/ DREX Configuration Register 0x0001_FFB7
#define		TIEOFFREG05 		__REG(0xC0011014)		// USBHOST Configuration 0 Register 			0x0400_83C0
#define		TIEOFFREG06 		__REG(0xC0011018)		// USBHOST Configuration 1 Register 			0x0000_0000
#define		TIEOFFREG07 		__REG(0xC001101C)		// USBHOST Configuration 2 Register 			0x0000_0000
#define		TIEOFFREG08 		__REG(0xC0011020)		// USBHOST Configuration 3 Register 			0xAC00_6D00
#define		TIEOFFREG09 		__REG(0xC0011024)		// USBHOST Configuration 4 Register 			0x3E38_0200
#define		TIEOFFREG10 		__REG(0xC0011028)		// USBHOST Configuration 5 Register 			0x3240_0153
#define		TIEOFFREG11 		__REG(0xC001102C)		// USBHOST Configuration 6 Register 			0x0F3A_202B
#define		TIEOFFREG12 		__REG(0xC0011030)		// USBOTG Configuration 0 Register 				0x0000_0001
#define		TIEOFFREG13 		__REG(0xC0011034)		// USBOTG Configuration 1 Register 				0xA000_6D00
#define		TIEOFFREG14 		__REG(0xC0011038)		// USBOTG Configuration 2 Register 				0x3E38_0200
#define		TIEOFFREG15 		__REG(0xC001103C)		// USBOTG Configuration 3 Register 				0x3FC0_0153
#define		TIEOFFREG16 		__REG(0xC0011040)		// CODA Configuration 0 Register 				0x00FF_FFFF
#define		TIEOFFREG17 		__REG(0xC0011044)		// CODA Configuration 1 Register				0x3FFF_FFFF
#define		TIEOFFREG18 		__REG(0xC0011048)		// CODA Configuration 2 Register 				0xFFFF_FFFF
#define		TIEOFFREG19 		__REG(0xC001104C)		// CODA Configuration 3 Register 				0x0FFF_FFFF
#define		TIEOFFREG20 		__REG(0xC0011050)		// CODA Configuration 4 Register 				0x1B6D_BFFF
#define		TIEOFFREG21 		__REG(0xC0011054)		// CODA Configuration 5 Register 				0x6C86_306C
#define		TIEOFFREG22 		__REG(0xC0011058)		// GPU Configuration 0 Register 				0xFFFE_18DB
#define		TIEOFFREG23 		__REG(0xC001105C)		// GPU Configuration 1 Register 				0x001F_FFFF
#define		TIEOFFREG24 		__REG(0xC0011060)		// GPU Configuration 2 Register 				0x0000_0000
#define		TIEOFFREG25 		__REG(0xC0011064)		// GPU Configuration 3 Register 				0xFFFF_FFFF
#define		TIEOFFREG26 		__REG(0xC0011068)		// GPU Configuration 4 Register 				0x0000_0000
#define		TIEOFFREG27 		__REG(0xC001106C)		// GPU Configuration 5 Register 				0xFFFF_FFFF
#define		TIEOFFREG28 		__REG(0xC0011070)		// GPU Configuration 6 Register 				0x0000_0000
#define		TIEOFFREG29 		__REG(0xC0011074)		// GPU Configuration 7 Register 				0xFFFF_FFFF
#define		TIEOFFREG30 		__REG(0xC0011078)		// GPU Configuration 8 Register 				0xFFFF_FFFF
#define		TIEOFFREG31 		__REG(0xC001107C)		// GPU Configuration 9 Register 				0xFFFF_FFFF
#define		TIEOFFREG32 		__REG(0xC0011080)		// BUS Configuration 0 Register 				0x0000_0000
#define		TIEOFFREG41 		__REG(0xC00110A4)		//BUS Configuration 1 Register 					0x1C00_0000
#define		TIEOFFREG42 		__REG(0xC00110A8)		// BUS Configuration 2 Register 				0x0000_F800
#define		TIEOFFREG43 		__REG(0xC00110AC)		// BUS Configuration 3 Register 				0x2000_0000
#define		TIEOFFREG44 		__REG(0xC00110B0)		// BUS Configuration 4 Register 				0x02AA_A86A
#define		TIEOFFREG45 		__REG(0xC00110B4)		// BUS Configuration 5 Register					0x0000_0000
#define		TIEOFFREG46 		__REG(0xC00110B8)		// BUS Configuration 6 Register 				0x0000_0000
#define		TIEOFFREG47 		__REG(0xC00110BC)		// BUS Configuration 7 Register 				0x0000_0000
#define		TIEOFFREG48 		__REG(0xC00110C0)		// BUS Configuration 8 Register 				0x0000_0000
#define		TIEOFFREG49 		__REG(0xC00110C4)		// BUS Configuration 9 Register 				0x0000_0000
#define		TIEOFFREG50 		__REG(0xC00110C8)		// BUS Configuration 10 Register 				0x0000_0000
#define		TIEOFFREG51 		__REG(0xC00110CC)		// BUS Configuration 11 Register 				0x0001_0000
#define		TIEOFFREG52 		__REG(0xC00110D0)		// BUS Configuration 12 Register 				0x0000_0000
#define		TIEOFFREG53 		__REG(0xC00110D4)		// BUS/ DREX Configuration Register 			0x0000_3800
#define		TIEOFFREG54 		__REG(0xC00110D8)		// DREX Configuration Register 					0x0000_0000
#define		TIEOFFREG55 		__REG(0xC00110DC)		// DREX Configuration Register 					0x0000_0000
#define		TIEOFFREG56 		__REG(0xC00110E0)		// DREX Configuration Register 					0x0000_0000
#define		TIEOFFREG57 		__REG(0xC00110E4)		// DREX/ GMAC/ BUS Configuration Register   	0x0000_0000
#define		TIEOFFREG58 		__REG(0xC00110E8)		// BUS Configuration Register 					0x0000_0000
#define		TIEOFFREG59 		__REG(0xC00110EC)		// BUS/ SDMMC Configuration Register 			0x0000_0000
#define		TIEOFFREG60 		__REG(0xC00110F0)		// SDMMC/ USBOTG/ USBHOST Configuration Register	0x0000_0000
#define		TIEOFFREG61 		__REG(0xC00110F4)		// USBHOST/ DMA/ MPEGTSI Configuration Register 	0x0000_0000
#define		TIEOFFREG62 		__REG(0xC00110F8)		// MPEGTSI/ DAC/ DREX/ BUS Configuration Register 	0x0000_0000
#define		TIEOFFREG63 		__REG(0xC00110FC)		// BUS/ GPU/ DREX/ CODA Configuration Register 		0x0000_0000
#define		TIEOFFREG64 		__REG(0xC0011100)		// BUS Configuration Register 					0x0000_0000
#define		TIEOFFREG65 		__REG(0xC0011104)		// BUS Configuration Register 					0x0000_0000
#define		TIEOFFREG66 		__REG(0xC0011108)		// BUS Configuration Register 					0x0000_0000
#define		TIEOFFREG67 		__REG(0xC001110C)		// BUS Configuration Register 					0x0060_0000
#define		TIEOFFREG68 		__REG(0xC0011110)		// BUS/ CODA/ GPU/ Core Sight Configuration Register 0x2008_2802
#define		TIEOFFREG69 		__REG(0xC0011114)		// Core Sight/ GPU/ CODA/ BUS Configuration Register 0x0000_001E
#define		TIEOFFREG70 		__REG(0xC0011118)		// VIP Configuration Register 					0x0000_0000
#define		TIEOFFREG71 		__REG(0xC001111C)		// VIP/ Core Sight/ BUS Configuration Register 	0x0000_0000
#define		TIEOFFREG72 		__REG(0xC0011120)		// BUS/ DISPLAY Configuration Register 			0x0000_0000
#define		TIEOFFREG73 		__REG(0xC0011124)		// DISPLAY/ GPU/ DEINTERLACE Configuration Register 0x0000_0000
#define		TIEOFFREG74 		__REG(0xC0011128)		// DEINTERLACE/ SCALER/ GMAC Configuration Register 0x0000_0000
#define		TIEOFFREG75 		__REG(0xC001112C)		// TMU/ DREX/ GPU/ BUS Configuration Register 	0x0000_0000
#define		TIEOFFREG76 		__REG(0xC0011130)		// DREX/ ARM/ BUS Configuration Register 		0x0000_01C0
#define		TIEOFFREG77 		__REG(0xC0011134)		// BUS/ ARM Configuration Register 				0x4078_0000
#define		TIEOFFREG78 		__REG(0xC0011138)		// ARM Configuration Register 					0x0000_0008
#define		TIEOFFREG79 		__REG(0xC001113C)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG80 		__REG(0xC0011140)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG81 		__REG(0xC0011144)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG82 		__REG(0xC0011148)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG83 		__REG(0xC001114C)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG84 		__REG(0xC0011150)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG85 		__REG(0xC0011154)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG86 		__REG(0xC0011158)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG87 		__REG(0xC001115C)		// (Write) ARM Configuration Register 			0x0000_0000
														// (Read) ARM Configuration Register 			0x0078_0000
#define		TIEOFFREG88 		__REG(0xC0011160)		// (Write) ARM Configuration Register 			0x0003_C000
														// (Read) ARM Configuration Register 			0x0000_0000
#define		TIEOFFREG89 		__REG(0xC0011164)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG90 		__REG(0xC0011168)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG91 		__REG(0xC001116C)		// ARM Configuration Register 					0x0000_0006
#define		TIEOFFREG92 		__REG(0xC0011170)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG93 		__REG(0xC0011174)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG94 		__REG(0xC0011178)		// ARM Configuration Register 					0x0082_3000
#define		TIEOFFREG95 		__REG(0xC001117C)		// ARM Configuration Register 					0x0400_0000
#define		TIEOFFREG96 		__REG(0xC0011180)		// ARM Configuration Register 					0x0000_0004
#define		TIEOFFREG97 		__REG(0xC0011184)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG98 		__REG(0xC0011188)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG99 		__REG(0xC001118C)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG100 		__REG(0xC0011190)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG101 		__REG(0xC0011194)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG102 		__REG(0xC0011198)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG103 		__REG(0xC001119C)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG104 		__REG(0xC00111A0)		// (Write) ARM Configuration Register 			0x0000_0000
														// (Read) ARM Configuration Register 			0x0078_0000
#define		TIEOFFREG105 		__REG(0xC00111A4)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG106 		__REG(0xC00111A8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG107 		__REG(0xC00111AC)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG108 		__REG(0xC00111B0)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG109 		__REG(0xC00111B4)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG110 		__REG(0xC00111B8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG111 		__REG(0xC00111BC)		// ARM Configuration Register 					0x0080_3000
#define		TIEOFFREG112 		__REG(0xC00111C0)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG113 		__REG(0xC00111C4)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG114 		__REG(0xC00111C8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG115 		__REG(0xC00111CC)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG116 		__REG(0xC00111D0)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG117 		__REG(0xC00111D4)		// ARM Configuration Register 					0x01FF_FFF0
#define		TIEOFFREG118 		__REG(0xC00111D8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG119 		__REG(0xC00111DC)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG120 		__REG(0xC00111E0)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG121 		__REG(0xC00111E4)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG122 		__REG(0xC00111E8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG123 		__REG(0xC00111EC)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG124 		__REG(0xC00111F0)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG125 		__REG(0xC00111F4)		// ARM Configuration Register 					0x01FF_FFF0
#define		TIEOFFREG126 		__REG(0xC00111F8)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG127 		__REG(0xC00111FC)		// ARM Configuration Register 					0x0000_0000
#define		TIEOFFREG128 		__REG(0xC0011200)		// I2S/ ARM Configuration Register 				0x3A00_0000
#define		TIEOFFREG129 		__REG(0xC0011204)		// I2S/ ARM/ DEINTERLACE/ SCALER Configuration Register 	0x0050_000F
#define		TIEOFFREG130 		__REG(0xC0011208)		// CODA Configuration Register 					0x0000_0000
#define		TIEOFFREG131 		__REG(0xC001120C)		// BUS/ CODA/ GPU/ DISPLAY Configuration Register 			0x0000_0000

// IP Reset

#define		IP_RESET_REGISTER0 	__REG(0xC0012000) 		// IP Reset Register 0 							0x0000_0000
#define		IP_RESET_REGISTER1 	__REG(0xC0012004)		// IP Reset Register 1 							0x0000_0000
#define		IP_RESET_REGISTER2	__REG(0xC0012008)		// IP Reset Register 2 							0x0000_0000

#endif  //__S5P6818_SYS_H__
