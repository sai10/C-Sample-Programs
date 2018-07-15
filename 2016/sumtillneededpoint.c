#include<stdio.h>
void main()
{
    int i=1,num1,num2,s,*p,*q;
   do
   {
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    p=&num1;
    q=&num2;
        s=*p+*q;
        printf("sum is %d",s);
        printf("\nDo you want to test  another");
        printf("\nEnter 0 to continue\n");
        printf("\nEnter 1 to terminate\n");
        scanf("\n%d",&i);

    }while(i==0  );
}

