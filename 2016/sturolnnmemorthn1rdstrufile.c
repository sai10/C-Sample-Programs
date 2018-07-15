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
   int temp=0;
   fp=fopen("sturolnnmemorthn1wrtstrufile.txt","r");
  while(!feof(fp))
  {
          fread(&s,1,sizeof(s),fp);
     if(feof(fp))
       break;
      else
      {
      printf("Roll=%d\n",s.roll);
      printf("name=%s\n",s.name);
      temp=1;
      }
  }
   if(temp==0)
    printf("There is nothing in the file");
   fclose(fp);

}

