// To reverse the array


#include<stdio.h>
void main ()
{
	int a[5],ele,i,t,j;
	int *p;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	p=a;
	for(i=0;i<ele;i++)
	printf("%d ",*(a+i));
	printf("\n");

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=p[i];
		p[i]=p[j];
		p[j]=t;
	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);

}
