#include<stdio.h>

int disp_HCF2(int);

int a,b;

int main()
{
    int x,y;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    y = disp_HCF2(x);

    printf("HCF = %d",y);
}

int disp_HCF2(int x)
{
    int hcf = 1;

    x = 1;

    while(x <= a && x <= b)
    {
        if(a % x == 0 && b % x == 0)
        {
            hcf = x;
        }

        x = x + 1;
    }

    return hcf;
}
