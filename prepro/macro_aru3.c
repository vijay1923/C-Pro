// design a macro for swapping of two numbers 
#include<stdio.h>
#define SWP(a,b,type ) {type t;\ 	// type beacause it will swap any type of data, in macro call yoy need to 
	             t=a;\
	             a=b;\
           	     b=t; }

void main()
{
	int i=5,j=10;
	printf("Before:i=%d j=%d\n",i,j);
	SWP(i,j,int ); 				
	printf("After:i=%d j=%d\n",i,j);
	printf("--------------------\n");
	float f1=2.5,f2=3.5;
	printf("Before:f1=%f f2=%f\n",f1,f2);
	SWP(f1,f2,float );
	printf("After:f1=%f f2=%f\n",f1,f2);

}
