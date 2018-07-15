#include<stdio.h>
int c=0;
void main()
{
    int n,i,r;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    r=factor(n,i);
     printf(" Number of Factors of the number are:%d",r);
}
int factor(int n,int i)
{
    int rem,s;
    rem=n%i;
    if(rem==0)
        c++;
    if(i==1)
        return 1;

    s=factor(n,i-1);
    return c;
}


