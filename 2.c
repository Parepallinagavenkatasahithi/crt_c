#include<stdio.h>
#include<math.h>
void main()
{
float ci,principal,time,rate;
printf("enter principal:");
scanf("%f",&principal);
printf("enter time:");
scanf("%f",&time);
printf("enter rate:");
scanf("%f",&rate);
ci=principal*(((1+rate/100)*time));
printf("compound intrest:%f",ci);
}
