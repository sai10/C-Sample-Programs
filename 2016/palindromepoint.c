#include<stdio.h>
void main()
{
    int temp,n,r=0,d,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    temp=*p;
    while(*p!=0)
    {
        d=*p%10;
        r=r*10+d;
        *p=*p/10;
    }
    *p=temp;
    if(r==*p)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");

}


