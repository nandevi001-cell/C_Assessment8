#include<stdio.h>

int disp_interchange_first_last_digit(int);

int main()
{
    int x,y;

    printf("Enter a number: ");
    scanf("%d",&x);

    y = disp_interchange_first_last_digit(x);

    printf("Result = %d",y);
}

int disp_interchange_first_last_digit(int x)
{
    int first,last,middle,temp,div=1,result;

    last = x % 10;

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    middle = (x % div) / 10;

    result = last * div + middle * 10 + first;

    return result;
}
