// all union members have same address
#include<stdio.h>

union u
{
	int i;
	char ch;
	float f;
};
void main()
{

	union u v; 	// v is avariable of union u

	printf("%p\n",&v.i);
	printf("%p\n",&v.ch);
	printf("%p\n",&v.f);
}

