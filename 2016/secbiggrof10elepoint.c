 #include<stdio.h>
void main()
{
    int n[10],i,large,lrg,*p,*q;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    p=&n[0];
    for(i=1;i<10;i++)
    {
        if(*(p+i-1)<*(p+i))
            large=*(p+i);
    }
     for(i=1;i<10;i++)
    {

            if(*(p+i)!=large)
        {
            if(*(p+i-1)<*(p+i))
                lrg=*(p+i);
        }

    }
    printf("Second largest number is: %d",(lrg));
}


