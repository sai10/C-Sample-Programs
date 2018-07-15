#include<stdio.h>
void main()
{
    int i=1,num1,num2,s;
   do
   {
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
        s=num1+num2;
        printf("sum is %d",s);
        printf("\nDo you want to test  another");
        printf("\nEnter 0 to continue\n");
        printf("\nEnter 1 to terminate\n");
        scanf("\n%d",&i);

    }while(i==0  );
}
