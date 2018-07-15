#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int p,q,r,bi[20];
    long num;
    printf("Enter binary number:");
    scanf("%ld",&num);
    p=0;
    while(num>0)
    {
        bi[p]=num%10;
        num=num/10;
        p++;
    }
    q=p-1;
    r=0;
    while(q>=0)
    {
        r=r+(bi[q]*pow(2,q));
        q--;
    }
    printf("\nDECIMAL NUMBER=%d",r);
    getch();
}
