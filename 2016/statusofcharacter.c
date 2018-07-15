#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if(ch>64 && ch<91)
        printf("\n%c is an upper case alphabet",ch);
    else if(ch>96 && ch<123)
        printf("\n%c is a lower case alphabet",ch);
    else
        printf("\n%c is either special character or numeric character",ch);
    getch();
}
