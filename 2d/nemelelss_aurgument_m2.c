// How to access nemeless variabls method 2
#include<stdio.h>
#include<stdarg.h>
int sum(char*,...);
void main()
{
	int i=10,j=20,k=30,l;

	l=sum("hello",i,j,0);
	printf("l=%d\n",l);

	l=sum("hai",i,j,k,0);
	printf("l=%d\n",l);
}
int sum(char* n,...)
{
	va_list v;
	int s,num;
	va_start(v,n);
	for(s=0;  ;)
	{
		num=va_arg(v,int);
		if(num==0)
			break;
		s=s+num;
	}
	return s;
}

