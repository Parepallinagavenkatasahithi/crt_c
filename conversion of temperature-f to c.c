#include <stdio.h>
main()
{
 float fh,c;
 fh=c=0;
 printf ("enter temperature in fahrenheit:");
 scanf ("%f",&fh);
 c=(fh-32)*5/9;
 printf ("temperature in celsius:%f\n",c);
 getch();
 }
