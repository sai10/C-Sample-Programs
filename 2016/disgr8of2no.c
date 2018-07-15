#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater",a);
    if(b>a)
        printf("%d is greater",b);
}
