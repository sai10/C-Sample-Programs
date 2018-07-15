#include<stdio.h>
#include<conio.h>
void main()
{
    char name[5][100];
    int i=0,c=0,j;
    printf("\nEnter your name:\n");
    for(i=0;i<5;i++)
    gets(name[i]);
    for(j=0;j<5;j++)
    {
        c=0;
        i=0;
    while(name[j][i]!='\0')
    {
        c++;
        i++;
    }
        printf("\n\nNumber of characters of %s are:%d",name[j],c);
    }
        getch();
}

