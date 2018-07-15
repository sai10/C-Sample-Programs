#include<stdio.h>
#include<conio.h>
void main()
{
    char name[10],fname[100];
    printf("Enter your name:");
    gets(name);
    strcpy(fname,name);
    printf("Your name is:%s",fname);
    getch();

}

