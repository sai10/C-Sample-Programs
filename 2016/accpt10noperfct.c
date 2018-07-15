#include<stdio.h>
void main()
{
    int n[10],i,s=0,j;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    printf("Perfect numbers are:");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=n[i];j++)
            {


                    if(n[i]%j==0 && n[i]!=0 )

               {
                   s=s+j;
               }
            }
       if(s==2*n[i] && n[i]!=0)
        printf(" %d",n[i]);
        s=0;
    }

}
