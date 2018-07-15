 #include<stdio.h>
void main()
{
    char name[100],fname[100],rname[100];
    printf("Enter the sentence:");
    gets(name);
    disp(&name);
    }
void disp(char *q)
{
    char fname[100],rname[100];
    int i=0,c=0,j=0,k=0,l=0,p=0;
    if(i==0)
    {
        while(*(q+i)!=' ')
        {
            fname[j]=*(q+i);
            c++;
            j++;
            i++;
        }
    }
    fname[j]='\0';
        i=i+1;
    for(l=j-1;l>=0;l--)
                rname[p++]=*(q+l);
    rname[p++]=' ';
   while(*(q+i)!='\0')
        {
            c=0;
            while(*(q+i)!=' ' && *(q+i)!='\0')
            {
                fname[k]=*(q+i);
                c++;
                k++;
                i++;
            }
            fname[k]='\0';

            for(l=k-1;l>=0;l--)
                rname[p++]=fname[l];
            rname[p++]=' ';

            i++;
            if(*(q+i-1)=='\0')
                break;
            k=0;

        }
    rname[p]='\0';
    printf("Reverse=%s\n",rname);


}
