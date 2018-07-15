#include<stdio.h>
void main()
{
    int n,m,i,c=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
   m=n/2;
   n=temp;
   for(i=1;i<=m;i++)
        {
        if(n%i==0)
        c++;
        }
        c++;

        if(c<=2 && c!=0&&c!=1)
            printf("It is a prime number");
        if(c>2 && c!=0&&c!=1)
            printf("It is a composite number");
}
