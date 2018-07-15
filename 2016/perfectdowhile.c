#include<stdio.h>
void main()
{
    int n,i=1,s=0;
    printf("Enter the number :");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            s=s+i;
        i++;
    }while(i<=n);
    if(s==2*n)
        printf("Number is perfect");
    else
        printf("Number is not perfect");
}
