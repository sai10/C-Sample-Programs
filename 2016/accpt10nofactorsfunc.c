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
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("\nFactors of %d are:",a[i]);
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
                printf("\n%d",j);
        }
    }
}
