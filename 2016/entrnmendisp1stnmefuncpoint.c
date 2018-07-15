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
    char fname[100];
    int i=0,c=0;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)==' ')
            break;
            c++;
        i++;
    }
    for(i=0;i<c;i++)
        fname[i]=*(ptr+i);
    fname[i]='\0';
    printf("Your first name is: %s",fname);
}

