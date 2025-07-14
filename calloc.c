#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,*ptr;
printf("enter no.of elements:");
scanf("%d",&n);
ptr=(int *)calloc(n,sizeof(int));
if(ptr==0)
{
printf("unable to allocate memory");
exit(0);
}
printf("enter elements:");
for(i=0;i<n;i++)
{
    scanf("%d",ptr+i);
}

printf("\nthe elements are:");
for(i=0;i<n;i++)
{
printf("\n%d",*(ptr+i));
}
printf("\nnow reallocation");
ptr=realloc(ptr,(n-2)*sizeof(int));
printf("\nelements after reallocation:");
for(i=0;i<n-2;i++)
{
printf("\n%d",*(ptr+i));
}
printf("\nnow deallocatin");
free(ptr);
printf("\nelements after deallocation:");
for(i=0;i<n-2;i++)
{
printf("\n%d",*(ptr+i));
}
}
