#include<stdio.h>
void main()
{
    int i,j,k,n[3][3],c=0;
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
    printf("Prime Numbers are:");
    prim(n);
}
void prim(int n[][3])
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
            if(c<=2 && c!=1 && c!=0)
                printf("\t%d",n[i][j]);
        }

    }

}
