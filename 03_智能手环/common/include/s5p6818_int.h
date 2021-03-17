#ifndef    __S5P6818_INT_H__
#define    __S5P6818_INT_H__

#define  	__REG(x)					(*(volatile unsigned int *)(x))
#define     uint32                      unsigned int

// distributor Control Register			0x0000_0000
#define 	GICD_CTRL		__REG(0xC0009000)		// distributor Control Register
// Interrupt Controller Type Register 	0x0000_FC24
#define 	GICD_TYPER		__REG(0xC0009004)		// Interrupt Controller Type Register
// Distributor Implementer Identification Register 0x0200_043B
#define		GICD_IIDR		__REG(0xC0009008)		// Distributor Implementer Identification Register

// Interrupt Group Register 0x0000_0000
typedef struct {
	uint32	IGROUPR0;
	uint32	IGROUPR1;
	uint32	IGROUPR2;
	uint32	IGROUPR3;
	uint32	IGROUPR4;
}gicd_igroupr;

#define  GICD_IGROUPR    (*(volatile gicd_igroupr *)0xC0009080)

// Interrupt Set-Enable Register 0x0000_0000
typedef struct {
	uint32	ISENABLER0;
	uint32	ISENABLER1;
	uint32	ISENABLER2;
	uint32	ISENABLER3;
	uint32	ISENABLER4;
}gicd_isenabler;

#define  GICD_ISENABLER    (*(volatile gicd_isenabler *)0xC0009100)

// Interrupt Clear-Enable Register 0x0000_0000
typedef struct {
	uint32	ISCENABLER0;
	uint32	ISCENABLER1;
	uint32	ISCENABLER2;
	uint32	ISCENABLER3;
	uint32	ISCENABLER4;
}gicd_iscenabler;

#define  GICD_ISCENABLER    (*(volatile gicd_iscenabler *)0xC0009180)

// Interrupt Set-Pending Register 0x0000_0000
typedef struct {
	uint32	ISPENDR0;
	uint32	ISPENDR1;
	uint32	ISPENDR2;
	uint32	ISPENDR3;
	uint32	ISPENDR4;
}gicd_ispendr;

#define  GICD_ISPENDR    (*(volatile gicd_ispendr *)0xC0009200)

// Interrupt Clear-Pending Register 0x0000_0000
typedef struct {
	uint32	ICPENDER0;
	uint32	ICPENDER1;
	uint32	ICPENDER2;
	uint32	ICPENDER3;
	uint32	ICPENDER4;
}gicd_icpender;

#define  GICD_ICPENDER    (*(volatile gicd_icpender *)0xC0009280)

// Interrupt Set-Active Register 0x0000_0000
typedef struct {
	uint32	ISACTIVER0;
	uint32	ISACTIVER1;
	uint32	ISACTIVER2;
	uint32	ISACTIVER3;
	uint32	ISACTIVER4;
}gicd_isactiver;

#define  GICD_ISACTIVER    (*(volatile gicd_isactiver *)0xC0009300)

// Interrupt Clear-Active Register 0x0000_0000
typedef struct {
	uint32	ISCCTIVER0;
	uint32	ISCCTIVER1;
	uint32	ISCCTIVER2;
	uint32	ISCCTIVER3;
	uint32	ISCCTIVER4;
}gicd_iscctiver;

#define  GICD_ISCCTIVER    (*(volatile gicd_iscctiver *)0xC0009380)

// Interrupt Priority Register 0x0000_0000
typedef struct {
	uint32	IPRIORITYR0;   	//A:0-3
	uint32	IPRIORITYR1;	//A:4-7
	uint32	IPRIORITYR2;	//A:8-11
	uint32	IPRIORITYR3;	//A:12-15
	uint32	IPRIORITYR4;	//A:16-19
	uint32	IPRIORITYR5;	//A:20-23
	uint32	IPRIORITYR6;	//A:24-27
	uint32	IPRIORITYR7;	//A:28-31
	uint32	IPRIORITYR8;	//B:0-3
	uint32	IPRIORITYR9;	//B:4-7
	uint32	IPRIORITYR10;	//B:8-11
	uint32	IPRIORITYR11;	//B:12-15
	uint32	IPRIORITYR12;	//B:16-19
	uint32	IPRIORITYR13;	//B:20-23
	uint32	IPRIORITYR14;	//B:24-27
	uint32	IPRIORITYR15;	//B:28-31
	uint32	IPRIORITYR16;	//C:0-3
	uint32	IPRIORITYR17;	//C:4-7
	uint32	IPRIORITYR18;	//C:8-11
	uint32	IPRIORITYR19;	//C:12-15
	uint32	IPRIORITYR20;	//C:16-19
	uint32	IPRIORITYR21;	//C:20-23
	uint32	IPRIORITYR22;	//C:24-27
	uint32	IPRIORITYR23;	//C:28-31
	uint32	IPRIORITYR24;	//D:0-3
	uint32	IPRIORITYR25;	//D:4-7
	uint32	IPRIORITYR26;	//D:8-11
	uint32	IPRIORITYR27;	//D:12-15
	uint32	IPRIORITYR28;	//D:16-19
	uint32	IPRIORITYR29;	//D:20-23
	uint32	IPRIORITYR30;	//D:24-27
	uint32	IPRIORITYR31;	//D:28-31
	uint32	IPRIORITYR32;	//E:0-3
	uint32	IPRIORITYR33;	//E:4-7
	uint32	IPRIORITYR34;	//E:8-11
	uint32	IPRIORITYR35;	//E:12-15
	uint32	IPRIORITYR36;	//E:16-19
	uint32	IPRIORITYR37;	//E:20-23
	uint32	IPRIORITYR38;	//E:24-27
	uint32	IPRIORITYR39;	//E:28-31
}gicd_iprioriryr;

