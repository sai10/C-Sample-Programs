#include<stdio.h>
struct student
{
    int roll;
    char name[30];
};
void main()
{
    FILE *fp;
   struct student s;
   char ch;
   fp=fopen("sturolnnmemorthn1wrtstrufile.txt","w");
   do
   {
       printf("Enter roll number:");
       scanf("%d",&s.roll);
       fflush(stdin);
       printf("Enter name:");
       gets(s.name);
       fflush(stdin);
       fwrite(&s,1,sizeof(s),fp);
       printf("\nDo you want to add more(y/n):");
       scanf("%c",&ch);
   }
   while(ch=='y');
   fclose(fp);

}
