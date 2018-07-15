 #include<stdio.h>
void main()
{
    int n[10],i,s=0,j,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    printf("Perfect numbers are:");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=*(ptr+i);j++)
            {
                    if(*(ptr+i)%j==0 && *(ptr+i)!=0 )
                   s=s+j;

            }
       if(s==2*(*(ptr+i)) && *(ptr+i)!=0)
        printf(" %d",*(ptr+i));
        s=0;
    }

}
