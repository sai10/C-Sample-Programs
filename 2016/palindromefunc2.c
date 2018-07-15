#include<stdio.h>
int palindrome(int m)
{
    int d,i,s=0;
    while(m!=0)
    {
        d=m%10;
        s=s*10+d;
        m=m/10;
    }
    return s;
}
void main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=palindrome(n);
    if(r==n)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
}
