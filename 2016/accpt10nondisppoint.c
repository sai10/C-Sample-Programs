#include<stdio.h>
void main()
{
    int a[10],i,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    ptr=&a[0];
    printf("Numbers you entered are:");
    for(i=0;i<10;i++)
        printf("\t%d",*(ptr+i));
}
