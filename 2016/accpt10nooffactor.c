#include<stdio.h>
void main()
{
    int n[10],i,j,c=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(i=0;i<10;i++)
    {
        for(j=1;j<=n[i];j++)
        {
            if(n[i]%j==0)
            c++;


        }
        printf("\nNumber of factors of %d is %d ",n[i],c);


        c=0;
    }
}
