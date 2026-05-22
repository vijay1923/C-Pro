// macro without a body
#include<stdio.h>

#define op	// to define op macreo

#undef op	// to undefine op macro

#ifndef op	// to check the op macro is defined or not
void main()
{
	printf("In mian 1..\n");
}
#else
void main()
{
	printf("In main 2..\n");
}
#endif
