/*   The total distance travelled by vehicle in 't' seconds is given by distance = ut+1/2at2
     where 'u' and 'a' are the initial velocity (m/sec.) and acceleration (m/sec2).
     Write C program to find the distance travelled at regular intervals of time given
     the values of 'u' and 'a'. The program should provide the flexibility to the user
     to select his own time intervals and repeat the calculations for different values of 'u' and 'a'.
*/

#include <stdio.h>
#include <math.h>

void main()
{
int tim_intrval,i,time;
float accl, distance=0, velos;
printf("\n\n<===========PROGRAM FOR CALC TOTAL DISTANCE TRAVELED BY A VECHIAL===========>");
printf("\n\n\n\t\t\tNO OF TIME INTERVALS : ");
scanf("%d",&tim_intrval);

for(i = 1; i <= tim_intrval; i++)
{
        printf("\n\t\t\tAT T%d TIME(sec) : ",i);
        scanf("%d",&time);
        printf("\t\t\tVELOCITY AT %d sec (m/sec) : ",time);
        scanf("%f",&velos);
        printf("\t\t\tACCLERATION AT %d sec (m/sec^2): ",time);
        scanf("%f",&accl);
        distance += (velos*time + (accl*pow(time,2))/2);
}

printf("\n\n\n\tTOTAL DISTANCE TRAVELLED BY VEHICLE IN %d INTERVALS OF TIME : %.2f m\n\n",tim_intrval,distance);
getch();
}

