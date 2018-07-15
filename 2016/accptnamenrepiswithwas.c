#include<stdio.h>
void main()
{
    char name[100],fname[100];
    int i=0,j=0;
    printf("Enter the sentence:");
    gets(name);
    while(name[i]!='\0')
    {

            if(name[i]==' '&& name[i+1]=='i'&& name[i+2]=='s'&& name[i+3]==' ')
            {
                fname[j]=' ';
                fname[j+1]='w';
                fname[j+2]='a';
                fname[j+3]='s';
                fname[j+4]=' ';
                i=i+4;
                j=j+5;
            }
            else
            {
                fname[j]=name[i];
                i++;
                j++;
            }
    }
fname[j]='\0';
    printf("%s",fname);
}
