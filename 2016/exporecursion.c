#include<stdio.h>
void main()
{
    int n,x,r;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter the degree of the number:");
    scanf("%d",&x);
    r=power(n,x);
    printf("Its value is:%d",r);
}
int power(int n,int x)
{
    int p;
    if(x==0)
        return 1;
    else
        p=n*ceil(pow(n,x-1));
        return p;
}
