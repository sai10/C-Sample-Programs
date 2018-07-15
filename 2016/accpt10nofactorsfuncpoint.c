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
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("\nFactors of %d are:",*(p+i));
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
                printf("\n%d",j);
        }
    }
}

