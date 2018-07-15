#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    int roll,r,temp=0;
    char name[30];
    fp=fopen("sturolnnmemorthn1wrtfile.txt","r");
    printf("Enter the roll number :");
    scanf("%d",&r);
    while(!feof(fp))
    {
        fscanf(fp,"%d%s",&roll,&name);
        if(roll==r)
        {
            temp=1;
            printf("Roll Number found & name is %s",name);
        }
    }
    if(temp==0)
        printf("Roll number is not in the record");
    fclose(fp);
    getch();

}
