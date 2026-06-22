#include<stdio.h>

int check_last_digit_odd(int);

int main()
{
    int x,y;

    printf("Enter a number: ");
    scanf("%d",&x);

    y = check_last_digit_odd(x);

    printf("%d",y);
}

int check_last_digit_odd(int x)
{
    int first,temp,div=1,middle,result;

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    if(first % 2 != 0)
    {
        first = first - 1;
    }

    middle = x % div;

    result = first * div + middle;

    return result;
}
