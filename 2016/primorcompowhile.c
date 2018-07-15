#include<stdio.h>
void main()
{
    int i=1,n,c=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            c++;
            i++;
    }
    if(c>2)
        printf("Number is composite");
    else if(c==1 || c==0)
        printf("Number is neither prime nor composite");
    else
        printf("Number is prime");
}
