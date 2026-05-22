#include<stdio.h>
void main ()
{
	int i,j,row,k;
	char ch;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(k=0;k<i;k++)
			printf(" ");
	}
	for(j=row-i;j>0;j--)
	{
		printf("%c",101-j);

	}
	printf("\n");
}
