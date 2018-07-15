#include<stdio.h>
void main()
{
    char name[100];
    printf("Enter the sentence:");
    gets(name);
disp(name);
    }
void disp(char name[])
{
    int i=0,j;
    while(name[i]!='\0')
    {
        if(name[i]=='i')
        {
            if(name[i-1]==' ' && name[i+2]==' ')
             {
                 if(name[i+1]=='s')
                 {
                     name[i+1]='m';
                     name[i]='a';
                 }
             }
        }
  i++;
    }
    printf("%s",name);

}
