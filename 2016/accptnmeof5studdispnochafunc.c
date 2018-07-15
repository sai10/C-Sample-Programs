 #include<stdio.h>
#include<conio.h>
void main()
{
    char name[5][100];
    int i;
    printf("Enter 5 names:");
    for(i=0;i<5;i++)
    gets(name[i]);
    output(name);
}
void output(char name[5][100])
{
 int j=0,i=0,c=0;
    for(i=0;i<5;i++)
     {
       c=0;j=0;
         while(name[i][j]!='\0')
    {
        c++;
        j++;
    }
        printf("\nNumber of characters in %s are:%d",name[i],c);
     }
        getch();
}

