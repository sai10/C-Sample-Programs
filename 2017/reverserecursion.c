  #include<stdio.h>
#include<math.h>
int r=0,i=0;
int rev(int m,int a[])
{
    int i=0,d,temp,c;
    if(m==0)
        return 0;
    else
    {

        d=m%10;
       a[i]=d;
       i++;

        m=rev(m/10,a);
    }
    return a;
}
int count(int m)
{
    int c=0;
    if(m==0)
        return 0;
    else
    {
        m=count(m/10);
        c++;
    }
    return c;
}
int arr(int a[],int n)
{
    int d,b[100];
    if (d-1<0)
    return 0;
        else
    {
        i++;
        d=count(n);
        b[i]=a[d-1];
    arr(a,n/10);
    }
    return b;
}
void main()
{
    int *d,n,c,a[100];
    printf("Enter the Number:");
    scanf("%d",&n);

    printf("Reverse of the number is :");
c=rev(n,a);
d=arr(a,n);
printf("%d",*d);
}
