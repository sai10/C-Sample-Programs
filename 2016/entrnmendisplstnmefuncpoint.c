#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100];
    printf("Enter your name:");
    gets(name);
    disp(&name);
    }
void disp(char *ptr)
{
    char fname[100];
    int i=0,j=0,c=0,s=0;
    while(*(ptr+i)!='\0')
    {
        c++;
        i++;
    }

    for(i=c-1;i>=0;i--)
        {
            if(*(ptr+i)==' ')
                break;
            s++;
        }
        for(i=c-s;i<=c;i++)

        {
                        fname[j]=*(ptr+i);
            j++;
            }
        printf("Last name is:%s",fname);
}
