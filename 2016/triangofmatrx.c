#include<stdio.h>
void main()
{
    int n[3][3], m[3][3],i=0,j=0,k=0,l=0,z;
    printf("Enter the 9 elements for matrix 1:");
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
    printf("The Triangle 2 of the matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",n[i][j]);
    printf("\n");
    }
    printf("The triangle 3 of the matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<(3-i);j++)
            printf("%d",n[i][j]);
        printf("\n");
    }
    printf("The triangle 4 of the matrix is:\n\n");
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
