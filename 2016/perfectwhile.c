#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            s=s+i;
        i++;
    }
    if(s==2*n)
        printf("Number is perfect");
    else
        printf("Number is not perfect");
}
