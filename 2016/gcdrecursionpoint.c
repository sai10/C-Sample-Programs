#include<stdio.h>
void main()
{
    int r,a,b,*p,*q;
    printf("\tGCD OF 2 NUMBERS");
    printf("\n\t----------------");
    printf("\n    Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    p=&a;q=&b;
    r=gcd(p,q);
    printf("\nGCD of 2 numbers is:%d",r);
}
int gcd(int *p,int *q)
{
    int rem,b,r;
    b=*q;
    rem=(*p)%(*q);
    r=&rem;
    if(rem==0)
        return b;
    else
        gcd(q,r);
}
