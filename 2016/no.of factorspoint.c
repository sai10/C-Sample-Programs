#include<stdio.h>
void main()
{
    int i,n,c=0,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<=*p;i++)
    {
        if(*p%i==0)
            c++;
    }
    printf("Number of factors of the number are:%d",c);
}


