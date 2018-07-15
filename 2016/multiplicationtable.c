#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,n;
    printf("\n\n  Enter the NUMBER to generate its \n\n            'MULTIPLICATION TABLE' : ");
    scanf("%d",&n);
    printf("\n  SET THE LIMIT:");
    scanf("%d",&b);
    printf("\n\n\n");
    printf("\n   ****************\n\n\n");
    for(a=1;a<=b;a++)
        {
            printf("     %d X %d = %d\n",n,a,n*a);
            printf("\n");
        }
    printf("\n   ****************\n\n\n");
    getch();
}

