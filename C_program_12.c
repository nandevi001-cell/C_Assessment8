#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=disp_total_2digit_odd(x);
	printf("Count:%d",y);
}
int disp_total_2digit_odd(int x)
{
	int hundreds,count=0;
	while(x>0)
	{
		hundreds=x/100;
		if(hundreds%2!=0)
		{
			count=count+1;
		}
		x=x/10;
	}
	return count;
}
