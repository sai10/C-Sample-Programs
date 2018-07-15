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
    fact(n);
}
void fact(int n[][3])
{
    int i,j,k,c=0;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            c=0;
            for(k=n[i][j];k>=1;k--)
            {

                if(n[i][j]%k==0)
                    c++;
            }

            printf("\nNumber of Factors of %d are:\t%d",n[i][j],c);

        }

    }
}




