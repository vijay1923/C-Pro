// macro with aurgument or function 
#include<stdio.h>

int sum(int i,int j)
{
	return i+j;

}
#define SUM(i,j) i+j
void main()
{
	int a=10,b=20,r;
	r=sum(a,b);		// by fun 
	printf("r=%d\n",r);

	r=SUM(a,b);		// here r=SUM(i,j) id replaced with r=SUM(a,b)
	printf("r=%d\n",r);

}
