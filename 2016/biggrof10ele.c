#include<stdio.h>
void main()
{
    int n[10],i,large;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(i=1;i<10;i++)
    {
        if(n[i-1]<n[i])
            large=n[i];
    }
    printf("Bigger of 10 elements is %d",large);
}
