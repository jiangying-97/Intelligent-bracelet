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

// CODA960 ʱ�Ӳ�����ʹ�ܼĴ���
#define  	CODA960CLKENB			__REG(0xC00C7000)
// CRYPTO ʱ�Ӳ�����ʹ�ܼĴ���
#define		CRYPTOCLKENB			__REG(0xC00C6000)
// I2Cͨ��0/1/2 ʱ�Ӳ�����ʹ�ܼĴ���
#define		I2CCLKENB0				__REG(0xC00AE000)
#define		I2CCLKENB1				__REG(0xC00AF000)
#define		I2CCLKENB2				__REG(0xC00B0000)
// 3D GPU ʱ�Ӳ�����ʹ�ܼĴ���
#define		GPCLKENB				__REG(0xC00C3000)
// MPEG-TS ʱ�Ӳ�����ʹ�ܼĴ���
#define		MPEGTSICLKENB			__REG(0xC00CB700)

//�����ܶȵ���(Pulse Density Modulation),���PDM,
// PDM ʱ�Ӳ�����ʹ�ܼĴ���
#define		PDMCLKENB				__REG(0xC00CB000)

// Scaler  ���������
// SCALER ʱ�Ӳ�����ʹ�ܼĴ���
#define		SCALERCLKENB			__REG(0xC00B6000)

// DEINTERLACE  ʱ�Ӳ�����ʹ�ܼĴ���
#define		DEINTERLACECLKENB		__REG(0xC00B5000)

// Multi Layer Controller (MLC) : ��������
// MLC ʱ�Ӳ�����ʹ�ܼĴ���
#define		MLCCLKENB0				__REG(0xC01023C0)
#define		MLCCLKENB1				__REG(0xC01027C0)

/*************** Clock Generator Level 0********************/

// MIMI CSI ʱ�Ӳ�����ʹ�ܼĴ���
#define		MIPICSICLKENB			__REG(0xC00CA000)
// MIMI CSI ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define		MIPICSICLKGEN0L			__REG(0xC00CA004)

// Pulse Period Measurement (PPM) :�������ڲ���
// PPM ʱ�Ӳ�����ʹ�ܼĴ���
#define		PPMCLKENB 				__REG(0xC00C4000)
// PPM ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define		PPMCLKGEN0L				__REG(0xC00C4004)

// PWM����
// PWMͨ��0/1/2/3 ʱ�Ӳ�����ʹ�ܼĴ���
#define		PWMTIMERCLKENB_PWM0			__REG(0xC00BA000)
#define		PWMTIMERCLKENB_PWM1			__REG(0xC00BE000)
#define		PWMTIMERCLKENB_PWM2			__REG(0xC00BF000)
#define		PWMTIMERCLKENB_PWM3			__REG(0xC00C0000)
// PWMͨ��0/1/2/3 ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define		PWMTIMERCLKGEN0L_PWM0			__REG(0xC00BA004)
#define		PWMTIMERCLKGEN0L_PWM1			__REG(0xC00BE004)
#define		PWMTIMERCLKGEN0L_PWM2			__REG(0xC00BF004)
#define		PWMTIMERCLKGEN0L_PWM3			__REG(0xC00C0004)

// PWM����ʱ��
// TIMERͨ��0/1/2/3 ʱ�Ӳ�����ʹ�ܼĴ���
#define		PWMTIMERCLKENB_TIMER0			__REG(0xC00B9000)
#define		PWMTIMERCLKENB_TIMER1			__REG(0xC00BB000)
#define		PWMTIMERCLKENB_TIMER2			__REG(0xC00BC000)
#define		PWMTIMERCLKENB_TIMER3			__REG(0xC00BD000)
// TIMERͨ��0/1/2/3 ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define		PWMTIMERCLKGEN0L_TIMER0			__REG(0xC00B9004)
#define		PWMTIMERCLKGEN0L_TIMER1			__REG(0xC00BB004)
#define		PWMTIMERCLKGEN0L_TIMER2			__REG(0xC00BC004)
#define		PWMTIMERCLKGEN0L_TIMER3			__REG(0xC00BD004)

// SDMMCͨ��0/1/2 ʱ�Ӳ�����ʹ�ܼĴ���
#define     SDMMCCLKENB0					__REG(0xC00C5000)
#define     SDMMCCLKENB1					__REG(0xC00CC000)
#define     SDMMCCLKENB2					__REG(0xC00CD000)
// SDMMCͨ��0/1/2 ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     SDMMCCLKGEN0L0					__REG(0xC00C5004)
#define     SDMMCCLKGEN0L1					__REG(0xC00CC004)
#define     SDMMCCLKGEN0L2					__REG(0xC00CD004)

//Sony/Philips Digital Interface ��SONY��PHILIPS������Ƶ�ӿڵļ�ơ�
// SPDIF ʱ�Ӳ�����ʹ�ܼĴ���
#define     SPDIFTXCLKENB					__REG(0xC00B8000)
// SPDIF ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     SPDIFTXCLKGEN0L					__REG(0xC00B8004)

