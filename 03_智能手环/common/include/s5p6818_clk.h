/*  
 *S5P6818 SFR address define
 *farsight
 *2017.10.1
 *version: 1.0
*/

#ifndef ___S5P6818_CLK_H_
#define ___S5P6818_CLK_H_

#define  	__REG(x)					(*(volatile unsigned int *)(x))  
#define    uint32                       unsigned int

/*************** Clock Generator ***************/

/*************** Clock Generator Level 0********************/

// CODA960 时钟产生器使能寄存器
#define  	CODA960CLKENB			__REG(0xC00C7000)
// CRYPTO 时钟产生器使能寄存器
#define		CRYPTOCLKENB			__REG(0xC00C6000)
// I2C通道0/1/2 时钟产生器使能寄存器
#define		I2CCLKENB0				__REG(0xC00AE000)
#define		I2CCLKENB1				__REG(0xC00AF000)
#define		I2CCLKENB2				__REG(0xC00B0000)
// 3D GPU 时钟产生器使能寄存器
#define		GPCLKENB				__REG(0xC00C3000)
// MPEG-TS 时钟产生器使能寄存器
#define		MPEGTSICLKENB			__REG(0xC00CB700)

//脉冲密度调制(Pulse Density Modulation),简称PDM,
// PDM 时钟产生器使能寄存器
#define		PDMCLKENB				__REG(0xC00CB000)

// Scaler  脉冲计数器
// SCALER 时钟产生器使能寄存器
#define		SCALERCLKENB			__REG(0xC00B6000)

// DEINTERLACE  时钟产生器使能寄存器
#define		DEINTERLACECLKENB		__REG(0xC00B5000)

// Multi Layer Controller (MLC) : 多层控制器
// MLC 时钟产生器使能寄存器
#define		MLCCLKENB0				__REG(0xC01023C0)
#define		MLCCLKENB1				__REG(0xC01027C0)

/*************** Clock Generator Level 0********************/

// MIMI CSI 时钟产生器使能寄存器
#define		MIPICSICLKENB			__REG(0xC00CA000)
// MIMI CSI 时钟产生器控制0低电平寄存器
#define		MIPICSICLKGEN0L			__REG(0xC00CA004)

// Pulse Period Measurement (PPM) :脉冲周期测量
// PPM 时钟产生器使能寄存器
#define		PPMCLKENB 				__REG(0xC00C4000)
// PPM 时钟产生器控制0低电平寄存器
#define		PPMCLKGEN0L				__REG(0xC00C4004)

// PWM功能
// PWM通道0/1/2/3 时钟产生器使能寄存器
#define		PWMTIMERCLKENB_PWM0			__REG(0xC00BA000)
#define		PWMTIMERCLKENB_PWM1			__REG(0xC00BE000)
#define		PWMTIMERCLKENB_PWM2			__REG(0xC00BF000)
#define		PWMTIMERCLKENB_PWM3			__REG(0xC00C0000)
// PWM通道0/1/2/3 时钟产生器控制0低电平寄存器
#define		PWMTIMERCLKGEN0L_PWM0			__REG(0xC00BA004)
#define		PWMTIMERCLKGEN0L_PWM1			__REG(0xC00BE004)
#define		PWMTIMERCLKGEN0L_PWM2			__REG(0xC00BF004)
#define		PWMTIMERCLKGEN0L_PWM3			__REG(0xC00C0004)

// PWM做定时器
// TIMER通道0/1/2/3 时钟产生器使能寄存器
#define		PWMTIMERCLKENB_TIMER0			__REG(0xC00B9000)
#define		PWMTIMERCLKENB_TIMER1			__REG(0xC00BB000)
#define		PWMTIMERCLKENB_TIMER2			__REG(0xC00BC000)
#define		PWMTIMERCLKENB_TIMER3			__REG(0xC00BD000)
// TIMER通道0/1/2/3 时钟产生器控制0低电平寄存器
#define		PWMTIMERCLKGEN0L_TIMER0			__REG(0xC00B9004)
#define		PWMTIMERCLKGEN0L_TIMER1			__REG(0xC00BB004)
#define		PWMTIMERCLKGEN0L_TIMER2			__REG(0xC00BC004)
#define		PWMTIMERCLKGEN0L_TIMER3			__REG(0xC00BD004)

// SDMMC通道0/1/2 时钟产生器使能寄存器
#define     SDMMCCLKENB0					__REG(0xC00C5000)
#define     SDMMCCLKENB1					__REG(0xC00CC000)
#define     SDMMCCLKENB2					__REG(0xC00CD000)
// SDMMC通道0/1/2 时钟产生器控制0低电平寄存器
#define     SDMMCCLKGEN0L0					__REG(0xC00C5004)
#define     SDMMCCLKGEN0L1					__REG(0xC00CC004)
#define     SDMMCCLKGEN0L2					__REG(0xC00CD004)

//Sony/Philips Digital Interface 是SONY、PHILIPS数字音频接口的简称。
// SPDIF 时钟产生器使能寄存器
#define     SPDIFTXCLKENB					__REG(0xC00B8000)
// SPDIF 时钟产生器控制0低电平寄存器
#define     SPDIFTXCLKGEN0L					__REG(0xC00B8004)

