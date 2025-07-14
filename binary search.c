#include<stdio.h>
int search(int[],int,int,int);
int main()
{
int k[10],n,t,i,p;
printf("enter no.of elements to search:");
scanf("%d",&n);
printf("enter %d keys:",n);
for(i=1;i<=n;i++)
scanf("%d",&k[i]);
printf("enter element to search:");
scanf("%d",&t);
p=search(k,1,n,t);
if(p==-1)
printf("not found");
else
printf("found");
}
int search(int k[10],int low,int high,int key)
{
int m;
while(low<=high)
{
m=(low+high)/2;
if(key<k[m])
high=m-1;
else if(key>k[m])
low=m+1;
else
return m;



}
return -1;
}
