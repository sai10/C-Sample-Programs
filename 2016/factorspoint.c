#include<stdio.h>
void main()
{
    int i,n,*p;
    printf("Enter a number:");
    scanf("%d",&n);
    p=&n;
    printf("Factors of the number are:");
    for(i=1;i<=*p;i++)
    {
        if(*p%i==0)
            printf("\n%d",i);
    }
}


