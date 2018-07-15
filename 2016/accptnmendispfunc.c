#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    disp(name);

}
void disp( char name[])
{
    printf("Your name is:%s",name);
    getch();
}


