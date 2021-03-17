
#include "math.h"
/*
int sqrt(int n)
{
	int left=0;
	int right=n;
	int mid;
	int last;
	while(left<=right){
		mid=(right-left)/2+left;

		if(mid*mid<=n){
			last=mid;
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return last;
}
*/

int abs(int n)
{
	if(n < 0)
		return -n;
	else
		return n;
}

int sqrt(int n) //用二分法 
{ 
	if(n<0) //小于0的按照你需要的处理 
		return n; 
	float mid,last; 
	float low,up; 
	low=0,up=n; 
	mid=(low+up)/2; 
	do
	{
		if(mid*mid>n)
			up=mid; 
		else 
			low=mid;
		last=mid;
		mid=(up+low)/2; 
	}while(abs(mid - last) > 0.001);//精度控制
	return mid; 
}
