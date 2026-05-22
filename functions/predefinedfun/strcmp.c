#include<stdio.h>
#include<string.h>
void main()
{
	char s1[]="abcd",s2[]="ab";

	printf("%d\n",strcmp(s1,s2));		// +pos	// it will compare whole s1 and s2
	printf("%d\n",strncmp(s1,s2,2));	// zero	// it will compare s1 and only 2 bytes of s2
	printf("%d\n",strcmp(s2,s1));		// -neg // it will compare s2 with s1

}

