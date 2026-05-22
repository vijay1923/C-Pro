#include<stdio.h>
void main ()
{
	int a[5],i,j,k,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the array\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		for(k=i+1;k<ele;k++)
		{
			if(a[i]==a[k])
			{
				for(j=k;j<ele;j++)
				a[j]=a[j+1];
				i--;
				ele--;
			}
		}
	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
}
