#include<stdio.h>
void main()
{
    int n[10],i,j,e=1,s=0,d,temp;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
        printf("Strong numbers are:");
    for(i=0;i<10;i++)
    {
        temp=n[i];
       while(n[i]!=0)
       {
           d=n[i]%10;
           for(j=d;j>=1;j--)
           e=e*j;
           s=s+e;
           n[i]=n[i]/10;

           e=1;
       }
       if(temp==s)
        printf("%d",s);


        s=0;
        e=1;
    }
}
