 #include<stdio.h>
void main()
{
    int n[10],i,j,c=0,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    for(i=0;i<10;i++)
    {
        for(j=1;j<=*(ptr+i);j++)
        {
            if(*(ptr+i)%j==0)
            c++;


        }
        printf("\nNumber of factors of %d is %d ",*(ptr+i),c);


        c=0;
    }
}

