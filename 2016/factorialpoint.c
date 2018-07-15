#include<stdio.h>
void main()
{
    int i,n,m=1,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    for(i=*p;i>=1;i--)
        m=m*i;
    printf("Factorial of the number is %d",m);
}

