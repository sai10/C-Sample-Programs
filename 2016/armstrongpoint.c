#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d,s=0,temp,c=0,*p;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    temp=*p;
    while(*p!=0)
    {
        *p=*p/10;
        c++;
    }
    *p=temp;
    for(i=1;i<=c;i++)
    {
        d=*p%10;
        *p=*p/10;
        s=s+ceil(pow(d,c));
    }
    if(s==temp)
        printf("It is an Armstrong Number");
    else
        printf("It is not an Armstrong Number");
    return 0;

}


