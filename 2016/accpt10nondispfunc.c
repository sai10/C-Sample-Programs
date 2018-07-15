#include<stdio.h>
void main()
{
    int a[10];
    write(a);
    read(a);
}
void write(int b[])
{
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&b[i]);
}
void read(int c[])
{
    int i;
    printf("Numbers you have entered are:");
    for(i=0;i<10;i++)
        printf("\n%d",c[i]);
}
