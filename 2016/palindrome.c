#include<stdio.h>
void main()
{
    int temp,n,r=0,d;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    n=temp;
    if(r==n)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

}
