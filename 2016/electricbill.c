#include<stdio.h>
#include<conio.h>
void main()
{
    int cno,pmr,cmr,cu;
    float total;
    char sec;
    char cname[10];
    printf("\n\tE L E C T R I C  B I L L");
    printf("\nEnter The Sector-");
    scanf("%c",&sec);
    printf("\nEnter Customer Name-");
    scanf("%s",cname);
    printf("\nEnter Previous Units-");
    scanf("%d",&pmr);
    printf("\nEnter Current Units-");
    scanf("%d",&cmr);
    cu=cmr-pmr;
    if(sec=='a')
    {
        if(cu>300)
            total=cu*2.00;
        if(cu>100&&cu<=200)
            total=cu*1.00;
        if(cu<=100)
            total=cu*0.50;
    }
    if(sec=='i')
    {
        if(cu>300)
            total=cu*4.00;
        if(cu>200&&cu<=300)
            total=cu*3.00;
        if(cu>100&&cu<=200)
            total=cu*2.00;
        if(cu<=100)
            total=cu*1.00;
    }
    if(sec=='d')
    {
        if(cu>300)
            total=cu*2.00;
        if(cu>200&&cu<=300)
            total=cu*1.50;
        if(cu>100&&cu<=200)
            total=cu*1.00;
        if(cu<=100)
            total=cu*0.50;
    }
    printf("\nCustomer Name   =%s",cname);
    printf("\nCustomer Number =%d",cno);
    printf("\nPrevious Units  =%d",pmr);
    printf("\nCurrent Units   =%d",cmr);
    printf("\nCategory        =%c",sec);
    printf("\nConsumed Bill   =%f",total);
    getch();
}
