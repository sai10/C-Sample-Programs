#include<stdio.h>
void main()
{
    int i,j,n[3][3],large1=-9999999,large2=-999999999,*p[3];
    for(i=0;i<3;i++)
        p[i]=n[i];
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",*(p+i)+j);
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(*(*(p+i)+j)>large1)
               large1=*(*(p+i)+j);

           }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {
              if(*(*(p+i)+j)>large2 && *(*(p+i)+j)!=large1)
               large2=*(*(p+i)+j);

           }

    }
    printf("Second largest Number is:%d",large2);


}


