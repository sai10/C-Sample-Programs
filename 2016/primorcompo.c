#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;

    }
        if(c>2)
            printf("number is composite");
       else if(c==1 || c==0)
            printf("number is neither prime nor composite");
        else
            printf("number is prime");

}
