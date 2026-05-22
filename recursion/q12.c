#include<stdio.h>
void func(void);
int main(void)
{
char c[30];
	printf("Enter text :\n");
	func();
	printf("\n");
	return 0;
}
void func(void)
{
	char c;
	if((c=getchar())!='\n')
	func();
	putchar(c);
}
