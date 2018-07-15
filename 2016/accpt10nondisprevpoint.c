 #include<stdio.h>
void main()
{
    int n[10],i,*ptr;
    printf("Enter 10 numbers");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    ptr=&n[0];
    printf("Numbers in reverse order are:");
    for(i=9;i>=0;i--)
        printf("\t%d",*(ptr+i));
}

