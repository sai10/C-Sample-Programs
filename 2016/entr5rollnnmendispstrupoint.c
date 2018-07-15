 #include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[30];
};
void main()

{

    struct student s[5],*ptr;
    int i;
   // clrscr();
    ptr=&s[0];
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
	printf("Names are:%s\n\n",ptr->name);
	printf("\n\nRoll numbers are:%d",ptr->roll);
	fflush(stdout);
       ptr++;

    }
    getch();
}

