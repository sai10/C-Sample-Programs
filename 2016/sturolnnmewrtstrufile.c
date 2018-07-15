#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[30];
};
void main()
{
    FILE *fp;
    struct student s;
    fp=fopen("sturolnnmewrtstrufile.txt","w");
    printf("Enter the roll number:");
    scanf("%d",&s.roll);
    fflush(stdin);
    printf("Enter the name:");
    gets(s.name);
    fwrite(&s,1,sizeof(s),fp);
    fclose(fp);

}

