#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("Largest number is:");
    n1>n2?(n1>n3?printf("%d",n1):printf("%d",n3)):(n2>n3?printf("%d",n2):printf("%d",n3));
}
