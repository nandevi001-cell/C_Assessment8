#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=disp_total_odd_digits(x);
	printf("Count:%d",y);
}
int disp_total_odd_digits(int x)
{
	int ones,count=0;
	while(x>0)
	{
		ones=x%10;
		if(ones%2!=0)
		{
			count=count+1;
		}
		x=x/10;
	}
	return count;
}
