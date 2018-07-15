#include<stdio.h>
void main()
{
    int n[3][3], m[3][3],i=0,j=0;
    printf("Enter the 9 elements for matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&n[i][j]);
    }
    printf("\nMATRIX is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d",n[i][j]);
    printf("\n");
    }
    printf("The  Triangle 1 of the Matrix is:\n\n");
    tri1(n);
    printf("The Triangle 2 of the matrix is:\n\n");
    tri2(n);
    printf("The triangle 3 of the matrix is:\n\n");
    tri3(n);
    printf("The triangle 4 of the matrix is:\n\n");
    tri4(n);
}
void tri1(int n[][3])
{
int i,j,z;
    for(i=0;i<3;i++)
    {
        for(z=i;z>0;z--)
        {
            printf(" ");
        }
        for(j=i;j<3;j++)
            printf("%d",n[i][j]);
        printf("\n");
    }
}
void tri2(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",n[i][j]);
    printf("\n");
    }
}
void tri3(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<(3-i);j++)
            printf("%d",n[i][j]);
        printf("\n");
    }
}
void tri4(int n[][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j>=2)
                printf("%d",n[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
