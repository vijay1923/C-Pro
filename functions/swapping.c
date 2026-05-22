#include<stdio.h>
void swap(int *,int*);
void main ()
{
	int n1=10,n2=20;
	swap(&n1,&n2);
	printf("%d %d\n",n1,n2);
}
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
