#include<stdio.h>
void main()
{
    int n=1,r;
    r=even(n);
}
int even(int n)
{
    int r;
    r=n%2;
    if(n==11)
        return 11;
    else
    {
        if(r==0)
            printf("\t       %d is even",n);
        if(r==1 && n!=1)
            printf("\n%d is odd",n);

         n=even(n+1);
    }

}
