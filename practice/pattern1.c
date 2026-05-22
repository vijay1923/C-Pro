#include<stdio.h>
void main()
{
	int i,j,k,row;
	char ch;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=0;i<row;ch=ch-2,i++)
	{
		for(j=0;j<i*2;j++)
		{
			printf(" ");
		}

		for(k=0,ch='A';k<row-i;k++,ch++)
		{
			printf("%c%d",ch,k+1+i);
	
		}

		printf("\n");
	}



}
