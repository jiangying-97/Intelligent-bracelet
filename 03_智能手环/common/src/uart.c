#include "s5p6818.h"

void uart_init()
{

	// 1. 设置GPIOD14和GPIOD18引脚为串口功能
	GPIOD.ALTFN0 = GPIOD.ALTFN0 & (~(0x3 << 28)) | (0x1 << 28);
	GPIOD.ALTFN1 = GPIOD.ALTFN1 & (~(0x3 << 4)) | (0x1 << 4);
	// 2. 设置帧格式
	UART0.ULCON = UART0.ULCON & (~(0x1 << 6));
	UART0.ULCON = UART0.ULCON & (~(0x7 << 3));
	UART0.ULCON = UART0.ULCON & (~(0x1 << 2));
	UART0.ULCON = UART0.ULCON | (0x3 << 0);
	// 3. 设置波特率为115200
	UART0.UBRDIV = 26;
	UART0.UFRACVAL = 2;
	// 4. 使能串口功能
	UART0.UCON = UART0.UCON & (~(0xF << 0)) | (0x5 << 0);
}

void putc(const char data)
{
	while(!(UART0.UTRSTAT & 0X2));
	UART0.UTXH = data;
	if (data == '\n')
			putc('\r');
}
void puts(const  char  *pstr)
{
	while(*pstr != '\0')
		putc(*pstr++);
}

char getc(void)
{
	char data;
	while (!(UART0.UTRSTAT & 0X1));
	data = UART0.URXH;
	return data;
}
