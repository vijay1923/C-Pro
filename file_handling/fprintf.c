// fprintf 
#include<stdio.h>
void main()
{
FILE *p;
p=fopen("data","w");
int i=123456;
fprintf(p,"%d",i);
printf("i=%d\n",i);
}
