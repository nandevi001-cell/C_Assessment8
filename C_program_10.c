#include<stdio.h>
int disp_singledigit_prime(int);
int main()
{
	int x,y;
	y=disp_singledigit_prime(x);
	printf("Total:%d",y);
}
int disp_singledigit_prime(int x)
{
	int total=0;
	x=1;
	while(x<10)
	{
		if(x==2 || x==3 || x==5 || x==7)
		total=total+1;
		x=x+1;
	}
	return total;
}
