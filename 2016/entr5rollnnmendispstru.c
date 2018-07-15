#include<stdio.h>
struct student
{
    int roll;
    char name[30];
};
void main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("Enter the name of 5 students:");
        gets(s[i].name);
    printf("Enter the roll number of 5 students:");
        scanf("%d",&s[i].roll);
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        printf("\n\nNames are:%s\n\n",s[i].name);
        printf("\n\nRoll numbers are:%d",s[i].roll);
        fflush(stdin);
    }
}
