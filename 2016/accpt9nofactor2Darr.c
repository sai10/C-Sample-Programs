#include<stdio.h>
void main()
{
    int i,j,k,n[3][3];
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
            printf("\nFactors of %d are:",n[i][j]);
            for(k=n[i][j];k>=1;k--)
            {

                if(n[i][j]%k==0)
                    printf("\t%d",k);
            }

        }

    }
}



