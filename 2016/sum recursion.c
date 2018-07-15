#include<stdio.h>
void main()
{
    int n,m,s;
    printf("Enter 2 numbers:");
    scanf("%d%d",&n,&m);
    s=add(n,m);
    printf("SUM:%d",s);
}
int add(int n,int m)
{
    int s;
    if(m==0)
        return 0;
    else
    {
        s=n+m*1;
        add(n,m-1);
    }
    return s;
}
