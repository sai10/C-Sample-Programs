#include<stdio.h>
void main()
{
    int a[10];
    write(&a);
    read(&a);
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
    int i,large;
    for(i=0;i<10;i++)
    {
        if(*(p+i-1)<*(p+i))
            large=*(p+i);
    }
    printf("Largest element is:%d",large);
}

