#include<stdio.h>
struct student
{
    int roll;
    char name[30];
};
void main()
{
    FILE *fp1,*fp2;
    struct student s;
    int r,temp=0;
    fp1=fopen("sturolnnmemorthn1wrtstrufile.txt","r");
    fp2=fopen("stud.txt","w");
    printf("Enter the roll number to be modified:");
    scanf("%d",&r);
    while(!feof(fp1))
    {
        fread(&s,1,sizeof(s),fp1);
       if(feof(fp1))
        break;
       else if(s.roll==r)
        {
            temp=1;
            printf("enter the new roll number:");
            scanf("%d",&s.roll);
            printf("enter the new name:");
            scanf("%s",&s.name);
           fwrite(&s,1,sizeof(s),fp2);
        }
        else
            fwrite(&s,1,sizeof(s),fp2);
    }
    if(temp==0)
        printf("Invalid");
    else
        printf("Modified successfully");

    fclose(fp1);
    fclose(fp2);
        remove("sturolnnmemorthn1wrtstrufile.txt");
        rename("stud.txt","sturolnnmemorthn1wrtstrufile.txt");

}
