#include<stdio.h>
int ld(int m)
{
    int ld;
    ld=m%10;
    return ld;
}
void main()
{
    int n,r;
    printf("Enter the 3 digit number:");
    scanf("%d",&n);
    r=ld(n);
    printf("Last digit of the number is : %d",r);
}
