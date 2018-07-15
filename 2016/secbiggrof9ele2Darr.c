#include<stdio.h>
void main()
{
    int i,j,n[3][3],large1=-9999999,large2=-999999999;
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(n[i][j]>large1)
               large1=n[i][j];

           }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(n[i][j]>large2 && n[i][j]!=large1)
               large2=n[i][j];

           }

    }
    printf("Second largest Number is:%d",large2);


}


