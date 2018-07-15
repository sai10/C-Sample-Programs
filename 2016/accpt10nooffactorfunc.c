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
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
}
void read(int a[])
{
    int i,c=0,j;
    for(i=0;i<10;i++)
    {
        printf("\n\nNumber of factors of %d are:",a[i]);
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                c++;
        }
        printf("%d",c);
        c=0;
        }
}
