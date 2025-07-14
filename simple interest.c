#include <stdio.h>
main()
{
 int p,t,r,i;
 p=t=r=i=0;
 printf ("enter principal amount...:");
 scanf ("%d",&p);
 printf ("enter time in years...:");
 scanf ("%d",&t);
 printf ("enter rate of interest per annum...:");
 scanf ("%d",&r);
 i=(p*r*t)/100;
 printf ("interest for Rs.%d for %d years is %d",p,t,i);
 printf ("\n");
 getch();
 }
