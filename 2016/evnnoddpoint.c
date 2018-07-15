#include<stdio.h>
void main()
{
    int n,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    if(*p!=1 && *p!=0 )
    {
        if(*p%2==0)
            printf("It is an even number");
        else
            printf("It is a odd number ");
    }
    else
        printf("It is neither prime nor even");
}

