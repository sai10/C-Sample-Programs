#include<stdio.h>
void main()
{
char name[100],fname[100];
printf("Enter the name:");
gets(name);
disp(name);
}
void disp(char name[])
{
    char fname[100];
int i=0,j=0,s=0,c=0;
fname[0]=name[0];
fname[1]='.';
j=2;
while(name[i]!='\0')
{
    c++;
    i++;
}
for(i=(c-1);i>=0;i--)
{
    if(name[i]==' ')
            break;
    s++;
}
for(i=0;i<(c-s-1);i++)
{
    if(name[i]==' ')
    {
        fname[j]=name[i+1];
        fname[j+1]='.';
        j=j+2;
    }
}
for(i=c-s;i<=c;i++)
{
    fname[j]=name[i];
    j++;
}
printf("%s",fname);

}
