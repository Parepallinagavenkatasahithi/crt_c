#include <stdio.h>
main()
{
 int age;
 char gen,ms;
 char na[50];
 printf ("enter your name:");
 fflush(stdin);
 scanf ("%[^\n]",&na);
 printf ("enter your age:");
 scanf ("%d",&age);
 printf ("enter your gender(M/F):");
 fflush (stdin);
 scanf ("%c",&gen);
 printf ("enter your marital status(M/U):");
 fflush (stdin);
 scanf ("%c",&ms);
 printf ("\nName:%s",na);
 printf ("\nage:%d",age);
 printf ("\ngender:%c",gen);
 printf ("\nmarital status:%c",ms);
 getch ();
 printf ("\n");
 }
