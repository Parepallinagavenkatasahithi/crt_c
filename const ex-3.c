#include <stdio.h>
main()
{
 int lmr,pmr,tuc;
 float bill;
 const float UNIT=3.75;

 printf ("enter last month reading:");
 scanf ("%d",&lmr);
 printf ("enter present month reading:");
 scanf ("%d",&pmr);
 tuc=pmr-lmr;
 bill=tuc*UNIT;
 printf("\ntotal units consumed:%d",tuc);
 printf("\nbill amount:%.2f",bill);
 getch();
 printf("\n");
 }
