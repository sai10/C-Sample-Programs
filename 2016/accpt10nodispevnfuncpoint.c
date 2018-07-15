#include<stdio.h>
void main()
{
    int a[10],*ptr;
    write(&a);
    read(&a);
}
void write(int *p)
{
    int i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",(p+i));
}
void read(int *p)
{
    int i;
    printf("Even numbers are:");
    for(i=0;i<10;i++)
    {
        if(*(p+i)%2==0 && *(p+i)!=0)
            printf("%d",*(p+i));
    }
}

