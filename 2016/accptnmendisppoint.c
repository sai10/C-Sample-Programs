#include<stdio.h>
void main()
{
    char name[100],*ptr;
    printf("Enter the name:");
    gets(name);
    printf("The name you have entered is:");
    ptr=name;
    printf("%s",ptr);

}
