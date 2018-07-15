#include<stdio.h>
void main()
{
    int a,b,r;
    a=0;
    b=1;
    printf("The fibonacci series is:\n");
    printf("\n%d\n%d",a,b);
    r=fib(a,b);
}
int fib(int a,int b)
{
    int s,f;
    if(b>100)
           return 0;
    else
    {
        f=a+b;
        if(f<100)
        printf("\n%d",f);
        a=b;
        b=f;
    }
    s=fib(a,b);
    return s;
}
