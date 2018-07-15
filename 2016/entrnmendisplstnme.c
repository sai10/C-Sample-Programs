#include<stdio.h>
#include<conio.h>
void main()
{
    char name[100],fname[100];
    int i=0,j=0,c=0,s=0;

    printf("Enter your name:");
    gets(name);
    while(name[i]!='\0')
    {
        c++;
        i++;
    }
    for(i=c-1;i>=0;i--)
        {
            if(name[i]==' ')
                break;
            s++;
        }
        for(i=c-s;i<=c;i++)

        {
                        fname[j]=name[i];
            j++;
            }
        printf("Last name is:%s",fname);
    }

