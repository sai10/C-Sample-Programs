
#include<stdio.h>
void main()
{
    char name[100],fname[100],*ptr;
    int i=0,c=0,j=0,k=0;
    printf("Enter the sentence:");
    gets(name);
    ptr=name;
    if(i==0)
    {
        while(*(ptr+i)!=' ')
        {
            fname[j]=*(ptr+i);
            c++;
            j++;
            i++;
        }
    }
    fname[j]='\0';
    printf("%s=%d\n\n",fname,c);
        i=i+1;
   while(*(ptr+i)!='\0')
        {
            c=0;
            while(*(ptr+i)!=' ' && *(ptr+i)!='\0')
            {
                fname[k]=*(ptr+i);
                c++;
                k++;
                i++;
            }
            fname[k]='\0';
            printf("%s=%d\n\n",fname,c);
            i++;
            if(*(ptr+i-1)=='\0')
                break;
            k=0;
        }
}


