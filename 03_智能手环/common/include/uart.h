#ifndef _UART_H
#define	_UART_H


extern void putc(const char data);
extern void puts(const  char  *pstr);
extern char getc(void);
extern void uart_init(void);

#endif
