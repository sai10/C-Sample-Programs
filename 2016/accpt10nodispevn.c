#include<stdio.h>
void main()
{
    int n[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    printf("Even numbers are:");
    for(i=0;i<10;i++)
    {
        if(n[i]!=0 && n[i]!=1 && n[i]%2==0)
            printf("%d",n[i]);
    }
}
