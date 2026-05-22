#include<stdio.h>
void main()
{
char s[25];
int len;
printf("Enter the string\n");
scanf("%s",s);

for(len=0;s[len];len++);
printf("length of string is=%d\n",len);

}
