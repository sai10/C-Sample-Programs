#include<stdio.h>
#include<stdlib.h>
void main()
{
    char name[100],fname[100];
    int i;
    printf("Enter the string:");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(isupper(name[i]))
             fname[i]=tolower(name[i]);
        else
            fname[i]=toupper(name[i]);
    }
    printf("\n%s",fname);
}

