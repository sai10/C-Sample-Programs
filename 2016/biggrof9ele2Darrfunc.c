#include<stdio.h>
void main()
{
    int i,j,n[3][3],large=-9999999;
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }

big(n,large);
}
void big(int n[][3],int large)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(n[i][j]>large)
               large=n[i][j];

           }
    }
    printf("Biggest element is:%d",large);
}

