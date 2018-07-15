 #include<stdio.h>
int ten(int n)
{

    if(n==0)
        return 0;
    else

  {
   printf("\t%d",n);
   n=ten(n-1);}

}
void main()
{
    int n=10,r;
    r=ten(n);

}
