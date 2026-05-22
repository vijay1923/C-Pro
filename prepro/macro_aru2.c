// design a macro for multiplication of two numbers 
#include<stdio.h>
int mul(int a,int b)
{
	return a*b;
}
#define MUL(a,b) (a)*(b)  // MUl(a,b) is macro name (a)*(b) is macro body
void main()
{
	int i=2;j=3;
	print("%d\n"mul(i,j));  	// fun call
	printf("%d\n",MUL(i,j));	// macro call
	////////////////////////
	printf("%d\n",mul(i+1,j+2));	// here first exp will solve
	printf("%d\n",MUL(i+1,j+2));	// here exp will not get solve it will call  as it is i+1,j+2

}
