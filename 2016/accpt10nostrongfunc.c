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
    int i,s=0,d,e=1,j,temp;
    printf("Strong numbers are:");
    for(i=0;i<10;i++)
    {
        temp=a[i];
        while(a[i]!=0)
        {
            d=a[i]%10;
            for(j=d;j>0;j--)
            {
                e=e*j;
            }
            s=s+e;
            e=1;
            a[i]=a[i]/10;
        }
        if(s==temp)
            printf("\n%d",temp);
        s=0;
        e=1;
    }
}
