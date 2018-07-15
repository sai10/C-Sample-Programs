 #include<stdio.h>
 #define PI 3.14
 void main()
 {
     int r,area,perimeter;
     printf("\n\nEnter the radius of circle:");
     scanf("%d",&r);
     find(r,&area,&perimeter);
     printf("\n\narea of the circle=%d\n\nperimeter of the circle=%d\n\n",area,perimeter);
 }
 void find(int r,int *a,int *p)
 {
     *a=r*r*PI ;
     *p=PI*2*r;
 }

