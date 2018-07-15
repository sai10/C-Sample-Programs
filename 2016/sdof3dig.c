#include<stdio.h>
int main()
{
    int d,m,n;
    printf("Enter the 3 digit number");
    scanf("%d",&n);
    d=n/10;
    m=d%10;
    printf("2nd digit number is %d",m);
}
