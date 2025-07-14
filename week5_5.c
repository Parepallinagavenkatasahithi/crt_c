#include<stdio.h>o
int main()
{
int year;
printf("enter a year:");
scanf("%d",&year);
//leap year
if(year%400==0)
{
printf("%d is leap year",year);
}
//not
//but
else if(year%100==0)
{
printf("%d is a leap year",year);
}
//all
else
{
printf("%d is not a leap year",year);
}
return 0;
}
