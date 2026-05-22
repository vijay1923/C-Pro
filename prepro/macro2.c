// macro replacement of dattypes
#include<stdio.h>
#define int char
#define char float 
#define float int 
void main()
{
	int i;		// char i --> float i --> int i
	char ch;	// float ch --> int ch --> char ch
	float f;	// int f --> char f ->> float f

	printf("%ld %ld %ld\n",sizeof(i),sizeof(ch),sizeof(f));

}
