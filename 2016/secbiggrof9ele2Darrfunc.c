#include<stdio.h>
void main()
{
    int i,j,n[3][3];
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }

    large1(n);
}
int large1(int n[][3])
{
    int i,j,large1=-999999;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(n[i][j]>large1)
               large1=n[i][j];

           }
    }
    large2(n,large1);
}
void large2(int n[][3],int large1)
{
int i,j,large2=-9999999;
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

