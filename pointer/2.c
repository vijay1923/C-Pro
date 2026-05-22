#include<stdio.h>
void main ()
{
float f=25.7;
int *i,pos;
i=(int *)&f;

for(pos=31;pos>=0;pos--)
printf("%d",*i>>pos&1);
printf("\n");



}






