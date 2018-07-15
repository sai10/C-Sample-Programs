#include<stdio.h>
#include<conio.h>
void main()
{

    char name[100],fname[100];
    printf("Enter your name:");
    gets(name);
    disp(name);
}
void disp(char name[])
{
    int i=0,j=0;
    while(name[i]!='\0')
    {

            if(name[i]=='a')
                name[i]='m';
                i++;

    }

        printf("%s",name);

getch();

}
