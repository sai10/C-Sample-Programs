#include<stdio.h>
void main()
{
    int r,a,b;
    printf("\tGCD OF 2 NUMBERS");
    printf("\n\t----------------");
    printf("\n    Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    r=gcd(a,b);
    printf("\nGCD of 2 numbers is:%d",r);
}
int gcd(int a,int b)
{
    int rem;
    rem=a%b;
    if(rem==0)
        return b;
    else
        gcd(b,rem);
}
