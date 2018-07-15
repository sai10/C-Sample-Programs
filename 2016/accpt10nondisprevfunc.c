#include<stdio.h>
void main()
{
    int a[10];
    write(a);
    read(a);
}
void write(int a[])
{
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
}
void read(int a[])
{
    int i;
    printf("In reverse order:");
    for(i=9;i>=0;i--)
        printf("%d",a[i]);
}
