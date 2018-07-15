#include<stdio.h>
enum day{sun=1,mon,tue,wed,thur,fri,sat};
void main()
{
    enum day d;
    int n;
    printf("Enter a number between 1 and 7:");
    scanf("%d",&n);
    if(n==sun)
        printf("Sunday");
    if(n==mon)
        printf("Monday");
    if(n==tue)
        printf("Tuesday");
    if(n==wed)
        printf("Wednesday");
    if(n==thur)
        printf("Thursday");
    if(n==fri)
        printf("Friday");
    if(n==sat)
        printf("Saturday");
}
