#include<stdio.h>
void ld(int *m)
{
    int ld;
    ld=*m%10;
    printf("Last digit is %d",ld);
}
void main()
{
    int n;
    printf("Enter the 3 digit number:");
    scanf("%d",&n);
    ld(&n);
}
