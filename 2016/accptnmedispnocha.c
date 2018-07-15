#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    int i=0,c=0;
    printf("Enter your name:");
    gets(name);
    while(name[i]!='\0')
    {
        c++;
        i++;
    }
        printf("Number of characters are:%d",c);
        getch();
}
