#include<stdio.h>
#include<conio.h>
void main()
{

    char name[5][100],fname[5][100];
    int i=0,j=0;
    printf("Enter 5 names:\n");
    for(i=0;i<5;i++)
    gets(name[i]);
    output(name);
}
void output(char name[5][100])
{
    int j=0,i=0;
    for(j=0;j<5;j++)
    {
     i=0;
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
