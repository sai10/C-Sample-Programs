  #include<stdio.h>
void main()
{
    float A,B,C,T,P,*p,*q,*r,*s; /*A,B,C are marks of 3 subjects
                     T=total marks
                     P=percentage*/
    printf("Enter the marks of subject 1:");
    scanf("%f",&A);
    printf("\nEnter the marks of subject 2:");
    scanf("%f",&B);
    printf("\nEnter the marks of subject 3:");
    scanf("%f",&C);
    p=&A;
    q=&B;
    r=&C;
    T=*p+*q+*r;
    s=&T;
    printf("\nTotal marks secured is %f",*s);
    P=*s/3;
    printf("\n Percentage secured is %f",P);
}


