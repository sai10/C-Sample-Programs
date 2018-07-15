/* 7 8 9 10
   4 5 6
   2 3
   1                        */


#include<stdio.h>
void main()
{
    int i=7,k=3,j;
    while(i!=0 && k!=-1)
    {
        for(j=i;j<=i+k;j++)
            printf(" %d",j);
        printf("\n");
        i=i-k;
        k--;
    }
}

