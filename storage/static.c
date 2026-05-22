#include<stdio.h>
void fun(int x)
{
         ++x;
	printf("fun : %d\n",x);
}
void main()
{
//	extern int i=10;
//	auto int i=10;
///	register int i=10;

	static int i=10;
	fun(i);
	printf("main : %d\n",i);
}
