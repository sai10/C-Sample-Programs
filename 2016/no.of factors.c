#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    printf("Number of factors of the number are:%d",c);
}