// SSP(Synchronous Serial Port)：同步串行接口控制器
// SSP 时钟产生器使能寄存器
#define 	SSPCLKENB0						__REG(0xC00AC000)
#define 	SSPCLKENB1						__REG(0xC00AD000)
#define 	SSPCLKENB2						__REG(0xC00A7000)
// SSP 时钟产生器控制0低电平寄存器
#define 	SSPCLKEN0L0						__REG(0xC00AC004)
#define 	SSPCLKEN0L1						__REG(0xC00AD004)
#define 	SSPCLKEN0L2						__REG(0xC00A7004)

// UART通道0/1/2/3/4/5 时钟产生器使能寄存器
#define 	UARTCLKENB0						__REG(0xC00A9000)
#define 	UARTCLKENB1						__REG(0xC00A8000)
#define 	UARTCLKENB2						__REG(0xC00AA000)
#define 	UARTCLKENB3						__REG(0xC00AB000)
#define 	UARTCLKENB4						__REG(0xC006E000)
#define 	UARTCLKENB5						__REG(0xC0084000)
// UART通道0/1/2/3/4/5 时钟产生器控制0低电平寄存器
#define 	UARTCLKGEN0L0					__REG(0xC00A9004)
#define 	UARTCLKGEN0L1					__REG(0xC00A8004)
#define 	UARTCLKGEN0L2					__REG(0xC00AA004)
#define 	UARTCLKGEN0L3					__REG(0xC00AB004)
#define 	UARTCLKGEN0L4					__REG(0xC006E004)
#define 	UARTCLKGEN0L5					__REG(0xC0084004)

// Video Input Processor (VIP):视频输入处理器
// VIP通道0/1 时钟产生器使能寄存器
#define     VIPCLKENB0						__REG(0xC00C1000)
#define     VIPCLKENB1						__REG(0xC00C2000)
// VIP通道0/1 时钟产生器控制0低电平寄存器
#define     VIPCLKGEN0L0					__REG(0xC00C1004)
#define     VIPCLKGEN0L1					__REG(0xC00C2004)

/*************** Clock Generator Level 2********************/

// GMAC 时钟产生器使能寄存器
#define     GMACCLKENB						__REG(0xC00C8000)
// GMAC 时钟产生器控制0低电平寄存器
#define     GMACCLKGEN0L					__REG(0xC00C8004)
// GMAC 时钟产生器控制1低电平寄存器
#define     GMACCLKGEN1L					__REG(0xC00C800C)

// I2S 时钟产生器使能寄存器
#define     I2SCLKENB0						__REG(0xC00B2000)
#define     I2SCLKENB1						__REG(0xC00B3000)
#define     I2SCLKENB2						__REG(0xC00B4000)
// I2S 时钟产生器控制0低电平寄存器
#define     I2SCLKGEN0L0					__REG(0xC00B2004)
#define     I2SCLKGEN0L1					__REG(0xC00B3004)
#define     I2SCLKGEN0L2					__REG(0xC00B4004)
// I2S 时钟产生器控制1低电平寄存器
#define     I2SCLKGEN1L0					__REG(0xC00B200C)
#define     I2SCLKGEN1L1					__REG(0xC00B300C)
#define     I2SCLKGEN1L2					__REG(0xC00B400C)

// USBHOSTOTG 时钟产生器使能寄存器
#define     USBHOSTOTGCLKENB				__REG(0xC006B000)
// USBHOSTOTG 时钟产生器控制0低电平寄存器
#define     USBHOSTOTGCLKGEN0L				__REG(0xC006B004)
// USBHOSTOTG 时钟产生器控制1低电平寄存器
#define     USBHOSTOTGCLKGEN1L				__REG(0xC006B00C)

// Display Controller(DPC): 显示控制器
// DPC 时钟产生器使能寄存器
#define     DPCCLKENB0						__REG(0xC0102BC0)
#define     DPCCLKENB1						__REG(0xC0102FC0)
// DPC 时钟产生器控制0低电平寄存器
#define     DPCCLKGEN0L0					__REG(0xC0102BC4)
#define     DPCCLKGEN0L1					__REG(0xC0102FC4)
// DPC 时钟产生器控制1低电平寄存器
#define     DPCCLKGEN1L0					__REG(0xC0102BCC)
#define     DPCCLKGEN1L1					__REG(0xC0102FCC)

// Low-Voltage Differential Signaling 低电压差分信号
// LVDS 时钟产生器使能寄存器
#define     LVDSCLKENB						__REG(0xC0108000)
// LVDS 时钟产生器控制0低电平寄存器
#define     LVDSCLKGEN0L					__REG(0xC0108004)
// LVDS 时钟产生器控制1低电平寄存器
#define     LVDSCLKGEN1L					__REG(0xC010800C)

// HDMI 时钟产生器使能寄存器
#define     HDMICLKENB						__REG(0xC0109000)
// HDMI 时钟产生器控制0低电平寄存器
#define     HDMICLKGEN0L					__REG(0xC0109004)
// HDMI 时钟产生器控制1低电平寄存器
#define     HDMICLKGEN1L					__REG(0xC010900C)

// MIPI联盟，即移动产业处理器接口（Mobile Industry Processor Interface 简称MIPI）联盟
// MIPI 时钟产生器使能寄存器
#define     MIPICLKENB						__REG(0xC0105000)
// MIPI 时钟产生器控制0低电平寄存器
#define     MIPICLKGEN0L					__REG(0xC0105004)
// MIPI 时钟产生器控制1低电平寄存器
#define     MIPICLKGEN1L					__REG(0xC010500C)

#endif
