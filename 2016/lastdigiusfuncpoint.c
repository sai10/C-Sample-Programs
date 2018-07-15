#include<stdio.h>
void ld()
{
    int n,ld,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    ld=*p%10;
    printf("Last digit of the number is %d",ld);

}
void main()
{
    ld();
}


