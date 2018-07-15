#include<stdio.h>
void main()
{
    int j=10,i=1,c=0;
    printf("All prime numbers between 10 and 20 are:");
  do
    {
        do
        {
            if(j%i==0)
                c++;
            i++;
        }while(i<=j);
        if(c<3)
            printf("\n%d",j);
            c=0;
        j++;
    }while(j<=20);
}

