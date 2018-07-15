#include<stdio.h>
void main()
{
    char *ptr;
    int i=0,c=0;
    printf("Enter your name:");
    gets(ptr);
    printf("Number of vowels in the name are:");
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)=='a' || *(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
            c++;
            i++;
    }
    printf("%d",c);
}


