#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            printf("\n%d",i);
        i++;
    }while(i<=n);
}
