#include<stdio.h>
void main()
{
    int i,j,n[3][3],k;
    printf("Enter 9 numbers:");
    input(n);
    printf("Matrix form is:\n");
    disp(n);
    printf("Diagonal 1 is:\n");
    diag1(n);
     printf("Diagonal 2 is:\n");
    diag2(n);

}
void input(int n[][3])
{
int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }

}
void disp(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("\t%d",n[i][j]);
            }
            printf("\n");

    }

}
void diag1(int n[][3])
{
     int i,j;
     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          if(i==j)
            printf("%d",n[i][j]);
          else
            printf(" ");
      }
      printf("\n");
    }
}
void diag2(int n[][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
          {
            for(k=j;k>0;k--)
                printf(" ");
                printf("%d",n[i][j]);
                i++;
                printf("\n");
          }
        printf("\n");
    }
}
