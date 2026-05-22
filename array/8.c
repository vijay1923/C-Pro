#include<stdio.h>
void main ()
{
	int i,j,ele,c,a[5];
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements\n");
	for(i=0,c=0;i<ele; )
	{
		scanf("%d",&a[i]);
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
		{
			i++;
			c++;
		}
	}
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");


printf("\ncount=%d\n",c);
}
