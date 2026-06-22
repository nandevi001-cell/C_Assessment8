#include<stdio.h>

int disp_2digit_ones5(int);

int main()
{
    int x,y;

    y = disp_2digit_ones5(x);

    printf("Total:%d",y);
}

int disp_2digit_ones5(int x)
{
    int total=0, ones;

    x = 10;

    while(x < 100)
    {
        ones = x % 10;

        if(ones == 5)
        {
            total = total + x;
        }

        x = x + 1;
    }

    return total;
}
