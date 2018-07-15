#include<stdio.h>
void main()
{
    int i=1,j=1;
    printf("\n\n  Even numbers between 1 and 10 are: ");
    while(i<=10)
    {
        if(i%2==0)
            printf("\n\n     %d\n",i);
            i++;
    }
    printf("\n\n  Odd numbers between 1 and 10 are:");
    while(j<=10)
    {
        if(j%2!=0 && j!=1)
            printf("\n\n     %d\n",j);
            j++;
    }
}
