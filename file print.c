#include<stdio.h>
void main()
{
FILE*p;
p=fopen("sahithi.txt","w");
fprintf(p,"hello world");
fclose(p);
}
