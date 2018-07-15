#include<stdio.h>
void main()
{
    char name[100];
    int l;
    printf("Enter the name:");
    gets(name);
    l=strlen(name);
    printf("Length of the string is: %d",l);
}
