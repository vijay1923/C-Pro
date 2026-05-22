/*
   edcba
    dcba
     cba
      ba
       a
 */


#include<stdio.h>
void main ()
{
	int i,j,row,k;
	printf("Enter the row\n");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{

		for(k=1;k<i;k++)
		{
			printf(" ");

		}
		for(j=row-i;j>=0;j--)
		{
			printf("%c",97+j);

		}
		printf("\n");
	}


}
