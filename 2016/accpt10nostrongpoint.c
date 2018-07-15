#include<stdio.h>
void main()
{
    int n[10],i,j,e=1,s=0,d,temp,*p;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    p=&n[0];
        printf("Strong numbers are:");
    for(i=0;i<10;i++)
    {
        temp=*(p+i);
       while(*(p+i)!=0)
       {
           d=*(p+i)%10;
           for(j=d;j>=1;j--)
           e=e*j;
           s=s+e;
           *(p+i)=*(p+i)/10;

           e=1;
       }
       if(temp==s)
        printf("\n%d",s);


        s=0;
        e=1;
    }
}

