#include<stdio.h>
int disp_rsum(int);
int main()
{
	int x,y;
	x=6;
	y=disp_rsum(x);
	printf("Sum:%d",y);
}
int disp_rsum(int x)
{
	int sum=0;
	while(x>0)
	{
		sum=sum+x;
		x=x-1;
	}
	return sum;
}
