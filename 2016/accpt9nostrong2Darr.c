#include<stdio.h>
void main()
{
    int i,j,k,n[3][3],d,e,s,temp;
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
    printf("Strong Numbers are:");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            temp=n[i][j];
            s=0;
            while(n[i][j]!=0)

           {
               e=1;
           d=n[i][j]%10;
           for(k=d;k>=1;k--)
            e=e*k;
            s=s+e;
            n[i][j]=n[i][j]/10;
           }
           n[i][j]=temp;
           if(s==n[i][j] && n[i][j]!=0 && n[i][j]!=1)
            printf("%d",n[i][j]);

        }

    }
}




