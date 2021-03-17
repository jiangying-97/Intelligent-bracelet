#include "s5p6818.h"
#include "uart0.h"


void hal_uart0_init(void)
{
	GPIOD.ALTFN0 = GPIOD.ALTFN0 & (~(0x3 << 28))  \
						| (1 << 28);
	GPIOD.ALTFN1 = GPIOD.ALTFN1 & (~(0x3 << 4))  \
						| (1 << 4);
	UART0.ULCON = UART0.ULCON & (~(1 << 6));
	UART0.ULCON = UART0.ULCON & (~(0x7 << 3));
	UART0.ULCON = UART0.ULCON & (~(1 << 2));
	UART0.ULCON = UART0.ULCON | (3 << 0);
	UART0.UBRDIV = 26;
	UART0.UFRACVAL = 2;
	UART0.UCON = UART0.UCON & (~(0xF)) | (0x5);
}
void T_byte(char ch)
{
	while(!(UART0.UTRSTAT & 0x2));
	UART0.UTXH = ch;
//	if(ch == '\n')
//		T_byte('\r');
}
char R_byte(void)
{
	char ch;
	while(!(UART0.UTRSTAT & 0x1));
	ch = UART0.URXH & 0xFF;
	return ch;
}


