/// x0/0!-x1/1!+x2/2!-x3/3!+....................    write a program for this series?

#include<stdio.h>
void main()
{
    int m,n,i,s=0,e=0,x,y,a,b;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the limit:");
    scanf("%d",&y);
    if(y%2==0)
    {
        a=y/2;
        b=y/2;
    }
    else
    {
        a=y/2+1;
        b=y/2;
    }
    for(i=0;i<=a;i++)
        s=s+(ceil(pow(x,i))/fact(i));

    for(i=0;i<=b;i++)
        e=e-(ceil(pow(x,i))/fact(i));

    printf("\n\nResult is:%d",s+e);
}

int fact(int i)
{
    float e=1;
    if(i==0)
        return 0;
    else
    {
        e=e*i;
        fact(i-1);
    }
    return e;
}

