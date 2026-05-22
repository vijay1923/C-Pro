// realloc fun ----> to reallocate the dynamic memory
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;

	p=malloc(20);
	printf("p=%p\n",p);
	p=realloc(p,40);
	printf("p=%p\n",p);

}
