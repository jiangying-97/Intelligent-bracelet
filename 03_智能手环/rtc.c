#include "s5p6818.h"
#include "rtc.h"

unsigned int sec1 = 0;
unsigned int sec, min, hour, week, day, mouth, year;

void hal_rtc_init(void)
{
	RTCCTRL = RTCCTRL | 0x1;
	RTCCNTWRITE = RTCCNTWRITE & 0x0;
	sec = 0;  
	min = 40;   
	hour = 14; 
	week = 2;  
	day = 23;  
	mouth = 4; 
	year = 2019;  
	sec1 = RTCCNTREAD;
	//printf("%x\n",RTCCTRL);
	RTCCTRL = RTCCTRL & (~0x1);
}

void hal_rtc_convert(void)
{
		sec++;
		if (sec == 60)
		{
			sec = 0;
			min++;
			if (min == 60)
			{
				min = 0;
				hour++;
				if (hour == 24)
				{
					hour = 0;
					week++;
					day++;
					if (week == 8)
					{
						week = 1;
					}
					switch (mouth)
					{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						if (day == 32)
						{
							day = 1;
							mouth++;
						}
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						if (day == 31)
						{
							day = 1;
							mouth++;
						}
						break;
					case 2:
						if (((year % 4) == 0) && ((year % 100) != 0) || ((year | 400) == 0) )
						{
							if (day == 30)
							{
								day = 1;
								mouth++;
							}
						}
						else
						{
							if (day == 29)
							{
								day = 1;
								mouth++;
							}
						}
						break;
					default:
						break;
					}
					if (mouth == 13)
					{
						mouth = 1;
						year++;
					}
				}
			}
		}
}

void print_time(void)
{
	printf("%d-%d-%d week:%d %d:%d:%d\n", year, mouth, day, week, hour, min, sec);
}
