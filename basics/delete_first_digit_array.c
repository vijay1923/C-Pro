#include<stdio.h>
void main ()
{
	int a[5],ele,i,t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;a[i];i++)
	{
		if(a[i]>=10)
		{
			for(t=10;a[i]/t>=10;t=t*10);
			a[i]=a[i]%t;
		
		}

	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
}
