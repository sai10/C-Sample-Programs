#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c;
    long n,t;
    printf("Enter any number:");
    scanf("%ld",&n);
    t=n;
    c=r=0;
    while(n>0)
    {
        if(n%10==0 || n%10==1)
            c++;
        r++;
        n=n/10;
    }
    if(c==r)
        printf("\n%ld is a binary number",t);
    else
        printf("\n%ld is not a binary number",t);
    getch();
}
