#include <stdio.h>
main()
{
 int item1,item2,bill;
 item1=0;
 item2=0;
 bill=0;
 printf ("enter first item:");
 scanf ("%d",&item1);
 printf ("enter second item:");
 scanf ("%d",&item2);
 bill=item1+item2;
 printf ("total bill=%d",bill);
 getch();
 printf ("\n");
 }
