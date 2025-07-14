#include<stdio.h>
void main()
{
int principal,time,rate,si;
printf("enter principal:");
scanf("%d",&principal);
printf("enter time");
scanf("%d",&time);
printf("enter rate:");
scanf("%d",&rate);
si=(principal*time*rate)/100;
printf("simple intrest=%d",si);
}
