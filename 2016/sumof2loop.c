#include<stdio.h>
void main()
{
    int n,m,i;
    printf("Enter 2 numbers:");
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
        n++;
    printf("Sum of 2 numbers is:%d",n);
}

