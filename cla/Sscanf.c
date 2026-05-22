#include<stdio.h>
void main()
{
char s[]="10 A 23.5";

int i;
char ch;
float f;

sscanf(s,"%d %c %f",&i,&ch,&f);
printf("i=%d\n",i);
printf("ch=%c\n",ch);
printf("f=%g\n",f);





}
