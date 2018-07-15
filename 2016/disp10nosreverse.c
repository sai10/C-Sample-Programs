#include<stdio.h>
void main()
{
    int n[10],i;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    printf("Numbers in reverse order are:");
    for(i=9;i>=0;i--)
        printf("%d",n[i]);
}
