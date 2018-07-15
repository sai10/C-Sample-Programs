#include<stdio.h>
#include<math.h>

int armstrong(int m)
{
    int c=0,s=0,d,i,temp;
    temp=m;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    m=temp;
    for(i=1;i<=c;i++)
    {
        d=m%10;
        m=m/10;
        s=s+pow(d,c);
    }
    return s;
}

void main()
{
    int n,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=armstrong(n);
    if(r==n)
        printf("It is an armstrong number");
    else
        printf("It is not an armstrong number");
}
