#include<stdio.h>
void main()
{
    char *ptr,name[100];
    int i=0;
    printf("Enter the sentence:");
    gets(name);
    ptr=name;
    while(*(ptr+i)!='\0')
    {
        if(*(ptr+i)=='i')
        {
            if(*(ptr+i-1)==' ' && *(ptr+i+2)==' ')
             {
                 if(*(ptr+i+1)=='s')
                 {
                     *(ptr+i+1)='m';
                     *(ptr+i)='a';
                 }
             }
        }
  i++;
    }
    printf("%s",ptr);
}


