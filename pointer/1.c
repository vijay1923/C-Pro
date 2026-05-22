#include<stdio.h>
void main()
{
	int i=10,j=20;
	int *p;

	p=&i;	// pointer pointing to i
	printf("i=%d *p=%d\n",i,*p);
	*p=100;
	printf("i=%d *p=%d\n",i,*p);

	p=&j;	// pointer ponting to j
	printf("j=%d *p=%d\n",j,*p);
	*p=200;   //modifying the j indirectly
	printf("j=%d *p=%d\n",j,*p);


}
