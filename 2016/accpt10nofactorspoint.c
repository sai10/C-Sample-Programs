 #include<stdio.h>
 void main()
 {
     int n[10],i,j,*ptr;
     printf("Enter the 10 numbers:");
     for(i=0;i<10;i++)
        scanf("%d",&n[i]);
     ptr=&n[0];
     for(i=0;i<10;i++)
     {
         printf("\nFactors of %d \n",*(ptr+i));
         for(j=1;j<=*(ptr+i);j++)
         {
             if(*(ptr+i)%j==0)
                printf("\n%d",j);
         }
     }
 }

