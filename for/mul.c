#include<stdio.h>
void main ()
{

int mul=1, num=1234,r,c=0,d=0,temp;

for( num=temp  ; temp ; temp=temp/10,c++ );
for( ; num; num=num/10)
{
r=num%10;
d++;
if (d==1|d==c)
mul=mul*r;
}
printf("mul=%d\n",mul);
}
