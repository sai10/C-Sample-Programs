  #include<stdio.h>
  void main()
  {
      int n;

      palindrome(&n);
  }
  void palindrome(int *p)
  {
      int d,i,s=0,temp;
      printf("Enter the number:");
      scanf("%d",p);
      temp=*p;
      while(*p!=0)
      {
          d=*p%10;
          s=s*10+d;
          *p=*p/10;
      }
      if(s==temp)
        printf("It is a palindrome");
      else
        printf("It is not a palindrome");
  }


