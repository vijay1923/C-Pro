#include<stdio.h>

void fun( int i)
{
	i=i+1;
	printf("fun :%d\n",i);
}
void main()
{
	static int i=10;
	fun(i);
	printf("main :%d\n",i);
}
