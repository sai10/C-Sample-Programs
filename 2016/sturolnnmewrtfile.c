#include<stdio.h>
void main()
{
    FILE *fp;
    int roll;
    char name[30];
    fp=fopen("sturolnnmewrtfile.txt","w");
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter roll number:");
    scanf("%d",&roll);
    fprintf(fp,"%d%s",roll,name);
    fclose(fp);
}

