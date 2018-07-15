#include<stdio.h>
void main()
{
    int i,j,k,n[3][3],s;
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
    printf("Perfect Numbers are:");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            s=0;
            for(k=*(*(n+i)+j);k>=1;k--)
            {

                if(*(*(n+i)+j)%k==0)
                    s=s+k;
            }
            if(s==2*(*(*(n+i)+j)) && *(*(n+i)+j)!=0)
                printf("\t%d",*(*(n+i)+j));
        }

    }
}



