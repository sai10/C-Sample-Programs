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
    int i,large,lrg;
    for(i=0;i<10;i++)
    {
        if(a[i-1]<a[i])
            large=a[i];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]!=large)
        {
            if(a[i-1]<a[i])
                lrg=a[i];
        }
    }
    printf("Second largest element is : %d",lrg);
}
