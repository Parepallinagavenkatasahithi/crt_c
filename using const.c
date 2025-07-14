#include <stdio.h>
main()
{
 int r;
 float a;
 const float PI=3.14;

 printf ("enter radius:");
 scanf ("%d",&r);
 a=PI*r*r;
 printf ("the area of circle is:%f",a);
 getch();
 printf ("\n");
 }
