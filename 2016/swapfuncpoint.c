#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    r=swap(&a,&b);
    printf("a=%d b=%d\n\n",a,b);
}
void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

