#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of rings:");
    scanf("%d",&n);
    move(n,'A','C','B');
}
void move(int n,char source,char dest,char spare)
{
    if(n==1)
        printf("\nMOVE FROM %c TO %c:",source,dest);
    else
    {
        move(n-1,source,spare,dest);
        move(1,source,dest,spare);
        move(n-1,spare,dest,source);
    }
}
