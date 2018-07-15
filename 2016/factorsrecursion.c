#include<stdio.h>
void main()
{
    int n,i,r;
    printf("Enter the number:");
    scanf("%d",&n);
    i=n;
    printf("Factors of the number are:");
    r=factor(n,i);
}
int factor(int n,int i)
{
    int rem,s;
    rem=n%i;
    if(rem==0)
        printf("\n  %d  ",i);
    if(i==1)
        return 1;

    s=factor(n,i-1);
}

