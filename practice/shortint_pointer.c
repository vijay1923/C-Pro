#include<stdio.h>
void main()
{
	int a[2][5]={{49,50,51},{66,67,68,69}};
	short int *(p)[1];
	p[1][1]=(a[1][2]<<8| a[0][2]);
	printf("** %d\n",p[1][1]);
	char **q=a;
	printf("## %d\n",q[2][3]);
}
