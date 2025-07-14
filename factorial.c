#include<stdio.h>
void main()
{
int i,n,sum=1;
printf("enter n value:");
scanf("%d",&n);
for(i++,sum=sum+i;i<=n;i++);
{
printf("sum=%d",sum);
}
}
