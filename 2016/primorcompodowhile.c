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
    if(c>2)
        printf("Number is composite");
     else if(c==1 || c==0)
        printf("Number is neither prime nor composite");
    else
        printf("Number is prime");
}
