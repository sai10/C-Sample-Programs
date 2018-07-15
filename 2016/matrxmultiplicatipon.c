#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,m,n,p,q;
    printf("\nEnter the order of matrix a:");
    scanf("%d%d",&m,&n);
    printf("\nEnter the order of matrix b:");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("\nMATRIX MULTIPLICATION IS NOT POSSIBLE\n");
    }
    else
    {
        printf("\nEnter the elements of Matrix a:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        printf("\nEnter the elements of Matrix b:");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
                scanf("%d",&b[i][j]);
        }
    printf("\nELEMENTS OF MATRIX a(%dX%d):\n\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("   %d",a[i][j]);
        printf("\n\n\n");
    }
    printf("\nELEMENTS OF MATRIX b(%dX%d):\n\n",p,q);
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
            printf("   %d",b[i][j]);
        printf("\n\n\n");
    }
    printf("\n\nAFTER MATRIX MULTIPLICATION the Matrix formed of order %d X %d is:\n\n",m,q);
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
           {
               c[i][j]=0;
              for(k=0;k<p;k++)
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
           }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            printf("   %d",c[i][j]);
        printf("\n\n\n");
    }
  }
    getch();
}

