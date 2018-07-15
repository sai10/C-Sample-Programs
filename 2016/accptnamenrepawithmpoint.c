#include<stdio.h>
#include<conio.h>
void main()
{

    char *ptr;
    int i=0,j=0;
    printf("Enter your name:");
    gets(ptr);
    while(*(ptr+i)!='\0')
    {

            if(*(ptr+i)=='a')
                *(ptr+i)='m';
                i++;

    }

        printf("%s",ptr);

getch();
}


