#include<stdio.h>
int r=0;
void main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=num(n);
    if(r==n)
        printf("Entered number is paindrome");
    else
        printf("Entered number is not a palindrome");
}
int num(int n)
{
    int d;
    if(n==0)
    return 0;
    else
        {
    d=n%10;
    r=r*10+d;
    n=num(n/10);
    }
    return r;
}
