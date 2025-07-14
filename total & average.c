#include <stdio.h>
main()
{
 int mat,phy,che;
 float tot,avg;
 mat=phy=che=tot=avg=0;
 printf ("enter marks for maths:");
 scanf ("%d",&mat);
 printf ("enter marks for physics:");
 scanf ("%d",&phy);
 printf ("enter marks for chemistry:");
 scanf ("%d",&che);
 tot=mat+phy+che;
 avg=tot/3;
 printf ("\ntotal is:%.0f",tot);
 printf ("\naverage is:%.2f",avg);
 getch();
 printf ("\n");
 }
