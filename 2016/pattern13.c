 #include<stdio.h>
void main()
{
    int i,j,k,l,m,n,o,p;
    for(i=0;i<=5;i++)
    {
        for(k=4;k>=i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
           {
               if(j==1)
            printf("1");
            else
                printf(" ");
           }
        for(l=i-1;l>=1;l--)
            {
                if(l==1)
            printf("1");
            else
                printf(" ");
            }
        printf("\n");

    }
 for(i=4;i>=1;i--)
    {
        for(k=i;k<5;k++)
            printf(" ");
        for(j=1;j<=i;j++)
           {
               if(j==1)
                printf("1");
               else
                printf(" ");
           }
        for(l=i-1;l>=1;l--)
            {
                if(l==1)
                    printf("1");
                else
                    printf(" ");
            }
        printf("\n");

    }

}


