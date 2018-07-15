#include<stdio.h>
#include<string.h>
void main()
{
    char ch[]="ABCDEFGH";
    int p,q,r,s;
    r=strlen(ch);
    for(p=0;p<r;p++)
    {
        for(q=0;q<r-p;q++)
            printf("%c ",ch[q]);
        for(q=0;q<(p*2);q++)
            printf("  ");
        s=r-p-1;
        for(q=s;q>=0;q--)
            printf("%c ",ch[q]);
        printf("\n");
    }
}


