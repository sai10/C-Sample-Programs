
 #include<stdio.h>
void main()
{
    int n,i,d,a[100],c=0,temp,*p,f;
    printf("Enter the number:");
    scanf("%d",&n);
    p=&n;
    temp=*p;
    while (*p!=0)
       {
           *p=*p/10;
           c++;
       }
       *p=temp;
   for(i=0;i<c;i++)
   {
       d=*p%10;
       a[i]=d;
       *p=*p/10;
   }

for(i=c-1;i>=0;i--)
{
    f=a[i];
      if(f==1)
        printf("\nONE");
      if(f==2)
        printf("\nTWO");
      if(f==3)
        printf("\nTHREE");
      if(f==4)
        printf("\nFOUR");
      if(f==5)
        printf("\nFIVE");
      if(f==6)
        printf("\nSIX");
      if(f==7)
        printf("\nSEVEN");
      if(f==8)
        printf("\nEIGHT");
      if(f==9)
        printf("\nNINE");
      if(f==0)
        printf("\nZERO");}
}
