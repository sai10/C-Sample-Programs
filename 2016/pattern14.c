 #include<stdio.h>
 void main()
 {
     int i,j;
     for(i=1;i<6;i++)
     {
         for(j=1;j<9;j++)
         {
             if(i==1 || i==5)
                printf("*");
            if(i==2 || i==3 || i==4)
            {
                if(j==1 || j==8)
                    printf("!");
                else
                    printf(" ");
            }
         }
      printf("\n");
 }
 }
