#include<stdio.h>
void main()
{
    int j=10,i=1,c=0;
    printf("All prime numbers between 10 and 20 are:");
    while(j<=20)
    {
        while(i<=j)
        {
            if(j%i==0)
                c++;
            i++;
        }
        if(c<3)
            printf("\n%d",j);
            c=0;
        j++;
    }
}
