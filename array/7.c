// to print prime numbars from given array

#include<stdio.h>
void main ()
{

	int ele,a[10],i,j,c;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0,c=0;i<ele;i++)
	{


		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{	printf("%d ",a[i]);
			c++;
		}
	}
	printf("count=%d\n",c);
}
