#include<stdio.h>
int s=0;
int factor(int n,int i)
{
    int rem,f;
    rem=n%i;
    if(rem==0)
        s=s+i;
    if(i==1)
        return 1;
        f=factor(n,i-1);
        return s;
}

void main()
{
    int n,i,r;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    r=factor(n,i);
    if(r==2*n)
        printf("Number is perfect");
    else
        printf("Number is not perfect");
}

