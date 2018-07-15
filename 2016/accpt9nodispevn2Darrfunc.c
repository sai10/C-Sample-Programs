#include<stdio.h>
void main()
{
    int i,j,n[3][3];
    printf("Enter 9 numbers:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
    printf("Even numbers are");
    even(n);
}
void even(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                if(n[i][j]%2==0 && n[i][j]!=0 && n[i][j]!=1)
                    printf("\t%d",n[i][j]);
            }
    }
}
