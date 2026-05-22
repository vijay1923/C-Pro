#include<stdio.h>
void main()
{
	int ele,i,a[10];

	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elments\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

}
