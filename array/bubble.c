#include<stdio.h>
void main ()
{
	int i,j,ele,a[5],t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}

		}

	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);

}
