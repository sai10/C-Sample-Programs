#include<stdio.h>
void main()
{
    int a[10],*p;
    p=a;
    write(p);
    read(p);
}
void write(int *p)
{
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",p+i);
}
void read(int *p)
{
    int i;
    printf("In reverse order:");
    for(i=9;i>=0;i--)
        printf("%d",*(p+i));
}

