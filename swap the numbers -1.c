#include <stdio.h>
main()
{
 int a,b,temp;
 a=b=temp=0;
 printf ("enter value of A:");
 scanf ("%d",&a);
 printf ("enter value of B:");
 scanf ("%d",&b);
 //logic-1
 temp=a;
 a=b;
 b=temp;
 printf ("\nA is:%d",a);
 printf ("\nB is %d",b);
 getch();//waits for key from the keyboard
 printf ("\n");
 }
