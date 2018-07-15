#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            s=s+i;
    }
    if(s==2*n)
        printf("The number is perfect");
    else
        printf("The number is not perfect");

}
