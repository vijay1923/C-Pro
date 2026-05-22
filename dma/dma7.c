// dangling pointer 
#include<stdio.h>
#include<stdlib.h>
void main()
{

	int *p;

	p=malloc(10);
	printf("p=%p\n",p);

	free(p);
	p=0;			// after the freeing the memory make pointer 0
	printf("p=%p\n",p);

// NOTE: If you dont make pointer 0 a after freeing memory it stiil holds the same adress 


}
