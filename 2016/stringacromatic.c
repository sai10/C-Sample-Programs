#include<stdio.h>
void main()
{
    char name[30];
    int i;
    printf("\nENTER STRING:");
    gets(name);
    printf("\nACROMATIC STRING is:");
    i=0;
    printf("%c",name[i]);
    while(name[i]!='\0')
    {
        if(name[i]==' ')
        {
            i++;
            printf("%c",name[i]);
        }
        i++;
    }
}
