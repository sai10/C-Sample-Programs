  #include<stdio.h>
void main()
{
    int i,n,s=0,d,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    for(i=1;i<=3;i++)
    {
        d=*p%10;
        s=s+d;
        *p=*p/10;
    }
    printf("Sum of digits of 3 digit number is %d",s);
}
