#include<stdio.h>
void main()
{
char name[100],fname[100],*ptr;
int i=0,j=0,s=0,c=0;
printf("Enter the name:");
gets(name);
ptr=name;
fname[0]=*ptr;
fname[1]='.';
j=2;
c=strlen(ptr);
for(i=(c-1);i>=0;i--)
{
    if(*(ptr+i)==' ')
            break;
    s++;
}
for(i=0;i<(c-s-1);i++)
{
    if(*(ptr+i)==' ')
    {
        fname[j]=*(ptr+i+1);
        fname[j+1]='.';
        j=j+2;
    }
}
for(i=c-s;i<=c;i++)
{
    fname[j]=*(ptr+i);
    j++;
}
printf("%s",fname);
}


