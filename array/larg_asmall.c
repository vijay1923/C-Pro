#include<stdio.h>
void main ()
{
	int i,ele,L,S,a[5];
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	for(i=0,S=a[i],L=0;i<ele;i++)
	{ 
		if(a[i]<S)
		{
			S=a[i];
		}
		if(a[i]>L)
		{
			L=a[i];
		}
	}
	printf("Largest element : %d\n",L);
	printf("Smallest element : %d\n",S);
}
