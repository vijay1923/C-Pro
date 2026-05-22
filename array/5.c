// scan a elements of an array and revese the emlements

#include<stdio.h>
void main ()
{
	int ele,a[10],i,t,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	
	//for(i=0;i<ele;i++)
	//printf("%d ",a[i]);
	//printf("\n");

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
