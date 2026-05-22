// How to acces neme less variables 1st method  
#include<stdio.h>
#include<stdarg.h>
int sum(int ,...);
void main()
{
	int i=10,j=20,k=30,l;

	l=sum(2,i,j);
	printf("l=%d\n",l);

	l=sum(3,i,j,k);
	printf("l=%d\n",l);

}
int sum(int n,...)
{
	va_list v;		// creat va_list type variable 
	int i,num,s;
	va_start(v,n);		// 

	for(i=0,s=0;i<n;i++)
	{
		num=va_arg(v,int);
		s=s+num;
	}
	return s;
}
