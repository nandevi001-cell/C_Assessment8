#include<stdio.h>

int disp_count_sum14(int);

int main()
{
    int x,y;

    y = disp_count_sum14(x);

    printf("Count = %d", y);
}

int disp_count_sum14(int x)
{
    int n,digit,sum,count=0;

    x = 1;

    while(x < 100000)
    {
        n = x;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum == 14)
        {
            count = count + 1;
        }

        x = x + 1;
    }

    return count;
}
