#include<stdio.h>

int disp_sum(int);

int main()
{
    int x,y;

    x=1;

    y=disp_sum(x);

    printf("Sum=%d",y);
}

int disp_sum(int x)
{
    int sum=0;

    while(x<=5)
    {
        sum=sum+x;
        x=x+1;
    }

    return sum;
}
