 #include<stdio.h>
void main()
{
    int n[10],i,large,*ptr;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    for(i=1;i<10;i++)
    {
        if(*(ptr+i-1)<*(ptr+i))
            large=*(ptr+i);
    }
    printf("Bigger of 10 elements is %d",large);
}

