// to print element by pointer 
#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int ele;
	ele=sizeof(a)/sizeof(a[0]);
	int (*p)[5];
	p=&a;
	int i;
	for(i=0;i<ele;i++)
//	printf("%d ",(*p)[i]);
	printf("%d ",p[0][i]);
	printf("\n");
}
