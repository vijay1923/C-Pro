#include<stdio.h>
void main()
{
	int i,j,k,num,row;
	char ch;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0;j<i*2;j++)
		{
			printf(" ");
		}

		for(k=0,ch='A',num=1;k<row-i;k++)
		{
			printf("%c%d",ch++,num++);
		}

		printf("\n");
	}



}
