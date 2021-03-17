#include "mma8451.h"
#include "iic.h"
#include "math.h"

/*
 * 函数功能：mma8451初始化
 * */
void mma8451_init(void)
{
	
	IIC_Init() ;   //设置IIC引脚功能
	iic_Write_byte(0x2A,0x01);		//激活MMA8451
	iic_Write_byte(0x2B,0x02);		//设置MMA8451测量精度为14bit

}
/*
 * 函数功能：获取加速度的数字量，并将其合并
 * 函数参数：high_addr:加速度的高位
 * 			low_addr:加速度的低位
 * 函数返回值：加速度的数字量
 * */
short get_accel_value(unsigned char high_addr, unsigned char low_addr)
{
	unsigned char value_h, value_l;
	short value;
	value_h = iic_Read_byte(high_addr);
	value_l = iic_Read_byte(low_addr);
	value = (short)((value_h << 8) | value_l);

	return (value >> 2);
}

/*
 * 函数功能：将加速度值由数字量转换为模拟量
 * 函数参数：value：数字量的加速度
 * 函数返回值：模拟量加速度值
 * */
short conversion_accel(short value)
{
	return (value * 2 * 9800 / 8192);
}

int oldPos = 0;
/*
 * 函数功能：计算步数
 * 参数：x轴，y轴，z轴加速度
 * 返回值：  1：走了一步    0：没有走步
 * */
int Step_Count(short axis0, short axis1, short axis2)
{
	int nowPos = 0;
//	printf("%d\n", axis0 * axis0 + axis1 * axis1 + axis2 * axis2);
	nowPos = (int)sqrt((int)(axis0 * axis0 + axis1*axis1 + axis2*axis2));
	printf("nowPos:%d  oldPos:%d  nowPos - oldPos:%d \n", nowPos, oldPos, nowPos - oldPos);
	if(nowPos - oldPos >= 1000) {
		oldPos = nowPos;
		return 1;
	} 
	else  {
		oldPos = nowPos;
		return 0;
	}
	
}
