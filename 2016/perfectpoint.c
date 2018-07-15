 #include<stdio.h>
void main()
{
    int n,i,s=0,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<=*p;i++)
    {
        if(*p%i==0)
            s=s+i;
    }
    if(s==2*(*p))
        printf("The number is perfect");
    else
        printf("The number is not perfect");

}

