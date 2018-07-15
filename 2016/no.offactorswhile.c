#include<stdio.h>
void main()
{
    int i=1,n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            c++;
        i++;
    }
    printf("Number of factors are:%d",c);
}
