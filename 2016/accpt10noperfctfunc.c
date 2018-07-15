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
    int i,s=0,j;
    printf("Perfect numbers are:\n");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                s=s+j;
        }
        if(s==2*a[i] && a[i]!=0)
            printf("\t%d",a[i]);

        s=0;
    }
}
