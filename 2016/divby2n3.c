#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
        printf("Number is divisible by 2 and 3 at a time");
    if(n%2!=0 && n%3!=0)
        printf("Number is not divisible by 2 and 3 at a time");
    if(n%2==0 && n%3!=0)
        printf("Number is not divisible by 2 and 3 at a time");
    if(n%2!=0 && n%3==0)
        printf("Number is not divisible by 2 and 3 at a time");
}
