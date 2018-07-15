#include<stdio.h>
#include<string.h>
void main()
{
    char name[10],fname[10];
    int i;
    printf("ENTER STRING:");
    gets(name);
    strcpy(fname,name);
    if(strcmp(fname,strrev(name))==0)
        printf("\n%s is a palindrome",fname);
    else
       printf("\n%s is not a palindrome",fname);
}
