#include<stdio.h>
void main()
{
int eng,lac,bcme,ip,che;
float total,avg,per;
printf("enter marks of eng,lac,bcme,ip,bcme:");
scanf("%d%d%d%d%d",&eng,&lac,&bcme,&ip,&che);
total=eng+lac+bcme+ip+che;
avg=total/5.0;
per=(total/500.0)*100;
printf("total=%f",total);
printf("average=%f",avg);
printf("percentage=%f",per);
}
