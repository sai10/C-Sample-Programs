#include<stdio.h>
void main()
{
    int num1,num2,x;
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
        if(x==1)
            printf("\nResult is %d",num1+num2);
        else if(x==2)
            printf("\nResult is %d",num1-num2);
        else if(x==3)
            printf("\nResult is %d",num1*num2);
        else if(x==4)
            printf("\nResult is %d",num1/num2);
        else if(x==5)
            printf("\nResult is %d",num1%num2);
        }
    else
        printf("\n\a Invalid Choice");
}
