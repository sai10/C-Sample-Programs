#include<stdio.h>
void primcompo()
{
    int n,i,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;

    }
     if(c<=2)
        printf("Number is prime");
    else if(c==0 || c==1)
        printf("Number is neither prime nor composite");
    else
        printf("Number is composite");

}
void main()
{
    primcompo();
}
