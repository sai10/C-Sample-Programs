#include<stdio.h>
struct student
{
    int roll;
    char name[100];
};
void main()
{
    struct student s;
    printf("Enter your Name:");
    gets(s.name);
    printf("Enter your Roll number:");
    scanf("%d",&s.roll);
    printf("\nYour name is:%d",s.roll);
    printf("\nYour name is :%s",s.name);
}
