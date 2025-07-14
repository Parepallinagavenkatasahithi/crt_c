/*program name:amount.c
 author:sahithi
 task:program calculate amt from inputted qty,rate*/
 #include <stdio.h>
 main()
{
 int qty;
 float rate,amt;
 qty=rate=amt=0;
 printf ("enter quantity:");
 scanf ("%d",&qty);
 printf ("enter rate:");
 scanf ("%f",&rate);
 amt=qty*rate;
 printf ("the bill of given data is:%.2f",amt);
 getch(); //waits a key from keyboard
  printf ("\n");
}
