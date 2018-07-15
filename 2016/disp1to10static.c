
#include<stdio.h>
void main()
{
int i,n;
    for(i=0;i<10;i++)
        display();
}
void display()
{
    static int n=1;
    printf("\n%d",n);
    n++;
}

