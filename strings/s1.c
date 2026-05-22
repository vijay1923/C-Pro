#include<stdio.h>
void main()
{
	char s[10];
	printf("Enter a string\n");
	//scanf("%s",s);
	scanf("%[^\n]",s);	// %[^\n] is for scanig the space 
	printf("s=%s\n",s);	// to print string 
	printf("s+1=%s",s+1);	//to print string from 2nd position

}
