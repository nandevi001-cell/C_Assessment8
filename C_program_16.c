#include<stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
	int x,y;
	y=disp_biggest_4digit_div7_9(x);
	printf("Biggest number divisible by 7 and 9:%d",y);
}
int disp_biggest_4digit_div7_9(int x)
{
	x=9999;
	while(x>=1000)
	{
		if(x%7==0 && x%9==0)
		{
			return x;
		}
		x=x-1;
	}
}
