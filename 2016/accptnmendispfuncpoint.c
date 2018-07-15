#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    disp(&name);

}
void disp( char *ptr)
{

    printf("Your name is:%s",ptr);
    getch();
}



