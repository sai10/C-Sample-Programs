#include<stdio.h>
void main()
{
    FILE *fp;
    int roll;
    char name[30],ch;
    fp=fopen("sturolnnmemorthn1wrtfile.txt","w");
    do
    {
        printf("Enter the roll number:");
        scanf("%d",&roll);
        printf("Enter name:");
        scanf("%s",&name);
        fprintf(fp,"%d\n%s\n",roll,name);
        fflush(stdin);
        printf("Do you want to add more(y/n)?");
        scanf("%c",&ch);
    }while(ch=='y');
    fclose(fp);
}
