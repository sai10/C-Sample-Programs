
#include<stdio.h>
void main()
{
    char name[100],fname[100];
    printf("Enter the sentence:");
    gets(name);
    disp(&name);

}
void disp(char *p)
{
    char fname[100];
    int i=0,c=0,j=0,k=0;
     if(i==0)
    {
        while(*(p+i)!=' ')
        {
            fname[j]=*(p+i);
            c++;
            j++;
            i++;
        }
    }
    fname[j]='\0';
    printf("%s=%d\n\n",fname,c);
        i=i+1;
   while(*(p+i)!='\0')
        {
            c=0;
            while(*(p+i)!=' ' && *(p+i)!='\0')
            {
                fname[k]=*(p+i);
                c++;
                k++;
                i++;
            }
            fname[k]='\0';
            printf("%s=%d\n\n",fname,c);
            i++;
            if(*(p+i-1)=='\0')
                break;
            k=0;
        }
}
