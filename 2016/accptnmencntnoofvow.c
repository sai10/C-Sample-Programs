#include<stdio.h>
void main()
{
    char name[100];
    int i=0,c=0;
    printf("Enter your name:");
    gets(name);
    printf("Number of vowels in the name are:");
    while(name[i]!='\0')
    {
        if(name[i]=='a' || name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
            c++;
            i++;
    }
    printf("%d",c);
}
