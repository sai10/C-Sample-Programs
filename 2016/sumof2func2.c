#include<stdio.h>
int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
void main()
{
    int p,q,r;
    printf("Enter two numbers:");
    scanf("%d%d",&p,&q);
    r=sum(p,q);
    printf("sum is :%d",r);
}
