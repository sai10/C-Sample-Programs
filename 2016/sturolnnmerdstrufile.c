#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[30];
};
void main()
{
FILE *fp;
struct student s;
fp=fopen("sturolnnmewrtstrufile.txt","r");
fread(&s,1,sizeof(s),fp);
printf("roll=%d",s.roll);
printf("name=%s",s.name);
fclose(fp);
}


