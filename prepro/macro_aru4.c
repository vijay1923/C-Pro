// design a macro for find  biggest int within two int 
#include<stdio.h>
#define BIGINT(a,b) if(a>b)\
		    printf(#a" is bigger\n");\
		    else\
		    printf(#b" is bigger\n");
void main()
{
	int i=10,j=20;
	BIGINT(i,j);

}
