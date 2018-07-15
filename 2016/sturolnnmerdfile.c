#include<stdio.h>
void main()
{
    FILE *fp;
    int roll;
    char name[30];
    fp=fopen("sturolnnmewrtfile.txt","r");
    fscanf(fp,"%d%s",&roll,&name);
    printf("Roll=%d\n",roll);
    printf("Name=%s\n",name);
    fclose(fp);
}
