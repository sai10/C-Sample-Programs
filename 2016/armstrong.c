#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,d,s=0,temp,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n=temp;
    for(i=1;i<=c;i++)
    {
        d=n%10;
        n=n/10;
        s=s+pow(d,c);
    }
    if(s==temp)
        printf("It is an Armstrong Number");
    else
        printf("It is not an Armstrong Number");

}
