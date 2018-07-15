#include<stdio.h>
int palindrome1()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n!=0)
{

 return n;}
}
void palindrome2()
{
    int c,d,r=0,temp;
    c=palindrome1();
    temp=c;
    while(c!=0)
        {d=c%10;
        r=r*10+d;
        c=c/10;}
    c=temp;
    if(r==c)
        printf("It is palindrome");
    else
        printf("It is not a palindrome");

}
void main()
{
    palindrome2();

}



