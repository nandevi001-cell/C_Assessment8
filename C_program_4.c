#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
	int x,y;
	x=10;
	y=disp_2digit_odd_sum_tens7(x);
	printf("Sum=%d",y);
}
int disp_2digit_odd_sum_tens7(int x)
{
	int sum=0,tens;
	while(x<100)
	{
		tens=x/10;
		if(tens==7 && x%2!=0)
		{
			sum=sum+x;
		}
		x=x+1;
	}
	return sum;
}
