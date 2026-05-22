// scaning and printing the 2d array
#include<stdio.h>
void main()
{
	int a[2][5];
	int i,j,r,c;
	r=sizeof(a)/sizeof(a[0]);
	c=sizeof(a[0])/sizeof(a[0][0]);
	printf("Enter the 2d array\n");

	for(i=0;i<r;i++)		// for scaning
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}

	for(i=0;i<r;i++)		// for printing
	{
		for(j=0;j<c;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
