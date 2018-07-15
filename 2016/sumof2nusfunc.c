#include<stdio.h>
void sum()
{
    int s,num1,num2;
    printf("Enter the 2 numbers:");
    scanf("%d%d",&num1,&num2);
    s=num1+num2;
    printf("Sum is %d",s);
}
void main()
{
    sum();
}
