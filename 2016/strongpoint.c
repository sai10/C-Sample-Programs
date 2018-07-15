#include<stdio.h>
void main()
{
    int *p,n,s=0,e=1,d,i,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    temp=*p;
    while(*p!=0)
    {
        d=*p%10;
        for(i=d;i>=1;i--)
            e=e*i;
        s=s+e;
        e=1;
        *p=*p/10;
    }
    if(s==temp)
        printf("It is a strong number");
    else
        printf("It is not an strong number");
}

