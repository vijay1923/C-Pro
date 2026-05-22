#include<stdio.h>
void main()
{
	int a[5],l,sl,i,j,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter 5 elements\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	if(a[0]>a[1]) // if 1st element is larger than second element
	{
		l=a[0];   // largest number will be 1 st ele
		sl=a[1]; // second largest will be 2 nd ele
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl && a[i]!=l)
		{
			sl=a[i];
		}
	}

	printf("SL=%d   l=%d\n",sl,l);
}
