#include<stdio.h>

int disp_LCM3(int);

int a,b,c;

int main()
{
    int x,y;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    y = disp_LCM3(x);

    printf("LCM = %d",y);
}

int disp_LCM3(int x)
{
    if(a>b && a>c)
    {
        x=a;
    }
    else if(b>c)
    {
        x=b;
    }
    else
    {
        x=c;
    }

    while(1)
    {
        if(x%a==0 && x%b==0 && x%c==0)
        {
            return x;
        }

        x=x+1;
    }
}
