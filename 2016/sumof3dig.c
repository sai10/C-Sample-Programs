#include<stdio.h>
void main()
{
    int n,ld,sd,td,x,y,z; /*ld=last digit
                            sd=2nd digit
                            td=3rd digit*/
    printf("Enter the 3 digit number");
    scanf("%d",&n);
    ld=n%10;
    x=n/10;
    sd=x%10;
    y=n/10;
    td=y/10;
    z=ld+sd+td;
    printf("sum of digits is %d",z);
}
