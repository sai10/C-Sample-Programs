#include<stdio.h>
#include<conio.h>
void sum(int p,int q)
{
    int s;
    s=p+q;
    printf("Sum is: %d",s);
}
void main()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    getch();
}
