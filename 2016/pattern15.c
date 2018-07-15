#include<stdio.h>
int main(){
    int i,j,k,c;

    for(i=0;i<5;i++)
    {
         for(k=4;k>i;k--)
             printf(" ");
         for(j=0;j<=i;j++)
         {
             c=fact(i)/(fact(j)*fact(i-j));
             printf("%d ",c);
         }
         printf("\n");
    }
    return 0;
}
int fact(int num)
{
int f=1;
int i=1;
    while(i<=num)
  {
         f=f*i;
         i++;
  }
  return f;
 }
