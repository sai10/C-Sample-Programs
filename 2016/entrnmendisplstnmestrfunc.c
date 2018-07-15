 #include<stdio.h>
#include<conio.h>
void main()
{
    char name[100],fname[100],gname[100];
    int i=0,j=0,c=0,s=0;

    printf("Enter your name:");
    gets(name);
    c=strlen(name);
    for(i=c;i>=0;i--)
        {
            if(name[i]==' ')
                break;
            s++;
        }
        for(i=c-s+1;i<=c;i++)

        {
                        fname[j]=name[i];
            j++;
            }
        strcpy(gname,fname);
        printf("Last name is:%s",gname);
    }


