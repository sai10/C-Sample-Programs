 #include<stdio.h>
void main()
{
    int ld,sd,td,n,x,s,m,*p;/*ld=last digit
                           sd=second digit
                           td=third digit*/
    printf("Enter the 3 digit number:");
    scanf("%d",&n);
    p=&n;
    ld=*p%10;
    x=*p/10;
    sd=x%10;
    td=x/10;
    s=ld+sd;
    printf("Sum of 1st and 2nd digit is %d",s);
    m=sd*td;
    printf("\nmultiplication of 2nd and 3rd is %d",m);
}

