#include<stdio.h>
void main()
{
int i=10;
char ch='A';
float f=23.5;

char s[50];

sprintf(s,"%d %c %g",i,ch,f);
printf("%s\n",s);

}
