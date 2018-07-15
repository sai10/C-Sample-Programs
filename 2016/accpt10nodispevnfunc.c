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
    printf("Even numbers are:");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0 && a[i]!=0)
            printf("%d",a[i]);
    }
}
