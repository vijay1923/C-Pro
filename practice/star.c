#include<stdio.h>
void main ()
{
	int i,j,row,k;
	printf("Enter the number of row\n");
	scanf("%d",&row);
	for(i=0;i<=row;i++)
	{

		for(k=0;k<i;k++)
		{
			printf(" ");

		}
		for(j=row;j>=i;j--)
		{
			if(i%2!=0)
				printf(" *");
			else
				printf(" ");
		}

		printf("\n");
	}


}
