 #include<stdio.h>
void main()
{
    int i,j,n[10],c=0,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    printf("Prime numbers are:");
    for(i=0;i<10;i++)
    {
        for(j=1;j<=n[i];j++)
        {
            if(*(ptr+i)%j==0)
                c++;
        }
        if(c<=2 && c!=1 && c!=0)
        printf("%d",*(ptr+i));
        c=0;
    }
}

