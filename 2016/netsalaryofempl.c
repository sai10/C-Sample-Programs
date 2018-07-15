#include<stdio.h>
#include<conio.h>
void main()
{
    int basic,insure,gross,net;
    float da,hra,pf;
    printf("\n\n  ENTER BASIC SALARY : ");
    scanf("%d",&basic);
    da=basic*0.20;
    hra=basic*0.15;
    gross=basic+da+hra;
    insure=500;
    pf=basic*0.12;
    net=gross-(insure+pf);
    printf("\n\n\n\t                       (in Indian rupee)");
    printf("\n\n\n\tBASIC SALARY            : %d",basic);
    printf("\n\n\tDEARNESS ALLOWANCE      : %f",da);
    printf("\n\n\tHRA                     : %f",hra);
    printf("\n\n\tINSURANCE               : %d",insure);
    printf("\n\n\tPROVIDENT FUND          : %f",pf);
    printf("\n\n\tGROSS SALARY            : %d",gross);
    printf("\n\n\tNET SALARY              : %d  \n\n\n\n",net);
    getch();
}

