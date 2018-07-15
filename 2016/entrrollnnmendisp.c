#include<stdio.h>
void main()
{
    int n;
    char name[100];
    printf("Enter your name:");
    gets(name);
    printf("Enter your roll number :");
    scanf("%d",&n);
    printf("\n\nYour roll number is :%d",n);
    printf("\nYour name is :%s",name);
}
