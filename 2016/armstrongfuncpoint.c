 #include<stdio.h>
 #include<math.h>
 void main()
 {
     int n;
     printf("Enter the number:");
     scanf("%d",&n);
     armstrong(&n);
 }
 void armstrong(int *p)
 {
     int s=0,c=0,d,i,temp;
     temp=*p;
     while(*p!=0)
     {
         *p=*p/10;
         c++;
     }
     *p=temp;
     while(*p!=0)
     {
         d=*p%10;
         s=s+ceil(pow(d,c));
         *p=*p/10;
     }
     if(s==temp)
        printf("It is an Armstrong Number");
     else
        printf("It is not an Armstrong Number");

 }

