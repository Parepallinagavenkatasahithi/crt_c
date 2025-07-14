#include <stdio.h>
main()
{
 int ba,all,ded,gs,ns,bonus;
 ba=all=ded=gs=ns=bonus=0;

 printf ("Enter Basic salary...:");
 scanf ("%d",&ba);
 printf ("Enter Allowance...:");
 scanf ("%d",&all);
 printf ("Enter Deductions...:");
 scanf ("%d",&ded);

 gs=ba+all;
 ns=gs-ded;
 bonus=ns*3;
 printf ("\nGross salary is:%d",gs);
 printf ("\nNet salary is:%d",ns);
 printf ("\nBonus is:%d\n",bonus);
 getch();
 }
