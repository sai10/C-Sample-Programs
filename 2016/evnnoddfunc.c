#include<stdio.h>
void evnodd()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0 || n==1)
        printf("Number is neither even nor odd");
    else if(n%2==0)
        printf("Number is even");
    else
        printf("Number is odd");
}
void main()
{
    evnodd();
}
