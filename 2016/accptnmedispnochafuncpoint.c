#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    disp(&name);
}
void disp(char *ptr)
{
    int i=0,c=0;
    while(*(ptr+i)!='\0')
    {
        c++;
        i++;
    }
        printf("Number of characters are:%d",c);
        getch();

}


