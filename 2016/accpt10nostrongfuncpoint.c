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
    int i,s=0,d,e=1,j,temp;
    printf("Strong numbers are:");
    for(i=0;i<10;i++)
    {
        temp=*(p+i);
        while(*(p+i)!=0)
        {
            d=*(p+i)%10;
            for(j=d;j>0;j--)
            {
                e=e*j;
            }
            s=s+e;
            e=1;
            *(p+i)=*(p+i)/10;
        }
        if(s==temp)
            printf("\n%d",temp);
        s=0;
        e=1;
    }
}
