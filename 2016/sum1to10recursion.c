#include<stdio.h>

int sum(int m)
{
    int s;

    if(m==10)
        return 10;
    else
       {
    s=m+sum(m+1);

       }

         return s ;
}
void main()
{
    int n=1,r;
    r=sum(n);
    printf("sum of 1 to 10 is:\t%d",r);
}
