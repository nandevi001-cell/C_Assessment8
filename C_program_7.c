#include<stdio.h>
int disp_reverse_number(int);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&ax);
	y=disp_reverse_number(x);
	printf("Reverse=%d",y);
}
int disp_reverse_number(int x)
{
	int reverse,ones;
	while(x>0)
	{
		ones=x%10;
		reverse=reverse*10+ones;
		x=x/10;
	}
	return reverse;
}
