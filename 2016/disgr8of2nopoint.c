 #include<stdio.h>
void main()
{
    int a,b,*p,*q;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    if(*p>*q)
        printf("%d is greater",*p);
    if(*q>*p)
        printf("%d is greater",*q);
}

