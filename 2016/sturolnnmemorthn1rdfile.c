 #include<stdio.h>
 void main()
 {
     FILE *fp;
     int roll;
     char name[30];
     fp=fopen("sturolnnmemorthn1wrtfile.txt","r");
     while(!feof(fp))
     {
         if(feof(fp))
            break;
         else
         {

             fscanf(fp,"%d\n%s\n",&roll,&name);
             printf("Roll=%d\n",roll);
             printf("Name=%s\n",name);
         }
     }

     fclose(fp);
 }
