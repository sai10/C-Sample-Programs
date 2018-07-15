#include<stdio.h>
void main()
{
    int n,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    if(*p>0)
        printf("Number is positive");
    if(*p<0)
        printf("Number is negative");
}

