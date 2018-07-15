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
        scanf("%d",(p+i));
}
void read(int *p)
{
    int i,s=0,j;
    printf("Perfect numbers are:\n");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=*(p+i);j++)
        {
            if(*(p+i)%j==0)
                s=s+j;
        }
        if(s==2*(*(p+i)) && *(p+i)!=0)
            printf("\t%d",*(p+i));

        s=0;
    }
}

