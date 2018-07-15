#include<stdio.h>
void main()
{
    int n,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    if(*p%2==0 && *p%3==0)
        printf("Number is divisible by 2 and 3 at a time");
    if(*p%2!=0 && *p%3!=0)
        printf("Number is not divisible by 2 and 3 at a time");
    if(*p%2==0 && *p%3!=0)
        printf("Number is not divisible by 2 and 3 at a time");
    if(*p%2!=0 && *p%3==0)
        printf("Number is not divisible by 2 and 3 at a time");
}


