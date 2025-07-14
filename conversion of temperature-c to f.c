#include <stdio.h>
main()
{
 float c,fh;
 c=fh=0;
 printf ("enter temperature in celsius:");
 scanf ("%f",&c);
 fh=c*(9/5)+32;
 printf ("temperature in fahrenheit:%f\n",fh);
 getch();
 }
