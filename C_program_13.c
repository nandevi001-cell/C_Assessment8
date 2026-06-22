#include<stdio.h>
int disp_single_digit_square(int);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=disp_single_digit_square(x);
	printf("Total count of single digit perfect square numbers:%d",y);
}
int disp_single_digit_square(int x)
{
	int count=0,ones;
	while(x>0)
	{
		ones=x%10;
		if(ones==1 || ones==4 || ones==9)
		{
			count=count+1;
		}
		x=x/10;
	}
	return count;
}
