#include<stdio.h>
#include<conio.h>
void main()
{

    char name[100],fname[100];
    printf("Enter your name:");
    gets(name);
    disp(&name);
}
void disp(char *ptr)
{
    int i=0,j=0;
    while(*(ptr+i)!='\0')
    {

            if(*(ptr+i)=='a')
                *(ptr+i)='m';
                i++;

    }

        printf("%s",ptr);
getch();
}
