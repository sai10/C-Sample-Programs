
#include<stdio.h>
void main()
{
    char name[100],fname[100],*ptr;
    int i=0,j=0;
    printf("Enter the sentence:");
    gets(name);
    ptr=name;
    while(*(ptr+i)!='\0')
    {

            if(*(ptr+i)==' '&& *(ptr+i+1)=='i'&& *(ptr+i+2)=='s'&& *(ptr+i+3)==' ')
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
                fname[j]=*(ptr+i);
                i++;
                j++;
            }
    }
fname[j]='\0';
    printf("%s",fname);
}

