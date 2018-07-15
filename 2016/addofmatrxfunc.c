#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter 9 elements for Matrix A:");
    input(a);
    printf("Enter 9 elements for Matrix B:");
    input(b);
    printf("Sum of 2 Matrix is:\n\n");
    disp(a);
    printf("\n + \n\n");
    disp(b);
    printf("\n = \n\n");
    calculate(a,b,c);
    disp(c);
}
int input(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
}
int disp(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf(" %d",n[i][j]);
        printf("\n");
    }
}
int calculate(int a[][3],int b[][3],int c[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
}

