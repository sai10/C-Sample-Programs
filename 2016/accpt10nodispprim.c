#include<stdio.h>
void main()
{
    int i,j,n[10],c=0;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    printf("Prime numbers are:");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=n[i];j++)
        {
            if(n[i]%j==0)
                c++;
        }
        if(c<=2 && c!=1 && c!=0)
        printf("%d",n[i]);
        c=0;
    }
}
