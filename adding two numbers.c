/*Program name: Add2.c
  Author: sahithi
  task: this program adds two nos */

  #include <stdio.h>
  main()//program starting point
  {
      int no1,no2,Res;
      no1=0;
      no2=0;
      Res=0;

      printf("enter first no:");
      scanf("%d",&no1);

      printf("enter second no:");
      scanf("%d",&no2);

      Res=no1+no2;

      printf("the sum of two numbers is:%d",Res);
     getch();
      printf("\n");

    }
