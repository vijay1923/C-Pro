#include<stdio.h>
void main ()
{
	int i,j,n,row;
	char ch;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		for(j=0,n=1,ch='A';j<row;j++,n++,ch++)
		{

			if(i+j==4)
				printf("%d",n);
			else
				printf("%c",ch);

		}
		printf("\n");

	}



}
