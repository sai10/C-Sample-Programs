 #include<stdio.h>
void main()
{
    int n[10],i,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    printf("Even numbers are:");
    for(i=0;i<10;i++)
    {
        if(*(ptr+i)!=0 && *(ptr+i)!=1 && *(ptr+i)%2==0)
            printf("%d",*(ptr+i));
    }
}

