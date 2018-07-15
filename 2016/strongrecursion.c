#include<stdio.h>
int s=0;
void main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=strong( n);
    if(r==n)
        printf("It is a strong number");
    else
        printf("It is not a strong number");
}
int strong(int m)
{
    int d,r,t;
    if(m==0)
        return 0;
    else
    {
        d=m%10;
        r=fact(d);
        s=s+r;
        t=strong(m/10);
    }
    return s;
}
int fact(int d)
{
    int m;
    if(d==1)
        return 1;
    else
        m=d*fact(d-1);
    return m;
}
