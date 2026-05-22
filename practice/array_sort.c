#include<stdio.h>
void main ()
{
	int a[5],i,ele,t,j;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the array\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
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

		printf("%d ",a[i]);

	}

	printf("\n");
}
