#include<stdio.h>
void main()
{
    int j=1,i=1;
    printf("Even numbers between 1 and 10 are:");
    do
    {
        if(i%2==0)
            printf("\n%d",i);
        i++;
    }while(i<=10);
    printf("\nOdd numbers between 1 to 10 are:");
    do
    {
        if(j%2!=0 && j!=1)
            printf("\n%d",j);
        j++;
    }while(j<=10);
}
