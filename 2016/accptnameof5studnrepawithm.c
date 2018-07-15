#include<stdio.h>
#include<conio.h>
void main()
{

    char name[5][100],fname[5][100];
    int i=0,j=0;
    printf("Enter 5 names:\n");
    for(i=0;i<5;i++)
    gets(name[i]);
    for(j=0;j<5;j++)
    {
        while(name[j][i]!='\0')
    {
                if(name[j][i]=='a')
                name[j][i]='m';
                i++;
    }

        printf("\n%s",name[j]);
    }
getch();
}

