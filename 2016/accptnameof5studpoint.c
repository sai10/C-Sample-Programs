#include<stdio.h>
void main()
{
    int i;
    char name[5][10],*p[5];
    for(i=0;i<5;i++)
        p[i]=name[i];
    printf("Enter the name of 5 students:");
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        gets(p[i]);
    }
    printf("\nThe name of 5 students are:");
    for(i=0;i<5;i++)
    printf("\n\n%d=%s",i+1,*(p+i));
}



