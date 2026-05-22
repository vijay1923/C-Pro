#include<stdio.h>
void main ()
{
	int i,j,k,row;
	printf("Enter the row\n");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=row-i;k>=0;k--)
		{
			printf("%c",101-k);

		}
		printf("\n");
	}



}
