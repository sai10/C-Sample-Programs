 #include<stdio.h>
int ten(int n)
{

    if(n==11)
        return 11;
    else

  {
   printf("\t%d",n);
   n=ten(n+1);}

}
void main()
{
    int n=1,r;
    r=ten(n);

}
