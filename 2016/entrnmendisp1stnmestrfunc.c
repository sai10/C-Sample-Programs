 #include<stdio.h>
#include<conio.h>
void main()
{
    char name[100],fname[100];
    int i=0,c=0;

    printf("Enter your name:");
    gets(name);
    while(name[i]!='\0'&&name[i]!=' ')
    {
        c++;
        i++;
    }
    strncpy(fname,name,c);
    printf("Your first name is: %s",fname);
}

