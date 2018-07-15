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
    int r,temp=0;
    fp=fopen("sturolnnmemorthn1wrtstrufile.txt","r");
    printf("Enter the roll number :");
    scanf("%d",&r);
    while(!feof(fp))
    {
        fread(&s,1,sizeof(s),fp);
        if(s.roll==r)
        {
            temp=1;
            printf("Roll Number found & name is %s",s.name);
        }
    }
    if(temp==0)
        printf("Roll number is not in the record");
    fclose(fp);
    getch();

}
