#include<stdio.h>
void main()
{
    char *ptr;
    int i=0,c=0;
    printf("Enter the name:");
    gets(ptr);
    while(*(ptr+i)!='\0')
    {
        c++;
        i++;
    }
    printf("Length of the string is:%d",c);
}
