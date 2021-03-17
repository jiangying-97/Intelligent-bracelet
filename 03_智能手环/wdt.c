#include "wdt.h"
#include "s5p6818.h"

void hal_wdt_init(void)
{
	// 设置一级分频值
	WTCON = WTCON & (~(0xFF << 8)) | (249 << 8);
	// 设置二级分频值
	WTCON = WTCON & (~(0x3 << 3)) | (0x2 << 3);
	// 设置喂狗时间
	WTCNT = 9375 * 5;
	// 使能看门狗复位产生器
	WTCON |= (1 << 2);
	// 使能看门狗定时起
	WTCON |= (1 << 5);
}

void hal_feed_dog(void)
{
	WTCNT = 9375 * 5;
}
