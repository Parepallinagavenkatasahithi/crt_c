#include <stdio.h>
main()
{
 int januarysales,febuarysales,totalsales;
 januarysales=0;
 febuarysales=0;
 totalsales=0;
 printf ("enter januarysales:");
 scanf ("%d",&januarysales);
 printf ("enter febuarysales:");
 scanf ("%d",&febuarysales);
 totalsales=januarysales+febuarysales;

 printf ("the sum of sales of two months is %d",totalsales);
 getch();
 printf ("\n");
 }
