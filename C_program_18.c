#include<stdio.h>

int disp_LCM2(int);

int a,b;

int main()
{
    int x,y;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    y = disp_LCM2(x);

    printf("LCM = %d",y);
}

int disp_LCM2(int x)
{
    if(a > b)
    {
        x = a;
    }
    else
    {
        x = b;
    }

    while(1)
    {
        if(x % a == 0 && x % b == 0)
        {
            return x;
        }

        x = x + 1;
    }
}
