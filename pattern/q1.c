#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0,k=4;j<n,k>=1;j++)
		{
			printf("%d",k--);

		}

		printf("\n");

	}



}
