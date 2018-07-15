#include<stdio.h>
int prime(int m)
{
    int i,c=0;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
            c++;
    }
    return c;
}
void main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=prime(n);
        if(r<=2 && r!=0 && r!=1)
        printf("Number is prime");
        else if(r==1 ||r==0)
             printf("Number is neither prime nor composite");

    else
        printf("Number is composite");



}
