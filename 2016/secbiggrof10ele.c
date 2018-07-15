#include<stdio.h>
void main()
{
    int n[10],i,large,lrg;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(i=1;i<10;i++)
    {
        if(n[i-1]<n[i])
            large=n[i];
    }
     for(i=1;i<10;i++)
    {

            if(n[i]!=large)
        {
            if(n[i-1]<n[i])
                lrg=n[i];
        }

    }
    printf("Second largest number is: %d",lrg);
}

