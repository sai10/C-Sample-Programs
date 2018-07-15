#include<stdio.h>
void main()
{
    int i=1,n,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            c++;
        i++;
    }while(i<=n);
    printf("Number of factors of the number are :%d",c);
}
