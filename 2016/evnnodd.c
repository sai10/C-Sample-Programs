#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
        printf("The number is neither even nor odd");
    if(n%2==0 && n!=0)
        printf("The number is even");
    if(n%2!=0)
        printf("The number is odd");
}
