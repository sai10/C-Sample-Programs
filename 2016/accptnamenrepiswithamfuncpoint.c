#include<stdio.h>
void main()
{
    char name[100];
    printf("Enter the sentence:");
    gets(name);
disp(&name);
    }
void disp(char *p)
{
    int i=0,j;
    while(*(p+i)!='\0')
    {
        if(*(p+i)=='i')
        {
            if(*(p+i-1)==' ' && *(p+i+2)==' ')
             {
                 if(*(p+i+1)=='s')
                 {
                     *(p+i+1)='m';
                     *(p+i)='a';
                 }
             }
        }
  i++;
    }
    printf("%s",p);

}
