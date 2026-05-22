// swapping the two nubers by using pointers
#include<stdio.h>
void main ()
{
	int n1,n2,t,*p,*q;
	p=&n1;
	q=&n2;
	printf("Enter the n1 and n2\n");
	scanf("%d%d",p,q);
	printf("Before swapping n1=%d n2=%d\n",n1,n2);
	t=*p;
	*p=*q;
	*q=t;
	printf("After teh wapping n1=%d n2=%d\n",n1,n2);
}
