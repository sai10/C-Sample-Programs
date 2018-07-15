#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a[20],b[20],i=0,j,k;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num>0)
    {
        a[i]=num%2;
        num=num/2;
        i++;
    }
    k=i-1;
    printf("\n\n");
    for(j=0;j<i;j++)
    {
        b[j]=a[k];
        printf("%d",b[j]);
        k--;
    }
    getch();
}