#define  GICD_IPRIORITYR    (*(volatile gicd_iprioriryr *)0xC0009400)

// Interrupt Processor Target Register 0x0000_0000
typedef struct {
	uint32	ITARGETSR0;
	uint32	ITARGETSR1;
	uint32	ITARGETSR2;
	uint32	ITARGETSR3;
	uint32	ITARGETSR4;
	uint32	ITARGETSR5;
	uint32	ITARGETSR6;
	uint32	ITARGETSR7;
	uint32	ITARGETSR8;
	uint32	ITARGETSR9;
	uint32	ITARGETSR10;
	uint32	ITARGETSR11;
	uint32	ITARGETSR12;
	uint32	ITARGETSR13;
	uint32	ITARGETSR14;
	uint32	ITARGETSR15;
	uint32	ITARGETSR16;
	uint32	ITARGETSR17;
	uint32	ITARGETSR18;
	uint32	ITARGETSR19;
	uint32	ITARGETSR20;
	uint32	ITARGETSR21;
	uint32	ITARGETSR22;
	uint32	ITARGETSR23;
	uint32	ITARGETSR24;
	uint32	ITARGETSR25;
	uint32	ITARGETSR26;
	uint32	ITARGETSR27;
	uint32	ITARGETSR28;
	uint32	ITARGETSR29;
	uint32	ITARGETSR30;
	uint32	ITARGETSR31;
	uint32	ITARGETSR32;
	uint32	ITARGETSR33;
	uint32	ITARGETSR34;
	uint32	ITARGETSR35;
	uint32	ITARGETSR36;
	uint32	ITARGETSR37;
	uint32	ITARGETSR38;
	uint32	ITARGETSR39;
}gicd_itargetsr;

#define  GICD_ITARGETSR   (*(volatile gicd_itargetsr *)0xC0009800)

// Interrupt Configuration Register 0x0000_0000
typedef struct {
	uint32	ICFGR0;
	uint32	ICFGR1;
	uint32	ICFGR2;
	uint32	ICFGR3;
	uint32	ICFGR4;
	uint32	ICFGR5;
	uint32	ICFGR6;
	uint32	ICFGR7;
	uint32	ICFGR8;
	uint32	ICFGR9;
}gicd_icfgr;

#define  GICD_ICFGR   (*(volatile gicd_icfgr *)0xC0009C00)

// Private Peripheral Interrupt Register 0x0000_0000
#define  GICD_PPISR			__REG(0xC0009D00)

// Shared Peripheral Interrupt Status Register 0x0000_0000
typedef struct {
	uint32	SPISR0;
	uint32	SPISR1;
	uint32	SPISR2;
	uint32	SPISR3;
}gicd_spisr;

#define  GICD_SPISR   (*(volatile gicd_spisr *)0xC0009D04)

// Software Generated Interrupt Register 0x0000_0000
#define  GICD_SGIR			__REG(0xC0009F00)

// SGI Clear-Pending Register 0x0000_0000
typedef struct {
	uint32	CPENDSGIR0;
	uint32	CPENDSGIR1;
	uint32	CPENDSGIR2;
	uint32	CPENDSGIR3;
}gicd_cpendsgir;

#define  GICD_CPENDSGIR   (*(volatile gicd_cpendsgir *)0xC0009F10)

// SGI Set-Pending Register 0x0000_0000
typedef struct {
	uint32	SPENDSGIR0;
	uint32	SPENDSGIR1;
	uint32	SPENDSGIR2;
	uint32	SPENDSGIR3;
}gicd_spendsgir;

#define  GICD_SPENDSGIR   (*(volatile gicd_spendsgir *)0xC0009F20)


#define  GICC_CTRL 			__REG(0xC000A000)		// CPU Interface Control Register 					0x0000_0000
#define  GICC_PMR 			__REG(0xC000A004)		// Interrupt Priority Mask Register 				0x0000_0000
#define  GICC_BPR 			__REG(0xC000A008)		// Binary Point Register 							0x0000_002D
#define  GICC_IAR 			__REG(0xC000A00C)		// Interrupt Acknowledge Register 					0x0000_03FF
#define  GICC_EOIR 			__REG(0xC000A010)		// End of Interrupt Register 						0x0000_0000
#define  GICC_RPR 			__REG(0xC000A014)		// Running Priority Register 						0x0000_00FF
#define  GICC_HPPIR 		__REG(0xC000A018)		// Highest Priority Pending Interrupt Register 		0x0000_03FF
#define  GICC_ABPR 			__REG(0xC000A01C)		// Aliased Binary Point Register 					0x0000_0003
#define  GICC_AIAR 			__REG(0xC000A020)		// Aliased Interrupt Acknowledge Register 			0x0000_03FF
#define  GICC_AEOIR 		__REG(0xC000A024)		// Aliased End of Interrupt Register 				0x0000_0000
#define  GICC_AHIPPIR 		__REG(0xC000A028)		// Aliased Highest Priority Pending Interrupt Register 0x0000_0000
#define  GICC_APR0 			__REG(0xC000A0D0)		// Active Priority Register 						0x0000_0000
#define  GICC_NSAPR0 		__REG(0xC000A0E0)		// Non-Secure Active Priority Register 				0x0202_043B
#define  GICC_DIR 			__REG(0xC000B000)		// Deactivate Interrupt Register 					0x0000_0000

#endif	   // __S5P6818_INT_H__


