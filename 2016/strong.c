#include<stdio.h>
void main()
{
    int i,j,n,c=0,e=1,s=0,d,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n=temp;
    for(i=1;i<=c;i++)
    {
        d=n%10;
        for(j=d;j>=1;j--)
            e=e*j;
        s=s+e;
        n=n/10;
        e=1;
    }
    if(temp==s)
        printf("Number is strong");
    else
        printf("Number is not strong");

}
