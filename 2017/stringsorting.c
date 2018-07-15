#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,d;
    char ch[20][30],temp[30];
    printf("\nEnter number of strings:");
    scanf("%d",&d);
    fflush(stdin);
    printf("\nEnter the string:");
    for(i=0;i<d;i++)
    gets(ch[i]);
        for(i=0;i<d-1;i++)
    {
        for(j=i+1;j<d;j++)
        {
            if(strcmp(ch[i],ch[j])>0)
            {
                strcpy(temp,ch[i]);
                strcpy(ch[i],ch[j]);
                strcpy(ch[j],temp);
            }
        }
    }
    printf("\n\n");
    printf("\nSorted strings are:");
    for(i=0;i<d;i++)
        printf("\n%s",ch[i]);
}
