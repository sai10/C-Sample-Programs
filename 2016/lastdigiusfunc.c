#include<stdio.h>
void ld()
{
    int n,ld;
    printf("Enter the number:");
    scanf("%d",&n);
    ld=n%10;
    printf("Last digit of the number is %d",ld);

}
void main()
{
    ld();
}
