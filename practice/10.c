#include<stdio.h>
void main()
{
	int i,j,k,a,n;
	char ch,ch1='I';
	printf("Enter the n value\n");
	scanf("%d",&n);

	for(i=0;i<n;i++,ch1--)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");

		}
		for(j=0,ch=ch1,a=3;j<n-i;j++,ch--)
		{   
			if(j%2==0)
				printf("%c ",ch);
			else
				printf("%d ",a++);


		}
		printf("\n");

	}



}
