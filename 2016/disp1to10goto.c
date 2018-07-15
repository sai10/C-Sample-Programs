#include<stdio.h>
void main()
{
    int n=1;
    display:
        printf("%d\n",n);
        n=n+1;
    if(n<=10)
        goto display;
}
