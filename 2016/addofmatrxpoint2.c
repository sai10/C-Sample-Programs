 #include<stdio.h>
void main()
{
    int n[3][3],m[3][3],s[3][3],i,j,b,c,x=0,y=0,*p[3],*q[3],*t[3];
    printf("Enter 9 elements for matrix 1: ");
    for(i=0;i<3;i++)
    {p[i]=n[i],q[i]=m[i],t[i]=s[i];}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",*(p+i)+j);
    }
    printf("Enter 9 elements for matrix 2: ");
    for(b=0;b<3;b++)
    {
        for(c=0;c<3;c++)
            scanf("%d",*(q+b)+c);
    }
    printf("Matrix 1:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("\t%d",*(*(p+i)+j));
        printf("\n");
    }
    printf("Matrix 2:\n\n");
    for(b=0;b<3;b++)
    {
        for(c=0;c<3;c++)
            printf("\t%d",*(*(q+b)+c));
        printf("\n");
    }
    printf("Sum of Matrix 1 and Matrix 2 is:\n\n");
    for(i=0,b=0;i<3,b<3;i++,b++)
    {
        for(j=0,c=0;j<3,c<3;j++,c++)
            {
                *(*(t+x)+y)=*(*(p+i)+j)+*(*(q+b)+c);
                printf("\t%d",*(*(t+x)+y));
                y++;
            }
            x++;
            printf("\n");
    }

}
