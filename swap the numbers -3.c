#include <stdio.h>
main()
{
 int a,b;
 a=b=0;
 printf ("enter value of A:");
 scanf ("%d",&a);
 printf ("enter value of B:");
 scanf ("%d",&b);
 //logic-3
 a=a+b;
 b=a-b;
 a=a-b;
 printf ("\nA is:%d",a);
 printf ("\nB is:%d",b);
 getch(); //waits for a key from keyboard
 printf("\n");
 }
