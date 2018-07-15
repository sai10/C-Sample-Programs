#include<stdio.h>
#include<conio.h>
void main()
{
    char c,choice;
    int first,second,res;
    do
    {
        printf("\n\tC  A L C U L A T O R\n\n");
        printf("\n\t  0    1    2\n");
        printf("\n\t  3    4    5\n");
        printf("\n\t  6    7    8\n");
        printf("\n\t  9    +    -\n");
        printf("\n\t  *    /    MOD \n");
        printf("\n\nEnter First Number   =");
        scanf("%d",&first);
        printf("\nEnter Second Number  =");
        scanf("%d",&second);
        printf("\nEnter your Choice    =");
        choice=getch();
        if(choice=='+')
            printf("\nSum Of %d and %d is: %d",first,second,first+second);
        if(choice=='-')
            printf("\nSubtraction of %d and %d is: %d",first,second,first-second);
        if(choice=='*')
            printf("\nMultiplication of %d and %d is: %d",first,second,first*second);
        if(choice=='/')
            printf("\nDivision of %d and %d is: %d",first,second,first/second);
        if(choice=='%')
            printf("\nModulus of %d and %d is: %d",first,second,first%second);
     printf("\nDo you want to continue(y/n)?:");
    scanf("%c",&c);
    }while(c=='y');
}
