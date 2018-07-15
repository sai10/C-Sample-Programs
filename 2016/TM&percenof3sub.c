  #include<stdio.h>
void main()
{
    float A,B,C,T,P; /*A,B,C are marks of 3 subjects
                     T=total marks
                     P=percentage*/
    printf("Enter the marks of subject 1");
    scanf("%f",&A);
    printf("\nEnter the marks of subject 2");
    scanf("%f",&B);
    printf("\nEnter the marks of subject 3");
    scanf("%f",&C);
    T=A+B+C;
    printf("\nTotal marks secured is %.2f",T);
    P=T/3;
    printf("\n Percentage secured is %.2f",P);
}
