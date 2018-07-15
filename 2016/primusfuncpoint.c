 #include<stdio.h>
void main()
{
    int n,c;
    printf("Enter the number:");
    scanf("%d",&n);
    c=prime(&n);

    if(c<=2 && c!=1 && c!=0)
        printf("The number is prime");
    else
        printf("The number is not prime");
}
void prime(int *p)
{
    int d,c=0;
    for(d=1;d<=*p;d++)
    {
        if(*p%d==0)
            c++;
    }
    return c;
}
