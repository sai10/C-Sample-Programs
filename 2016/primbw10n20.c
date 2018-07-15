#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,c;
    printf("Enter all prime numbers between 10 and 20:");
    for(n=10;n<=20;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
         if(c<=2)
        printf("\n   %d",n);

    }
    getch();

}
