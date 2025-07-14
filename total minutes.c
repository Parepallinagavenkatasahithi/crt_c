#include <stdio.h>
main()
{
 int tot,h,m;
 tot=h=m=0;
 printf ("enter total minutes:");
 scanf ("%d",&tot);
 h=tot/60;
 m=tot%60;
 printf ("time is %d hrs and %d min..\n",h,m);
 getch();
 }
