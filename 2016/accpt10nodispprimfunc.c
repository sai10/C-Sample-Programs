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
    int i,c=0,j;
    printf("Prime numbers are:");
    for(i=0;i<10;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                c++;
        }
        if(c<=2 && c!=0 && c!=1)
            printf("\n%d",a[i]);
    }

}
