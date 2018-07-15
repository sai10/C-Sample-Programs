#include<stdio.h>
void main()
{
    int s,a,b,*p,*q;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    s=*p+*q;
    printf("Sum of two numbers is:%d",s);
}
