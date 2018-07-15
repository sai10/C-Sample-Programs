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
    printf("In Matrix form it is:");
    printf("\n");
    disp(n);
    printf("In Transpose form it is:");
    trans(n);
}
void disp(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("\t%d",n[i][j]);
             printf("\n ");
    }
}
void trans(int n[][3])
{
int i,j;
    printf("\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
            printf("\t%d",n[i][j]);
        printf("\n");
    }

}
