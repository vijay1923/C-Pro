// typedefing of pointers 
#include<stdio.h>
typedef int * p; 	// p is the another name of int pointer data type 
void main()
{
	p q;		// q is the variable of int pointer data type 
	p **r;		// **r is a double pointer variable  of int pointer p
	int i=10;
	q=&i;
	printf("*q=%d\n",*q);

}
