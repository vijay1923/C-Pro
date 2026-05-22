#include<stdio.h>
#include<string.h>
void main ()
{
	char s[]="abcde",d[10],d1[10];

	printf("%s\n",strcpy(d,s));		// it will copy string as it is 
	printf("%s\n",strncpy(d1,s,2));		// it will copy only first 2 bytes


}
