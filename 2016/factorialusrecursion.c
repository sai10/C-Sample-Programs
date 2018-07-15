#include<stdio.h>
int fact(int n)
{
    int r;
    if(n==1)
        return 1;
    else
        r=n*fact(n-1);
    return r;
}
void main()
{
    int n,c;
    printf("Enter the Number:");
    scanf("%d",&n);
    c=fact(n);
    printf("Factorial of the number is %d ",c);
}
