// how to read file line by line 
#include<stdio.h>
void main()
{
FILE *p;
p=fopen("fgetc.c","r");
char s[50];
while(fgets(s,50,p))		// it will read file line by line 
printf("%s\n",s);

}
