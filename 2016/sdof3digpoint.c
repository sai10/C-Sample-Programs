#include<stdio.h>
int main()
{
    int d,m,n,*p;
    printf("Enter the 3 digit number");
    scanf("%d",&n);
    p=&n;
    d=*p/10;
    m=d%10;
    printf("2nd digit number is %d",m);
}


