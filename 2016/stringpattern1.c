#include<stdio.h>
#include<conio.h>
void main()
{
    char name[]="HELLOSTRING",fname[30];
    int i,l,j,k;
    l=strlen(name);
    printf("Number of Letters are:\n");
    printf("  %d\n",l);
    for(i=0;i<=l;i++)
    {
    for(k=10;k>=i;k--)
        printf(" ");
    for( j=0;j<i;j++)
        fname[j]=name[j];
        fname[j]='\0';
    printf(" %s",fname);
    printf("\n");
    }
    for(i=l-1;i>=0;i--)
    {
    for(k=10;k>=i;k--)
        printf(" ");
    for( j=l;j>i;j--)
        fname[j]=name[j];
        fname[j]='\0';
    printf(" %s",fname);
    printf("\n");
    }
}

