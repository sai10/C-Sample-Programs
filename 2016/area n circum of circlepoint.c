#include<stdio.h>
void main()
{
    float r,A,C,*p;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    p=&r;
    A=3.14*(*p)*(*p);
    printf("Area of the circle is %f",A);
    C=6.28*(*p);
    printf("\nCircumference of the circle is %f",C);
}


