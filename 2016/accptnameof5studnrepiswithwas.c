#include<stdio.h>
void main()
{
    char name[5][100],fname[5][100];
    int i=0,j=0,k=0;
    printf("Enter the sentence:");
    for(i=0;i<5;i++)
    gets(name[i]);
    for(j=0;j<5;j++)
   {
     i=0;k=0;
       while(name[j][i]!='\0')
    {
            if(name[j][i]==' '&& name[j][i+1]=='i'&& name[j][i+2]=='s'&& name[j][i+3]==' ')
            {
                fname[j][k]=' ';
                fname[j][k+1]='w';
                fname[j][k+2]='a';
                fname[j][k+3]='s';
                fname[j][k+4]=' ';
                i=i+4;
                k=k+5;
            }
            else
            {
                fname[j][k]=name[j][i];
                i++;
                k++;
            }
    }
fname[j][k]='\0';
   }
    for(i=0;i<5;i++)
    printf("\n\n%s",fname[i]);
}
