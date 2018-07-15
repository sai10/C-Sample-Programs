#include<stdio.h>
void main()
{
    int num1,num2,x,*p,*q;
    printf("    ARITHMETIC OPERATION");
    printf("\n   ----------------------");
    printf("\n\n1=Addition");
    printf("\n2=subtraction");
    printf("\n3=Multiplication");
    printf("\n4=Division");
    printf("\n5=Modulus");
    printf("\n\n\nEnter your choice:");
    scanf("%d",&x);
    if(x<=5)

        {
        printf("\nEnter two numbers:");
        scanf("%d%d",&num1,&num2);
        p=&num1;
        q=&num2;
        if(x==1)
            printf("\nResult is %d",*p+*q);
        else if(x==2)
            printf("\nResult is %d",*p-*q);
        else if(x==3)
            printf("\nResult is %d",*p*(*q));
        else if(x==4)
            printf("\nResult is %d",*p/(*q));
        else if(x==5)
            printf("\nResult is %d",*p%*q);
        }
    else
        printf("\n\a Invalid Choice");
}


