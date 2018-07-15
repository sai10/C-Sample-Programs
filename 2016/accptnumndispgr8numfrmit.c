#include<stdio.h>
void main()
{
     int a[100],b[100],temp[100],j=0,c=0,i=0,d,n,k=0,m=0,t,l;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        a[i]=d;
        c++;
        i++;
        n=n/10;
    }
    for(i=0;i<c;i++)
        b[i]=a[i];
    for(i=0;i<c;i++)
    {
      k=0;m=0;
        for(j=0;j<c;j++)
        {
            if(a[i]>=b[j])
            k++;
            if(a[i]==b[j])
            m++;
        }
        for(l=0;l<m;l++)
         {
          if(temp[c-k]==a[i])
            temp[c-k+l]=a[i];
         }
            temp[c-k]=a[i];
    }
    printf("\n\n");
    printf("\nGreatest Number formed is:");
    for(i=0;i<c;i++)
        printf("%d",temp[i]);
        printf("\n\n");
}



