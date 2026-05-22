// to print string character by charactr

#include<stdio.h>
void print(const char *);
void main()
{
	char s[10];
	printf("Enter the string\n");
	scanf("%s",s);

	print(s);		// function call
	printf("\n");

}
void print(const char *p)
{
	if(*p)
	{
		printf("%c",*p);	// to print character
		print(p+1);		// recursive fun call
	}
}
