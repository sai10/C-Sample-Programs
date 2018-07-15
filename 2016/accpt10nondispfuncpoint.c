#include<stdio.h>
void main()
{
    int a[10],*ptr;
    ptr=&a[0];
    write(ptr);
    read(ptr);
}
void write(int *p)
{
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",p+i);
}
void read(int *q)
{
    int i;
    printf("Numbers you have entered are:");
    for(i=0;i<10;i++)
        printf("\n%d",*(q+i));
}

