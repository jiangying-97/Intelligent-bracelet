#include "iic.h"
#include "mma8451.h"
#include"s5p6818.h"

#define SLAVE_ADDR 0x1C


void Delay(void)
{
	unsigned int i=1000;
	while(i--);
}

void IIC_Init(void)
{
	/*设置GPIOD6(SCL)为GPIO功能*/
	GPIOD.ALTFN0 = GPIOD.ALTFN0 & (~(0x3 << 12));
	/*设置GPIOD7(SDA)为GPIO功能*/
	GPIOD.ALTFN0 = GPIOD.ALTFN0 & (~(0x3 << 14));
	/*设置GPUID6(SCL)为输出模式*/
	GPIOD.OUTENB = GPIOD.OUTENB | (1 << 6);
	/*设置GPUID7(SDA)为输出模式*/
	GPIOD.OUTENB = GPIOD.OUTENB | (1 << 7);
	/*将SCL和SDA拉高 - IIC空闲状态*/
	SET_SCL_H;
	SET_SDA_H;
	Delay();
}

/*起始信号 - SCL为高电平期间,SDA由高变低*/
void IIC_Start(void)
{
	SET_SDA_OUT;

	SET_SCL_H;	//SCL拉高	
	SET_SDA_H;	//SDA拉高
	Delay();
	SET_SDA_L;	//SDA由高变低
	Delay();
}

/*发送一个字节的数据并且接收应答/非应答*/
char IIC_Send_Byte( char Dat)
{
	char i;
	char Ack = 0;
	/*发送数据位 - SCL为低发送方写数据,SCL为高接收方读数据*/
	SET_SDA_OUT;
	for(i=0;i<8;i++)
	{
		SET_SCL_L;		//SCL拉低
		Delay();
		if(Dat & 0x80)	//发送方向数据线SDA上写一位数据
			SET_SDA_H;
		else
			SET_SDA_L;
		Delay();
		SET_SCL_H;		//SCL拉高
		Delay();		//接收方从数据线SDA上读一位数据
		Dat <<= 1;
	}

	/*等待应答信号 - 低电平应答,高电平非应答*/
	SET_SCL_L;			//SCL拉低
	Delay();
	SET_SDA_H;			//释放SDA使用权
	SET_SDA_IN;			//设置SDA为输入模式,准备接收应答信号
	Delay();			//接收方向数据线SDA上写一位应答位	
	SET_SCL_H;			//SCL拉高
	Delay();
	if(READ_SDA)		//发送方从数据线SDA上读一位应答位
		Ack = -1;		//SDA为高 - 非应答
	else 				
		Ack = 1;		//SDA为低 - 应答
	SET_SCL_L;
	Delay();
	return Ack;
}

/*接收一个字节的数据并且发送应答/非应答信号*/
char IIC_Rec_Byte(char Ack)
{
	char i;
	char Dat = 0;
	SET_SDA_IN;

	for(i=0;i<8;i++)
	{
		SET_SCL_L;		//SCL拉低
		Delay();		//发送方向数据线SDA上写一位数据
		SET_SCL_H;		//SCL拉高
		Delay();
		Dat <<= 1;
		if(READ_SDA)	//接收方从数据线SDA上读一位数据
			Dat |= 1;
		else
			Dat |= 0;
	}
	/*发送答信号 - 低电平应答,高电平非应答*/
	SET_SDA_OUT;		
	SET_SCL_L;			//SCL拉低
	Delay();
	if(Ack == 0)		//接收方向数据线SDA上写一位应答位
		SET_SDA_L;		//SDA为低 - 应答
	else
		SET_SDA_H;		//SDA为高 - 非应答
	Delay();
	SET_SCL_H;			//SCL拉高
	Delay();			//发送方从数据线SDA上读一位应答位
	SET_SCL_L;
	Delay();
	return Dat;
}

/*停止信号 - SCL为高电平期间,SDA由低变高 */
void IIC_Stop(void)
{
	SET_SDA_OUT;
	SET_SCL_L;
	Delay();
	SET_SDA_L;	//SDA拉低
	Delay();
	SET_SCL_H;	//SCL拉高
	Delay();
	SET_SDA_H;	//SDA由低变高
	Delay();
}

void iic_Write_byte(char RegAddr,char Dat)
{
	IIC_Start();						//起始信号
	IIC_Send_Byte(SLAVE_ADDR<<1);		//发送从机地址,后续数据为主机写
	IIC_Send_Byte(RegAddr);				//发送寄存器的地址,确定要写的寄存器
	IIC_Send_Byte(Dat);					//发送要写入寄存器的数据
	IIC_Stop();							//停止信号
}

char iic_Read_byte(char RegAddr)
{
	char Dat;
	IIC_Start();						//起始信号
	IIC_Send_Byte(SLAVE_ADDR<<1);		//发送从机地址,后续的数据为主机写
	IIC_Send_Byte(RegAddr);				//发送寄存器地址,确定要读的寄存器
	IIC_Start();						//因为读写方向改变,重新开始
	IIC_Send_Byte((SLAVE_ADDR<<1)|1);	//发送从机地址,后续的数据为主机读
	Dat = IIC_Rec_Byte(-1);				//读取寄存器中的数据,并发送非应答信号
	IIC_Stop();							//通知信号
	return Dat;
}





