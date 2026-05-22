// dynaimic memory allocation for 5 int 
#include<stdio.h>
#include<stdlib.h>
void main ()
{
	int *p;
	p=(int *)malloc(20);
//	p=(int *)malloc(sizeof(int)*5);

	int i;
	for(i=0;i<5;i++)
	scanf("%d",&p[i]);

	for(i=0;i<5;i++)
	printf("%d ",p[i]);
	printf("\n");

}
