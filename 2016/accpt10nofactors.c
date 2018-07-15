#include<stdio.h>
void main()
{
    int n[10],i,j;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(i=0;i<10;i++)
    {
        printf("\nFactors of %d\n",n[i]);
        for(j=1;j<=n[i];j++)
        {
            if(n[i]%j==0)
                printf("\n%d",j);
        }
    }
}
