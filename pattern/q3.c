#include<stdio.h>
void main()
{
	int i,j,k,row;
	char ch= 'A';
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0;j<row-1-i;j++)
		{
			printf(" ");	
		}
		for(k=0;k<=i;k++)
		{
			if(i%2==0)
				printf("%c",ch+i);
			else
				printf("+");
		}
		printf("\n");

	}

}
