#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;
	p=malloc(10);
	p=p-2;
	printf("%d\n",*p);

}
