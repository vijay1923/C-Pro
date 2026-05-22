// to prove systen hardware is working on little endian or big endian 
#include<stdio.h>
union u
{
	int i;
	char ch;
	float f;
};
void main()
{
	union u v;
	v.i=10;
	if (v.ch==10)
	printf("Littele endian\n");
	else
	printf("Big endian\n");
}

