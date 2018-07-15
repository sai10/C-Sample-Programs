#include<stdio.h>
void main()
{
    int i,n,m=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        m=m*i;
    printf("Factorial of the number is %d",m);
}
