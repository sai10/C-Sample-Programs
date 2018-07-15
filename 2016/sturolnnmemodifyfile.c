#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    int roll ,r,temp=0;
    char name[30];
    fp1=fopen("sturolnnmemorthn1wrtfile.txt","r");
    fp2=fopen("stud.txt","w");
    printf("Enter the roll number to be modified:");
    scanf("%d",&r);
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s",&roll,&name);
        if(feof(fp1))
            break;
        else if(roll==r)
        {
            temp=1;
            printf("enter the new roll number:");
            scanf("%d",&roll);
            printf("enter the new name:");
            scanf("%s",&name);
            fprintf(fp2,"%d\n%s\n",roll,name);
        }
        else
            fprintf(fp2,"%d\n%s\n",roll,name);
    }
    if(temp==0)
        printf("Invalid");
    else
        printf("Modified successfully");

    fclose(fp1);
    fclose(fp2);
        remove("sturolnnmemorthn1wrtfile.txt");
        rename("stud.txt","sturolnnmemorthn1wrtfile.txt");

}
