#include<stdio.h>
void main()
{
    int i,n,s=0,d;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=3;i++)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of digits of 3 digit number is %d",s);
}
