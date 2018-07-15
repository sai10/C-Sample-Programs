#include<stdio.h>
struct student
{
    int roll;
    char mname[30];
};
void main()
{
  FILE *fp1,*fp2;
  struct student s;
  int temp=0,r;
  fp1=fopen("sturolnnmemorthn1wrtstrufile.txt","r");
  fp2=fopen("stud.txt","w");
  printf("Enter the roll number to be deleted:");
  scanf("%d",&r);
  while(!feof(fp1))
  {
      fread(&s,1,sizeof(s),fp1);
      if(feof(fp1))
        break;
      if(s.roll==r)
      temp=1;
      else
        fwrite(&s,1,sizeof(s),fp2);
  }
  if(temp==0)
    printf("Value not found");
  else
    printf("Deleted successfully");
  fclose(fp1);
  fclose(fp2);
  remove("sturolnnmemorthn1wrtstrufile.txt");
  rename("stud.txt","sturolnnmemorthn1wrtstrufile.txt");
 }

