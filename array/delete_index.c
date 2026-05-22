#include<stdio.h>
void main ()
{
	int a[5],ele,i,n,k,j;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the position\n");
	scanf("%d",&n);
	printf("Enter the array \n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	printf("Before deleting\n");
	for(i=0;i<ele;i++)
	printf("%d",a[i]);
	printf("\n");

		for(i=0;i<ele;i++)
		{
			if(i==n)
			{
				for(j=i;j<ele;j++)
				{
				a[j]=a[j+1];

				}

			}

		}
	ele--;
	printf("After deleting\n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
printf("sizeof a=%ld\n",sizeof(a));
}
