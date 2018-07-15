#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
        printf("number is neither even nor odd");
    else if(n%2==0)
        printf("number is even");
    else
        printf("number is odd");
}
