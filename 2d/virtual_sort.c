// printing the array sorted orded 
#include<stdio.h>
void main()
{
	int a[5]={10,200,3,400,50};
	int *p[5]={a+2,a,a+4,a+1,a+3};

	int i;
	for(i=0;i<5;i++)
	printf("%d ",*p[i]);
	printf("\n");

}
