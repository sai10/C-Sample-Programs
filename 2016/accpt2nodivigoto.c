#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    if(b==0)
        goto stop;
    r=a/b;
    printf("result is %d",r);
    goto yes;
    stop:
        printf("\nDivision by zero is not possible");
    yes:
        printf("\nover");
}
