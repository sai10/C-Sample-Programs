#include<stdio.h>
void main()
{
    int i,j,n[3][3],k,*p[3];
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
        p[i]=n[i];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",*(p+i)+j);
    }
    printf("Matrix form is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("\t%d",*(*(p+i)+j));
            }
            printf("\n");

    }

    printf("Diagonal 1 is:\n");
     for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          if(i==j)
            printf("  %d",*(*(p+i)+j));
          else
            printf(" ");
      }
      printf("\n");
    }
     printf("Diagonal 2 is:\n");
     for(i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
          {
            for(k=j;k>0;k--)
                printf(" ");
                printf("  %d",*(*(p+i)+j));
                i++;
                printf("\n");
          }
        printf("\n");
    }

}


