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
    printf("enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",p+i);
}
void read(int *p)
{
    int i,c=0,j;
    for(i=0;i<10;i++)
    {
        printf("\n\nNumber of factors of %d are:",*(p+i));
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
                c++;
        }
        printf("%d",c);
        c=0;
        }
}

