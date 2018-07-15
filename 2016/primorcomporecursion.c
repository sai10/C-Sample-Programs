#include<stdio.h>
int c=0;
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
void main()
{
    int n,i,r;
    printf("Enter the number other than zero:");
    scanf("%d",&n);
    i=n;
    r=factor(n,i);
    if( r==1)
        printf("Neither prime nor composite");
    else if(r<=2)
        printf("prime");
    else
        printf("composite");
}
