#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
	int x,y;
	y=disp_sum_all_digits(x);
	printf("Total number of digits:%d",y);
}
int disp_sum_all_digits(int x)
{
	int total=0,ones;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
		ones=x%10;
		total=total+ones;
		x=x/10;
	}
	return total;
}
