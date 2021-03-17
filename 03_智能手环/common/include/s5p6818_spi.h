#ifndef		__S5P6818_SPI_H__
#define		__S5P6818_SPI_H__

#define  	__REG(x)					(*(volatile unsigned int *)(x))
#define     uint32                      unsigned int

/***********SPI*************/

/************* SPI register**************/
typedef struct{
	uint32 SPI_SSP_CONFIGURE;				// SPI/SSP configuration register
	uint32 res;
	uint32 SPI_SSP_FIFO_CON;				// SPI/SSP FIFO control register
	uint32 SPI_SSP_SEL_SIGNAL_CON;			// SPI/SSP selection signal(CS) control register
	uint32 SPI_SSP_INT_EN;					// SPI/SSP interrupt enable register
	uint32 SPI_SSP_STATUS;					// SPI/SSP status register
	uint32 SPI_SSP_TX_DATA;					// SPI/SSP TX data register
	uint32 SPI_SSP_RX_DATA;					// SPI/SSP RX data register
	uint32 SPI_SSP_PACKET_COUNT;			// SPI/SSP packet count register
	uint32 SPI_SSP_STATUS_PENDING_CLEAR;    // SPI/SSP status pending clear register
	uint32 SPI_SSP_SWAP_CONFIGURE;			// SPI/SSP SWAP configuration register
	uint32 SPI_SSP_FEEDBACK_CLOCK_SEL;		// SPI/SSP feedback clock selection register
} spi;

/************* SPI0 **************/
#define  SPI0     		(* (volatile spi *)0xC005B000)

/************* SPI0 **************/
#define  SPI1     		(* (volatile spi *)0xC005C000)

/************* SPI0 **************/
#define  SPI2     		(* (volatile spi *)0xC005F000)


#endif		// __S5P6818_IIC_H__
