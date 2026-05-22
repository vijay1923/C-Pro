#include<stdio.h>
#include<stdlib.h>
#include<mcheck.h>	// Mtrace hedder file 
void main ()
{
	int *p;

	mtrace();	// to trace the memory leak 

	p=malloc(10);
	free(p);	// to free the dynamicaly allocated memory
	p=malloc(20);

}
