#include<stdio.h>
int disp_two_digit_square(int);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=disp_two_digit_square(x);
	printf("Total count of two digit perfect square numbers:%d",y);
}
int disp_two_digit_square(int x)
{
	int count=0,i;
	while(x>10)
	{
		i=x%100;
		if(i==16 || i==25 || i==36 || i==49 || i==64 || i==81)
		{
			count=count+1;
		}
		x=x/10;
	}
	return count;
}
