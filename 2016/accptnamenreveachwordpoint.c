 #include<stdio.h>
void main()
{
    char name[100],fname[100],rname[100],*ptr;
    int i=0,c=0,j=0,k=0,l=0,p=0;
    printf("Enter the sentence:");
    gets(name);
    ptr=name;
    if(i==0)
    {
        while(*(ptr+i)!=' ' && *(ptr+i)!='\0')
        {
            fname[j]=*(ptr+i);
            c++;
            j++;
            i++;
        }
    }
    fname[j]='\0';
        i=i+1;
    for(l=j-1;l>=0;l--)
                rname[p++]=fname[l];
    rname[p++]=' ';
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

            for(l=k-1;l>=0;l--)
                rname[p++]=fname[l];
            rname[p++]=' ';

            i++;
            if(*(ptr+i-1)=='\0')
                break;
            k=0;

        }
    rname[p]='\0';
    printf("Reverse=%s\n",rname);

}
