
#include<stdio.h>
void main()
{
    char name[30];
    int i;
    printf("Enter name:");
    gets(name);
    for(i=0;name[i]!='\0';i++)
        printf("\n%c",name[i]);
}
