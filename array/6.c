// to swapp adjustant elements


#include<stdio.h>
void main ()
{
	int ele,a[10],i,j,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

//	for(i=0;i<ele;i++)
//	printf("%d",a[i]);
//	printf("\n");

	for(i=0,j=1;i<ele-1;i=i+2,j=j+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	for(i=0;i<ele;i++)
	printf("%d",a[i]);
printf("\n");

}
