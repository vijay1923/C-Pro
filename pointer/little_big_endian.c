// to that they are work in littele endian or big endian

#include<stdio.h>
void main ()
{
	int i=10;
	char *p;
	p=(char *)&i;
	printf("%d\n",*p);
	if (*p==10)
		printf("Littele endian\n");
	else
		printf("Big endian\n");

}