// SSP(Synchronous Serial Port)��ͬ�����нӿڿ�����
// SSP ʱ�Ӳ�����ʹ�ܼĴ���
#define 	SSPCLKENB0						__REG(0xC00AC000)
#define 	SSPCLKENB1						__REG(0xC00AD000)
#define 	SSPCLKENB2						__REG(0xC00A7000)
// SSP ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define 	SSPCLKEN0L0						__REG(0xC00AC004)
#define 	SSPCLKEN0L1						__REG(0xC00AD004)
#define 	SSPCLKEN0L2						__REG(0xC00A7004)

// UARTͨ��0/1/2/3/4/5 ʱ�Ӳ�����ʹ�ܼĴ���
#define 	UARTCLKENB0						__REG(0xC00A9000)
#define 	UARTCLKENB1						__REG(0xC00A8000)
#define 	UARTCLKENB2						__REG(0xC00AA000)
#define 	UARTCLKENB3						__REG(0xC00AB000)
#define 	UARTCLKENB4						__REG(0xC006E000)
#define 	UARTCLKENB5						__REG(0xC0084000)
// UARTͨ��0/1/2/3/4/5 ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define 	UARTCLKGEN0L0					__REG(0xC00A9004)
#define 	UARTCLKGEN0L1					__REG(0xC00A8004)
#define 	UARTCLKGEN0L2					__REG(0xC00AA004)
#define 	UARTCLKGEN0L3					__REG(0xC00AB004)
#define 	UARTCLKGEN0L4					__REG(0xC006E004)
#define 	UARTCLKGEN0L5					__REG(0xC0084004)

// Video Input Processor (VIP):��Ƶ���봦����
// VIPͨ��0/1 ʱ�Ӳ�����ʹ�ܼĴ���
#define     VIPCLKENB0						__REG(0xC00C1000)
#define     VIPCLKENB1						__REG(0xC00C2000)
// VIPͨ��0/1 ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     VIPCLKGEN0L0					__REG(0xC00C1004)
#define     VIPCLKGEN0L1					__REG(0xC00C2004)

/*************** Clock Generator Level 2********************/

// GMAC ʱ�Ӳ�����ʹ�ܼĴ���
#define     GMACCLKENB						__REG(0xC00C8000)
// GMAC ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     GMACCLKGEN0L					__REG(0xC00C8004)
// GMAC ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     GMACCLKGEN1L					__REG(0xC00C800C)

// I2S ʱ�Ӳ�����ʹ�ܼĴ���
#define     I2SCLKENB0						__REG(0xC00B2000)
#define     I2SCLKENB1						__REG(0xC00B3000)
#define     I2SCLKENB2						__REG(0xC00B4000)
// I2S ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     I2SCLKGEN0L0					__REG(0xC00B2004)
#define     I2SCLKGEN0L1					__REG(0xC00B3004)
#define     I2SCLKGEN0L2					__REG(0xC00B4004)
// I2S ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     I2SCLKGEN1L0					__REG(0xC00B200C)
#define     I2SCLKGEN1L1					__REG(0xC00B300C)
#define     I2SCLKGEN1L2					__REG(0xC00B400C)

// USBHOSTOTG ʱ�Ӳ�����ʹ�ܼĴ���
#define     USBHOSTOTGCLKENB				__REG(0xC006B000)
// USBHOSTOTG ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     USBHOSTOTGCLKGEN0L				__REG(0xC006B004)
// USBHOSTOTG ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     USBHOSTOTGCLKGEN1L				__REG(0xC006B00C)

// Display Controller(DPC): ��ʾ������
// DPC ʱ�Ӳ�����ʹ�ܼĴ���
#define     DPCCLKENB0						__REG(0xC0102BC0)
#define     DPCCLKENB1						__REG(0xC0102FC0)
// DPC ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     DPCCLKGEN0L0					__REG(0xC0102BC4)
#define     DPCCLKGEN0L1					__REG(0xC0102FC4)
// DPC ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     DPCCLKGEN1L0					__REG(0xC0102BCC)
#define     DPCCLKGEN1L1					__REG(0xC0102FCC)

// Low-Voltage Differential Signaling �͵�ѹ����ź�
// LVDS ʱ�Ӳ�����ʹ�ܼĴ���
#define     LVDSCLKENB						__REG(0xC0108000)
// LVDS ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     LVDSCLKGEN0L					__REG(0xC0108004)
// LVDS ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     LVDSCLKGEN1L					__REG(0xC010800C)

// HDMI ʱ�Ӳ�����ʹ�ܼĴ���
#define     HDMICLKENB						__REG(0xC0109000)
// HDMI ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     HDMICLKGEN0L					__REG(0xC0109004)
// HDMI ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     HDMICLKGEN1L					__REG(0xC010900C)

// MIPI���ˣ����ƶ���ҵ�������ӿڣ�Mobile Industry Processor Interface ���MIPI������
// MIPI ʱ�Ӳ�����ʹ�ܼĴ���
#define     MIPICLKENB						__REG(0xC0105000)
// MIPI ʱ�Ӳ���������0�͵�ƽ�Ĵ���
#define     MIPICLKGEN0L					__REG(0xC0105004)
// MIPI ʱ�Ӳ���������1�͵�ƽ�Ĵ���
#define     MIPICLKGEN1L					__REG(0xC010500C)

#endif
