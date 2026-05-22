// scan 5 only even elements
#include<stdio.h>
void main()
{

	int ele,i,a[5];
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)i		// scaning only even elements
		i++;
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");


}
