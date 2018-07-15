#include<stdio.h>
void main()
{
    int fib=0,a,b;
    a=0;
    b=1;
    printf("%d\n%d",a,b);
    while(fib<100)
    {
        fib=a+b;
        a=b;
        b=fib;
if(fib<100)
        printf("\n%d",fib);
    }
}
